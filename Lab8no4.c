#include <stdio.h>
void bubbleSort(int numAr[], int numArSize);
int main() {
    int score1[] = {3,6,2,4};
    int score2[] = {3,6,2,4};
    int top3[3];

    //sol1
    for (int i = 0; i < 3; i++) {
        int maxIndex = 0;
        for (int j = 1; j < 4; j++) {
            if (score1[j] > score1[maxIndex]) {
                maxIndex = j;
        }
        }
        top3[i] = score1[maxIndex];
        score1[maxIndex] = -1;
    }
    for (int i = 0; i < 3; i++) {
        printf("%d ", top3[i]);
    }
    
    printf("\n");

    //sol2
    bubbleSort(score2,4);
    for (int i = 1; i < 4; i++) {
        top3[i-1] = score2[i];
    }
    for (int i = 0; i < 3; i++) {
        printf("%d ", top3[i]);
    }

    return 0;
}

void bubbleSort(int numAr[], int numArSize) {
    int i, j, temp;
    for (i = 0; i < numArSize - 1; i++) {
        for (j = 0; j < numArSize - i - 1; j++) {
            if (numAr[j] > numAr[j+1]) {
                temp = numAr[j];
                numAr[j] = numAr[j+1];
                numAr[j+1] = temp;
            }
        }
    }
}