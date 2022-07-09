/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<stdio.h>//header file
 
int main()
{
    int i, j, rows, columns, a[10][10], Sum=0;//declaration of variable i,j,rows,coloumn,two dimensional array with array size 10 for row and 10 for column ,sum is initialized by zero 
    printf("Please Enter Number of rows and columns  :  ");//to display the number of rows and columns to be entered
    scanf("%d %d", &i, &j);//to get the user input ie for row and column
    
    printf("Please Enter the Matrix Row and Column Elements \n");//this is just a displaying comment
    for(rows = 0; rows < i; rows++)//this process is used for getting the matrix elements and so we have used nested for loop 
    {
        for(columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    //this process is used to add the sum of the column elements and so nested for loop is used
    for(rows = 0; rows < i; rows++)
    {
    
        for(columns = 0; columns < j; columns++)
        {
            Sum = Sum + a[columns][rows];
        }
        printf("The Sum of Column Elements in a Matrix =  %d \n", Sum );
    }
    
    return 0;//It means the program returns with value
}

// Report:My main idea is to print the matix and sum the individual coulumn in the Matrix
 





