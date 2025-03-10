#include<stdio.h>
#include<math.h>

int Hanoi_tour(int Number_of_disques,char start[6], char end[6],char intermediaire[6]){
    if (Number_of_disques)
    {
    Hanoi_tour(Number_of_disques-1, start,intermediaire,end);
    printf(" Take a move frome %s to %s \n",start ,end);
    Hanoi_tour(Number_of_disques-1,intermediaire,end,start);
}
return pow(2,Number_of_disques)-1; }   /*the minimal number of the deplacement to solve Honai tower is 2^n-1 
                                        (la source : Le chercheur et le grand mathematicien Benoit Rittaud de l'université Sorbonne à Paris)*/

int main(){
    int N;
    printf("please give me the number of the disques in your tour of Hanoi : ");    
    scanf("%d",&N);
    printf("the minimum number of deplacement necessary to solve the Honai tour is %d",Hanoi_tour(N,"Right","left","middle"));
}
