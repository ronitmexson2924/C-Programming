//Basic grade programe
// #include <stdio.h>

// int main()
// {
//     int grade;
    
//     printf("Enter you grade(Pass/Fail): ");
//     scanf("%d",&grade);

//     if (grade>60)
//     {
//         printf("Congratulations, you have passed the test.");
//     }
//     else if (grade<=60)
//     {
//         printf("Sorry, you have failed");
//     }
//     else 
//     {
//         printf("You have entered wrog value. Try again.");
//     }
//     return 0;
// }

//Maximum number out of the two
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main()
// {
//     int num1,num2;
    
//     printf("Enter first number: ");
//     scanf("%d",&num1);
//     printf("Enter second number: ");
//     scanf("%d",&num2);

//     if (num1>num2)
//     {
//         printf("%d is greater than %d",num1,num2);
//     }
//     else 
//     {
//         printf("%d is greater than %d",num2,num1);
//     }
// }

//Check number is even or not
// #include <stdio.h>

// int main()
// {
//     int num;
    
//     printf("Enter a number: ");
//     scanf("%d",&num);

//     if (num%2 == 0)
//     {
//         printf("Even number spotted");
//     }
//     else
//     {
//         printf("Odd number spotted");
//     }
//     return 0;
// }

//Maximum among 3 numbers
// #include <stdio.h>

// int main()
// {
//     int a,b,c;
//     int max,min;
//     printf("Enter num1: ");
//     scanf("%d",&a);
//     printf("Enter num2: ");
//     scanf("%d",&b);
//     printf("Enter num3: ");
//     scanf("%d",&c);

//     max = a;
//     min = b;

//     if (a<b)
//     {
//         max = b;
//         min = a;
//     }
//     if (max<c)
//     {
//         max = c;
//     }
//     if (c<min)
//     {
//         min = c;
//     }

//     printf("Maximum = %d and Minimum  = %d",max,min);
//     return 0;
// }

//Programne for grade identification
// #include <stdio.h>

// int main ()
// {
//     int grade;
//     printf("Enter your grade: ");
//     scanf("%d",&grade);

//     if (grade>80)
//     {
//         printf("You havve passesd the exam");
//     }
//     if (grade<80)
//     {
//         if (grade>60)
//         {
//             printf("Still there is a chance of improvement");
//         }
//         else 
//         {
//             printf("Sorry you have failed the test");
//         }
//     }
//     return 0;
// }

//Grade programe using And and Or
// #include <stdio.h>

// int main()
// {
//     int grade,money;
//     printf("Enter your money and grade: ");
//     scanf("%d %d",&money,&grade);

//     if (money<50 && grade >90)
//     {
//         printf("Your are eligible");
//     }
//     else {
//         printf("You are not eligible");
//     }
// }

//Using Swith case
// #include <stdio.h>

// int main()
// {
//     char grade;

//     printf("Enter the grade(A-F): ");
//     scanf("%c",&grade);

//     switch(grade)
//     {
//         case 'A':
//             printf("Grade is between 90-100");
//             break;
//         case 'B':
//             printf("Grade is between 80-89");
//             break;
//         case 'C':
//             printf("Grade is between 70-79");
//             break;
//         case 'D':
//             printf("Grade is between 60-69");
//             break;
//         case 'E':
//             printf("Grade is between 50-59");
//             break;
//         case 'F':
//             printf("Grade is between 0-49");
//             break;
//         default:
//             printf("Error... Try again");
//             break;
//     }
// }

//Milestone - Intermediate Calculator
// #include <stdio.h>

// int main()
// {
//     int num1,num2;
//     int operator;
    
//     printf("Enter the first number: ");
//     scanf("%d",&num1);
//     printf("Enter the second number: ");
//     scanf("%d",&num2);
//     printf("Enter the operation: \n1.+ \n2.- \n3.* \n4.\\ \nEnter your choice: ");
//     scanf("%d",&operator);
    
//     switch(operator)
//     {
//         case 1:
//             printf("%d + %d = %d\n",num1,num2,num1+num2);
//             break;
//         case 2:
//             printf("%d - %d = %d\n",num1,num2,num1-num2);
//             break;
//         case 3:
//             printf("%d * %d = %d\n",num1,num2,num1*num2);
//             break;
//         case 4:
//             printf("%d / %d = %d\n",num1,num2,num1/num2);
//             break;
//         default:
//             printf("You have entered wrong value\n");
//             break;
//     }

// }

//Assesment 
//Write a program that reads from the user 2 values of an "integer" type. 
// The program should print "EQUAL" if both the values are equal. Otherwise, 
// the program should print "NOT EQUAL".

// #include<stdio.h>

// int main()
// {
//     int a,b;
    
//     printf("Enter first number: ");
//     scanf ("%d",&a);
//     printf("Enter second number: ");
//     scanf ("%d",&b);

//     if (a == b)
//     {
//         printf("Both the numbers are equal\n");
//     }
//     else{
//         printf("Both are not equal\n");
//     }
// }

// Write a program that reads from the user 3 values of an "integer" type. 
// The program should print "EQUAL" if all the values are equal. Otherwise, 
// the program should print "NOT EQUAL".
// Note: There's more than just 1 "correct" solution for this question.

// #include <stdio.h>

// int main()
// {
//     int a,b,c;
    
//     printf("Enter first number: ");
//     scanf ("%d",&a);
//     printf("Enter second number: ");
//     scanf ("%d",&b);
//     printf("Enter third number: ");
//     scanf ("%d",&c);

//     if (a == b)
//     {
//         if(b==c)
//         {
//             printf("The numbers are equal\n");
//         }
//     }
//     else
//     {
//         printf("They are not equal\n");
//     }
// }


// Write a program that reads from the user a "three-digit" integer value. 
// The program should print "ASCENDING" if the three digits of the number 
// are in ascending order (from left to right). If not, the program should 
// print "NOT ASCENDING".
// #include <stdio.h>

// int main()
// {
//     int a,unit_digit,ten_digit,hundred_digit;
    
//     printf("Enter a 3-Digit number: ");
//     scanf ("%d",&a);

//     unit_digit = a%10;
//     hundred_digit = a/100;
//     ten_digit = (a/10)%10;

//     if (hundred_digit<ten_digit)
//     {
//         if (ten_digit<unit_digit)
//         {
//             printf("Ascending");
//         }
        
//     }
//     else
//     {
//         printf("Not ascending");
//     }
// }

//Write a program that reads an input number from the user. 
//The program should print "1" if the value is positive, 
//"-1" if it's negative, and "0" if it equals to zero.

// #include<stdio.h>

// int main()
// {
//     int a;
    
//     printf("Enter a number: ");
//     scanf("%d",&a);

//     if (a>0){
//         printf("1\n");
//     }
//     else if (a<0)
//     {
//         printf("-1\n");
//     }
//     else
//     {
//         printf("0\n")
//     }
// }