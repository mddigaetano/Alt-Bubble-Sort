//Author: amedeo39

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void BubbleSort(int v[],int n){
    int i,j,scambio;
    
    for(i=0;i<n-1;i++){
        for(j=n-1;j>0+i;j--){
            if(v[j]<v[j-1]){
                scambio=v[j];
                v[j]=v[j-1];
                v[j-1]=scambio;
            }
        }
    }
}

int main(int argc, char** argv) {
    int i, v[N];
    
    srand(time(NULL));
    
    for(i=0; i<N; i++){
        v[i]=(rand()%100)+1;
        printf("Vettore [%d]: %d\n",i,v[i]);
    }
    
    BubbleSort(v,N);
    
    for(i=0;i<N;i++){
        printf("\nVettore [%d]: %d",i,v[i]);
    }

    return (EXIT_SUCCESS);
}