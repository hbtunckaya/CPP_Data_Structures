/*
QUESTION-1 (40p): Prices of children books, novels and dictionaries in a bookstore are determined as follows:

Children's book: 5 TL each.
Novel: 0.1 TL per page for the first 200 pages, and an additional 0.05 TL for each page after 200.
Dictionary: Pocket dictionaries 7.5 TL, large dictionaries 15 TL.

Develop the C program that calculates the price of the book whose first letter is entered as uppercase or lowercase letters (C, c, N, n, D, or d) by reading the information required for each book type from the keyboard and prints this price. If the book or dictionary type is entered incorrectly, an appropriate error message should be displayed on the screen and the program should be terminated.

NOTE: For example, enter p or P for pocket dictionary and l or L for large dictionary.

EXAMPLE OUTPUT–1:	EXAMPLE OUTPUT–2:	EXAMPLE OUTPUT–3:
Enter book type (C, c, N, n, D, d): N
Enter the number of pages: 250
Total Price = 22.50 TL	Enter book type (C, c, N, n, D, d): d
Enter the dictionary type (p, P, l, L): x
! ERROR: No such dictionary !	Enter book type (C, c, N, n, D, d): O
! ERROR: No such book !
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  char type;
  float price;
  int amount;
  int pages;

  cout<<"Enter book type (C, c, N, n, D, d): ";
  cin>>type;

  if(type == 'c' || type == 'C'){
    cout<<"Enter amount of children's book: ";
    cin>>amount;
    price = amount * 5;
    cout<<"Total Price ="<<setw(5)<<price;
  }
  else if(type == 'n' || type == 'N'){
    cout<<"Enter the number of pages: ";
    cin>>pages;
    if(pages <= 200){
      price = pages * 0.1;
    }
    else {
      pages = pages - 200;
      price = pages * 0.05 + 200 * 0.1;
    }
    cout<<"Total Price ="<<setw(5)<<price;
  }
  else if(type == 'd' || type == 'D'){
    cout<<"Enter the dictionary type (p, P, l, L): ";
    cin>>type;
    if(type == 'p' || type == 'P'){
      cout<<"Enter amount of pocket dictionaries: ";
      cin>>amount;
      price = amount * 7.5;
      cout<<"Total Price ="<<setw(5)<<price;
    }
    else if(type == 'l' || type == 'L'){
      cout<<"Enter amount of large dictionaries: ";
      cin>>amount;
      price = amount * 15;
      cout<<"Total Price ="<<setw(5)<<price;
    }
    else {
      cout<<"! ERROR: No such dictionary !";
    }
  }
  else 
    cout<<"! ERROR: No such book !";



  return 0;
} 