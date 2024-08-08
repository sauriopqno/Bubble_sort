#include<stdio.h>
void qsort(int array[], int size);
int main()
{
 int array[]= {6,7,5,9,10,3,37,72,29};
 //calculate th size of the array
 int size = sizeof(array)/sizeof(array[0]);
 //give the array and size to the function 
 qsort(array, size);
 return 0;
}
 void qsort(int array[], int size){
  //work as a boolean 
  int c=0;
  do{
   c =1;
   //iterate through the array
   for (int l=0; l<(size); l++)
   {
   //since we use l-1 we need to make sure it starts from 1 (1-1=0)
    if (l!=0){
    //check if the number on the left is greater than the number on the right, and if so they swap positions 
     if(array[l]<array[l-1]){
      int aux= array[l];
      array[l] =array[l-1];
      array[l-1]= aux;
      //if at least one number is not in it's position then the value is 0 
      c=0;
    }
   } 
  }
 }
 while(c==0);
 //print the array 
 for (int i=0; i<size; i++)
 {
  printf("%i\n",array[i]);
 }
 }
 