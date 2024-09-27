#include<stdio.h>
int main(){

int r =3;
int c =3;

int sum =0 , add=0 ;
int metrix [r][c] ;

for(int i=0 ; i<r ; i++ ){

     for(int j =0 ; j<c ; j++ ){
       
       scanf("%d",& metrix[i][j]);
    }
}

for(int i=0 ; i<r ; i++ ){

     for(int j =0 ; j<c ; j++ ){
       
       printf("%d",metrix[i][j]);
    }
    printf("\n");
}

for(int i=0 ; i<r ; i++ ){

     for(int j =0 ; j<c ; j++ ){
       
       if( i == j ) {

        sum = sum + metrix[i][j] ;
       }
    }
}
printf("main diagonal = %d ", sum);

for(int i=0 ; i<r ;  ){

     for(int j = c-1 ; j>=0 ; j-- ){
       
       add = add + metrix[i][j] ;
       i++;
    }
}
printf(" add = %d ", add);
return 0;
}