#include<stdio.h>
#include<limits.h>
int main(){
      int lenOfArray;
      scanf("%d",&lenOfArray);
      int arr[lenOfArray];
      for(int i=0; i<lenOfArray;i++){
        scanf("%d",&arr[i]);
      }
      int removeIndex;
      scanf("%d",&removeIndex);
      for(int i=lenOfArray-1; i<=removeIndex;i--){
        arr[i]=arr[i+1];
      }
      for(int i=0; i<lenOfArray-1;i++){
        printf("%d ",arr[i]);
      }
    return 0;
}