#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

void showBrands();
void showItems(int brandChoice);
void showSizes(int brandChoice, string item);
void showCart(string brand, string category, string item, string size, double price, int quantity);
void applyDiscountWrapper(double& totalAmount, double& discountAmount);
void processPayment(double totalAmount, double& paymentAmount, double& change);
void summary(int totalItems, double totalAmount, double paymentAmount, double change, double discountAmount);

int main() {
    int choice, brandChoice, itemChoice, sizeChoice, quantity;
    double totalAmount = 0, itemPrice = 0;
    int totalItems = 0;
    string brand, category, item, size;
    bool shopping = true, firstTime = true, discountApplied = false;
    double paymentAmount = 0, change = 0, discountAmount = 0;

    cout<<"\n          BBBB              BBBB  BBBBBBBB  BBBBB          BBBBBBBBB    BBBBBB      BBBBBB         BBBBBB  BBBBBBBB         BBBBBBBBBBBB   BBBBBB      ";                                                 
    cout<<"\n           BBBB     BBB    BBBB   BBBB      BBBBB        BBBBBB       BB      BB    BBBBB B       B BBBBB  BBB                  BBBB     BB      BB    "; 
    cout<<"\n            BBBB   BBBBB  BBBB    BBBB      BBBBB       BBBBB        BBB      BBB   BBBBB  B     B  BBBBB  BBB                  BBBB    BBB      BBB     "; 
    cout<<"\n             BBBB BBB BBB BBB     BBBBBBBB  BBBBB       BBBBB        BBB      BBB   BBBBB   B   B   BBBBB  BBBBBBBB             BBBB    BBB      BBB     ";
    cout<<"\n              BBBBBBB BBBBBB      BBBB      BBBBB       BBBBBBB       BB      BB    BBBBB    B B    BBBBB  BBB                  BBBB     BB      BB    ";
    cout<<"\n                BB0B   BBBB       BBBB      BBBBBBBBBB   BBBBBBB       BB    BB     BBBBB     B     BBBBB  BBB                  BBBB      BB    BB   ";
    cout<<"\n                 BB     BB        BBBBBBBB  BBBBBBBBBB     BBBBBBBBB    BBBBBB      BBBBB           BBBBB  BBBBBBBB             BBBB       BBBBBB";
    cout <<"\n";
    cout << "\n                                    BBBBBBBBBBBB   BBBBBBBBBBBB     SSSSSSSSSS   HHHHH   HHHHH     OOOOOOO    PPPPPPPPPPPP ";
    cout << "\n                                    BBB      BBBB  BBB      BBBB   SSS           HHHHH   HHHHH   OO       OO  PPP      PPP ";
    cout << "\n                                    BBB      BBBB  BBB      BBBB   SSS           HHHHH   HHHHH  OOO       OOO PPP      PPP ";
    cout << "\n                                    BBBBBBBBBBBB   BBBBBBBBBBBB     SSSSSSSSS    HHHHHHHHHHHHH  OOO       OOO PPPPPPPPPPPP ";
    cout << "\n                                    BBB      BBBB  BBB      BBBB           SSS   HHHHH   HHHHH   OO       OO  PPP          ";
    cout << "\n                                    BBB      BBBB  BBB      BBBB   SSS      SS   HHHHH   HHHHH    OO     OO   PPP          ";
    cout << "\n                                    BBBBBBBBBBBB   BBBBBBBBBBBB     SSSSSSSSS    HHHHH   HHHHH     OOOOOOO    PPP          " << endl;

    while (shopping) {
        if (firstTime) {
            cout << "\nWould you like to start shopping? \n(1) Yes (2) No: ";
            cin >> choice;
            if (choice == 2) {
                cout << "Are you sure you want to exit? \n(1) Start Shopping (2) Proceed to exit: ";
                cin >> choice;
                if (choice == 2) {
                    cout << "Thank you! Visit again!" << endl;
                    break;
                } else if (choice != 1) {
                    cout << "Invalid choice! Please select 1 or 2.\n";
                    continue;
                }
            }
            firstTime = false; 
        }

        showBrands();
        cin >> brandChoice;
        switch (brandChoice) {
            case 1: brand = "Penshoppe"; category = "Clothing"; break;
            case 2: brand = "Oxygen"; category = "Accessories"; break;
            case 3: brand = "Bench"; category = "Clothing"; break;
            default:
                cout << "Invalid choice! Please choose a valid brand.\n";
                continue;
        }

        showItems(brandChoice);
        cin >> itemChoice;
        switch (brandChoice) {
            case 1: 
                if (itemChoice == 1) item = "Polo";
                else if (itemChoice == 2) item = "Shirt";
                else if (itemChoice == 3) item = "Jacket";
                else {
                    cout << "Invalid choice! Please select a valid item.\n";
                    continue;
                }
                break;
            case 2:  
                if (itemChoice == 1) item = "Perfume";
                else if (itemChoice == 2) item = "Caps";
                else if (itemChoice == 3) item = "Wallets";
                else {
                    cout << "Invalid choice! Please select a valid item.\n";
                    continue;
                }
                break;
            case 3:  
                if (itemChoice == 1) item = "Graphic T-Shirts";
                else if (itemChoice == 2) item = "Hoodie Jacket";
                else if (itemChoice == 3) item = "Pants";
                else {
                    cout << "Invalid choice! Please select a valid item.\n";
                    continue;
                }
                break;
        }

     
        showSizes(brandChoice, item);
        cin >> sizeChoice;

        if (brandChoice == 1) { 
            if (item == "Polo" || item == "Shirt") {
                if (sizeChoice == 1) { size = "Small"; itemPrice = 199; }
                else if (sizeChoice == 2) { size = "Medium"; itemPrice = 299; }
                else if (sizeChoice == 3) { size = "Large"; itemPrice = 399; }
            } else if (item == "Jacket") {
                if (sizeChoice == 1) { size = "Small"; itemPrice = 399; }
                else if (sizeChoice == 2) { size = "Medium"; itemPrice = 499; }
                else if (sizeChoice == 3) { size = "Large"; itemPrice = 599; }
            }
        } else if (brandChoice == 2) { 
            if (item == "Perfume") {
                if (sizeChoice == 1) { size = "15 ML"; itemPrice = 129; }
                else if (sizeChoice == 2) { size = "20 ML"; itemPrice = 145; }
                else if (sizeChoice == 3) { size = "25 ML"; itemPrice = 169; }
            } else if (item == "Caps") {
                if (sizeChoice == 1) { size = "Small"; itemPrice = 199; }
                else if (sizeChoice == 2) { size = "Medium"; itemPrice = 249; }
                else if (sizeChoice == 3) { size = "Large"; itemPrice = 289; }
            } else if (item == "Wallets") {
                if (sizeChoice == 1) { size = "Bi-fold Wallet"; itemPrice = 299; }
                else if (sizeChoice == 2) { size = "Coin Purse"; itemPrice = 179; }
                else if (sizeChoice == 3) { size = "Puffer Wallet"; itemPrice = 269; }
            }
        } else if (brandChoice == 3) { 
            if (item == "Graphic T-Shirts") {
                if (sizeChoice == 1) { size = "Small"; itemPrice = 305; }
                else if (sizeChoice == 2) { size = "Medium"; itemPrice = 358; }
                else if (sizeChoice == 3) { size = "Large"; itemPrice = 405; }
            } else if (item == "Hoodie Jacket") {
                if (sizeChoice == 1) { size = "Small"; itemPrice = 290; }
                else if (sizeChoice == 2) { size = "Medium"; itemPrice = 300; }
                else if (sizeChoice == 3) { size = "Large"; itemPrice = 350; }
            } else if (item == "Pants") {
                if (sizeChoice == 1) { size = "Small/Medium"; itemPrice = 350; }
                else if (sizeChoice == 2) { size = "Large"; itemPrice = 400; }
            }
        }

        if (itemPrice == 0) {
            cout << "Invalid size! Please select again.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        
        while (quantity <= 0) {
            cout << "Invalid quantity! Please enter a quantity greater than zero: ";
            cin >> quantity;
        }

        double itemTotalPrice = itemPrice * quantity;
        totalAmount += itemTotalPrice;

        showCart(brand, category, item, size, itemTotalPrice, quantity);
        totalItems += quantity;

        cout << "\nWould you like to add more? (1) Yes (2) No: ";
        cin >> choice;
        if (choice == 2) {
            if (!discountApplied) {
                applyDiscountWrapper(totalAmount, discountAmount);
                discountApplied = true;
            }

            processPayment(totalAmount, paymentAmount, change);
            summary(totalItems, totalAmount, paymentAmount, change, discountAmount);
            
            cout << "Are you sure you don't want to add more? \n (1) Add more (2) Proceed to exit: ";
            cin >> choice;
            if (choice == 1) {
                shopping = true;
            } else if (choice == 2) {
                cout << "\nPress Enter to exit...";
                cin.ignore();
                cin.get();
                shopping = false;  
            } else {
                cout << "Invalid choice! Please enter again.";
            }
        }
    }
    return 0;
}

void showBrands() {
    cout << "\nChoose a brand:\n";
    cout << "1. Penshoppe\n2. Oxygen\n3. Bench\n";
    cout << "Enter your choice: ";
}

void showItems(int brandChoice) {
    cout << "\nChoose an item:\n";
    if (brandChoice == 1) {
        cout << "1. Polo\n2. Shirt\n3. Jacket\n";
    } else if (brandChoice == 2) {
        cout << "1. Perfume\n2. Caps\n3. Wallets\n";
    } else if (brandChoice == 3) {
        cout << "1. Graphic T-Shirts\n2. Hoodie Jacket\n3. Pants\n";
    }
    cout << "Enter your choice: ";
}

    void showSizes(int brandChoice, string item) {
    cout << fixed << setprecision(2);
    if (brandChoice == 1) { 
        if (item == "Polo" || item == "Shirt") {
            cout << "\n1. Small - P199.00\n2. Medium - P299.00\n3. Large - P399.00\n";
        } else if (item == "Jacket") {
            cout << "\n1. Small - P399.00\n2. Medium - P499.00\n3. Large - P599.00\n";
        }
    } else if (brandChoice == 2) { 
        if (item == "Perfume") {
            cout << "\n1. 15 ML - P129.00\n2. 20 ML - P145.00\n3. 25 ML - P169.00\n";
        } else if (item == "Caps") {
            cout << "\n1. Small - P199.00\n2. Medium - P249.00\n3. Large - P289.00\n";
        } else if (item == "Wallets") {
            cout << "\n1. Bi-fold Wallet - P299.00\n2. Coin Purse - P179.00\n3. Puffer Wallet - P269.00\n";
        }
    } else if (brandChoice == 3) { 
        if (item == "Graphic T-Shirts") {
            cout << "\n1. Small - P305.00\n2. Medium - P358.00\n3. Large - P405.00\n";
        } else if (item == "Hoodie Jacket") {
            cout << "\n1. Small - P290.00\n2. Medium - P300.00\n3. Large - P350.00\n";
        } else if (item == "Pants") {
            cout << "\n1. Small/Medium - P350.00\n2. Large - P400.00\n";
        }
    }
    cout << "Enter your choice: ";
}

void showCart(string brand, string category, string item, string size, double price, int quantity) {
    cout << "\n--- Cart Summary ---\n";
    cout << "Brand: " << brand << "\n";
    cout << "Category: " << category << "\n";
    cout << "Item: " << item << "\n";
    cout << "Size: " << size << "\n";
    cout << "Quantity: " << quantity << "\n";
    cout << "Total Price: " << price << "\n";
    cout << "--------------------\n";
}

void applyDiscount(double& totalAmount, double& discountAmount) {
    int discountChoice;
    string userName, userAddress, userID;
    double discount = 0;

    cout << "\nDo you qualify for a discount?\n";
    cout << "1. Student (5%)\n2. PWD (10%)\n3. Senior Citizen (20%)\n4. No Discount\n";
  
    while (true) {
        cout << "Enter your choice: ";
        cin >> discountChoice;

        if (discountChoice >= 1 && discountChoice <= 4) {
            break;
        } else {
            cout << "Invalid choice! Please enter a number between 1 and 4.\n";
        }
    }

    if (discountChoice >= 1 && discountChoice <= 3) {
        cin.ignore();

        while (true) {
            cout << "\nTo verify your ID, please fill out the following:";
            cout << "\nName: ";
            getline(cin, userName);

            cout << "Address: ";
            getline(cin, userAddress);

          
            cout << "ID No.: ";
            getline(cin, userID);

            if (userName.empty() || userAddress.empty() || userID.empty()) {
                cout << "\nError: All fields are required. Please try again.\n";
            } else {
                cout << "\nThank you! Your discount will be applied based on your choice.\n";
                break;
            }
        }
    }

    switch (discountChoice) {
        case 1: discount = 0.05; break;
        case 2: discount = 0.10; break;
        case 3: discount = 0.20; break;
        case 4: discount = 0.00; break;
    }

    discountAmount = totalAmount * discount;
    totalAmount -= discountAmount;
}

void processPayment(double totalAmount, double& paymentAmount, double& change) {
    cout << "\nYour total amount is: " << totalAmount << endl;
    cout << "Enter payment amount: ";
    cin >> paymentAmount;
    while (paymentAmount < totalAmount) {
        cout << "Insufficient payment! Please enter an amount greater than or equal to " << totalAmount << ": ";
        cin >> paymentAmount;
    }
    change = paymentAmount - totalAmount;
}

void summary(int totalItems, double totalAmount, double paymentAmount, double change, double discountAmount) {
    cout << "\n---------- Purchase Summary -----------\n";
    cout << "Total items: " << totalItems << endl;
    cout << "Total amount before discount: " << totalAmount + discountAmount << endl;  
    cout << "Discount applied: -" << discountAmount << endl; 
    cout << "Total amount after discount: " << totalAmount << endl;
    cout << "Amount paid: " << paymentAmount << endl;
    cout << "Change: " << change << endl;
    cout << "---------------------------------------" << endl;
}

bool isDiscountEligible() {
    static bool eligible = true; 
    if (eligible) {
        eligible = false; 
        return true;
    }
    return false;
}

void applyDiscountWrapper(double& totalAmount, double& discountAmount) {
    if (!isDiscountEligible()) {
        cout << "\nDiscounts can only be applied once per session. No discount will be applied.\n";
        return;
    }
    applyDiscount(totalAmount, discountAmount); 
}
