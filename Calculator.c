#include<stdio.h>

int add(int firstno, int secondno);
int sub(int firstno, int secondno);
int div(int firstno, int secondno);
int mul(int firstno, int secondno);


int main()
{
    int firstno;
    int secondno;
    int n = 0;
    printf("Enter first no :  ");
    scanf("%d",&firstno);
    printf("Enter second no : ");
    scanf("%d",&secondno);


while(n!=5)
{
    printf("Enter your choice: 1.Add 2.Subtract 3.Divide 4.Multiply 5.Exit");
    scanf("%d",&n);

    switch(n)
{
        case 1:
        {
            int a;
            a = add(firstno, secondno);
            printf("\n%d",a);
            break;
        }
        case 2:
        {
            int s;
            s = sub(firstno, secondno);
            printf("\n%d",s);
            break;
        }
        case 3:
        {
            int d;
            d = div(firstno, secondno);
            printf("\n%d",d);
            break;
        }
        case 4:
        {
            int m;
            m = mul(firstno, secondno);
            printf("\n%d",m);
            break;
        }
        case 5:
        {
            printf("Thanks for using calc...");
        }

}
}
}
int add(int firstno, int secondno)
{
    return firstno+secondno;
}
int sub(int firstno, int secondno)
{
    return firstno-secondno;
}
int div(int firstno, int secondno)
{
    return firstno/secondno;
}
int mul(int firstno, int secondno)
{
        return firstno*secondno;
}