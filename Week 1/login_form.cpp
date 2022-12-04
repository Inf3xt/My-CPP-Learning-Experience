#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string username;
    std::string password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Now your password: ";
    std::cin >> password;
    if (username == "Hello" && password == "World") { // see what i did there ;)
        std::cout << "Welcome to this shit app." << std::endl;
    } else {
        std::cout << "Welp. That's wrong." << std::endl;
    }
    return 0;
}