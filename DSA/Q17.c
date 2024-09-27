

#include <stdio.h>
  int main(){

int n;
printf("array size :");
scanf("%d",&n);

int arr[n] ;

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}

for(int i=0 ; i<n ; i++ ){

    printf(" %d ",arr [i]);
}

int k;
printf(" k :") ;
scanf("%d",&k);

int max , i , j ; 

for (i = 0; i < k; i++) {
        max = -9999;
        
        
        for (j = 0; j < n; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        
        
        for (j = 0; j < n; j++) {
            if (arr[j] == max) {
                arr[j] = -9999;
                break; 
            }
        }
    }

    
    printf("The %d-th maximum element is %d\n", k, max);


    







    return 0;
}