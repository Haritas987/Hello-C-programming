#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5][5],b[5][5],s[5][5];
 int i,j,r,c,k,sum=0;
 clrscr();
 again:

 printf("\n Enter the number of row      : ");
 scanf("%d",&r,&c);
 printf("\n Enter the number of coloums  :");
 scanf("%d",&c);

 if(r!=c)
 {
 printf("\n Additon can not be proceed. This is not square matrix. Please Try Again !!!");
 getch();
 goto again;
 }

 printf("\n\n Enter the Elements of first matrix -->");


 for(i=1;i<=r;i++)
 {	for(j=1;j<=c;j++)
	{ 	printf("\nElement at [%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	}
 }

 printf("\n Enter the Elements of second matrix -->");
 for(i=1;i<=r;i++)
 {	for(j=1;j<=c;j++)
	{ 	printf("\nElement at [%d][%d] : ",i,j);
		scanf("%d",&b[i][j]);
	}
	printf("\n");
 }


printf(" The firat matrix -->\n");
for(i=1;i<=r;i++)
 {	for(j=1;j<=c;j++)
	{
		printf("\t %d ",a[i][j]);
	}
    printf("\n");
 }

 printf("The  second Matrix -->\n");
for(i=1;i<=r;i++)
 {	for(j=1;j<=c;j++)
	{
		printf("\t%d",b[i][j]);
	}
	printf("\n");
 }

  printf("Multiplication of matrix's -->\n");

 for(i=1;i<=r;i++)
 {
	for(j=1;j<=3;j++)
	{
		sum=0;
		for(k=0;k<=3;k++)
		{
			sum=sum+a[i][k]*b[k][j];
		}
		s[i][j]=sum;
	}
 }

 for(i=1;i<=3;i++)
 {	for(j=1;j<=3;j++)
	{
		printf("%d\t",s[i][j] );
	}
	printf("\n");}

 getch();
}