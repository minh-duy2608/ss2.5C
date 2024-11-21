#include <stdio.h>

int main() {
    //Khai bao v� khoi tao hai bien chieu dai v� chieu rong cua h�nh chu nhat
    float length = 5.0;  //Chieu dai cua h�nh chu nhat, gan gi� tri 5.0
    float width = 4.0;   //Chieu rong cua hinh chu nhat, gan gia tri 4.0

    //Tinh chu vi v� dien tich cua hinh chu nhat
    float perimeter = 2 * (length + width);  //Chu vi = 2 * (chieu dai + chieu rong)
    float area = length * width;             //Dien tich = chieu dai * chieu rong

    //In ket qua ra man hinh
    printf("Chieu dai cua hinh chu nhat la: %.2f\n", length);   //In ra chieu dai
    printf("Chieu rong cua hinh chu nhat la: %.2f\n", width);   //In ra chieu rong
    printf("Chu vi cua hinh chu nhat la: %.2f\n", perimeter);   //In ra chu vi
    printf("Dien tich cua hinh chu nhat la: %.2f\n", area);     //In ra dien tich

    return 0;
}
