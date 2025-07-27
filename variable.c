/* Variables: Variables are the name of merory location which are used to store value or data
example: int a;
a is the variable name which is used to store integer data

Two types of varibales
1.local variable
2.global variable

1.Local variable: the variable which is define inside the block of code or function ,is called local variable.
                  we can not access local variable outside of that block of code or function.

2.Global varibale: the varibale which is define outside of block of code or function is called global varibale
                   we can access anywhere that variable                  


Datatype: Datatype define the type of data that hold by a varibale
example: int,float,string,char

*/


// #include<stdio.h>

// float name()
// {
//     printf("name");
//     return 10;
// }


// int main()
// {
//     printf("Hello word");
//     // printf("%d",name());
//     int a=10;
//     float b=20.5;
//     // char name="j";
//     printf("%d",a);
//     printf("%f",b);
//     // printf("%C",name);

// }
/*              chapter 2:intructions and opertors
A c program is a set of instructions just like a recepie - which contains instructions to prepare a particular dish.

type of instructions 
1.type declaration instruction 
2.arithmetic instruction 
3. control instruction 

1. type declaration instruction :
int a;
float b;

2.arithmetic instruction:
int i=(3*2)+1
+,-,*,%,is called operators
valu in which operation parfom is called operads

type conversion :
An arthmetic operation between 
int and int =int 
int and float=float 
float and float=float
example:
5/2=2 
5.0/2=2.5

note:
int a=3.5;
in this case 3.5 (float)will be denoted to 3 int because a is not able to store folat value;

float a=8;
a will store 8.0 
8:8.0(promotion to float)

operator precdence in C:
In C language simple mathematical rules BODMAS, no longer applies

the answer to the above question is provided by operator & associativity

operator precedence:
the following table is the operator priority in C
      priority        opreators
      1                    %
      2                     +,-
      3                      =

operators of higher priority are evalated first in the alsence of parenthesis
x*y/z=(x*y)/z

control instructions:
determines the flow of control in a program four type of control instruction in C are:
1.sequence control instruction
2.devision contol instruction 
3.loop control instruction

4.case control instructon



*/




// WAP to check even or odd number
#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is even");
    }
    else{
        printf("number is odd");
    }    
    
}
















