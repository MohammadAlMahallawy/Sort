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


int main(){
int Array[] = {12,11,10,9,8};
int Buffer[5];

for (int i = 0; i < 5; i++){
    printf("%d ", Array[i]);
}
printf("\n");
for (int j = 0; j < 5; j++)
{
    for (int i = 0; i < 4; i++){
        if (compare(Array[i], Array[i+1])){
            Buffer[i] = Array[i];
            Array[i] = Array[i+1];
            Array[i+1] = Buffer[i];
    }
    }
}
for (int i = 0; i < 5; i++){
    printf("%d ", Array[i]);
}
}