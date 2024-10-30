#include <iostream>
#include <string>

int main() {
	std::string name;
	
	std::cout << "Say my name:";
	std::getline(std::cin, name);

	std::cout << "Your name: " << name << ". You're goddamn right!" << std::endl;

	return 0;
}
