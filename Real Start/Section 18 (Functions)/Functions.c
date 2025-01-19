//Functions are of 4 type: 
// 1. Which takes no parameters and returns nothing.
// 2. Which takes parameters and returns nothing.
// 3. Which takes no parameters and returns something.
// 4. Which takes parameters and returns something.

//Here is the first type
#include<stdio.h>
#include<stdlib.h>

void print_greeting()
{
    printf("Hello\n");
    printf("Welcome to the best course ever\n");
    printf("Good Lock!");
}

int main()
{
    print_greeting();
    return 0;
}


//Type 2 - Which takes parameters and returns nothing
#include<stdio.h>
void print_max_min(int num1, int num2)
{
    if (num1>num2){
        printf("%d is maximum.\n",num1);
        printf("%d is minimum.\n",num2);
    }
    else{
        printf("%d is maximum.\n",num2);
        printf("%d is minimum.\n",num1);
    }
}
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    print_max_min(a,b);
    return 0;
}


//Type 3 - receiver no parameter
#include<stdio.h>

int max_between_3()
{
    int num1,num2,num3;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);

    if (num1>num2){
        if(num1>num3){
            return num1;
        }
        else {
            return num3;
        }
    }
    else if (num2>num3){
        return num2;
    }
    else return num3;
}
int main()
{
    int max;
    max = max_between_3();
    printf("Maximum = %d",max);
    return 0;
}


//Type 4 - takes parameters and returns something.

// We are going to give you input 3 numbers and the 
// programme will give the average of the 3 grades

#include<stdio.h>

float average_grade(float num1, float num2, float num3){
    float average;
    average = ((num1+num2+num3)/3.0);
    return average;
}
int main(){
    float a, b, c;
    printf("Enter grades of first subject: ");
    scanf("%f",&a);
    printf("Enter grades of second subject: ");
    scanf("%f",&b);
    printf("Enter grades of third subject: ");
    scanf("%f",&c);
    printf("Average: %f\n", average_grade(a,b,c));
    
    return 0;
}