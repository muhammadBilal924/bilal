#include<stdio.h>
int  main()
{
float c,r;
c=9.0;
r=7.0;
do
{
r=r+7.0/c;
c=c+2;
printf("Result is %f %f\n",r,c);
}
while(c<=99);

}
