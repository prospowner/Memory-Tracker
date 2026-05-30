// system memory tracker (shows all the memory assigned)
#include <iostream>
#include <string>

int main() {
    // Variable allocation
    std::string Name_user = "prospowner";
    int Age_user = 15;

    std::cout << "--- System Memory Allocation Tracker ---" << std::endl << std::endl;

    // Tracker Matrix for User Name
    std::cout << "[Variable: Name_user]" << std::endl;
    std::cout << "  Value:    " << Name_user << std::endl;
    std::cout << "  Address:  " << &Name_user << std::endl;
    std::cout << "  Capacity: " << sizeof(Name_user) << " bytes" << std::endl << std::endl;

    // Tracker Matrix for User Age
    std::cout << "[Variable: Age_user]" << std::endl;
    std::cout << "  Value:    " << Age_user << std::endl;
    std::cout << "  Address:  " << &Age_user << std::endl;
    std::cout << "  Capacity: " << sizeof(Age_user) << " bytes" << std::endl << std::endl;

    return 0;
}