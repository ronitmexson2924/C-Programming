// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int num;
//     scanf("%d",&num);
//     printf("Num is %d \n", num);
//     return 0;    
// }


//Programe for finding the birth year

// #include <stdio.h>

// int main()
// {
//     int current_age;
//     int current_year;
//     printf("Welcome to the Age mania\n");
//     printf("Enter your current age: ");
//     scanf("%d",&current_age);
//     printf("Enter current year: ");
//     scanf("%d",&current_year);
//     printf("The year you were born in was: %d\n",(current_year-current_age));
//     return 0;
// }

//Programme to find the area of the rectangle

// #include<stdio.h>

// int main()
// {
//     int length;
//     int breath;
//     printf("\nWelcome to area printing arena\n");
//     printf("Enter the Length of rectangle: ");
//     scanf("%d",&length);
//     printf("Enter the Breadth of rectangle: ");
//     scanf("%d",&breath);
//     printf("The area of rectangle is: %d sq. units",(length*breath));
// }

//Casting in C

// #include <stdio.h>

// int main()
// {
//     int num1,num2;
//     float result;

//     printf("Enter first number: ");
//     scanf("%d",&num1);
//     printf("Enter second number: ");
//     scanf("%d",&num2);

//     result = (double)num1/num2;

//     printf("The division of numbers is: %.2f\n",result);
// }

// #include <stdio.h>

// int main()
// {
//     int phy,chem,math;
//     double sum,average;
//     printf("Enter the Physics marks: ");
//     scanf("%d",&phy);
//     printf("Enter the Chemistry marks: ");
//     scanf("%d",&chem);
//     printf("Enter the Maths marks: ");
//     scanf("%d",&math);

//     sum = phy+chem+math;
//     average = sum/3;
//     printf("The average grade is: %.2lf \n",average);
// }

//Weather Station

// #include <stdio.h>

// int main()
// {
//     double temp_f,temp_c;
//     printf("Enter the temperature in celcius: ");
//     scanf("%lf",&temp_c);
//     temp_f = temp_c*1.8+32;
//     printf("The temperature is %.2lf farenheit\n",temp_f);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 10,b = 20,temp = 0;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("The value of a is %d and b is %d",a,b);
// }

//Excercises in C

//1. nth term of an Arithmetic Sequence
// #include <stdio.h>

// int main()
// {
//     int a,an,n,d;
//     printf("Enter the starting value: ");
//     scanf("%d",&a);
//     printf("Enter the common difference: ");
//     scanf("%d",&d);
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     an = a + ((n-1)*d);
//     printf("The value of nth term of the sequence is: %d \n",an);
//     return 0;
// }

//2. Sum of n terms
// #include <stdio.h>

// int main()
// {
//     int a,an,n,d,sn;
//     printf("Enter the starting value: ");
//     scanf("%d",&a);
//     printf("Enter the common difference: ");
//     scanf("%d",&d);
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     an = a + ((n-1)*d);
//     sn = (n*(a+an))/2;
//     printf("The sum of first %d terms is: %d",n,sn);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int wrkd_hrs,total_salary;

//     printf("Enter your salary per hour: ");
//     scanf("%d",&wrkd_hrs);
//     total_salary = wrkd_hrs*9*30;
//     printf("The total salary per month is: %d",total_salary);
// }


//Driving time calculator
// #include <stdio.h>

// int main()
// {
//     int distance, speed;
//     float time;

//     printf("Enter the distance between the two locations (Note: The distance should be in whole numbers): ");
//     scanf("%d", &distance);
//     printf("Enter your average speed: ");
//     scanf("%d", &speed);

//     time = (float)distance / speed;  // Changed to float for accurate division

//     printf("The time taken  is %.2f seconds\n", time); // Correct format for float
//     return 0;
// }


//Programme to convert seconds to hours, minutes and seconds
// #include <stdio.h>

// int main()
// {
//     int sec,hours,minutes,seconds;
//     printf("Enter the number of seconds: ");
//     scanf("%d",&sec);
//     hours = sec/3600;
//     minutes = (sec/60) - (hours*60);
//     seconds = (sec) - ((hours*3600)+(minutes*60));
//     printf("The total time is %d hours %d minutes and %d seconds.",hours,minutes,seconds);
//     return 0;
// }

//Removing the decimal part of an integer
// #include<stdio.h>

// int main()
// {
//     float num;
//     int num_1;

//     printf("Enter the decimal point numbrer: ");
//     scanf("%f",&num);
//     num_1 = (int)num;
//     printf("The integer nuymber is: %d",num_1);
//     return 0;
// }

//Sum of a triple digit number
// #include<stdio.h>

// int main()
// {
//     int num,first_digit,second_digit,third_digit,sum;
    
//     printf("Enter a triple digit number: ");
//     scanf("%d",&num);
//     first_digit = (num/100);
//     second_digit = (num/10)%10;
//     third_digit = (num%10);
//     sum = (first_digit + second_digit + third_digit);
//     printf("In the number %d first digit is: %d, second digit is: %d and third digit is: %d \nand the sum of these digits is: %d",num,first_digit,second_digit,third_digit,sum);
    
//     return 0;
// }

//Printing a reversed number
// #include <stdio.h>

// int main()
// {
//     int num,first_digit,second_digit,third_digit;
//     printf("Enter the 3-Digit number: ");
//     scanf("%d",&num);
//     first_digit = (num/100);
//     second_digit = (num/10)%10;
//     third_digit = (num%10);
//     printf("Orignal Number: %d and Reversed Number: %d%d%d",num,third_digit,second_digit,first_digit);
//     return 0;
// }

//Distance between two points
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int x1,x2,y1,y2,z1,z2,distance;
    
//     //inputing the values
//     printf("Enter the value of x1: ");
//     scanf("%d",&x1);
//     printf("Enter the value of y1: ");
//     scanf("%d",&y1);
//     printf("Enter the value of z1: ");
//     scanf("%d",&z1);
//     printf("Enter the value of x2: ");
//     scanf("%d",&x2);
//     printf("Enter the value of y2: ");
//     scanf("%d",&y2);
//     printf("Enter the value of z2: ");
//     scanf("%d",&z2);

//     //Calculations
//     distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));

//     //final printing
//     printf("The distance between (%d%d%d) and (%d%d%d) is distance: %d",x1,y1,z1,x2,y2,z2,distance);

//     return 0;
// }

//Efficient Calculation
// #include <stdio.h>

// int main()
// {
//     int x;
//     printf("Enter the value of x: ");
//     scanf("%d",&x);
//     printf("The value of x is %d and the rest are as follows: \n1. %d\n2. %d\n3. %d\n4. %d",x,(x*x),(x*x*x*x),(x*x*x*x*x*x),(x*x*x*x*x*x*x*x));
// }