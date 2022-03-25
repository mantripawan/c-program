#include<stdio.h>
int main()
{
	inta[10][10],B[10][10],C[10][10],p,q,m,n,i,j,;
	printf("Enter the order of matrix A(p*q)");
	scanf("%d%d",&p,&q,);
	printf("Enter the order of matrix B(m*n)");
	scanf("%d%D",&m,&n);
   
	 if(q!=m)
	{
	printf("matrix multiplication not possible");
	return 1;
        }
        
        printf("Enter matrix A")
        for(i=0;i<p;i++)
        {
        for(j=0;j<q;j++)
        {
        scanf("%d,&A[i][j]);
         }
        }
        printf(matrix A:\n");
        for(i=0;i<p;i++)
        {
        for(j=0;j<q;j++)
        {
		printf("\t\n%d",A[i][j]);
        }
      }
      return 0;
      }				
