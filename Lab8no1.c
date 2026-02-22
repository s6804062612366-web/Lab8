#include <stdio.h>

int findMax(int num[]);
void printAr(int myAr[], int Arsize);
void addone(int number[], int add[], int sizeNum);
void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos);
void addthree(int number[], int pos[][2], int sizePos); 

int main() {
	int number[5] = {20,50,100,99,9};
    int add[] = {2,1,4,5,1};
    int pos[][2] = {{1,5},{3,2},{4,1}};
    addthree(number,pos,3);
    printAr(number,5);
}

void printAr(int myAr[], int Arsize) {
    for (int i = 0; i < Arsize; i++) {
        printf("%d ", myAr[i]);
    }
}
	
void addone(int number[], int add[], int sizeNum) {
    for (int i = 0; i < sizeNum; i++) {
        int result = 0;
        result = number[i] + add[i];
        number[i] = result;
    }
}

void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos) {
    for (int i = 0; i < sizePos; i++) {
        int result = 0;
        int index = pos[i] - 1;
        result = number[index] + x;
        number[index] = result;
    }
}

void addthree(int number[], int pos[][2], int sizePos) {
    for (int i = 0; i < sizePos; i++) {
        int result = 0;
        int index = pos[i][0] - 1;
        result = number[index] + pos[i][1];
        number[index] = result;
    }
}

int findMax(int num[]) {
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<5;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}

