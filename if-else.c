 /*       chapter 3: conditonal insstructions 

Decision making instructions in C
1.if -else statement
2.switch statement

1.if-else
the syntax of an if-else statement inC looks like:

if (condition to be checked){
satement -if-condition-true;
}
else{
satement -if-condition -false;
}
code example;
int a=23;
if(a>18){
printf("you can drive\n");
}

Note that else block is not necessary but option 
relational operators are used to evaluate 
conditions (true or false) inside the if statements
some example of relational are :
==,>=,<=,<,>,!=

logical operators:
&&,|| are are thre logical operators in C these are read as "AND""OR"and""NOT"they ae used to provide logic to our C programs
*/
        //   paretic question
// check even odd no
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("please Enter your number:");
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("your number is even:");
//     }
//     else{
//         printf("your number is negtive:");
//     }
// }        

// ques2;check positive & negtive or zero
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("please Enter your number:");
//     scanf("%d",&n);
//     if(n>0)
//     {
//         printf("your number is positive:");
//     }
//     else
//     {
//         printf("your number is negtive:");
//     }
//     if(n==0)
//     {
//         printf("your number is zero:");
//     }
// }

// ques3;finde the maximum of two number
// #include<stdio.h>
// void main()
// { 
//     int a;
//     int b;
//     printf("please Enter your first number:");
//     scanf("%d",&a);
//     printf("please Enter your second number:");
//     scanf("%d",&b);
//     if(a>b)
//     {
//         printf("a is maximum is %d");
//     }
//     else
//     {
//         printf("b is maximum is %d");
//     }
// }

// ques4:find the maximum of three number
// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("Enter your first number:");
//     scanf("%d",&a);
//     printf("Enter your second number:");
//     scanf("%d",&b);
//     printf("Enter your thred number:");
//     scanf("%d",&c);
//     if(a>=b && b>=c)
    
//         printf("  a max %d",a);
    
//     else if(b>=c)
    
//         printf("b max & %d",b);
//     else
//         printf(" c max %d",c);
// }

//        ques 5     // check leap year
// #include<stdio.h>
// void main()
// {
//     int y;
//     printf("Enter year:");
//     scanf("%d",&y);
//     if((y%4==0 && y%100!=0)||y%400==0)
//     {
//         printf("leap year:");

//     }
//     else{
//         printf("not leap year");
//     }
// }            

// ques6; print 1 t0 6 number
// #include<stdio.h>
// void main()
// {
//      int n;
//     printf("Enter your number:");
//     scanf("%d",n);
//     for(int i=1,i<=n,i++){
    
//         printf("%d",i)
//     }
//
//   ques7    print natural even number
//  #include <stdio.h>
// void main()
// {
//     int n, i;
//     printf("Enter N: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i += 2)
//     {
//          printf("%d ", i);
//     }
        
// }

//     ques 8   print n natrual number
// #include <stdio.h>
// int main() 
// {
//     int n, i;
//     printf("Enter N: ");
//     scanf("%d", &n);
//     for (i = 2; i <= n; i += 2)
//     {
//         
    
//     }
        // 
// }

//    ques 9      print n natrual number sum:
// #include<stdio.h>
// int main()
// {
//         int n,sum=0;
//         printf("Please Enter your number:");
//         scanf("%d",&n);
//         for(int i=1;i<=n;i++){
//                 sum+=i;
//                 printf("sum is %d",i);
//         }
//         printf("sum is %d",sum);
// }

//        ques 10        digits of a number
// #include<stdio.h>
// int main()
// {
//         int n,digit ,count=0;
//         printf("Please Enter your number:");
//         scanf("%d",&n);
//         if(n==0)
//         {
//                 count=1;
//         }
//         else{
//                 if(n<0)
//                 n=-n;
//         while(n!=0)
//         {
//            n=n/10;
//            count++;
//         }
//         }
//         printf("digits are %d",count);
// }  

        //   ques 11 revers the n numbers
  #include<stdio.h>
  int  main()
  {
        int n,r,reverse=0;
        printf("please Eneter your number:");
        scanf("%d",&n);
       while(n>0){
        r=n%10;
        reverse=reverse*10 + r;
        n=n/10;
       }

        printf("%d",reverse);
       
}      
     