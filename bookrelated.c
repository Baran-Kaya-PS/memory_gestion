//
// Created by Baran on 12/6/2024.
#include "bookrelated.h"
#include <stdio.h>
// CHAPTER 11 POINTERS
void increment(int *p) { // p est un pointeur
    *p = *p + 1; // Modifie la valeur de la variable pointée
}

void increment2(int x){ // ne modifie la valeur de x que le temps de la fonction
    x = x+1;
}
void decompose(double x, long *int_part, double *frac_part){
    *int_part = (long) x;
    *frac_part = (double) (x - *int_part);
}
void max_min(const int a[], int n, int *max, int *min){
    int i;
    *max,*min = a[0];
    for (i = 0; i < n;i++){
        if(a[i] > *max) *max = a[i]; // assigne le max
        if(a[i] < *min) *min = a[i]; // assigne le min
    }
}
int *max(int *a, int*b){
    if (*a > *b) return a;
    return b;
}
int *median(const int a[], int n){
    return &a[n/2];
}
void avg_sum(const double a[],int n, double *avg, double *sum){
    int i;
    *sum = 0.0;
    for (i = 0;i<n;i++){
        *sum+=a[i];
    }
    *avg = *sum/n;
}
void swap(int *i, int*j){
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void find_two_largest(const int a[], int n, int *largest, int *second_largest){
    int i;
    *largest = a[0];
    *second_largest = a[1];
    for (i = 2; i < n;i++){
        if (*largest > *second_largest){
            if (*second_largest < a[i]) *second_largest = a[i];
        } else {
            if (*largest < a[i]) *largest = a[i];
        }
        if (*largest < *second_largest) swap(largest,second_largest);
    }
}
void pay_amount(int dollars,int *twenties,int *tens,int *five,int *ones){
    *twenties = dollars/20;
    dollars = dollars%20;
    *tens = dollars/10;
    dollars = dollars%10;
    *five = dollars/5;
    dollars = dollars%5;
    *ones = dollars;
}
//CHAPTER 12 POINTERS AND ARRAYS
void reverse(){ // utilisation des pointeurs pour itérer dans le tableau
    int a[9],*p;
    for (p = a ; p < a+9; p++){
        printf("\nEnter a number : ");
        scanf("%d",p); // itère de a[0] à a[n], n = 9;
    }
    printf("\nreverse order\n");
    for (p = a+8; p >= a;p--){
        printf(" %d",*p);
    }
}
int largest_value(int *array,int size){
    int largest = array[0];
    for (int i = 1; i < size;i++){
        if (array[i] > largest) largest = array[i];
    }
    return largest;
}
void VLA1D(int n){
    int a[n];
    for (int i = 0; i <n; i++){
        a[i] = i*i; // taille du tableau créer pendant le programme (stack), libéré une fois que VLA1D se terminé
    }
}
void VLA2D(int m,int n){ //variable-lenght array
    int a[m][n], (*p)[n]; // p est un pointeur vers un tableau de n entiers
    p=a; // a = a[0][0], donc p->a[0] #première ligne, a[1] = ligne 1 etc...
    // il y a (a[0]...a[n-1]) car il y a n colonnes, donc p pointe vers une ligne de n valeurs (cad nb colonnes)
}