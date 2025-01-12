//1. Check wether numbers are equal or not 
// #include<stdio.h>

// int main()
// {
//     int num1,num2;
    
//     printf("Enter first number: ");
//     scanf("%d",&num1);
//     printf("Enter second number: ");
//     scanf("%d",&num2);

//     if (num1 == num2)
//     {
//         printf("True");
//     }
//     else
//     {
//         printf("False");
//     }
// }


//2. Check if a number is double digit or triple digit
// #include<stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Handle negative numbers
//     if (num < 0) {
//         num = -num;
//     }

//     // Check for two-digit number
//     if (num >= 10 && num <= 99) {
//         printf("Two-digit number\n");
//     }
//     // Check for three-digit number
//     else if (num >= 100 && num <= 999) {
//         printf("Three-digit number\n");
//     }
//     // Other cases
//     else {
//         printf("This is neither a two-digit nor a three-digit number\n");
//     }

//     return 0;
// }


//3. Print absolute integer
// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d",&num);

//     if (num<0){
//         num = -num;
//     }
//     printf("%d",num);
//     return 0;
// }


//4. Quadrant of a point
// #include<stdio.h>

// int main()
// {
//     float x,y;

//     printf("Enter x-coordinate: ");
//     scanf("%f",&x);
//     printf("Enter y-coordinate: ");
//     scanf("%f",&y);

//     if (x>0 && y>0){
//         printf("First Quadrant");
//     }
//     else if (x<0 && y>0){
//         printf("Second Quadrant");
//     }
//     else if (x>0 && y<0){
//         printf("Third Quadrant");
//     }
//     else if (x<0 && y<0){
//         printf("Fourth Quadrant");
//     }
//     else if (x == 0 && y == 0){
//         printf("Origin");
//     }

//     return 0;
// }


//5. Month name and number
// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter month's number: ");
//     scanf("%d",&num);

//     switch (num){
//         case 1:
//             printf("January");
//             break;
//         case 2:
//             printf("February");
//             break;
//         case 3:
//             printf("March");
//             break;
//         case 4:
//             printf("April");
//             break;
//         case 5:
//             printf("May");
//             break;
//         case 6:
//             printf("June");
//             break;
//         case 7:
//             printf("July");
//             break;
//         case 8:
//             printf("August");
//             break;
//         case 9:
//             printf("September");
//             break;
//         case 10:
//             printf("October");
//             break;
//         case 11:
//             printf("November");
//             break;
//         case 12:
//             printf("December");
//             break;
//         default:
//             printf("Invalid value. Try again");
//     }
//     return 0;
// }


//6. Unique clock representation(HH : MM : SS)
// #include<stdio.h>

// int main(){
//     int tot_sec,hour,minutes,rem_sec;
    
//     printf("Enter seconds: ");
//     scanf("%d",&tot_sec);
    
//     hour = tot_sec/3600;
//     minutes = (tot_sec - (hour*3600))/60;
//     rem_sec = tot_sec - ((hour*3600) + (minutes*60));

//     if (hour<10 && minutes<10 && rem_sec<10)
//     {
//         printf("0%d : 0%d : 0%d",hour,minutes,rem_sec);
//     }
//     //1st case
//     else if (hour<10 && minutes<10 && rem_sec>=10)
//     {
//         printf("0%d : 0%d : %d",hour,minutes,rem_sec);
//     }
//     else if (hour<10 && minutes>=10 && rem_sec<10)
//     {
//         printf("0%d : %d : 0%d",hour,minutes,rem_sec);
//     }
//     else if (hour>=10 && minutes<10 && rem_sec<10)
//     {
//         printf("%d : 0%d : 0%d",hour,minutes,rem_sec);
//     }
//     //2nd Case
//     else if (hour<10 && minutes>=10 && rem_sec>=10)
//     {
//         printf("0%d : %d : %d",hour,minutes,rem_sec);
//     }
//     else if (hour>=10 && minutes<10 && rem_sec>=10)
//     {
//         printf("%d : 0%d : %d",hour,minutes,rem_sec);
//     }
//     else if (hour>=10 && minutes>=10 && rem_sec<10)
//     {
//         printf("%d : %d : 0%d",hour,minutes,rem_sec);
//     }
//     else {
//         printf("%d : %d : %d",hour,minutes,rem_sec);
//     }
//     return 0;
// }


//7. 3 numbers are divisible or not
// #include <stdio.h>

// int main()
// {
//     int a,b,c;

//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Enter third number: ");
//     scanf("%d",&c);
    

//     return 0;
// }


//8. Next date of calender
#include <stdio.h>

int main()
{
    int date,month,year;
    char months[12][12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    
    printf("Enter current date: ");
    scanf("%d",&date);
    printf("Enter current month's number: ");
    scanf("%d",&month);
    printf("Enter current year: ");
    scanf("%d",&year);

    
    
    return 0;
}