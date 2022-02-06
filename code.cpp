#include <iostream>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int count){
    std::cout << "You previous guesses:" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << array[i] << "  ";
    }
    std::cout << "\n";
}

void play_game(){
    int guesses[250];
    int guess_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a numebr! " << std::endl;
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses[guess_count++] = guess;
        if (guess == random){
            std::cout << "You win!" << std::endl;
            break;
        }
        else if (guess < random)
        {
            std::cout << "To low \nGuess again!" << std::endl;
        }
        else {
            std::cout << "To high! \nGuess again!" << std::endl;
        }
        
    }
    print_array(guesses, guess_count);
    
}
int main(){
    srand(time(NULL));
    int choice;

    do
    {
        std::cout << "Quit = 0 \nPlay = 1\n";
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "End Game" << std::endl;
            break;
        case 1:
            std::cout << "Lets play!" << std::endl;
            play_game();
            break;

        }
    }
    while(choice != 0);
}
