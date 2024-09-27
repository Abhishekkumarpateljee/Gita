#include<stdio.h>
int input(int arr[] , int size){

for(int i=0 ; i<size ; i++ ){

    scanf("%d",& arr[i] );
}

}

int output(int arr[] , int size){

for(int i=0 ; i<size ; i++ ){

    printf("%d", arr[i] );
}
}

int main(){

int size;
printf("array size :");
scanf("%d",& size );
int arr[size];

input(arr,size);
output(arr ,size );

    return 0;
}