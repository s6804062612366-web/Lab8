#include <stdio.h>
void addthree(int number[], int pos[][2], int sizePos);
int main() {
    int number[] = {10, 10, 10, 10, 10};
    int pos[][2] = {{0,5},{3,4},{4,2}};
   addthree(number,pos,3);
    for(int i = 0; i < 5; i++) {
        printf("%d ", number[i]);
    }
    return 0;
}

void addthree(int number[], int pos[][2], int sizePos) {
    for(int i = 0; i < sizePos; i++) {
        int result = 0;
        result = number[pos[i][0]] + pos[i][1];
        number[pos[i][0]] = result;
    }
}
