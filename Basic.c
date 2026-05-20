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



#include<stdio.h>
int main (){
    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);
}




#include<stdio.h>
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    if(number >=0){
        printf("positive\n");
        if (number % 2 == 0){
            printf("Even");
        }else{
            printf("odd");
        }
    } else{
        printf("negative");
    }
    return 0;
}




#include<stdio.h>
int main(){
    int day;
    printf("Enter day(1-7)\n");
    scanf("%d",&day);
    switch (day){
        case 1:printf("monday\n");
             break;
        case 2 : printf("tuesday\n");
             break;
        case 3 : printf("wedneday\n");
             break;
        case 4 : printf("thurday\n");
             break;
        case 5 : printf("friday\n");
             break;
        case 6 : printf("satday\n");
             break;
        case 7 : printf("sunday\n");
             break;

        
    }
    return 0;
}