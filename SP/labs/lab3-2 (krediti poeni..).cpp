//Да се напише програма која ќе оцени студенти според нивните академски постигнувања. Програмата треба да ги изврши следниве задачи
//1. Проверка на условите:
// - Програмата проверува дали внесените податоци се валидни и дали студентот има повеќе од 100 кредити и просек поголем од 8. Ако се исполнети тогаш:
//   -- Предвидени кредити се пресметуваат како ( 2023 - година на запишување ) х 60
//   -- Поени се пресметуваат како:  поени = ( број на кредити / предвидени кредити ) х 10 + ( просек - 8.5 ) х 6.5
//   -- Доколку студентот има повеќе од 240 кредити, се прикажува "Needs to graduate!" како дополнителна информација.
//      Ако просекот е поголем од 9 се прикажува "Great student!" како дополнителна информација.
//   -- Во спротивно, ако условите не се исполнети, програмата поставува вредност на поените на 0.
// Од стандарден влез се читаат број на кредити (цел број), година на запишување (2010-2023) и просек (децимален број)
// Да се испечатат поените на студентот и соодветната дополнителна порака доколку е потребно

// input              output
// 174 2020 9.38      Great student! Points: 15.3867
// 120 2021 8.9       Points: 12.6
// 244 2019 9.0       Needs to graduate! Points: 13.4167
// 180 2020 7.9       Points: 0

#include <iostream>
using namespace std;
int main() {
    int krediti, godinaNaZapishuvanje, predvideniKrediti;
    float prosek, poeni;
    cin >> krediti >> godinaNaZapishuvanje >> prosek;
    if ( krediti < 100 && prosek < 8 ){
        poeni = 0;
    }
    else if ( krediti >= 100 && prosek >= 8 ){
        predvideniKrediti = ( 2023 - godinaNaZapishuvanje ) * 60;
        poeni = ( (float) krediti / predvideniKrediti ) * 10 + ( prosek - 8.5 ) * 6.5;
    }
    if ( krediti > 240 ){
        cout << "Needs to graduate! ";
    }
    if ( prosek > 9 ){
        cout << "Great student! ";
    }

    cout << "Points: " << poeni;

return 0;
}


