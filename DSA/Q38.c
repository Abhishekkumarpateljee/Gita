#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n] ;
printf("arr\n");

for(int i=0 ; i<n ; i++ ){

scanf("%d",& arr[i]);

}

printf("\n");

for(int i=0 ; i<n ; i++ ){

printf(" %d ",arr[i]);

}

int sum =0 ;
int c =0 ; 
int k  ;
printf(" element =");
scanf("%d",&k);

for(int i=0 ; i<n ; i++ ){

    for(int j = i+1 ; j<n ; j++){
     sum =   arr[i] + arr[j] ;

    if( sum % k == 0 ){

      c++;
     
     
    }
    }
    
}
printf(" c= %d ",c);







    return 0;
}