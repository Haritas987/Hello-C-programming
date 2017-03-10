#include<stdio.h>
#include<conio.h>

void main()
{
 int a[20][20],b[20][20];
 int i,j,r,c;
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

 printf("Additon of matrix's -->\n");
 for(i=1;i<=r;i++)
 {	for(j=1;j<=c;j++)
	{ 	
		printf("\t%d",a[i][j]+b[i][j]);
	}
    printf("\n");
 }
getch();
}