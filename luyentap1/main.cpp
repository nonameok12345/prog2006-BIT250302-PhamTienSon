
#include <stdio.h>

int main() {

    int n;

    printf("BAI 1: Kiem tra chan le \n");
    printf("Nhap mot so: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("So %d la so Chan\n", n);
    } else {
        printf("So %d la so Le\n", n);
    }



    float W, H, dienTich;

    printf("\n BAI 2: Tinh dien tich \n");
    printf("Nhap chieu rong W: ");
    scanf("%f", &W);
    printf("Nhap chieu cao H: ");
    scanf("%f", &H);

    dienTich = W * H;

    printf("Dien tich = %.2f\n", dienTich);

    int soNhap;

    printf("\n BAI 3: Dem nguoc tu n xuong 1 \n");
    printf("Nhap n: ");
    scanf("%d", &soNhap);

    printf("Ket qua: ");
    for (int i = soNhap; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");


    float a, b, x;

    printf("\n BAI 4: Giai phuong trinh bac 1 (ax + b = 0) \n");
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        x = -b / a;
        printf("Nghiem: x = %.2f\n", x);
    }

    int mang[] = {3, 17, 5, 42, 8, 99, 1};
    int kichThuoc = 7;
    int max;

    printf("\n=== BAI 5: Tim gia tri lon nhat ===\n");

    printf("Mang: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    max = mang[0]; // buoc 1: gia su [0] la max
    for (int i = 1; i < kichThuoc; i++) {
        // buoc 2: duyet tu [1] tro di
        if (mang[i] > max) {
            max = mang[i]; // buoc 3: cap nhat neu lon hon
        }
    }

    printf("Gia tri lon nhat: %d\n", max);


    int thu;

    printf("\n BAI 6: In thu trong tuan \n");
    printf("Nhap so tu 1 den 7: ");
    scanf("%d", &thu);

    switch (thu) {
        case 1:  printf("Thu Hai\n");   break;
        case 2:  printf("Thu Ba\n");    break;
        case 3:  printf("Thu Tu\n");    break;
        case 4:  printf("Thu Nam\n");   break;
        case 5:  printf("Thu Sau\n");   break;
        case 6:  printf("Thu Bay\n");   break;
        case 7:  printf("Chu Nhat\n");  break;
        default: printf("Nhap sai! Chi duoc nhap tu 1 den 7.\n"); break;
    }
    

    int soHang;
    long long S = 0;   // dung long long de chua so rat lon

    printf("\n=== BAI 7: Tinh tong S = 1 + 2 + ... + n ===\n");
    printf("Nhap n: ");
    scanf("%d", &soHang);

    for (int i = 1; i <= soHang; i++) {
        S = S + i;
    }

    printf("S = 1 + 2 + ... + %d = %lld\n", soHang, S);

    return 0;
}