#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b;
int j = 0;
  scanf("%d%d", &a, &b);

int k = a;
int arr[a];

  for(int i = 0; i < a ; i++){
    arr[i] = i + 1;
                                  }
  for(int i = 1; i <= a ; i++){
    if(arr[i - 1]!=0){
       j++;

    if(j == b){
       j = 0;
       k--;

         printf("%d ", arr[i - 1]);

         arr[i - 1]=0;
                                       }
                                             }
    if(k == 0){
       break;
                                                 }
    else if(i == a){
       i = 0;
                                                      }
                                                            }
return 0;

                                                                  }
