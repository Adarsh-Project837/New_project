/* College admission management system - console application */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 1000
#define MAX_BATCHES 50
#define FILE_NAME "college_data.dat"

typedef struct {
	int id;
	char name[80], dob[16], phone[20], email[80], address[150];
	char course[60], batch[30];
	float fee, paid;
	char status[20];
} Student;

typedef struct {
	char name[30], course[60], startDate[16];
	int capacity, enrolled;
} Batch;

Student students[MAX_STUDENTS];
Batch batches[MAX_BATCHES];
int studentCount = 0, batchCount = 0, nextId = 1001;

void input(const char *prompt, char *value, size_t size) {
	printf("%s", prompt);
	if (fgets(value, (int)size, stdin)) value[strcspn(value, "\n")] = '\0';
}

int number(const char *prompt) {
	char line[40]; int value;
	for (;;) {
		input(prompt, line, sizeof(line));
		if (sscanf(line, "%d", &value) == 1) return value;
		puts("Enter a valid number.");
	}
}

float amount(const char *prompt) {
	char line[40]; float value;
	for (;;) {
		input(prompt, line, sizeof(line));
		if (sscanf(line, "%f", &value) == 1 && value >= 0) return value;
		puts("Enter a valid non-negative amount.");
	}
}

void save(void) {
	FILE *file = fopen(FILE_NAME, "wb");
	if (!file) { puts("Could not save data."); return; }
	fwrite(&studentCount, sizeof studentCount, 1, file);
	fwrite(&batchCount, sizeof batchCount, 1, file);
	fwrite(&nextId, sizeof nextId, 1, file);
	fwrite(students, sizeof(Student), studentCount, file);
	fwrite(batches, sizeof(Batch), batchCount, file);
	fclose(file);
}

void load(void) {
	FILE *file = fopen(FILE_NAME, "rb");
	if (!file) return;
	if (fread(&studentCount, sizeof studentCount, 1, file) != 1 ||
		fread(&batchCount, sizeof batchCount, 1, file) != 1 ||
		fread(&nextId, sizeof nextId, 1, file) != 1 ||
		studentCount < 0 || studentCount > MAX_STUDENTS ||
		batchCount < 0 || batchCount > MAX_BATCHES) {
		studentCount = batchCount = 0; nextId = 1001;
	} else {
		fread(students, sizeof(Student), studentCount, file);
		fread(batches, sizeof(Batch), batchCount, file);
	}
	fclose(file);
}

int batchIndex(const char *name) {
	for (int i = 0; i < batchCount; i++)
		if (strcmp(batches[i].name, name) == 0) return i;
	return -1;
}

void addBatch(void) {
	if (batchCount == MAX_BATCHES) { puts("Batch limit reached."); return; }
	Batch *b = &batches[batchCount];
	input("Batch name: ", b->name, sizeof b->name);
	if (!b->name[0] || batchIndex(b->name) >= 0) { puts("Invalid or duplicate batch."); return; }
	input("Course: ", b->course, sizeof b->course);
	input("Starting date (DD-MM-YYYY): ", b->startDate, sizeof b->startDate);
	b->capacity = number("Capacity: "); b->enrolled = 0;
	if (b->capacity < 1) { puts("Capacity must be positive."); return; }
	batchCount++; save(); puts("Batch created.");
}

void listBatches(void) {
	puts("\nBATCHES");
	printf("%-20s %-25s %-12s %s\n", "Name", "Course", "Start date", "Seats");
	for (int i = 0; i < batchCount; i++)
		printf("%-20s %-25s %-12s %d/%d\n", batches[i].name, batches[i].course,
			   batches[i].startDate, batches[i].enrolled, batches[i].capacity);
}

void admitStudent(void) {
	if (studentCount == MAX_STUDENTS) { puts("Student limit reached."); return; }
	Student *s = &students[studentCount]; char batch[30];
	input("Full name: ", s->name, sizeof s->name);
	input("Date of birth (DD-MM-YYYY): ", s->dob, sizeof s->dob);
	input("Phone: ", s->phone, sizeof s->phone);
	input("Email: ", s->email, sizeof s->email);
	input("Address: ", s->address, sizeof s->address);
	input("Batch name: ", batch, sizeof batch);
	int bi = batchIndex(batch);
	if (bi < 0 || batches[bi].enrolled >= batches[bi].capacity) {
		puts(bi < 0 ? "Batch not found." : "Batch is full."); return;
	}
	strcpy(s->batch, batches[bi].name); strcpy(s->course, batches[bi].course);
	s->fee = amount("Total fee: "); s->paid = amount("Initial payment: ");
	if (s->paid > s->fee) s->paid = s->fee;
	strcpy(s->status, "Active"); s->id = nextId++;
	studentCount++; batches[bi].enrolled++; save();
	printf("Admission successful. Student ID: %d\n", s->id);
}

void listStudents(void) {
	puts("\nSTUDENTS");
	printf("%-6s %-25s %-22s %-20s %-10s\n", "ID", "Name", "Course", "Batch", "Balance");
	for (int i = 0; i < studentCount; i++)
		printf("%-6d %-25s %-22s %-20s %.2f\n", students[i].id, students[i].name,
			   students[i].course, students[i].batch, students[i].fee - students[i].paid);
}

void searchStudent(void) {
	int id = number("Student ID: ");
	for (int i = 0; i < studentCount; i++) if (students[i].id == id) {
		Student *s = &students[i];
		printf("\nID: %d\nName: %s\nDOB: %s\nPhone: %s\nEmail: %s\nAddress: %s\nCourse: %s\nBatch: %s\nFees: %.2f / %.2f\nStatus: %s\n",
			   s->id, s->name, s->dob, s->phone, s->email, s->address, s->course,
			   s->batch, s->paid, s->fee, s->status); return;
	}
	puts("Student not found.");
}

void payment(void) {
	int id = number("Student ID: ");
	for (int i = 0; i < studentCount; i++) if (students[i].id == id) {
		float p = amount("Payment: ");
		students[i].paid += p; if (students[i].paid > students[i].fee) students[i].paid = students[i].fee;
		save(); printf("Remaining balance: %.2f\n", students[i].fee - students[i].paid); return;
	}
	puts("Student not found.");
}

int main(void) {
	load();
	for (;;) {
		puts("\n=== COLLEGE ADMISSION SYSTEM ===\n1. Create batch\n2. List batches\n3. Admit student\n4. List students\n5. Find student\n6. Record fee payment\n0. Exit");
		switch (number("Choice: ")) {
			case 1: addBatch(); break; case 2: listBatches(); break;
			case 3: admitStudent(); break; case 4: listStudents(); break;
			case 5: searchStudent(); break; case 6: payment(); break;
			case 0: save(); puts("Goodbye."); return 0;
			default: puts("Invalid choice.");
		}
	}
}
