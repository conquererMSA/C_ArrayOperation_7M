#include<stdio.h>
int main(){
      int lenOfArray;
      scanf("%d",&lenOfArray);
      int arr[lenOfArray+1];
      for(int i=0; i<lenOfArray;i++){
        scanf("%d",&arr[i]);
      }
    int index, indexValue;
      scanf("%d %d",&index,&indexValue);
      for(int i=lenOfArray; i>=index+1; i--){
        arr[i]=arr[i-1];
      }
      arr[index]=indexValue;
      for(int i=0;i<=lenOfArray;i++){
        printf("%d ",arr[i]);
      }
    return 0;
}
// 5
// 10 20 30 40 50
// 3 99
// 10 20 30 99 40 50
// X output: 10 20 30 40 50 3 