//
// Created by Baran on 12/6/2024.
#include "bookrelated.h"
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