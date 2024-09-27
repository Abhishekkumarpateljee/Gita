#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n];

printf("array\n");
for(int i=0 ; i<n ; i++){

    scanf(" %d ",& arr[i]);

}
printf("\n");

for(int i=0 ; i<n ; i++){

    printf(" %d ", arr[i]);
    
}

int k ;
printf( " enter your no :");

scanf("%d",&k);

int c =0 ;

for(int i=0 ; i<n ; i++){

    if( arr[i] == k ){

    c++;

    }
    
}

if(c > 0 ){

    printf("%d is present in the array :", k);
}

else{
    printf(" %d is not present in the arr ", k);
}


    return 0;
}