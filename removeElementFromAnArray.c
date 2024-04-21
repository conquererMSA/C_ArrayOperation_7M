#include<stdio.h>
int main(){
      int lenOfArray;
      scanf("%d",&lenOfArray);
      int arr[lenOfArray];
      for(int i=0; i<lenOfArray;i++){
        scanf("%d",&arr[i]);
      }
      int removeIndex;
      scanf("%d",&removeIndex);
      for(int i=removeIndex; i<lenOfArray-1; i++){
        arr[i]=arr[i+1];
      }
      for(int i=0; i<lenOfArray-1;i++){
        printf("%d ",arr[i]);
      }
    return 0;
}

// 10
// 10 20 30 40 50 60 70 80 90 100
// 4
//Output: 10 20 30 40 60 70 80 90 100