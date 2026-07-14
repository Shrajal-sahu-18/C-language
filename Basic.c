// # include<stdio.h>
// int main(){
//     printf("Hello World");
//     return 0;
// }

// Varriable
// # include<stdio.h>
// int main(){
//     int age = 18;
//    char star = '*';
//    float pi = 3.14;

//    int a = 10;
//    int Final_price = 100;

//    return 0;


// }

// comment
/* multi line comment*/

// #include<stdio.h>
// int main(){
//     int age = 22;
//     printf("age is %d \n",age);
//     float pi = 3.14;
//     printf("value of pi %f \n",pi);
//     char star = '*';
//     printf("star is %c \n",star);
// }

// Input
// #include<stdio.h>
// int main() {
//     int age ;
//     printf("Enter age:");
//     scanf("%d",&age);
//     printf("Age is : %d \n",age);


// valid statement

// #include<stdio.h>
// int main(){
//     int a = 22;
//     int b = a;
//     int c = b * 6;
//     int d = 1,e;
//     int a,b,c;
//     a = b = c = 1;
//     int z= 1,g = 2;
//     return 0;
// }



//invaliad statement
// #include<stdio.h>
// int main(){
//     int oldage = 22;
//     int new_age = old_age * year;
//     int a =b =c = 4;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int b,c;
//     b=c=1;
//     int a = b * c;
//     int power = pow(b,c);
//     printf("%d \n",power);
//     return 0;

// }



// #include<stdio.h>
// int main (){
//     int isMonday = 0;
//     int isRaining = 1;
//     printf("%d \n", isMonday || isRaining);
// }




// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter number:");
//     scanf("%d",&number);
//     if(number >=0){
//         printf("positive\n");
//         if (number % 2 == 0){
//             printf("Even");
//         }else{
//             printf("odd");
//         }
//     } else{
//         printf("negative");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int day;
//     printf("Enter day(1-7)\n");
//     scanf("%d",&day);
//     switch (day){
//         case 1:printf("monday\n");
//              break;
//         case 2 : printf("tuesday\n");
//              break;
//         case 3 : printf("wedneday\n");
//              break;
//         case 4 : printf("thurday\n");
//              break;
//         case 5 : printf("friday\n");
//              break;
//         case 6 : printf("satday\n");
//              break;
//         case 7 : printf("sunday\n");
//              break;

        
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char day ;
//     printf("Entr day (1-7):");
//     scanf("%c",&day);
//     switch (day){
//         case 'm': printf("monday\n");
//              break;
//         case 't': printf("tuesday\n");
//              break;
//         case 'w': printf("wedenday\n");
//              break;
//         case 'T': printf("thurday\n");
//                  break;
//         case 'f': printf("friday\n");
//              break;
//         case 'S': printf("saturday\n");
//              break;
//         case 's': printf("sunday\n");
//              break;
//         default : printf("not a valid day ! \n");
//     }
// }

// nested if else
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter number:");
//     scanf("%d",&number);
//     if(number >=0){
//         printf("positive\n");
//         if (number % 2 == 0){
//             printf("Even");
//         }else{
//             printf("odd");
//         }
//     } else{
//         printf("negative");
//     }
//     return 0;
// }

// Ternery operator
// #include<stdio.h>
// int main (){
//     int marks;
//     printf("Enter marks(0-100):");
//     scanf("%d",&marks);
//     marks<= 30 ? printf("Fail"):printf("pass");
//     // if (marks >= 0 && marks <= 30){
//     //     printf("Fail \n");
//     // }
//     // else if(marks > 30 && marks <=100){
//     //     printf("Pass \n");
//     // }
//     // else{
//     //     printf("Wrong marks");
//     // }
//     return 0;

// }

// #include<stdio.h>
// int main() {
//     int marks;
//     printf("Enter marks(0-100):");
//     scanf("%d",&marks);
//     if (marks < 30) {
//         printf("C\n");
//     }
//     else if(marks >= 30 && marks <70) {
//         printf("B\n");
//     }
//     else if(marks>= 70 && marks < 90){
//         printf("A\n");
//     }
//     else{
//         printf("A+\n");
//     }
//     return 0;

// }


//loop control statement
// #include<stdio.h>
// int main(){
//     int i= 1;
//     while(i<=10){
//         printf("Hello world\n");
//         i++;
//     }

//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number:\n");
//     scanf("%d",&a);
//     // using while loop
//     // int i = 0;
//     // while(i <= a){
//     //     printf("%d\n",i);
//     //     i++;
//     // }
  //for(int i = 0;i<=a;i++){
//         printf("%d\n",i);
//     }
//  return 0;
//}



// do while loop
// #include<stdio.h>
// int main(){
//     int i = 1;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=5);
//     return 0;

// }




// #include<stdio.h>
// int main(){
//     int i = 5;
//     do{
//         printf("%d\n",i);
//         i--;
//     }while(i>=1);
//     return 0;

// }

// break statement
// #include<stdio.h>
// int main(){
//     for(int i =1;i<=5;i++){
//         if (i == 3){
//             break;
//         }
//         printf("%d\n",i);
//     }
//     printf("End");
// }

// #include<stdio.h>
// int main(){
//     int n;
//     for (;;){}
//     do{
//         printf("Enter number:");
//         scanf("%d",&n);
//         printf("user enter this number:%d\n",n);
//         if (n % 2 !=0) {
//             break;
//         }
//         printf("you enter even number\n");
        
//     } while(1);
//     printf("Odd number\n Thank you");
//     return 0;

// continue statement
// #include<stdio.h>
// int main(){
    
//     for (int i = 1; i<=5; i++){
//         if (i == 3){
//             continue;
//         }
//         printf("%d \n", i);
    
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i = 5;i<=50;i++){
//         if (i % 2 != 0){
//             printf("%d \n",i);
//         }
//     }
//     return 0;
// }



// function and recursion
// #include<stdio.h>
// void printHello();
// int main(){
//     printHello();

//     return 0;
// }

// void printHello(){
//     printf("hello world!");
// }


// Function definition
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int num1 = 10, num2 = 20;
    int result;
        // Function call
    result = add(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int main()
{
    printf("Sum = %d", add(10, 20));
    return 0;
}


#include <stdio.h>

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
int main()
{
    checkEvenOdd(15);
    return 0;
}



#include <stdio.h>

void prime(int n)
{
    int i;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not Prime");
            return;
        }
    }

    printf("Prime");
}
int main()
{
    prime(17);
    return 0;
}



#include <stdio.h>

int reverse(int n)
{
    int rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}
int main()
{
    printf("%d", reverse(1234));
    return 0;
}



#include <stdio.h>

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Maximum = %d", maximum(x, y));

    return 0;
}



#include <stdio.h>

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}

#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));

    return 0;
}



#include <stdio.h>

int square(int n)
{
    return n * n;
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square = %d", square(num));

    return 0;
}



#include <stdio.h>

int square(int n)
{
    return n * n;
}
int main()
{
    printf("%d", square(8));
    return 0;
}



#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}
int main()
{
    printf("%d", cube(4));
    return 0;
}



#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;

    swap(&x, &y);

    printf("x = %d\n", x);
    printf("y = %d", y);

    return 0;
}




#include <stdio.h>

void greet()
{
    printf("Welcome to C Programming");
}
int main()
{
    greet();
    return 0;
}




#include <stdio.h>

int countDigits(int n)
{
    int count = 0;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}




int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Digits = %d", countDigits(n));

    return 0;
}