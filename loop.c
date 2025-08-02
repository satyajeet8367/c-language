
//print 1 to 10 number
// #include<stdio.h>
// void main()
// {
//     int i=1;
//     while(i<=10)
//     {
    
//     printf("i is %d\n",i);
//      i++;
//     }
    
// }
//print 10 to 1 reverse number
// #include<stdio.h>
// void main(){
//     int i=10;
//     while(i>=1)
//     {
//     printf("%d\n",i);
//     i--;
// }


// }
// #include<stdio.h>
// int main(){
//     int=num;
//     printf("Enter your no");
//     scanf("%d",&i);
//     for(int i=1,i<=10,i++);
//     printf("")

    
// }


#include<stdio.h>
void main()
{
    int n;
    int i=1;
    printf("Please enter the Number : ");
    scanf("%d",&n);
    // while(i<=10)
    // {
    //     printf("%d\n",n*i);
    //     i=i+1;
    // }

    // for(i=1;i<=10;i=i+1)
    // {
    //     printf("%d\n",i*n);
    // }

    do
    {
        printf("%d\n",n*i);
        i=i+1;
    }while(i<=10);

}