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
        int sum = 0;
    for(int i = 5;i<=50;i++){
        sum += i;
    }
    printf("sum is :%d",sum);  
        
    return 0;

}

// #include<stdio.h>
// int main(){
    // for(int i =1;i<=5;i++){
//         if (i == 3){
//             break;
//         }
//         printf("%d\n",i);
//     }
//     printf("End");
//    return 0;
// }



// #include<stdio.h>
// void printHello();
// void printgoodbye();
// int main(){
//     printHello();
//     printgoodbye();

//     return 0;
// }

// void printHello(){
//     printf("Hello world:\n");
// }

// void printgoodbye(){
//     printf("good bye\n");
// }



#include<stdio.h>
void printnamaste();
void printbonjour();
int main(){
    printf("Enter i for india & f for french:");
    char country;
    scanf("%c",&country);
    if (country == 'i'){
        printnamaste();
    }else{
        printbonjour();
    }
    return 0;
}
void printnamaste(){
    printf("Hello from india namaste");
}

void printbonjour(){
    printf("Hello from french Bonjour");
}


#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);
int main() {
    int result = add(5, 3);
    printf("Sum = %d\n", result);  // Output: Sum = 8
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}



#include <stdio.h>

// void function – returns nothing
void greet(char *name) {
    printf("Hello, %s!\n", name);
}

// Function with multiple params
float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}
int main() {
    greet("Alice");                          // Hello, Alice!
    printf("Avg = %.2f\n", average(4, 8, 6)); // Avg = 6.00
    return 0;
}



// prototype (declaration) — tells compiler the signature
int add(int a, int b);
int main() {
    int result = add(3, 4);   // call
    printf("%d\n", result);    // 7
    return 0;
}
// definition — the actual body
int add(int a, int b) {
    return a + b;
}

void greet(char *name) {
    printf("Hello, %s!\n", name);
}
void print_line(int n) {
    for (int i = 0; i < n; i++)
        printf("-");
    printf("\n");
}
int main() {
    greet("Alice");   // Hello, Alice!
    print_line(10);  // ----------
    return 0;
}


// Function to Find Maximum Number
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
    printf("Maximum = %d", maximum(15, 30));

    return 0;
}

//Function to Check Even or Odd
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
    checkEvenOdd(17);

    return 0;
}



#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0;  // not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;  // divisible, not prime
    }
    return 1;  // prime
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
        if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}



#include <stdio.h>

long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);  // recursive call
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
        printf("Factorial of %d is %lld\n", num, factorial(num));
    return 0;
}


#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
        while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
        if (isPalindrome(str))
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}



#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Sum = %d", add(x, y));

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

void checkEvenOdd(int n)
{
    if(n % 2 == 0)
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

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Maximum = %d", maximum(x, y));

    return 0;
}



#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

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

#include<stdio.h>
void printhello();
void printnamaste();
int main(){
    printhello();
    printnamaste();
    return 0;
}
void printhello(){
    printf("Hello");
}
void printnamaste(){
    printf("namaste");
}


#include<stdio.h>
void printnamaste();
void printbonjour();
int main(){
    printf("Enter i for india & f for french:");
    char country;
    scanf("%c",&country);
    if (country == 'i'){
        printnamaste();
    }else{
        printbonjour();
    }
    return 0;

    
}

void printnamaste(){
    printf("Hello from india namaste");
}

void printbonjour(){
    printf("Hello from french Bonjour");
}

#include<stdio.h>
int sum(int a,int b);
int main(){
        int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("sum is: %d",s);

    return 0;
}

int sum(int x,int y){
    return x + y;
}


#include<stdio.h>
void printtable(int n);
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printtable(n);
}

void printtable(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d\n",n*i);
    }
}


#include<stdio.h>
void calculateprice(float value);
int main(){
    float value = 100.0;
    calculateprice(value);
    printf("value is %f",value);
    return 0;
}
void calculateprice(float value){
    value = value + (0.18 * value);
    printf("Final Price:%f\n",value);
}

#include<stdio.h>
#include<math.h>
int main(){
    int n = 4;
    printf("Sqare of n:%f",pow(n,2));
    return 0;
}



#include<stdio.h>
#include<math.h>
float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);
int main(){
    float a = 5.0;
    float b = 10.0;
    printf("Area of rectangle:%f",rectanglearea(a,b));
    int side = 4;
    printf("Area of square:%f",squarearea(side));


    return 0;
}
float squarearea(float side){
    return side * side;
}
float circlearea(float rad){
    return 3.14 * rad* rad;
}


float rectanglearea(float a,float b){
    return a * b;
}



#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int max = arr[0], min = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    return 0;
}



#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    len = strlen(str);
    if (str[len - 1] == '\n')
        len--;

        printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    
    printf("\n");
    return 0;
}


//Factorial using recursion
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0)
        printf("Factorial not defined for negative numbers.\n");
    else
        printf("Factorial of %d = %d\n", num, factorial(num));
    
    return 0;
}


// Fibonacci using recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n, i;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    
    printf("\n");
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

    printf("%d %d", x, y);

    return 0;
}



#include <stdio.h>

int countDigits(int n)
{
    int count = 0;

    while(n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

#pailandrome

#include <stdio.h>

int reverse(int n)
{
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}
int main()
{
    int num = 121;

    if(num == reverse(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}



#include <stdio.h>

int power(int base, int exp)
{
    // Logic here
}
int main()
{
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d%d", &base, &exp);

    printf("Answer = %d", power(base, exp));

    return 0;
}



#include <stdio.h>

int gcd(int a, int b)
{
    // Logic here
}
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("GCD = %d", gcd(a, b));

    return 0;
}


// lcm of number
#include <stdio.h>

int lcm(int a, int b)
{
    // Logic here
}
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("LCM = %d", lcm(a, b));

    return 0;
}



#include <stdio.h>

int main() {
    char ch;
     printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabet");
    else
        printf("Not an Alphabet");
    return 0;
}



#include <stdio.h>

int main() {
    char ch;
        printf("Enter character: ");
    scanf("%c", &ch);

    printf("ASCII = %d", ch);
    return 0;
}



#include <stdio.h>

int main() {
    char ch;
        printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabet");
    else
        printf("Not an Alphabet");
        return 0;
}



#include <stdio.h>

int main() {
    int n, i, j, prime;

    printf("Enter N: ");
    scanf("%d", &n);
        for (i = 2; i <= n; i++) {
        prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
                }

    if (prime)
            printf("%d ", i);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for (gcd = (a < b ? a : b); gcd >= 1; gcd--) {
        if (a % gcd == 0 && b % gcd == 0)
            break;
    }

    printf("GCD = %d", gcd);

    return 0;
}