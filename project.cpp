#include <iostream>
using namespace std;

void Input() {
    cout << "If you enter 1, it will appear Apple" << endl;
    cout << "If you enter 2, it will appear Heart" << endl;
    cout << "If you enter 3, it will appear Flower" << endl;
    cout << "If you enter 4, it will appear Star" << endl;
    cout << "If you enter 5, it will appear Ship" << endl;
}

int main() {
    cout << "_____**** Welcome to your gallery______****" << endl;
    cout << "We will show you some numbered images, and you must choose the number of the image that is presented to you" << endl;
    cout << "Apple=1 Heart=2 Flower=3 Star=4 Ship=5" << endl;
    
    int photoNumber[] = {1, 2, 3, 4, 5}; // Fix array initialization
    int photo=0; //To store the image function     
    int nxt = 0;  //International Value
    Input(); //cooling Function Input
    cin >> photo; //I will receive the photo number from the user
    
    for (int p = 0; p < 5; ++p) {  //p<<The variable that takes the number of photos
        if (photoNumber[p] == 1) { //Compare the entered value to split the list numbers and output the image
        
                         //The first faction to draw an apple

        
                     cout << "To go back, enter 1. To view the next image, enter 2" << endl;
                     cin >> nxt;
              if (nxt == 2) {//special condition for Show the following picture
                     cout << "You want the image of the Heart?" << endl;
                 } else if (nxt == 1) { //condition for Show the back picture
                     cout << "You want to return to the previous image?" << endl;
                 } else {
                     cout << "Invalid input" << endl;
                        }
           } 
           
           
        else if (photoNumber[p] == 2) { //If the user requests a photo Heart
                    Input();

        
        //The second faction to draw an Heart
        
            
                     cout << "To go back, enter 1. To view the next image, enter 2" << endl;
                     cin >> nxt;
                 if (nxt == 2) {
                     cout << "You want the image of the Heart?" << endl;
               } else if (nxt == 1) {
                     cout << "You want to return to the previous image?" << endl;
               } else {
                cout << "Invalid input" << endl;
                      }
          }
        
        
        
        
        else if (photoNumber[p] == 3) { //If the user requests a photo Flower
                    Input();

        
        //The Third faction to draw an Flower
        
            
                     cout << "To go back, enter 1. To view the next image, enter 2" << endl;
                     cin >> nxt;
                 if (nxt == 2) {
                     cout << "You want the image of the Heart?" << endl;
               } else if (nxt == 1) {
                     cout << "You want to return to the previous image?" << endl;
               } else {
                cout << "Invalid input" << endl;
                      }
          }
        
        
        else if (photoNumber[p] == 4) { //If the user requests a photo Star
                    Input();

        
        //The fourth faction to draw an Star
        
            
                     cout << "To go back, enter 1. To view the next image, enter 2" << endl;
                     cin >> nxt;
                 if (nxt == 2) {
                     cout << "You want the image of the Heart?" << endl;
               } else if (nxt == 1) {
                     cout << "You want to return to the previous image?" << endl;
               } else {
                cout << "Invalid input" << endl;
                      }
          }
        
        
        else if (photoNumber[p] == 5) { //If the user requests a photo Ship
                    Input();

        
        //The fifth faction to draw an Ship
        
            
                     cout << "To go back, enter 1. To view the next image, enter 2" << endl;
                     cin >> nxt;
                 if (nxt == 2) {
                     cout << "You want the image of the Heart?" << endl;
               } else if (nxt == 1) {
                     cout << "You want to return to the previous image?" << endl;
               } else {
                cout << "Invalid input" << endl;
                      }
          }
           
           
           else {
            cout << "You must enter a valid photo number from the gallery" << endl;
        }
    }

    return 0;
}
