#include <iostream>
#include <string>

// Hàm để hoán đổi hai chuỗi
void swap(std::string& a, std::string& b) {
    std::string temp = a;
    a = b;
    b = temp;
}

// Hàm sắp xếp mảng MSSV theo yêu cầu
void bubbleSort(std::string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Lấy phần số thứ tự của MSSV
            int mssv1 = std::stoi(arr[j].substr(0, 4));
            int mssv2 = std::stoi(arr[j + 1].substr(0, 4));
            
            // Nếu phần số thứ tự hai MSSV khác nhau, sắp xếp tăng dần
            if (mssv1 > mssv2) {
                swap(arr[j], arr[j + 1]);
            }
            // Nếu phần số thứ tự hai MSSV bằng nhau, sắp xếp theo phần đuôi
            else if (mssv1 == mssv2) {
                int num1 = std::stoi(arr[j].substr(8, 4));
                int num2 = std::stoi(arr[j + 1].substr(8, 4));
                if (num1 > num2) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
}

int main() {
    std::string danhsachMSSV[5] = {"2301CT1234", "2305CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};
    int n = sizeof(danhsachMSSV) / sizeof(danhsachMSSV[0]);

    // In mảng ban đầu
    std::cout << "MSSV Array before sorting:" << std::endl;
    for (const auto& mssv : danhsachMSSV) {
        std::cout << mssv << std::endl;
    }

    // Sắp xếp mảng
    bubbleSort(danhsachMSSV, n);

    // In mảng sau khi sắp xếp
    std::cout << "\nMSSV Array after sorting:" << std::endl;
    for (const auto& mssv : danhsachMSSV) {
        std::cout << mssv << std::endl;
    }

    return 0;
}
