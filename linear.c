#include <stdio.h>
int cari(int ar[], int leng, int target){
    for(int i = 0; i < leng; i++){
        if (ar[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
int ar[] = {33, 22, 1, 5, 66, 51};
int leng = sizeof(ar)/sizeof(ar[0]);
int target;
printf("Masukkan angka yang ingin dicari :");
scanf("%d", &target);

int hasil = cari(ar, leng, target);
if (hasil == -1){
    printf("data tidak ditemukan");
}
else{
    printf("data ditemukan di index %d", hasil);
}
    return 0;
}