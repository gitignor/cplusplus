/*
 *Homework Aleksei Nikiforov TARgv17 (old name 2TARvg)
 *
 * send home work to aleksandr.bobyrev@tthk.ee
 * домашнее задание:
 *
 * расчет идеального веса на основе пола, и роста
 * запростиь реальный вес, и вывести заключение, вес ниже / выеше иди идеальны
 *
 * Идеальный вес для женщин = Рост * Рост * 0.00222
 * Идеальный вес для мужчин = Рост * Рост * 0.00227
 *
 * толерантность веса - 10% (+ / - 5%)
 *
 *
 *
 *
 * */

#include "iostream"
#include "string"

#define TOLERANTS 0.05
using namespace std;

// main - главная функция
int main()
{
    // вывод на консоль
    cout << "Hello user \n";
    cout << "What is your heigth in cm? " << endl;

    unsigned short int height = 0;

    cin >> height;
    cout << "What is your weight in kg? " << endl;

    float realWeight;

    cin >> realWeight;

    float idealWeight;
    char sex; // Объявляем переменную для определения юзера по половому признаку

    cout << "What is your sex? Press button 'w' if you are woman or 'm' if you are man" << endl;
    cin >> sex;

    if ((sex == 'w') || (sex == 'W')) {
        idealWeight = height * height * 0.00222;
        cout << "\nYou are woman" << endl;
    }

    else if ((sex == 'm') || (sex == 'M'))  {
        idealWeight = height * height * 0.00227;
        cout << "\nYou are man" << endl;
    } else {
        cout << "\nYou are not human" << endl;
        cout << "Bye!\n";
        return 0;
    }
    float minWeight = idealWeight * (1.0 - TOLERANTS);
    float maxWeight = idealWeight * (1.0 + TOLERANTS);

    cout << "\nYour real weight is " << realWeight <<" kg and your ideal weight shall be between (" << minWeight << " - "<< maxWeight <<") kg\n";

    if (realWeight < minWeight) {
        cout << "\nOverview: You under ideal weight\n" << endl;
    }
    if ( (realWeight > minWeight) && (realWeight < maxWeight )){
         cout << "\nOverview: You have ideal weight\n" << endl;
    }
    if (realWeight > maxWeight) {
         cout << "\nOverview: You above ideal weight\n" << endl;
    }

    return 0;

}

/*
 * Второй вариант
 *
// main - главная функция
int main()
{
    // вывод на консоль
    cout << "Hello user \n";
    cout << "What is your heigth in cm? " << endl;

    unsigned short int height = 0;

    cin >> height;
    cout << "What is your weight in kg? " << endl;

    float realWeight;

    cin >> realWeight;

    float idealWeight;
    string sex; // Объявляем переменную для определения юзера по половому признаку

    cout << "What is your sex? Press button 'w' if you are woman or 'm' if you are man" << endl;
    cin >> sex;
    //cout << "Sex is : " << sex << " first char is ["<<sex[0]<<"] \n";

    char sexFirstLetter = putchar (tolower(sex[0]));

    if (sexFirstLetter == 'w') {
        idealWeight = height * height * 0.00222;
        cout << "\nYou are woman" << endl;
    }

    else if (sexFirstLetter == 'm')  {
        idealWeight = height * height * 0.00227;
        cout << "\nYou are man" << endl;
    } else {
        cout << "\nYou are not human" << endl;
        cout << "Bye!\n";
        return 0;
    }
    float minWeight = idealWeight * (1.0 - TOLERANTS);
    float maxWeight = idealWeight * (1.0 + TOLERANTS);

    cout << "\nYour real weight is " << realWeight <<" kg and your ideal weight shall be between (" << minWeight << " - "<< maxWeight <<") kg\n";

    if (realWeight < minWeight) {
        cout << "\nOverview: You under ideal weight\n" << endl;
    }
    if ( (realWeight > minWeight) && (realWeight < maxWeight )){
         cout << "\nOverview: You have ideal weight\n" << endl;
    }
    if (realWeight > maxWeight) {
         cout << "\nOverview: You above ideal weight\n" << endl;
    }

    return 0;

}

*/
