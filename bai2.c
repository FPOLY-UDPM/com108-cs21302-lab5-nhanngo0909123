/******************************************************************************
 * Họ và tên: [Ngô Thanh Nhân]
 * MSSV:      [PS49576]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

// Hàm kiểm tra năm nhuận
int namNhuan(int nam) {
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1; // Là năm nhuận
    }
    return 0; // Không phải năm nhuận
}

int main() {
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (namNhuan(nam)) {
        printf("%d la nam nhuan", nam);
    } else {
        printf("%d khong phai nam nhuan", nam);
    }

    return 0;
}


         


