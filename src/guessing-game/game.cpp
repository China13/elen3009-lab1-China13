#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned) time(0));

    unsigned int random_num = 1 + (rand() % 100);

    unsigned int guess_num;

    auto counter = 3u;
    cout << random_num << endl;
    do{
        cout << "Guess the number between 1 - 100." << endl;
        cin >> guess_num;

        if(guess_num == random_num)
        {
            cout << "You win!" << endl;
            return 0;
        }else if(guess_num < random_num){
            cout << "Guess Higher!" << endl;
        }else if(guess_num > random_num){
            cout << "Guess Lower!" << endl;
        }
        cout << endl;
        counter--;
    }while((guess_num != random_num) && (counter != 0));

        cout << "You lose!" << endl;
    return 0;
}
//
