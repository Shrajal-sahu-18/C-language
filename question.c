//Sum of two number
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b :");
//     scanf("%d",&b);
//     int sum = a+b;
//     printf("Sum of Two number : %d",sum);

// }

//Program for area of sqare
// #include<stdio.h>
// int main(){
//     int side;
//     printf("Enter side of sqare:");
//     scanf("%d",&side);
//     int sqare = side * side;
//     printf("Area of a sqare: %d",sqare);
//     return 0 ;

// }

// Area of circle
// #include<stdio.h>
// int main(){
//     float radius;
//     printf("Enter side:");
//     scanf("%f",&radius);
//     printf("Area of a circle : %f", 3.14 * radius * radius );
//     return 0;
// }

// Perimeter of rectangle
// #include<stdio.h>
// int main(){
//     int a , b;
//     printf("Enter length a:");
//     scanf("%d",&a);
//     printf("Enter width b:");
//     scanf("%d",&b);
//     printf("Perimeter of Rectangle : %d", (2 * (a+b)));
//     return 0;

// }


// Quebe of n number
#include<stdio.h>
int main(){
    int n ;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Quebe of n number; %d",n*n*n);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    int b,c;
    b=c=1;
    int a = pow(b,c);
    printf("%d \n", a);
    return 0;

}


#include<stdio.h>
#include<math.h>
int main() {
   printf("%d",8^8);
    return 0;
}




#include<stdio.h>
int main(){
    int issunday = 1;
    int issnowing = 1;
    printf("%d \n", issunday && issnowing );
    return 0;
}



#include<stdio.h>
int main (){
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    printf("%d \n",x>9 && x<100);
    return 0;
}


#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    printf("Enter number c:");
    scanf("%d",&c);
    float avg = (a+b+c)/3.0 ;
    printf("avarage of Three number %f \n",avg);
    return 0;
}


#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("avarage = %f",avg);
    return 0;
}


#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("%d",ch >= '0'&& ch <='9');
    return 0;
 
}


#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    int smallest = (a+b-abs(a-b))/2;
    printf("Smallest number: %d",smallest);
    return 0;
} 



#include<stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if (age>18){
        printf("adult\n");
        printf("they can vote\n");
        printf("they can vote also\n");
    }
    else{
        printf("not adult \n");
    }
    printf("thankyou");
    return 0;
}




#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if (age >= 18){
        printf("Adult \n");
    }
    else if (age >13 && age <18){
        printf("teenager \n");
    }
    else{
        printf("Child");
    }
}


#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Even Number");
    } else {
        printf("Odd Number");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0) {
        printf("Positive Number");
    } else if(num < 0) {
        printf("Negative Number");
    } else {
        printf("Zero");
    }

   

    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(op) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("You are an adult.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int number = 5;

    if (number % 2 == 0) {
        printf("Even number\n");
    }else{
        printf("Odd number\n");
    }
   

    return 0;
}



#include <stdio.h>

int main() {
    int marks = 75;

    if (marks >= 90) {
        printf("Grade A\n");
    } else if (marks >= 70) {
      printf("Grade B\n");
    } else if (marks >= 70) {
        printf("Grade B\n");
    } else if (marks >= 50) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int age = 25;
    int hasLicense = 1;

    if (age >= 18) {
        if (hasLicense) {
            printf("Can drive\n");
        } else {
            printf("License required\n");
        }
    }

    return 0;
}


#include <stdio.h>

int main() {
    int a = 10, b = 20;

    int max = (a > b) ? a : b;

    printf("Maximum = %d\n", max);

    return 0;
}



#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
        printf("Positive Number");
    else
        printf("Negative Number");

    return 0;
}



#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}



#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}



#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a >= b && a >= c)
        printf("Largest = %d\n", a);
    else if (b >= c)
        printf("Largest = %d\n", b);
    else
        printf("Largest = %d\n", c);


    return 0;
}



#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);


    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    

    return 0;
}

#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
        if (marks > 30){
        printf("Pass");
    } else{
        printf("Fail");
    }
    return 0;
    
}




#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
        scanf("%c",&ch);
    if (ch >='A' && ch <='Z'){
        printf("upper case letter\n");
    }
    else if(ch >='a' && ch <='z'){
        printf("lower case letter\n");
    }
    else{
        printf("Wrong English letter\n");
    }
    return 0;

}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);
//     int sum = 0;
//     int i = 1;
//     while(i<=n){
//         sum+=i;
    
//         i++;
//     }
//     printf("%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter number:");
//     scanf("%d",&n);
//     int sum = 0;
//     for(int i = 1,j = n;i<=n && j>=1; i++,j--){
//         sum+=i;
//         printf("%d\n",j);
//     }
//     // for(int i =1;i<=n;i++){
//     //     sum +=i;
//     // }
//     printf("sum is:%d\n",sum);

//     // for(int i = n;i>=1;i--){
//     //     printf("%d\n",i);
//     // }
//     return 0;
//}



// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter number:");
//     scanf("%d",&n);
//     for(int i =1;i<=10;i++){
//         printf("table of %d number:%d\n",n,n*i);
//     }
    
//     return 0;

// }


#include<stdio.h>
int main(){
    int n;
    do {
        printf("Enter number:");
        scanf("%d",&n);
        if(n % 7 == 0){
            break;
            
        }printf("Not a multiple of 7\n");
    }while(1);
    printf("Multiple of 7");
    return 0;
}

#include<stdio.h>
int main(){
    for (int i = 5;i <= 50;i++){
        if (i % 2 == 0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

#include<stdio.h>
int main(){
    for(int i = 5;i<=50;i++){
        if (i % 2 != 0){
            printf("%d \n",i);
        }
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int fact = 1;
    for (int i = 1;i<=n;i++){
        fact *=i;
    }
    printf("Factorial of %d is:%d",n,fact);
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);
//     for(int i = 10;i>=1;i--){
//         int k = n * i;
//         printf("%d\n",k);
//     }
//     return 0;
// }  


#include<stdio.h>
int main(){
        
    return 0;

}