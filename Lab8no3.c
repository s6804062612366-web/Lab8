#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random1to100();
void printAr(int numAr[],int numArSize);
int checkNum(int numAr[],int numArSize);
int searchNum(int numAr[],int numArSize,int target);
void bubbleSort(int numAr[], int numArSize);

int main() {
    int N,i;
    int A[100];
    scanf("%d",&N);
    if (N>100) 
        N=100;
    srand(time(NULL));
    for (i=0;i<N;i++)
        A[i]=checkNum(A,i);
        bubbleSort(A, i + 1);
       
    printf("\n********\n");
    printAr(A,N);
    
    return 0;
}
void printAr(int numAr[],int numArSize) {
    int i;
    for (i=0;i<numArSize;i++)
        printf("%d ",numAr[i]);
} 

int checkNum(int numAr[],int numArSize) {
    int rnum;
    rnum=random1to100();
    while (searchNum(numAr,numArSize,rnum)) {
        rnum=random1to100();
    }
    return rnum;
}

int searchNum(int numAr[],int numArSize, int target) {
        int left = 0,right = numArSize - 1;
        int mid,found = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (numAr[mid] == target) {
                found = 1;
                break;
            }
            if (numAr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return found;
}

void bubbleSort(int numAr[], int numArSize) {
    int temp;
    for (int i = 0; i < numArSize - 1; i++) {
        for (int j = 0; j < numArSize - i - 1; j++) {
            if (numAr[j] > numAr[j + 1]) {
                temp = numAr[j];
                numAr[j] = numAr[j + 1];
                numAr[j + 1] = temp;
            }
        }
    }
}

int random1to100() {
    int random_num = (rand() % 100) + 1;
    printf("%d ", random_num);
    return random_num;
}
