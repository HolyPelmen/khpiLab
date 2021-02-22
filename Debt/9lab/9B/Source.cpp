#include <iostream>
#include <map>
#include "Name.h"
#include "Number.h"
#include <memory>
#include <vector>

int main() {

    std::unique_ptr<std::map<Name, Number>> phoneBook(new std::map<Name, Number>);
    
    *phoneBook.get() = {
        {Name("John", "Smith"), Number("+80981234142")},
        {Name("Eva", "Braun"), Number("+1413458124")},
        {Name("Erwin", "Rommel"), Number("+8812443512")},
        {Name("Charles", "Darwin"), Number("+99124786762")}
    };
    
    auto t = phoneBook.get()->begin();

    for (int i = 0; t != phoneBook.get()->end(); ++i, ++t) {
        std::cout << "Person: " << t->first << " - Number: " << t->second.getNumber() << std::endl << std::endl;
    }
    
    std::string nameSearch;
    std::cout << "Enter founded name > "; std::cin >> nameSearch; std::cout << std::endl;
    
    t = phoneBook.get()->begin();
    std::unique_ptr<Name> temp(new Name(nameSearch, "name"));
    for (int i = 0; t != phoneBook.get()->end(); ++i, ++t)
    {
        if (t->first == *temp) {
            std::cout << "Person: " << t->first << " - Number: " << t->second.getNumber() << std::endl << std::endl;
        }
    }


    return 0;
}
