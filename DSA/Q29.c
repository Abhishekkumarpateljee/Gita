#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n];

printf("arr\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);

}

int sum =0 ;
for(int i=0 ; i<n ; i++ ){

sum = sum + arr[i] ;
    printf(" %d ",arr[i]);
    
}

printf("\n");
int add =0 ;

for(int i =arr[0] ; i<= arr[n-1] ; i++ ){

printf(" %d ",i);
add = add + i;
}


int miss = add - sum ;

printf("miss = %d", miss);




    return 0;
}