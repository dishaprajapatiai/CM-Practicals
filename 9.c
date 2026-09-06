#include <stdio.h>
#include <math.h>
#define n 3 
void printMatrix(double mat[n][2*n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n; j++){
            printf("%0.2f ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void gaussJordan(double mat[n][2*n]){
    for(int i = 0; i < n; i++){
        double pivot = mat[i][i];
        for(int j = 0; j < 2 * n; j++){
            mat[i][j] /= pivot;
        }
        for(int k = 0; k < n; k++){
            if(k != i){
                double factor = mat[k][i];
                for(int j = 0; j < 2 * n; j++){
                    mat[k][j] -= factor * mat[i][j];
                }
            }
        }
    }
}
int main(){
    printf("GUASS JORDAN METHOD \n");
    printf("\n Name: Disha \t Class:CSE-A\t Roll no.=171\n");
    double matrix[n][2*n];
    printf("Enter the matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter value for [%d][%d]=", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n; j < 2 * n; j++){
            if(i == (j - n)){
                matrix[i][j] = 1.0;
            } else {
                matrix[i][j] = 0.0;
            }
        }
    }
    printf("\nAugmented matrix (A:I) before Gauss Jordan Elimination:\n");
    printMatrix(matrix);
    gaussJordan(matrix);
    printf("\nAugmented matrix after Gauss Jordan Elimination:\n");
    printMatrix(matrix);
    printf("Inverse matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = n; j < 2 * n; j++){
            printf("%0.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}