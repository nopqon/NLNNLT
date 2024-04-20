#include <iostream>
#include <string>

int main() {
    std::string danhsachMSSV[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};

    // Hiển thị mảng trước khi nhập
    std::cout << "MSSV Array before input:" << std::endl;
    for (const auto& mssv : danhsachMSSV) {
        std::cout << mssv << std::endl;
    }

    // Yêu cầu người dùng nhập MSSV của họ vào phần tử đầu tiên bị rỗng của mảng
    std::cout << "Nhap MSSV cua ban vao phan tu dau tien cua mang: ";
    std::cin >> danhsachMSSV[0];

    // Hiển thị mảng sau khi nhập
    std::cout << "MSSV Array after input:" << std::endl;
    for (const auto& mssv : danhsachMSSV) {
        std::cout << mssv << std::endl;
    }

    return 0;
}
