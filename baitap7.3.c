#include <stdio.h>
#include <math.h>

int main() {
    double tien_goc, lai_suat_nam, lai_suat_thang, tien_lai, tien_nhan_duoc;
    int so_thang_gui;

    printf("Nhap so tien ban dau: ");
    scanf("%lf", &tien_goc);

    printf("Nhap lai suat nam: ");
    scanf("%lf", &lai_suat_nam);

    printf("Nhap so thang gui: ");
    scanf("%d", &so_thang_gui);

    lai_suat_thang = lai_suat_nam / 12.0;

    for (int i = 1; i <= so_thang_gui; i++) {
        tien_lai = tien_goc * lai_suat_thang;
        tien_nhan_duoc = tien_goc + tien_lai;
        printf("%d\t%.2lf\t%.2lf\n", i, tien_nhan_duoc, tien_lai);
        tien_goc = tien_nhan_duoc;
    }

    return 0;
}