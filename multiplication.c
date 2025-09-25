#include<stdio.h>
int main()
{
    int i,j,k,n,r1,c1,r2,c2;
    printf ("enter the number of rows and clomuns for matrix A: \n");
    scanf ("%d%d",&r1,&c1);
    printf ("enter number of rpw and cloumns for matrix B: \n");
    scanf ("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2];
    printf ("Enter element of matrix A: \n");
    for (i=0;i<=r1-1;i++)
    {
        for (j=0;j<=c1-1;j++)
        {
            scanf ("%d",&a[i][j]);
            printf (" %d ",a[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<=r2-1;i++)
    {
        for (j=0;j<=c2-1;j++)
        {
            scanf ("%d",&b[i][j]);
            printf (" %d ",b[i][j]);
        }
        printf ("\n");
    }
    if (c1==r2)
    {
        printf ("matrix multiplication is possible\n");
        int c[r1][c2];
        for (i=0;i<=r1-1;i++)
        {
            for (j=0;j<=c2-1;j++)
            c[r1][c2]=0;
            for(k=0;k<c1;k++)
            {
                c[r1][c2]=a[i][k]+b[k][j];
            }
        }
        printf ("matrix multiplication ans: \n");
        for (i=0;i<=r1-1;i++)
        {
            for(j=0;j<=c2-1;j++)
            {
                printf ("%d",c[i][j]);
            }
            printf ("\n");
        }
    }
    else 
    {
        printf ("matix multiplication not possible\n");
    }
    return 0;
}
