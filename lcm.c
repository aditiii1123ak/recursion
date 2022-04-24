#include<stdio.h>
#include<conio.h>

int lcm(int,int);
void main()

{
  int a,b,result;
  clrscr();
  printf("enter two numbers:");
  scanf("%d%d",&a,&b);
  result=lcm(a,b);	
  printf("The lcm of %d and %d is %d\n",a,b,result);
  getch();
}
 int lcm(int a,int b)
 {
 	static int common=1;
 	if(common %a==0&&common%b==0 )
 	{ 
 	 return common;
	 }
    common++;
    lcm(a,b);

    
    return common;
}
