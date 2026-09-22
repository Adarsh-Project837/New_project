// #include <stdio.h>
// void main()
// {
//     float price[3];

//     printf("Enter the Value of first item : ");
//     scanf("%f", &price[0]);

//     printf("Enter the Value of second item : ");
//     scanf("%f", &price[1]);

//     printf("Enter the Value of third item : ");
//     scanf("%f", &price[2]);

//     printf("Final price after gst is : \n");

//     printf("First item = %.2f\nSecond price = %.2f\nThird price = %.2f", price[0] + (price[0] * (0.18)), price[1] + (price[1] * (0.18)), price[2] + (price[2] * (0.18)));
// }

// #include <stdio.h>
// void main()
// {
//     int User_option_input;
//     printf("Hello, Which conversion you want to perform -->>\n");
//     printf("Press 1 for Degree celsius to farenhit\n");
//     printf("Press 2 for farenhiet to degree celsius\n");
//     printf("Enter the input here : ");
//     scanf("%d", &User_option_input);

//     while (1 == 1)
//     {
//         if (User_option_input == 1)
//         {
//             float Degree_value, farenhiet;
//             printf("Enter the value in Degree Celsius : ");
//             scanf("%f", &Degree_value);
//             farenhiet = (Degree_value * 1.8) + 32;
//             printf("%.2f degree celsius is equals to %.2f farenhiet", Degree_value, farenhiet);
//             break;
//         }
//         else if (User_option_input == 2)
//         {
//             float Farenhiet_value, degree;
//             printf("Enter the value in farenhiet : ");
//             scanf("%f", &Farenhiet_value);
//             degree = (Farenhiet_value - 32) * 5 / 9;
//             printf("%.2f farenhiet is equals to %.2f degree celsius", Farenhiet_value, degree);
//             break;
//         }
//         else
//         {
//             printf("Invalid Input. Try again...\n");
//             printf("Enter the input here : ");
//             scanf("%d", &User_option_input);
//         }
//     }
// }

// #include <stdio.h>
// void main()
// {
//     int User_option_input;
//     printf("Hello, Which conversion you want to perform -->>\n");
//     printf("Press 1 for Degree celsius to farenhit\n");
//     printf("Press 2 for farenhiet to degree celsius\n");
//     printf("Enter the input here : ");
//     scanf("%d", &User_option_input);

//     while (User_option_input != 1 || User_option_input != 2)
//     {
//     }

//     if (User_option_input == 1)
//     {
//         float Degree_value, farenhiet;
//         printf("Enter the value in Degree Celsius : ");
//         scanf("%f", &Degree_value);
//         farenhiet = (Degree_value * 1.8) + 32;
//         printf("%.2f degree celsius is equals to %.2f farenhiet", Degree_value, farenhiet);
//     }
//     else if (User_option_input == 2)
//     {
//         float Farenhiet_value, degree;
//         printf("Enter the value in farenhiet : ");
//         scanf("%f", &Farenhiet_value);
//         degree = (Farenhiet_value - 32) * 5 / 9;
//         printf("%.2f farenhiet is equals to %.2f degree celsius", Farenhiet_value, degree);
//     }
//     else
//     {
//         printf("Invalid Input");
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int a, b, c;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     // a = 45;
//     // b = 69;
//     c = (a + b);
//     printf("Sum of a and b is : %d", c);
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     char user_input;
//     printf("                                          --------------Welcome----------------\n\n\n");
//     printf("Here you will enter the first name of the day of the week and you will get the full name, So try this\n");

//     printf("Enter your value here : ");

//     scanf("%c", &user_input);

//     if (user_input == 's')
//     {
//         printf("Sunday");
//     }
//     else if (user_input == 'm')
//     {
//         printf("Monday");
//     }
//     else if (user_input == 't')
//     {
//         printf("Tuesday");
//     }
//     else if (user_input == 'w')
//     {
//         printf("Wednesday");
//     }
//     else if (user_input == 'h')
//     {
//         printf("Thursday");
//     }
//     else if (user_input == 'f')
//     {
//         printf("Friday");
//     }
//     else if (user_input == 'a')
//     {
//         printf("Saturday");
//     }
//     else
//     {
//         printf("You have entered the wrong input");
//     }
// }

// #include <stdio.h>

// int main()
// {
//     float celsius, fahrenheit;

