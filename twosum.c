#include <stdio.h>
#include <stdlib.h>



int * twoSum(int array[],int target);


int main() {

    int array[3] = {4,6,7};
    int target = 13;

    int *returnArray = twoSum(array,target);

    printf("%d,%d",returnArray[0],returnArray[1]);



    return 0;

}



int * twoSum(int array[],int target) {
    int firstNum,secondNum,predictSum;
    int *wantedArray = malloc(sizeof(int) * 2);

    for (int i=0; i < sizeof(*array);i++) {
        firstNum = array[i];
        for (int j=i+1; j < sizeof(*array);j++) {
            secondNum = array[j];

            predictSum = firstNum + secondNum;

            if (predictSum == target) {
                wantedArray[0] = i;
                wantedArray[1] = j;

                goto endOfFunc;
            }
        }
    }
    endOfFunc:

    return  wantedArray;
}