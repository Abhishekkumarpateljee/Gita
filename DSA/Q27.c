#include<stdio.h>
int main(){
    
int n;
printf(" size :");
scanf("%d",&n);

int arr[n] ;

printf("array\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i] );

}

for(int i=0 ; i<n ; i++ ){

    printf("%d" , arr[i] );

}

int temp = arr[n-1] ;

for(int i=0 ; i<n ; i++){

    int temp = arr[i] ; 
}



printf("\n");
for(int i=0 ; i<n ; i++ ){

    printf("%d", arr[i] );

}


    return 0;
}
