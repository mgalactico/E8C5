#include <iostream>
#include <vector>

int main() {
    unsigned int numberOfValues;
    std::vector<int> values = {};
    std::cout << "Please enter the number of values you want to sum: " << std::endl;
    std::cin >> numberOfValues;
    std::cout << "Please enter some integers (pres '|' to stop): " << std::endl;

/*  //To use this loop we need to declare the int j variable outside the loop. Within the for, the var ceases to exist on exit.
    int j;
    while (std::cin >> j) {
        //std::cin >> j;
        values.push_back(j);
    }
*/

    //Push values into vector. cin terminates when an int is not entered
    for (int j; std::cin >> j;) {
        values.push_back(j);
    }

    if (numberOfValues <= values.size()) { //Only move forward if the # of values to add is <= than values in vector.
        //Add up values from vector
        int sum = 0;
        for (unsigned int i = 0; i < numberOfValues; ++i) {
            sum += values[i];
        }
        std::cout << "The sum of the first " << numberOfValues << " numbers ( ";
        for (unsigned int i = 0; i < numberOfValues; ++i)
            std::cout << values[i] << " ";
        std::cout << ") is " << sum;
    } else {
        std::cout << "Can't add more values than submitted!";
        return 1;
    }



/*
    //Add up values from vector.
    //Same result as above, just cleaner IMO. Not practical for current goal.
    int sum = 0;
    for(int x : values)
        sum += x;
    std::cout << sum;
*/

    return 0;
}