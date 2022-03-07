#include<stdio.h>

void total(int,int,int);
void percentage(int,int,int);
void main()
{
int a,b,c;
printf("ent marks of subject 1==");
scanf("%d",&a);

printf("\nent marks of subject 2==");
scanf("%d",&b);

printf("\nent marks of subject 3==");
scanf("%d",&c);

total(a,b,c);
percentage(a,b,c);
}
void total(int x,int y,int z)
{
 printf("\n%d %d %d total is= %d",x,y,z,x+y+z);
}

void percentage(int x,int y,int z)
{
 printf("\n%d %d %d percentage is= %d",x,y,z,(x+y+z)/3);
}
