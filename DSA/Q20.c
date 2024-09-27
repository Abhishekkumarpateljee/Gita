#include<stdio.h>
int main(){

int n;
printf("size :");
scanf("%d",&n);

int arr[n] ;

printf("array\n");

for(int i=0 ; i<n  ; i++){

    scanf("%d",& arr[i]);
}

for(int i=0 ; i<n  ; i++){

    printf(" %d ", arr[i]);
}
printf("\n");

int j = n-1 ;
for(int i =0  ; i<n/2; i++){

    

    int temp = arr[i] ;
    arr[i]   = arr[j] ;
    arr[j]   = temp ;
    j--;


    }

printf("REVERSE \n");
for(int i=0 ; i<n  ; i++){

    printf(" %d ", arr[i]);
}



    return 0 ;
}