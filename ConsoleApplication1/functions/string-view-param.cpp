#include <iostream>
#include <string_view>

static void sayTheName(std::string_view name) {
	std::cout << "name: " << name << std::endl;
}

int main() {
	std::string name{ "Waleed" };
	std::string_view myName{ "Waleed" };

	sayTheName(name);
	sayTheName(myName);
	sayTheName("Waleed");
}
