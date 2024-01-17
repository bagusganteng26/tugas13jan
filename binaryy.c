#include <stdio.h>

int bcari(int arr[], int a, int b, int target){
    if (b >= a) {
        int tengah = a + (b - a) / 2;

        if (arr[tengah] == target){
            return tengah;
        }
        if (arr[tengah] > target){
            return bcari(arr, a, tengah - 1, target);
        }
        return bcari(arr, tengah + 1, b, target);
    }
    return -1;
}

int main (){
    int arr[] = {2, 6, 7, 8, 32, 64};
    int leng = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Masukkan angka yang ingin anda cari : ");
    scanf("%d", &target);
    int hasil = bcari(arr, 0, leng - 1, target);


    if (hasil == -1){
        printf("angka yang anda cari tidak ada dalam array");
    }
    else {
        printf("angka yang anda cari terdapat di index %d", hasil);
    }
    return 0;
}