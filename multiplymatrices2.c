#include<conio.h>
#include<stdio.h>
//Day001
//Code to Multiply 2 Matrices
void main()
{   
    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,sum=0;
    system("cls");

    printf("\nEnter First Matrice-->\n");
    printf("Enter Row and Column:\n");
    scanf("%d%d",&r1,&c1);

    printf("\nEnter Seccond Matrice-->\n");
    printf("Enter Row and Column:\n");
    scanf("%d%d",&r2,&c2);

    if(r1!=c2)
    {
        printf("\nMultiplication not possible");
    }

     printf("\nEnter Matrice entrys1:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    
    printf("\nEnter Matrice entrys2:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    printf("\n Matrice 1:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

     printf("\n Matrice 2:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<r1;k++)
            {
                c[i][j]=a[i][k]*b[k][j];
                sum=sum+c[i][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    printf("\n\n Matrice 3:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}