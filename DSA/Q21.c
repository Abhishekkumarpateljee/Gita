#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n) ;

int arr[n];

printf("array\n");
for(int i =0 ; i<n ; i++){

    scanf("%d", &arr[i]);

}

for(int i =0 ; i<n ; i++){

    printf("%d", arr[i]);

}


int even [n] ;
int odd[n]    ;
int c = 0 , count = 0 ;

for(int i =0 ; i<n ; i++){

    if(arr[i] % 2 == 0 ){
        even[c++] = arr[i] ;
    }

    else{

        odd[count++] = arr[i] ;
    }

}

for(int i =0 ; i<c ; i++){

    printf(" %d ", even[i]);

}
printf("odd \n");

for(int i =0 ; i<count ; i++){

    printf(" %d ", odd [i]);

}


 


    return 0; 

}