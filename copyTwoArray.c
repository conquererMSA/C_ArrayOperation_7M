#include<stdio.h>
int main(){

    //make first array
      int m;
      scanf("%d",&m);
      int arr1[m];
      for(int i=0; i<m; i++){
        scanf("%d",&arr1[i]);
      }

      //make second array
      int n;
      scanf("%d",&n);
      int arr2[n];
      for(int i=0; i<n; i++){
        scanf("%d",&arr2[i]);
      }
      int combArrLen=m+n;
      int ansArr[combArrLen];
      for(int i=0; i<m;i++){
         ansArr[i]=arr1[i];
      }
    int i=m;
    for(int j=0; j<n;j++){
        ansArr[i]=arr2[j];
        j++;
    }
    for(int i=0;i<combArrLen; i++){
        printf("%d ",ansArr[i]);
     }
      
    return 0;
}