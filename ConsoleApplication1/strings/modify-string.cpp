#include <iostream>
#include <string>

int main() {
	std::cout << std::endl;

	std::cout << "Modifying String" << std::endl;
	std::cout << std::endl;

	/*
		The std::string::clear() will removes all the characters
		in the string and make it empty
	*/

	std::string str1{ "The Lion King" };
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str1 size: " << str1.size() << std::endl;
	std::cout << "str1 capacity: " << str1.capacity() << std::endl;

	std::cout << std::endl;
	std::cout << "clearing..." << std::endl;
	std::cout << std::endl;

	str1.clear(); // Clear the string

	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str1 size: " << str1.size() << std::endl;
	std::cout << "str1 capacity: " << str1.capacity() << std::endl;
	std::cout << std::endl;

	/*
		We can use std::string::insert() to insert a character
		or string
	*/

	std::cout << "std::string::insert()" << std::endl;
	std::string str2{ "122" };

	std::cout << "str2: " << str2 << std::endl;

	/*
		@param1: Index where we want to add a character
		@param2: How many character we want to add
		@param3: The character which we want to add
	*/
	str2.insert(1, 1, '3');

	std::cout << "str2 after insert: " << str2 << std::endl;
	std::cout << std::endl;

	// We can also insert c-string
	std::string str3{ "Hello" };
	const char* str4{ " World" };

	str3.insert(5, str4);

	std::cout << "str3: " << str3 << std::endl;


	std::cout << std::endl;
}
