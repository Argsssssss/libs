#include <iostream>
using namespace std;
string card_collection(int card){
    string over_char[] = {"10", "J", "Q", "K", "A"};
    if(card > 9){
        return over_char[card - 10];
    }else{
        return to_string(card);
    }
    return "QWE";
}
void print_C(int card, int suits){
    string base_cards[] = {"♠", "♥", "♦", "♣"};
    cout << "╔═════╗\n║" << card_collection(card);
    if(card == 10){
        cout <<"  ";
    }
    else{
        cout <<"   ";
    }
    cout << base_cards[suits % 4] <<"║\n║     ║\n║"<< base_cards[suits % 4];
    if(card == 10){
        cout <<"  ";
    }
    else{
        cout <<"   ";
    }
    cout <<  card_collection(card)  <<"║\n╚═════╝";
}
// ╔═════╗
// ║A   ♠║ print_C(14,0)
// ║     ║
// ║♠   A║
// ╚═════╝ 
