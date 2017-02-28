#include<dstdio.h>
#include<conio.h>

void main()
{
 int a[20][20],b[20][20],c[20][20],i,j,lim,lim1;
 clrscr();

 again:

 printf("\n Enter a limit of rows of matrix : ");
 scanf("%d",&lim);
 printf("\n Enter a limit of coloums of matrix : ");
 scanf("%d",&lim1);

////////////////////////////////////////////////////////////////////////////////

if(lim!=lim1)
{
printf("\n!!!The operaton be in only square matrix. Try again, !!!");
getch();
goto again;
}
else
printf("\n put the matrixes values");

///////////////////////////////////////////////////////////////////////////////////

 printf("\n\n First matrix ");

 for(i=1;i<=lim;i++)
 {
	for(j=1;j<=lim;j++)
	{
		printf("\n The value is position at [%d][%d] : ",i,j);
		scanf("%d",a[i][j]);
	}
  }
 for(i=1;i<=lim;i++)
 {
	for(j=1;j<=lim;j++)
	{
		printf("%d ",a[i][j]);

	}
 printf("\n");
 }









 printf("\n Second matrix ");

 for(i=1;i<=lim;i++)
 {
	for(j=1;j<=lim;j++)
	{
		printf("\n The value is position at [%d][%d] : ",i,j);
		scanf("%d",b[i][j]);
	}
 }


 for(i=1;i<=lim;i++)
 {
	for(j=1;j<=lim;j++)
	{
		printf(" %d ",b[i][j]);

	}
 printf("\n");
 }


getch();
}