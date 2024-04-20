#include <iostream>
#include <string>

int main() {
    std::string danhsachMSSV[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};

    // In mảng theo thứ tự mặc định
    std::cout << "MSSV Array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << danhsachMSSV[i] << std::endl;
    }

    return 0;
}
