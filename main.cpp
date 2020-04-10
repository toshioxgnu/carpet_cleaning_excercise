#include <iostream>
using namespace std;

int main() {
    float small_room = 25;
    float large_room = 35;
    float small_room_clean, large_room_clean;
    float taxes = 6.6;
    float sum, total;

    cout <<"Estimate for carpet cleaning service "<<endl;
    cout << "Number of small rooms : "; cin >> small_room_clean ; cout << endl;
    cout << "Number of large rooms : "; cin >> large_room_clean ; cout << endl;
    cout << "Price for small room : "<< small_room << endl;
    cout << "Price for large room : "<< large_room << endl;
    sum = (small_room_clean*small_room) + (large_room_clean*large_room);
    total = (sum * (taxes/100))+sum;
    cout << "Cost : $"<< sum <<endl;
    cout << "Tax:  $"<< taxes << endl ;
    cout << "=======================================" << endl;
    cout << "Total estimate: $"<<total<<endl;
    cout << "This is valid for 20 days "<<endl;
    return 0;
}
