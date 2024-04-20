#include <iostream>
#include <string>

int main() {
    std::string danhsachMSSV[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};

    // Con trỏ trỏ đến địa chỉ của mảng
    std::string *ptrArrayMSSV = danhsachMSSV;

    // Biến để giữ chỉ số của phần tử lớn nhất
    int maxIndex = 0;

    // Duyệt mảng để tìm phần tử lớn nhất
    for (int i = 0; i < 5; ++i) {
        if (danhsachMSSV[i] > danhsachMSSV[maxIndex]) {
            maxIndex = i;
        }
    }

    // In ra địa chỉ và phần tử lớn nhất
    std::cout << "Dia chi cua phan tu chua MSSV lon nhat la: " << (ptrArrayMSSV + maxIndex) << std::endl;
    std::cout << "Phan tu chua MSSV lon nhat la: " << *(ptrArrayMSSV + maxIndex) << std::endl;

    return 0;
}
