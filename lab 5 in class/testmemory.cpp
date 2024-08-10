#include <stdio.h>
#include <stdlib.h>
void func2(int *ptr1) { // pointer pass-by-value
int *ptr2;
printf("%i %i\n",*ptr1,*ptr2);
ptr1 =(int *) malloc(sizeof(int)); // allocate memory
ptr2 =(int *) malloc(sizeof(int)); // allocate memory
printf("%i %i\n",*ptr1,*ptr2);
}
void test2() {
int *ptr1; // allocated from heap segment
printf("%i\n",*ptr1);
func2(ptr1);
printf("%i\n",*ptr1);
free(ptr1); // deallocate memory
printf("%i\n",*ptr1);
}

int main(int argc , char *argv[]) {
int i = 1; // allocated from initialized data segment
int j; // allocated from uninitialized data segment
int *ptr; // allocated from heap segment
ptr = (int *) malloc(sizeof(int)); // allocate memory
printf("%i %i %i\n",i,j,*ptr);
i = 2;
*ptr = 3;
printf("%i %i %i\n",i,j,*ptr);
j = 4;
free(ptr); // deallocate memory
printf("%i %i %i\n",i,j,*ptr);
func2(5);
} 
