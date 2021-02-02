//
//  bubble.h
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#ifndef bubble_h
#define bubble_h
#include "swap.h"
void display(int value[], int N){
    int i;
    for(i=0;i<N;i++){
        printf("%5d",value[i]);
    }
    printf("\n");
}


void bubble(int a[], int N){
    int sorted;
    int i;
    int j;
    int check=0;
    for (i = N - 1; i > 0; i--)
   {
       sorted = 0;
       for (j = 0; j < i; j++){
        if(a[j]>a[j+1]) // decending
        {
            swap(&a[j],&a[j+1]);
            sorted = 1;
            display(a,N);
        }
       }
       if (sorted==0) break;
       printf("\t ===end of round %d===\n\n",check+1);
       check++;
    }
}



#endif /* bubble_h */
