#include<stdio.h>
int main(){

int n;
printf("array:");
scanf("%d",&n);

int arr[n];

printf("array\n");
for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);

}

int m;
printf("array :");
scanf("%d",&m);

int abb[m];
printf("ARRAY\n");

for(int i=0 ; i<m ; i++ ){

    scanf("%d",& abb[i] );
}

printf("merge\n");
int k = n+m;
int merge[k-m] ;

for(int i=0 ; i<k-m ; i++){

    merge[i] = arr[i];
    
}


int a =0 ;
merge[k] ;
for(int i=n ; i<k ; i++ ,a++ ){
    merge[i] = abb[a] ;

}

printf("merge\n");
for(int i=0 ; i<k ; i++ ){
    printf(" %d ", merge[i]);
}

int un[k];
int inter [k];
int c = 0 ;
int t = 0 ;

for(int i =0 ; i<k ; i++){
   
   for(int j= i+1 ; j<k ; j++){

      if(arr[i] == arr[j]){
         
         c++;
    
        for(int l = j ; l<k  ; l++){

             
        }
        }
        else{


        }

   }

}

  


 


    return 0;
}
