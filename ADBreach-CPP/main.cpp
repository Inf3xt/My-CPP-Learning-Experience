/* 
MIT License

Copyright (c) 2022 Inf3xt

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

=================================================================================

This file will hopefully allow me to excel in my current C++ understanding.
I am remaking my tool I made in Python and porting it to this beautiful language.

Enjoy some code that will make you cringe. :D

Note: As Python and C++ are different languages, their packages are different ofc.
It will NOT be an exact clone, it will be a sort of a remake in this.

TODO:
- port this to js
- port this to c#

*/

#include <iostream>
#include <string.h>
#include <Windows.h>

// system command as easy as: 
// system("ls | grep -i *.cpp")

class Colour { // mastered classes now, look at me go 😂
    /*
        Every great hacking tool has to have colours and.. wait for it, ASCII Art
    */
    
    public:
        std::string red = "[31m";
        std::string green = "[32m";
        std::string yellow = "[33m";
        std::string blue = "[34m";
        std::string magenta = "[35m";
        std::string cyan = "[36m";
        std::string normal = "[37m";
};
class ADBreach {
    public:
        bool start_server() {
            system("adb start-server");
            return true;
        }
};


int main() {
    Colour colour;
    ADBreach adbreach;
    if (adbreach.start_server()) {
        std::cout << "Server has been started " << colour.green << "successfully!" << std::endl; 
    }
 
}