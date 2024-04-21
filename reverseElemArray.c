#include<stdio.h>
//Reverse korle ki element er index poriborton hoy.....?
 //array reverse korle index change hoyna...
int main(){
      int lenOfArray;
      scanf("%d",&lenOfArray);
     int arr[lenOfArray];
      for(int i=0; i<lenOfArray; i++){
        scanf("%d",&arr[i]);
      }
    //   printf("arr[0]=%d\n",arr[2]);
      int i=0,j=lenOfArray-1;
      while(i<j){
       int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
      }
      for(int i=0; i<lenOfArray;i++){
        printf("%d ",arr[i]);
      }
        // printf("arr[0]=%d\n",arr[2]);
        //array reverse korle index change hoyna...
    return 0;
}

// 6
// 10 20 30 40 50 70
// output: 70 50 40 30 20 10 