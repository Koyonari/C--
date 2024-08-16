#include <iostream>

void bakePizza();
void bakePizza(std::string topping);

int main() {
    bakePizza();
    bakePizza("pepperoni");

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping) {
    std::cout << "Here is your " << topping << " pizza!\n";
}