//Created by: Nick Lee-Seely
//Created on: March 7th 2017

//Main function is meant to use a class called "book", define parts of it, and then use it to list 5 books and their according parts

#include <iostream>
#include <string>
using namespace std;

class Book {
    
    public:
        void SetTitle(string bookTitle);
        void SetAuthor(string bookAuthor);
        void SetCopyrightYear(string bookCopyrightYear);
        
        string GetTitle() const;
        string GetAuthor() const;
        string GetCopyrightYear() const;
        
        void PrintBookInfo() const;
        
        string tempBookTitle;
        string tempBookAuthor;
        string tempBookCopyrightYear;
        
    private:
        string title;
        string author;
        string copyrightYear;
};

void Book::SetTitle(string bookTitle) {
    title = bookTitle;
    return;
}

void Book::SetAuthor(string bookAuthor) {
    author = bookAuthor;
    return;
}

void Book::SetCopyrightYear(string bookCopyrightYear) {
    copyrightYear = bookCopyrightYear;
    return;
}

string Book::GetTitle() const {
    return title;
}

string Book::GetAuthor() const {
    return author;
}

string Book::GetCopyrightYear() const {
    return copyrightYear;
}

void Book::PrintBookInfo() const {
    cout << "Title: " << GetTitle() << endl;
    cout << "Author: " << GetAuthor() << endl;
    cout << "CopyrightYear: " << GetCopyrightYear() << endl;
    return;
}

int main () {
    
    Book book1;
    Book book2;
    Book book3;
    Book book4;
    Book book5;
    
    cout << "Please enter title of the first book: " << endl;
    getline(cin, book1.tempBookTitle);
    book1.SetTitle(book1.tempBookTitle);
    cout << "Please enter author of the first book: " << endl;
    getline(cin, book1.tempBookAuthor);
    book1.SetAuthor(book1.tempBookAuthor);
    cout << "Please enter year of copyright for the first book: " << endl;
    getline(cin, book1.tempBookCopyrightYear);
    book1.SetCopyrightYear(book1.tempBookTitle);
    
    cout << "Please enter title of the second book: " << endl;
    getline(cin, book2.tempBookTitle);
    book2.SetTitle(book2.tempBookTitle);
    cout << "Please enter author of the second book: " << endl;
    getline(cin, book2.tempBookAuthor);
    book2.SetAuthor(book2.tempBookAuthor);
    cout << "Please enter year of copyright for the second book: " << endl;
    getline(cin, book2.tempBookCopyrightYear);
    book2.SetCopyrightYear(book2.tempBookCopyrightYear);
    
    cout << "Please enter title of the third book: " << endl;
    getline(cin, book3.tempBookTitle);
    book3.SetTitle(book3.tempBookTitle);
    cout << "Please enter author of the third book: " << endl;
    getline(cin, book3.tempBookAuthor);
    book3.SetAuthor(book3.tempBookAuthor);
    cout << "Please enter year of copyright for the third book: " << endl;
    getline(cin, book3.tempBookCopyrightYear);
    book3.SetCopyrightYear(book3.tempBookAuthor);
    
    cout << "Please enter title of the fourth book: " << endl;
    getline(cin, book4.tempBookTitle);
    book4.SetTitle(book4.tempBookTitle);
    cout << "Please enter author of the fourth book: " << endl;
    getline(cin, book4.tempBookAuthor);
    book4.SetAuthor(book4.tempBookAuthor);
    cout << "Please enter year of copyright for the fourth book: " << endl;
    getline(cin, book4.tempBookCopyrightYear);
    book4.SetCopyrightYear(book4.tempBookCopyrightYear);
    
    cout << "Please enter title of the fifth book: " << endl;
    getline(cin, book5.tempBookTitle);
    book5.SetTitle(book5.tempBookTitle);
    cout << "Please enter author of the fifth book: " << endl;
    getline(cin, book5.tempBookAuthor);
    book5.SetAuthor(book5.tempBookAuthor);
    cout << "Please enter year of copyright for the fifth book: " << endl;
    getline(cin, book5.tempBookCopyrightYear);
    book5.SetCopyrightYear(book5.tempBookCopyrightYear);
    cout << " " << endl;                                                            // I use this line for spacing purposes in the outputted result, multiple times
    
    cout << "Here is the information listed for each book as entered: " << endl;
    cout << " " << endl;
    
    cout << "First Book's info: " << endl;
    book1.PrintBookInfo();
    cout << " " << endl;
    cout << "Second Book's info: " << endl;
    book2.PrintBookInfo();
    cout << " " << endl;
    cout << "Third Book's info: " << endl;
    book3.PrintBookInfo();
    cout << " " << endl;
    cout << "Fourth Book's info: " << endl;
    book4.PrintBookInfo();
    cout << " " << endl;
    cout << "Fifth Book's info: " << endl;
    book5.PrintBookInfo();
    
    
    return 0;
}