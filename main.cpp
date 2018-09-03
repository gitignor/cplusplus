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
#include <cmath>

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

    const float realWeightForPrint = realWeight; // Приравнял к константе, т.к. при введени строки отличной от "w", "W", "m", "M" (этой версии в коде нет, с исполшьзованием putchar tolower - не заработала, оставил только рабочий код, инициализацию переменной не стал менять), к примеру, Man - переменная меняет значение

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
        printf("Bye!\n");
        terminate(); // Завершаем процесс, если были указаны не w или n (W,N)
    }
    float minWeight = idealWeight * (1.0 - TOLERANTS);
    float maxWeight = idealWeight * (1.0 + TOLERANTS);

    cout << "\nYour real weight is " << realWeightForPrint <<" kg and your ideal weight shall be between (" << minWeight << " - "<< maxWeight <<") kg\n";

    if (realWeightForPrint < minWeight) {
        cout << "\nOverview: You under ideal weight\n" << endl;
    }
    if ( (realWeightForPrint > minWeight) && (realWeightForPrint < maxWeight )){
         cout << "\nOverview: You have ideal weight\n" << endl;
    }
    if (realWeightForPrint > maxWeight) {
         cout << "\nOverview: You above ideal weight\n" << endl;
    }

    return 0;

}
