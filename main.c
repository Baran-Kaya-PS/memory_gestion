#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "bookrelated.h"
#include "arraygeneration.h"
#include "time.h"
#define ROWS 4
#define COLS 4
int main() {
    srand(time(NULL));
//    // CHAPTER 11 POINTERS
//    int a = 42;
//    increment2(a);
//    printf("Valeur de a : %d\n", a); // Affiche 42
//    increment(&a); // Passe l'adresse de a
//    printf("Valeur de a : %d\n", a); // Affiche 43
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    long l; // définir le long qui contiendra int(M_PI)
//    double d; // définir le double qui contiendra (double) (l - M_PI)
//    decompose(M_PI,&l,&d);
//    printf("decomposition de pi %lf = %ld + %lf\n",M_PI,l,d);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int *p,i,j;
//    i = 3;
//    j = 4;
//    p = max(&i,&j);
//    printf("value of max(3,4) : %d\n",*p);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int b[SIZE];
//    generateIntArray(b,SIZE);
//    sortArray(b,SIZE);
//    printf("b[1] = %d",b[0]);
//    for (i = 1; i < SIZE; i++){
//        printf("\tb[%d] = %d",i+1,b[i]);
//    }
//    printf("\n median of b is %d\n",*median(b,SIZE));
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    double avg;
//    double sum;
//    double c[SIZE];
//    generateDoubleArray(c,SIZE);
//    printf("c[1] = %f",c[0]);
//    for (i = 1; i < SIZE; i++){
//        printf("\tc[%d] = %f",i+1,c[i]);
//    }
//    avg_sum( c, SIZE, (double *) &avg, &sum);
//    printf("the average of c is %lf\t the sum is %lf\n",avg,sum);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    j = 4;
//    i = 5;
//    swap(&j,&i);
//    printf("%d j,\t%d i\n",j,i);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int largest, second_largest;
//    printf("\n\nb[1] = %d",b[0]);
//    for (i = 1; i < SIZE; i++){
//        printf("\tb[%d] = %d",i+1,b[i]);
//    }
//    find_two_largest(b,SIZE,&largest,&second_largest);
//    printf("the 2 largest values are \t%d\t%d\n",largest,second_largest);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    int tw,te,fi,on;
//    pay_amount(199,&tw,&te,&fi,&on);
//    printf("to miminise 199 dolars into money bill you have\t\t %d 20$, %d 10$, %d 5$, %d 1$",tw,te,fi,on);
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    //CHAPTER 12 POINTERS AND ARRAYS
////    reverse(); //fonctionne
//    ///////////////////////////////////////////////////////////////////////////////////
//
//    ///////////////////////////////////////////////////////////////////////////////////
//    printf("\n\n\n");
//    int matrix[ROWS][COLS]; // Pointeur vers matrix[0][0], équivalent à *p = matrix[0][0]
//    generateIntMatrix(ROWS,COLS,matrix);
//    printIntMatrix(ROWS,COLS,matrix);
//    printf("\nthe maximum value of the matrix is %d\n\n\n",largest_value(*matrix,ROWS*COLS));
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
//    int array[SIZE];
//    generateIntArray(array,SIZE);
//    array[SIZE-1] = 3;
//    bool array_have_3 = search(array,SIZE,3);
//    printf("%d\n",array_have_3);
//    printIntArray(array,SIZE);
//    store_zeros(array,SIZE);
//    printIntArray(array,SIZE);
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
//    double array1[SIZE];
//    double array2[SIZE];
//    generateDoubleArray(array1,SIZE);
//    generateDoubleArray(array2,SIZE);
//    printDoubleArray(array1,SIZE);
//    printf("\n");
//    printDoubleArray(array2,SIZE);
//    double i_p = inner_product(array1,array2,SIZE);
//    printf("\n %lf\n",i_p);
//    int array3[SIZE];
//    generateIntArray(array3,SIZE);
//    printIntArray(array3,SIZE);
//    printf("\nlargest value of a = %d\n",largest_value((int*)array3,SIZE));
//    int largest;
//    int secondlargest;
//    find_two_largest(array3,SIZE,&largest,&secondlargest);
//    printf("\nlargest value of a = %d\n, the second is %d\n",largest,secondlargest);
    ///////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////
//    char c[SIZE] = {"radar"};
//    char t[SIZE];
//    reverseChar(c,t,SIZE);
//    printCharArray(c,SIZE);
//    printCharArray(t,SIZE);
//    bool iP = isPalindrome(c,SIZE);
//    printf("%d\n",iP);
    int arr[SIZE];
    generateIntArray(arr,SIZE);
    printIntArray(arr,SIZE);
    quickSort(arr,0,SIZE-1);
    printIntArray(arr,SIZE);
    return 0;

}
