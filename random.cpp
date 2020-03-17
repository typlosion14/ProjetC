#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int random(int start, int end) {
    srand(time(NULL));
    int number = rand() % end + start;
    float decimal = (rand() % 100 + 1);
    decimal = decimal / 100;
    float random_value = number + decimal;

    return random_value;
}
int random(int st)

