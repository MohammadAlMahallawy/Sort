#include <stdio.h>

int compare(int x, int y) {
    if (x > y)
    {
        return 1;
    }
    if (x <= y)
    {
        return 0;
    }
}
void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(){
int Array[] = {12,11,10,9,8};
int size =(sizeof(Array) / sizeof(Array[0]));

for (int i = 0; i < size; i++){
    printf("%d ", Array[i]);
}
printf("\n");
for (int j = 0; j < size; j++)
{
    for (int i = 0; i < (size - 1); i++){
        if (compare(Array[i], Array[i+1])){
           swap(&Array[i],&Array[i+1]);
    }
    }
}
for (int i = 0; i < size; i++){
    printf("%d ", Array[i]);
}
}