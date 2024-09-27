#include<stdio.h>
int main(){

int arr1[5] = { 2,3 ,4 , 6 ,7};
int arr2[5]= { 4,5 ,6 ,7,8, } ;
int arr3[6]= { 1,2,3,4,5,6,}  ;

for(int i=0 ; i<5 ; i++ ){

    if(arr1[i] == arr2[i] && arr2[i] == arr3[i] ){


        printf("%d",arr1[i]);
    }
} 




    return 0 ;
}