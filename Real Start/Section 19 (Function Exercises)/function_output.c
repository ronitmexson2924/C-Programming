//1. Find area of rectangle
#include<stdio.h>
float area()
{   int area,length,breadth;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter breadth: ");
    scanf("%d",&breadth);
    area = length*breadth;
    return area;
}
int main()
{   float area_lb;
    area_lb = area();
    printf("The area of the rectangle is: %.3f",area_lb);
}


//2. Maximum of 2 digits
#include<stdio.h>
void max_min(int num1, int num2)
{
    if (num1>num2){
        printf("Maximum: %d\nMinimum: %d",num1,num2);
    }
    else{
        printf("Maximum: %d\nMinimum: %d",num2,num1);
    }
}
int main()
{
    int a,b;
    printf("Enter num1: ");
    scanf("%d",&a);
    printf("Enter num2: ");
    scanf("%d",&b);
    max_min(a,b);
    return 0;
}


//3. Calculate factorial
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void factorial(int num)
{
    int result = 1;
    for (int i=num; i>=1 ; i--)
    {
        result = result * i; 
    }
    printf("Answer: %d",result);
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    factorial(a);
}


//4. Check whether number is even or odd
#include<stdio.h>
void even(int num)
{
    if (num%2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    even(a);
} 


//5. Sequence using 9
#include<stdio.h>
void sequence(int num){
    for(int i=1; i<=num; i++){
        printf("9 ");
    }
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    sequence(a);
    return 0;
}


//6. Sequence of numbers
#include<stdio.h>
void sequence(int num)
{
    if(num<=9){
      for(int i=1; i<=num; i++){
        printf("%d ",i);
      }  
    }
    else{
       for(int i=1; i<=num; i++){
        printf("9 ");
      } 
    }
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    sequence(a);
    return 0;
}


//7. to_lower case using functions
#include<stdio.h>
char to_lower(char letter)
{
    if(letter >= 'A' && letter<= 'Z'){
        return letter - 'A' + 'a';
    }
    else return -1;
}
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    printf("Lower case of %c is: %c",a,to_lower(a));
    return 0;
}


//8. to_upper function
#include<stdio.h>
char to_upper(char letter){
    if(letter>='a' && letter<= 'z'){
        return letter - 'a' + 'A';
    }
    else{
        return -1;
    }
}
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    printf("Upper case of %c is: %c",a,to_upper(a));
    return 0;
}


//9. Chars to 3-Digit number
#include<stdio.h>
void digi_char(float num1, float num2, float num3){
    if(num1>=0 && num2<=9){
        if(num1>=0 && num2<=9){
            if(num1>=0 && num2<=9){
                printf("The digit is:%d%d%d",(int)num1,(int)num2,(int)num3);
            }
        }
    }
    else {
        printf("0");
    }
}
int main(){
    float a,b,c;
    printf("Enter numbers: ");
    scanf("%f%f%f",&a,&b,&c);
    digi_char(a,b,c);
    return 0;
}


//10. Sum of all divisors
#include<stdio.h>

void devisor(int num)
{
    int  sum_devisors = 0;
    for(int i = 1; i<=num ; i++){
        if(num%i == 0){
            sum_devisors = sum_devisors + i;
        }
    }
    printf("The sum of all devisors is: %d",sum_devisors - num);
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    devisor(a);
    return 0;
}