//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);

//     fahrenheit = (celsius * 9 / 5) + 32;

//     printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct Student
// {
//     char name[50];
//     int roll_number;
//     float cgpa;
// };

// void main()
// {
//     char stu_name[50];
//     int stu_roll_number;
//     float stu_cgpa;

//     struct Student s1;

//     printf("Please Enter your details below =====>>>>>>\n\n");

//     printf("Enter Your Name : ");
//     fgets(stu_name, sizeof(stu_name), stdin);
//     // scanf("%49[^\n]", stu_name);

//     printf("Enter Your Roll Number : ");
//     scanf("%d", &stu_roll_number);

//     printf("Enter Your CGPA : ");
//     scanf("%f", &stu_cgpa);

//     strcpy(s1.name, stu_name);
//     s1.roll_number = stu_roll_number;
//     s1.cgpa = stu_cgpa;

//     printf("\n\n\nYour Name is : %s", s1.name);
//     printf("Your Roll Number is: %d\n", s1.roll_number);
//     printf("Your CGPA is: %.2f\n", s1.cgpa);
// }

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter Your Age : ");
//     scanf("%d", &age);

//     if (age >= 18)
//     {
//         char nationality;
//         printf("\n<===== Passed one criteria ====>\n");
//         printf("Are you an Indian [y/n] : ");
//         scanf(" %c", &nationality);

//         if (nationality == 'y')
//         {
//             char id;
//             printf("You have passed the second criteria\n");
//             printf("Now. Do You Have An Valid ID [y/n] : ");
//             scanf(" %c", &id);

//             if (id == 'y')
//             {
//                 printf("You have passed all the criterias and Now you can caste a vote.\n");
//             }
//             else
//             {
//                 printf("Sorry, You cannot caste a vote.\n");
//             }
//         }
//         else
//         {
//             printf("Sorry, You cannot caste a vote.\n");
//         }
//     }
//     else
//     {
//         printf("Sorry, You cannot caste a vote.\n");
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int year;

//     printf("Enter a year: ");
//     if (scanf("%d", &year) != 1 || year <= 0)
//     {
//         printf("Please enter a valid positive year.\n");
//         return 1;
//     }

//     /* Leap year rule: divisible by 400 OR (divisible by 4 and not by 100) */
//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//     {
//         printf("%d is a leap year.\n", year);
//     }
//     else
//     {
//         printf("%d is not a leap year.\n", year);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int n;

//     printf("Enter the value of N: ");
//     if (scanf("%d", &n) != 1 || n < 2)
//     {
//         printf("There are no prime numbers in this range.\n");
//         return 0;
//     }

//     printf("Prime numbers between 1 and %d:\n", n);
//     for (int i = 2; i <= n; i++)
//     {
//         int isPrime = 1;
//         for (int j = 2; j * j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int n;
//     long long t1 = 0, t2 = 1, nextTerm;

//     printf("Enter the number of terms: ");
//     if (scanf("%d", &n) != 1 || n <= 0)
//     {
//         printf("Please enter a positive integer greater than 0.\n");
//         return 1;
//     }

//     printf("Fibonacci Series (%d terms):\n", n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%lld", t1);
//         if (i < n)
//         {
//             printf(", ");
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int num, originalNum, remainder, result = 0;

//     printf("Enter a three-digit integer: ");
//     if (scanf("%d", &num) != 1)
//     {
//         printf("Invalid input.\n");
//         return 1;
//     }

//     if (num < 100 || num > 999)
//     {
//         printf("Please enter a valid three-digit positive integer.\n");
//         return 1;
//     }

//     originalNum = num;
//     while (originalNum != 0)
//     {
//         remainder = originalNum % 10;
//         result += remainder * remainder * remainder;
//         originalNum /= 10;
//     }

//     if (result == num)
//     {
//         printf("%d is an Armstrong number.\n", num);
//     }
//     else
//     {
//         printf("%d is not an Armstrong number.\n", num);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int choice;

//     do
//     {
//         printf("\n========== MENU ==========\n");
//         printf("1. Check Even or Odd\n");
//         printf("2. Check Prime\n");
//         printf("3. Find Factorial\n");
//         printf("4. Exit\n");
//         printf("==========================\n");
//         printf("Enter your choice (1-4): ");

