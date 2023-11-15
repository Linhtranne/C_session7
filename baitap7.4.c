#include <stdio.h>
#include <math.h>

int main() {
    int n, choice;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);

    do {
        printf("\nINTEGER NUMBER\n");
        printf("1. In ra day so co gia tri nho hon hoac bang n va tinh tong.\n");
        printf("2. In ra va dem cac so chia het cho 3 nho hon n.\n");
        printf("3. Kiem tra so nguyen co phai so nguyen to khong.\n");
        printf("4. Kiem tra so nguyen co phai so hoan hao khong.\n");
        printf("5. Tinh tong cac uoc so cua n.\n");
        printf("6. Tinh giai thua n.\n");
        printf("7. In ra so dao nguoc cua n.\n");
        printf("8. In ra cac so nguyen to tu 1-n.\n");
        printf("9. Thoat.\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int sum = 0;
                printf("Day so co gia tri nho hon hoac bang %d la: ", n);
                for (int i = 0; i <= n; i++) {
                    printf("%d ", i);
                    sum += i;
                }
                printf("\nTong cac so la: %d\n", sum);
                break;
            }
            case 2: {
                int count = 0;
                printf("Cac so chia het cho 3 nho hon %d la: ", n);
                for (int i = 0; i < n; i++) {
                    if (i % 3 == 0) {
                        printf("%d ", i);
                        count++;
                    }
                }
                printf("\nSo luong cac so la: %d\n", count);
                break;
            }
            case 3: {
                int is_prime = 1;
                if (n < 2) {
                    is_prime = 0;
                }
                for (int i = 2; i <= sqrt(n); i++) {
                    if (n % i == 0) {
                        is_prime = 0;
                        break;
                    }
                }
                if (is_prime) {
                    printf("%d la so nguyen to.\n", n);
                } else {
                    printf("%d khong phai la so nguyen to.\n", n);
                }
                break;
            }
            case 4: {
                int sum = 0;
                for (int i = 1; i < n; i++) {
                    if (n % i == 0) {
                        sum += i;
                    }
                }
                if (sum == n) {
                    printf("%d la so hoan hao.\n", n);
                } else {
                    printf("%d khong phai la so hoan hao.\n", n);
                }
                break;
            }
            case 5: {
                int sum = 0;
                printf("Cac uoc so cua %d la: ", n);
                for (int i = 1; i <= n; i++) {
                    if (n % i == 0) {
                        printf("%d ", i);
                        sum += i;
                    }
                }
                printf("\nTong cac uoc so la: %d\n", sum);
                break;
            }
            case 6: {
                int fact = 1;
                for (int i = 1; i <= n; i++) {
                    fact *= i;
                }
                printf("%d! = %d\n", n, fact);
                break;
            }
            case 7: {
                int reversed = 0;
                int temp = n;
                while (temp != 0) {
                    reversed = reversed * 10 + temp % 10;
                    temp /= 10;
                }
                printf("So dao nguoc cua %d la: %d\n", n, reversed);
                break;
            }
            case 8: {
                printf("Cac so nguyen to tu 1 den %d la: ", n);
                for (int i = 2; i <= n; i++) {
                    int is_prime = 1;
                    for (int j = 2; j <= sqrt(i); j++) {
                        if (i % j == 0) {
                            is_prime = 0;
                            break;
                        }
                    }
                    if (is_prime) {
                        printf("%d ", i);
        } while(n<0){
        	print("end");
		}
    }
}
}
}
}
