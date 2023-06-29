//#include <iostream>
//
//int main() {
//    const int months = 6;
//    int profits[months];
//    int totalProfit = 0;
//
//    for (int i = 0; i < months; ++i) {
//        std::cout << "Enter profit for month " << (i + 1) << ": ";
//        std::cin >> profits[i];
//        totalProfit += profits[i];
//    }
//
//    std::cout << "Total profit for 6 months: " << totalProfit << std::endl;
//
//    return 0;
//}


//#include <iostream>
//
//int main() {
//    const int size = 5;
//    int arr[size];
//    std::cout << "Enter " << size << " integers:" << std::endl;
//    for (int i = 0; i < size; ++i) {
//        std::cin >> arr[i];
//    }
//    std::cout << "Array in reverse order:" << std::endl;
//    for (int i = size - 1; i >= 0; --i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    const int sides = 5;
//    double lengths[sides];
//    double perimeter = 0;
//
//    std::cout << "Enter the lengths of the sides of the pentagon:" << std::endl;
//    for (int i = 0; i < sides; ++i) {
//        std::cout << "Enter length for side " << (i + 1) << ": ";
//        std::cin >> lengths[i];
//        perimeter += lengths[i];
//    }
//
//    std::cout << "Perimeter of the pentagon: " << perimeter << std::endl;
//
//    return 0;
//}

//#include <iostream>
//#include <climits>
//
//int main() {
//    const int months = 12;
//    int profits[months];
//    int maxProfit = INT_MIN;
//    int minProfit = INT_MAX;
//    int maxMonth = 0;
//    int minMonth = 0;
//    std::cout << "Enter the profit for each month:" << std::endl;
//    for (int i = 0; i < months; ++i) {
//        std::cout << "Enter profit for month " << (i + 1) << ": ";
//        std::cin >> profits[i];      
//        if (profits[i] > maxProfit) {
//            maxProfit = profits[i];
//            maxMonth = i + 1;
//        }    
//        if (profits[i] < minProfit) {
//            minProfit = profits[i];
//            minMonth = i + 1;
//        }
//    }
//    std::cout << "Month with the maximum profit: " << maxMonth << std::endl;
//    std::cout << "Month with the minimum profit: " << minMonth << std::endl;
//
//    return 0;
//}


