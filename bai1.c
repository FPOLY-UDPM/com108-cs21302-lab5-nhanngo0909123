/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>
int Max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Số lớn nhất trong 3 số %d, %d, %d là: %d\n", a, b, c, max);
    return max;
}
int main() {
    int a, b, c;
    printf("Nhập số thứ nhất: ");
    scanf("%d", &a);
    printf("Nhập số thứ hai: ");
    scanf("%d", &b);
    printf("Nhập số thứ ba: ");
    scanf("%d", &c);
    Max3(a, b, c);
    return 0;
}