#include <iostream>
#include <map>
#include <string>


int main(){
    std::map<int, std::string> months;
    months.insert(std::make_pair(1, "January"));
    months.insert(std::make_pair(2, "February"));
    months.insert(std::make_pair(3, "March"));
    months.insert(std::make_pair(4, "April"));
    months.insert(std::make_pair(5, "May"));
    months.insert(std::make_pair(6, "June"));
    months.insert(std::make_pair(7, "July"));
    months.insert(std::make_pair(8, "August"));
    months.insert(std::make_pair(9, "September"));
    months.insert(std::make_pair(10, "October"));
    months.insert(std::make_pair(11, "November"));
    months.insert(std::make_pair(12, "December"));

    // Access elements using the key
    for (const auto& kv : months) {
        std::cout << "Month " << kv.first << ": " << kv.second << std::endl;
    }
    return 0;
}