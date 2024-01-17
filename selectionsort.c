#include <stdio.h>
void tukar(int *aa, int *bb){
    int temp = *aa;
    *aa = *bb;
    *bb = temp;

}
void selesort(int arr[], int na){
    int i, j, ter;
    for (i = 0; i < na - 1; i++){
        ter = i;
        for (j = i; j < na - 1; j++){
            if(arr[ter] > arr[j]){
                ter = j;
            }
        }
        tukar(&arr[i], &arr[ter]);
    }
}

int main (){
    int arr[] = {5, 55, 3, 33, 7, 2, 72};
    int na = sizeof(arr) / sizeof(arr[0]);
    selesort(arr, na);

    for (int a = 0; a < na; a++){
        printf("%d\t", arr[a]);
    }
    return 0;
}