#include<stdio.h>
//Calculator to Calculate Matrices Addition, Substraction, Multiplication and Transpose.
void add_matrices(int a[3][3],int b[3][3],int result[3][3]){
    for (int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
        result[i][j] = a[i][j] + b[i][j];
       }
    }
}
void substract_matrices(int a[3][3],int b[3][3],int result[3][3]){
    for (int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
        result[i][j] = a[i][j] - b[i][j];
       }
    }
}
void multiply_matrices(int a[3][3],int b[3][3],int result[3][3]){
    for (int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
        result[i][j]=0;
            for(int k = 0; k < 3; k++){  
              result[i][j] = a[i][k] * b[k][j];
            }
       }
    }
}
void transpose_matrix(int matrix[3][3],int result[3][3]){
    for (int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
        result[j][i] = matrix[i][j];
       }
    }
}
void print_matrix(int matrix[3][3]){
    for (int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
        printf("%d ",matrix[i][j]);
       }
      printf("\n");
    }
}
int main(){
    printf("# Calculator for Addition, Substraction, Multiplication & Transpose of 3x3 Matrix.\n");
    printf("# Consider your First matrix is \"A\" and Second matrix is \"B\".\n");
    int a[3][3], b[3][3], result[3][3], choice;
    printf("# Enter values of matrix A:-\n");
        for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("[%d][%d]:",i+1,j+1);
                scanf("%d",&a[i][j]);
       }
    }
    printf("\na[3][3]=\n");
        for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("\n\n# Enter values of matrix B:-\n");
        for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("[%d][%d]:",i+1,j+1);
                scanf("%d",&b[i][j]);
       }
    }
    printf("\nb[3][3]=\n");
        for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d ",b[i][j]);
       }
       printf("\n");
    }
    while(1){
    printf("\n\n Choose the operation: \n1.Addition \n2.Substraction \n3.Multiplication \n4.Transpose of A \n5.Transpose of B \n0.To Exit \n:" );
    scanf("%d",&choice);
        switch(choice){
            case 1:
            add_matrices(a, b, result);
            printf("Result of matrix A+B =\n");
            print_matrix(result);
            break;
            case 2:
            substract_matrices(a, b, result);
            printf("Result of matrix A-B =\n");
            print_matrix(result);
            break;
            case 3:
            multiply_matrices(a, b, result);
            printf("Result of matrix A*B =\n");
            print_matrix(result);
            break;
            case 4:
            transpose_matrix(a, result);
            printf("Transpose of matrix A =\n");
            print_matrix(result);
            break;
            case 5:
            transpose_matrix(b, result);
            printf("Transpose of matrix B =\n");
            print_matrix(result);
            break;
            case 0:
            printf("Exiting the Program!\n");
            return 0;
            default:
            printf("!!!Invalid Operation!!!\nPlease enter a valid Option.");
            continue;
        }
    }
    return 0;
}