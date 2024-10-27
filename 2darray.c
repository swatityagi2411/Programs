  #include<stdio.h>
int main()
{
    int a[40][40],row,col,i,j;
    printf("Provide number of rows");
    scanf("%d",&row);
    printf("Provide number of cols");
    scanf("%d",&col);
    printf("You are about to provide input to array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {printf("Provide element at a[%d][%d] index  ",i,j);
        scanf("%d",&a[i][j]);}

    }
printf("Your Matrix is as");
    for(i=0;i<row;i++)
    {    printf("\n");
        for(j=0;j<col;j++)
        {
           if(i==j)
            
        printf("%d",a[i][j]);
        else
        printf(" ");

        }
        
        
    }
}