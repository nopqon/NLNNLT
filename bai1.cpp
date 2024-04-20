#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> mssvArray = {"", "2301CT1234", "2302CT3456", "", "2305CT3999", "2304CT0002"};
    
    // In ra mảng sau khi khởi tạo
    std::cout << "MSSV Array: ";
    for (const auto& mssv : mssvArray) {
        std::cout << mssv << " ";
    }
    std::cout << std::endl;

    return 0;
}
