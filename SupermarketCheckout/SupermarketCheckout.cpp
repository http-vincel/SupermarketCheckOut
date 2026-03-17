
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    
    system("title Supermarket CheckOut");
    
    
    cout << "Supermarket CheckOut" << endl;
    cout << "--------------------" << endl;
    
    double x = 1;
    double sum = 0.0;
    
    while (x != 0)
    {
        cout << "Price: " << endl;
        cin >> x;
        cout << "Price Entered: " << x << "$" << endl;
        cout << endl;
        
        sum += x;
    }
    
    
    cout << "" << endl;
    cout << fixed << setprecision(2);
    cout << "Total: " << sum + (sum * 0.22)<< endl;
    double total = sum + (sum * 0.22);
    
    cout << endl;
    
    char letter;
    cout << "Do you want to apply discount [Y/N]: " << endl;
    cin >> letter;
    
    if (letter == 'Y' || letter == 'y')
    {
        int coupon = 5;
        int quest;
        cout << endl;
        cout << "[1] Dynamic Discount OR [2] Coupon" << endl;
        cin >> quest;
        if (quest == 1)
        {
            cout << endl;
            cout << fixed << setprecision(2);
        
            double percentage; 
            cout << "Enter discount percentage (e.g. 20 for 20%): " << endl;
            cin >> percentage;
        
            double discountValue = (total * percentage) / 100;
        
            double finalTotal = total - discountValue;

            cout << "Discount applied! You saved: " << discountValue << "$" << endl;
            cout << "Final Total to pay: " << finalTotal << "$" << endl;
        } else if (quest == 2)
        {
            double couponValue = 0;

            if (total >= 150) {
                couponValue = 15;
            } else if (total >= 100) {
                couponValue = 10;
            } else if (total >= 50) {
                couponValue = 5;
            } else {
                couponValue = 0;
                cout << "Unfortunately you have not reached the minimum threshold for the coupon." << endl;
            }

            double finalTotal = total - couponValue;
    
            cout << "Discount applied based on spending: " << couponValue << "$" << endl;
            cout << "Total: " << finalTotal << "$" << endl;
        }
        
    } else if (letter == 'N' || letter == 'n')
    {
        cout << fixed << setprecision(2);
        cout << "Total: " << sum + (sum * 0.22)<< endl;
    }
        
    
    
    system("pause");
    
    
    
    return 0;
}
