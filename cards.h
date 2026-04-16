#include <iostream>
using namespace std;
string base_cards[] = {"♠", "♥", "♦", "♣"};
struct Card
{
    int card;
    int suits;
};
string card_collection(int card){
    string over_char[] = {"10", "J", "Q", "K", "A"};
    if(card > 9){
        return over_char[card - 10];
    }else{
        return to_string(card);
    }
    return "QWE";
}
void print_C(Card card_1, Card card_2){
    

    cout << "╔═════╗" << "  " << "╔═════╗\n";

    cout << "║" << card_collection(card_1.card);
    if(card_1.card == 10){cout <<"  ";} else{cout <<"   ";} cout << base_cards[card_1.suits % 4] <<"║  ║" << card_collection(card_2.card);
    if(card_2.card == 10){cout <<"  ";} else{cout <<"   ";} cout << base_cards[card_2.suits % 4] << "║" << endl;
    cout << "║     ║  ║     ║\n";

    cout << "║" << base_cards[card_1.suits % 4];
    if(card_1.card == 10){cout <<"  ";} else{cout <<"   ";} cout << card_collection(card_1.card) <<"║  ║" << base_cards[card_2.suits % 4];
    if(card_2.card == 10){cout <<"  ";} else{cout <<"   ";} cout << card_collection(card_2.card) << "║";

    cout << "\n╚═════╝" << "  " << "╚═════╝";
}
void print_C(Card card_1, Card card_2, Card card_3, Card card_4){

    cout << "╔═════╗" << "  " << "╔═════╗" << "  " << "╔═════╗" << "  " << "╔═════╗\n";
    
    cout << "║" << card_collection(card_1.card);
    if(card_1.card == 10){cout <<"  ";} else{cout <<"   ";} cout << base_cards[card_1.suits % 4] <<"║  ║" << card_collection(card_2.card);
    if(card_2.card == 10){cout <<"  ";} else{cout <<"   ";} cout << base_cards[card_2.suits % 4] << "║  ║" << card_collection(card_3.card);
    if(card_3.card == 10){cout <<"  ";} else{cout <<"   ";} cout << base_cards[card_3.suits % 4] <<"║  ║" << card_collection(card_4.card);
    if(card_4.card == 10){cout <<"  ";} else{cout <<"   ";} cout << base_cards[card_4.suits % 4] << "║" << endl;
    cout << "║     ║  ║     ║  ║     ║  ║     ║\n";
    cout << "║" << base_cards[card_1.suits % 4];
    if(card_1.card == 10){cout <<"  ";} else{cout <<"   ";} cout << card_collection(card_1.card)  <<"║  ║" << base_cards[card_2.suits % 4];
    if(card_2.card == 10){cout <<"  ";} else{cout <<"   ";} cout <<  card_collection(card_2.card) << "║  ║" << base_cards[card_3.suits % 4];
    if(card_3.card == 10){cout <<"  ";} else{cout <<"   ";} cout << card_collection(card_3.card) <<"║  ║" << base_cards[card_4.suits % 4];
    if(card_4.card == 10){cout <<"  ";} else{cout <<"   ";} cout << card_collection(card_4.card) << "║";
    cout << "\n╚═════╝" << "  " << "╚═════╝" << "  " << "╚═════╝" << "  " << "╚═════╝";
}
// ╔═════╗
// ║A   ♠║ print_C(14,0)
// ║     ║
// ║♠   A║
// ╚═════╝ 
