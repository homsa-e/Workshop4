#include <iostream>

int main()
{
    int a, b, i, j;
    std::string ans;
    do {
        std::cin >> a >> b;
        for (i = 1; i <= a; i++){
            std::cout << "\t" << i;
        }
        std::cout << std::endl;
        for (j = 1; j <= a; j++) {
            std::cout << j;
            for (i = 1; i <= a; i++)
                std::cout << "\t" << (j * i) % b;
            std::cout << std::endl;
        }
        std::cout << "Do you want to rerun the program? Press 'Y' + Enter if yes, otherwise press any other key + Enter" << std::endl;
        std::cin >> ans;
    } while (ans == "y" || ans == "Y");
    return 0;
}
