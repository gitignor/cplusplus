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

    float idealWeight = 0;
    char sex; // Объявляем переменную для определения юзера по половому признаку

    cout << "What is your sex? Press button 'w' if you are woman or 'm' if you are man" << endl;
    cin >> sex;
    if (sex == 'm') {
        idealWeight = height * height * 0.00227;
    }
    if (sex == 'w') {
        idealWeight = height * height * 0.00222;
    }

    float minWeight = idealWeight * (1.0 - TOLERANTS) ;
    float maxWeight = idealWeight * (1.0 + TOLERANTS );

    cout << "Your real weight is " <<realWeight <<" kg and your ideal weight shall be between (" <<minWeight << " - "<< maxWeight <<") kg\n";

    if (realWeight < minWeight) {
        cout << "Overview: You under ideal weight" << endl;
    }
    if ( (realWeight > minWeight) && (realWeight < maxWeight )){
         cout << "Overview: You have ideal weight" << endl;
    }
    if (realWeight > maxWeight) {
         cout << "Overview: You above ideal weight" << endl;
    }

    return 0;

}
