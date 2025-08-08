// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 1024;
    bool gamePaused = true;
    char action = 'w';

    if (score < 100)
        std::cout << "Your score is over 1000." << std::endl;

    if (score % 2) //0 is false in expressions
        std::cout << "Your score is odd." << std::endl;

    else
        std::cout << "Your score is even." << std::endl;

    std::cout << "The action '" << action << "' is ";
    if (action != 'a' && action != 'w' && 
        action != 'd' && action != 's')
        std::cout << "not ";
    std::cout << "a movement key." << std::endl;

    if(gamePaused)
        std::cout << "The game is paused." << std::endl;
    else
        std::cout << "The game is not paused!" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
