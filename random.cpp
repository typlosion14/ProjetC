#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


float random(int start, int end) {
    srand(time(NULL));
    int number = rand() % end + start;
    float decimal = (rand() % 100 + 1);
    decimal = decimal / 100;
    float random_value = number + decimal;

    return random_value;
}
int rdmvit(int start, int end) {
    srand(time(NULL));
    return rand() % end + start;
}