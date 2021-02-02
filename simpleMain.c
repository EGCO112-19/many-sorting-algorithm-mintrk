#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
int main(int argc, char *argv[]){

  int i,N;
  printf("There are %d arguments\n",argc);
  for(i=0;i<argc;i++){
         printf("argv %d: %s\n",i,argv[i]); 
  }

  N=argc-2;

  int *a;
  a=(int*) malloc(sizeof(int)*N);

  for(i=2;i<argc;i++){
        a[i-2]=atoi(argv[i]);
  }

    if(strcmp("bubble",argv[1])==0){
      bubble(a,N);
    }
    if(strcmp("selection",argv[1])==0){
      selection(a,N);
    }
    if(strcmp("insertion",argv[1])==0){
      insertion(a,N);
    }
    return 0;
}
  //bubble(a,N);
  //selection(a,N);
  //insertion(a,N);