//         if (scanf("%d", &choice) != 1)
//         {
//             printf("Invalid input. Terminating.\n");
//             break;
//         }

//         switch (choice)
//         {
//         case 1:
//         {
//             int num;
//             printf("Enter an integer: ");
//             scanf("%d", &num);
//             if (num % 2 == 0)
//             {
//                 printf("%d is Even.\n", num);
//             }
//             else
//             {
//                 printf("%d is Odd.\n", num);
//             }
//             break;
//         }
//         case 2:
//         {
//             int num, isPrime = 1;
//             printf("Enter an integer: ");
//             scanf("%d", &num);
//             if (num <= 1)
//             {
//                 isPrime = 0;
//             }
//             else
//             {
//                 for (int i = 2; i * i <= num; i++)
//                 {
//                     if (num % i == 0)
//                     {
//                         isPrime = 0;
//                         break;
//                     }
//                 }
//             }
//             if (isPrime)
//             {
//                 printf("%d is a Prime number.\n", num);
//             }
//             else
//             {
//                 printf("%d is not a Prime number.\n", num);
//             }
//             break;
//         }
//         case 3:
//         {
//             int n;
//             unsigned long long fact = 1;
//             printf("Enter a non-negative integer: ");
//             scanf("%d", &n);
//             if (n < 0)
//             {
//                 printf("Factorial is not defined for negative numbers.\n");
//             }
//             else
//             {
//                 for (int i = 1; i <= n; i++)
//                 {
//                     fact *= i;
//                 }
//                 printf("Factorial of %d = %llu\n", n, fact);
//             }
//             break;
//         }
//         case 4:
//             printf("Exiting program. Goodbye!\n");
//             break;

//         default:
//             printf("Invalid selection! Please enter a number between 1 and 4.\n");
//         }
//     } while (choice != 4);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int n;
//     unsigned long long fact = 1;

//     printf("Enter a non-negative integer: ");
//     if (scanf("%d", &n) != 1)
//     {
//         printf("Invalid input.\n");
//         return 1;
//     }

//     if (n < 0)
//     {
//         printf("Factorial is not defined for negative numbers.\n");
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             fact *= i;
//         }
//         printf("Factorial of %d = %llu\n", n, fact);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int num, isPrime = 1;

//     printf("Enter an integer: ");
//     if (scanf("%d", &num) != 1)
//     {
//         printf("Invalid input.\n");
//         return 1;
//     }

//     if (num <= 1)
//     {
//         isPrime = 0;
//     }
//     else
//     {
//         for (int i = 2; i * i <= num; i++)
//         {
//             if (num % i == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }
//     }

//     if (isPrime)
//     {
//         printf("%d is a prime number.\n", num);
//     }
//     else
//     {
//         printf("%d is not a prime number.\n", num);
//     }

//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     int n, i;

//     printf("Enter How many digits you wants to enter into the Array : ");
//     scanf("%d", &n);

//     int a[n], IsFound;

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int user_number;
//     printf("Enter the number you wants to search : ");
//     scanf("%d", &user_number);
//     IsFound = 1;

//     for (i = 0; i < n; i++)
//     {
//         if (a[i] == user_number)
//         {
//             IsFound = 1;
//         }
//         else
//         {
//             IsFound = 0;
//         }
//     }
//     if (IsFound)
//     {
//         printf("Number Found in the Array.\n");
//     }
//     else
//     {
//         printf("Number not found in the Array.\n");
//     }

//     printf("[");
//     for (i = 0; i < n; i++)
//     {

//         printf("%d", a[i]);
//         if (i < (n - 1))
//         {
//             printf(", ");
//         }
//     }
//     printf("]");
// }

#include <stdio.h>
void main()
{
    int n, i, sum;
    sum = 0;
    printf("Enter the length of the Array : ");
    scanf("%d", &n);

    int a[n];
    char char_values[] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth"};
    char char_values_two[] = {"Eleventh", "Twelth", "Thirteen", "Fourteenth", "Fifteenth", "Fifteenth", "Sixteenth", "Seventeenth", "Eighteenth", "Nineteenth", "Twenteeth"};

    printf("Now you will have to enter the values\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter the %s Values here : ", char_values[i]);
        scanf("%d", &a[i]);
    }

    printf("Calculating the Sum....\n\n");

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Sum of all the elements of the Array is = %d\n", sum);
}