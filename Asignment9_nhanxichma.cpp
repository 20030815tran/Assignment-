#include<stdio.h>
 
int main()
{
    int a[10][10],b[10][10],result[10][10],m,n,p,q,i,j,k;
    
    //get the nuumber of rows/columns of first matrix
    printf("Enter rows and columns of first matrix:");
    scanf("%d%d",&m,&n);
    
    //get the nuumber of rows/columns of second matrix
    printf("Enter rows and columns of second matrix:");
    scanf("%d%d",&p,&q);
    
    //check if rows of A qual to columns of B
    if(n==p)
    {
        printf("\nEnter first matrix:\n");
        
        //fetch the first matrix data from user and save in array a[10][10] declared above
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                scanf("%d",&a[i][j]);
            }
        }
        
        printf("\nEnter second matrix:\n");
        
        //fetch the second matrix data from user and save in array b[10][10] 
        for(i=0;i<p;++i)
        {
            for(j=0;j<q;++j)
            {
                scanf("%d",&b[i][j]);
                
            }
        }
        
        printf("\nThe multiplied matrix result is:\n");
        
        //multiply the matrix and save it in result[][] array & print it
        for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
                 result[i][j]=0;
                for(k=0;k<n;++k)
                    result[i][j]=result[i][j]+(a[i][k]*b[k][j]);
                        printf("%d ",result[i][j]);
                       
            }
            
            printf("\n");
        }
    }
    else
    {
        printf("\n Matrix multiplication can't be done for these rows/columns");
    }
 
    return 0;
}
