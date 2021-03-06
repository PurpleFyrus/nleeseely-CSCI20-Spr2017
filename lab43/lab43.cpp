//created by: Nick LS
//created on: 4/30/2017

//the following assignment's purpose is to simulate an online shopping experience,
//but with the added use of a class to make the main function cleaner
//and with the use of an array of the class, so there are multiple objects of shopObject
//i will be using the second object I created out of the 4 made with the array

#include <iostream>
#include <string>
using namespace std;

class shopObject {
    public:
        
        int itemBeingPurchased = 1;                                         //used later on by customer to choose what item they want to add to their cart
        double customerCartTotal = 0;                                       //used later on to keep track of customer's total cart balance
    
        int cartIndividualItemCount[2][10] = {                              //array with customer's cart info
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},                                            //item numbers
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}                                              //item tally
        };
        
        double shopWares[3][10] = {                                         //array with shopWares info
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},                                            //item numbers      row 1
        {1.25, 1.75, 2.45, 6.45, 1.75, 2.75, 3.50, 4.75, 5.75, 5.25},               //item prices       row 2
        {4, 5, 2, 3, 5, 4, 3, 5, 6, 4}                                              //item stock        row 3
        };
        
        void PrintShopWares();                                              //this is the function that prints out the wares of the shop
        void SetItemBeingPurchased();                                       //this function will be used to let the user input what item they wish to purchase
        void PurchaseItem();                                                //this function will be used to let the user purchase an item from the inventory
        void ShowCustomerTheirCartTotal();                                  //this function will output all the items in their cart and the final price
        
};

void shopObject::PrintShopWares() {
    for (int i = 0; i < 10; i++) {                                                      //this is the function definition of the wares being shown to the customer
            cout << "Item ID Number: " << shopWares[0][i] << " and Price: $" << shopWares[1][i] << endl;
        }
    return;
}

void shopObject::SetItemBeingPurchased() {
    cin >> itemBeingPurchased;                                                          //customer inputting what item they wish to purchase
    return;
}

void shopObject::PurchaseItem() {
    switch (itemBeingPurchased) {                   //this then adds that item the customer chose to their cart if it is in stock, adds the price to the customer total, and subtracts from the store's corresponding item stock
                case 1:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][0] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][0] = (shopWares[2][0] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][0]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][0] = cartIndividualItemCount[1][0] + 1;
                    }
                    break;
                case 2:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][1] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][1] = (shopWares[2][1] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][1]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][1] = cartIndividualItemCount[1][1] + 1;
                    }
                    break;
                case 3:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][2] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][2] = (shopWares[2][2] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][2]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][2] = cartIndividualItemCount[1][2] + 1;
                    }
                    break;
                case 4:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][3] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][3] = (shopWares[2][3] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][3]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][3] = cartIndividualItemCount[1][3] + 1;
                    }
                    break;
                case 5:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][4] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][4] = (shopWares[2][4] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][4]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][4] = cartIndividualItemCount[1][4] + 1;
                    }
                    break;
                case 6:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][5] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][5] = (shopWares[2][5] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][5]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][5] = cartIndividualItemCount[1][5] + 1;
                    }
                    break;
                case 7:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][6] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][6] = (shopWares[2][6] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][6]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][6] = cartIndividualItemCount[1][6] + 1;
                    }
                    break;
                case 8:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][7] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][7] = (shopWares[2][7] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][7]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][7] = cartIndividualItemCount[1][7] + 1;
                    }
                    break;
                case 9:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][8] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][8] = (shopWares[2][8] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][8]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][8] = cartIndividualItemCount[1][8] + 1;
                    }
                    break;
                case 10:                                                 //in the case customer chooses Item 1
                    if (shopWares[2][9] <= 0) {                         //if the item is out of stock
                        cout << "This item is out of stock" << endl;    //it will say it's out of stock
                    }
                    else {                                              //if the item is in stock
                        shopWares[2][9] = (shopWares[2][9] - 1);        //it will deduct 1 from the stock first
                        customerCartTotal = customerCartTotal + shopWares[1][9]; //then it will add the item's price to customer's total cart balance
                        cartIndividualItemCount[1][9] = cartIndividualItemCount[1][9] + 1;
                    }
                    break;
                default:
                    cout << "You will now be sent to checkout" << endl;         //in the event the customer chooses a number other than 1-10 they will be sent to checkout
                    break;
            }
            return;
}
            
void shopObject::ShowCustomerTheirCartTotal() {
    cout << "You bought this many of each item: " << endl;
    for (int i = 0; i < 10; i++) {
         cout << "You Purchased: " << cartIndividualItemCount[1][i] << " of Item: " << cartIndividualItemCount[0][i] << endl;           //this then goes through the customer's cart and shows how much of each item they bought from all the wares
    }
    cout << "The total cost of all your items you wish to purchase is: $" << customerCartTotal << endl;                     //this is the final balance in how much the customer needs to pay to get their items
    return;
}





int main () {
    
    shopObject a[4];                        //define an array of four objects
    
    while ((a[1].itemBeingPurchased >= 1) && (a[1].itemBeingPurchased <= 10)) {                     //keeps looping, letting the customer add more items to the cart, until they input a number not corresponding to an inventory item
                                                                                                    
        a[1].PrintShopWares();                                                                      //we used the print function from the object, but notice how it's the SECOND object's function we call, from the array of 4 objects
        
        cout << endl;
        cout << "What would you like to buy?" << endl;
        cout << "Choose from item ID numbers 1-10 OR type any other integer to Proceed to checkout" << endl;
        
        a[1].SetItemBeingPurchased();                                                               //we then use this function to allow the user to input their choice of what they wish to purchase
        
        a[1].PurchaseItem();                                                                        //last function to be used in the loop, is the main beef of the program used to add the selected item to the customer's cart, 
                                                                                                    //subtract from inventory, and add the price to the cart as well
    }
    
    a[1].ShowCustomerTheirCartTotal();                                                              //this final function is used to let the customer know what is in their cart and how much it is going to cost them
    
    return 0;
}