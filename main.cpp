#include <iostream>

struct Bank_accaunt{
    int number_account{};
    std::string fist_name_owner;
    int ballans{};
};

void changing_ballans(Bank_accaunt &customer, int& new_ballans){
    customer.ballans = new_ballans;
}
int main() {

    int number_account;
    std::string fist_name_owner;
    int ballans;
    int new_ballans;

    std::cout << "Введите номер счёта: ";
    std::cin >> number_account;
    std::cout << "Введите имя владельца: ";
    std::cin >> fist_name_owner;
    std::cout << "Введите баланс: ";
    std::cin >> ballans;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_ballans;

    Bank_accaunt person1{number_account, fist_name_owner, ballans};
    changing_ballans(person1, new_ballans);

    std::cout << "Ваш счёт: " << person1.number_account << ", " << person1.fist_name_owner << ", "
    << person1.ballans << ", " << std::endl;
    return 0;
}
