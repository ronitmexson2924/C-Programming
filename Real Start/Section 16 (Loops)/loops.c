//Types of loops
//1. While loops
//2. Do-While Loop
//3. For Loop

//a) While Loop - while(condition) - {Loop Body}

//Printing astericks
// #include<stdio.h>

// int main()
// {
//     int count = 1,n;

//     printf("Enter the number of stars that you want to print: ");
//     scanf("%d",&n);

//     while (count<n)
//     {
//         printf("*\n");
//         count = count+1;
//     } 
//     return 0;  
// }


//Power calculator
// #include<stdio.h>

// int main()
// {
//     int num, pwr, result = 1,temp_pwr;
    
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("Enter the power: ");
//     scanf("%d",&pwr);
//     temp_pwr = pwr;
//     while(pwr>0){
//         result *= num;   
//         pwr--;     
//     }
//     printf("%d ^ %d = %d",num,temp_pwr,result); 
//     return 0;
// }


//Grade calculator
// #include<stdio.h>

// int main()
// {
//     int grades,total_sum = 0, grades_count = 0;
//     printf("Enter your grades or -1 to stop: ");
//     scanf("%d",&grades);
//     while(grades!= -1){
//         total_sum = grades+total_sum;
//         grades_count += 1; 
//         printf("Enter your grades or -1 to stop: ");
//         scanf("%d",&grades);
//         }
//     printf("You have entered %d grades.",grades_count);
//     printf("and your AVERAGE GRADE is %.2f",(float)(total_sum/grades_count));
//     return 0;
// }


//(b) Do-While Loop
//Entering a valid grade
// #include<stdio.h>
// int main()
// {
//     int grade;

//     printf("Enter your grade: ");
//     scanf("%d", &grade);
    
//     while (grade < 0 || grade > 100)
//     {
//         printf("You have entered a correct value.\n");
//         if (grade>100 || grade<0)
//         {
//             printf("You have entered wrong value. Try again.\n");
//         }
//     }
//     return 0;
// }


//(c)For Loop
//calculate power
// #include<stdio.h>
// int main()
// {
//     int num,pow,res = 1;
    
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("Enter the power: ");
//     scanf("%d",&pow);

//     for(int i = 1; i<=pow; i++){
//         res = res*num;
//         }
//     printf("%d ^ %d = %d",num,pow,res);
//     return 0;
// }

//Punishment
// #include<stdio.h>
// int main()
// {
//     int i,num;

//     printf("Enter the times that you want to execute: ");
//     scanf("%d", &num);

//     for (i = 1; i < num ; i++){
//         printf("I'm sorry for not listening my teacher.\nI will practise next time.\n");
//     }
    
//     return 0;

// }


//Printing right angled triangle
// #include<stdio.h>
// int main()
// {
//     int num;
    
//     printf("Enter a number: ");
//     scanf("%d",&num);

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i ; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }


//Number increasing right angled triangle
// #include<stdio.h>
// int main()
// {
//     int num;
    
//     printf("Enter a number: ");
//     scanf("%d",&num);

//     for (int i = 1; i<=num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

//Same number of printing as a right angled triangle
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     for (int i = 1; i<= num; i++)
//     {
//         for (int j = 1;j <= i ; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Multiplying a number to required power
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num,power;

//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("Enter the power: ");
//     scanf("%d",&power);


//     return 0;
// }

//Break and continue
//Break - It is used to break a code;
//Continue - It skips the current iteration and jumps to the next one;


//Milestone question - 1Million Dollar or 1 cent that doubles every day for 30 thirty days
// #include<stdio.h>
// int main()
// {
//     int num,million = 1000000;
//     float result = 0.01,act_res;
    
//     printf("What do you want to choose? \n1.) 1 Million Dollars \n2.) 1 cent that doubles every day for 30 days \nEnter your choice: ");
//     scanf("%d",&num);
//     if(num == 2)
//     {
//         for (int i = 1; i<=30; i++){
//             result = result * 2;  
//         }
//         act_res = result/100;
//         printf("The total sum of money is: %.2fM Dollars",act_res);
//     }
//     else 
//     {
//         printf("You lost your fortune.You lost %.2f$",(act_res - million));
//     }
//     return 0;
// }

