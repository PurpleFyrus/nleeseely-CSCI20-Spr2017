//Name of Writer:       Nick Lee-Seely
//Date of Creation:     1/26/2017
//Purpose:  To write in comments, a sort of pseudocode form of an Algorithm
//          The algorithm is supposed to choose a number between two other numbers (like 1 & 10)
//          and have the USER guess the chosen number until they get it right



/* First off you have to give the Algorithm the following variables
        Lowest Number
        Highest Number
        Numbers in between? if it doesn't know that already

    Next you have to choose your namespace/directory as to what functions you will be using, it should include functions like the following 7
        Auto Functions from start:
            Function 1: Choose the lowest number, choose the highest number, and then choose a random number in between those two previous numbers //might be a good idea to rewrite Function 1 as 3 separate Functions
            Function 2: Asks the USER to pick a number between one number and another
        
        Inputs:
            Function 3: A way for the USER to interact by entering in valid variables
        
        Outputs:
            Function 4: A way to compare numbers input that are lower than the chosen number, and say the phrase "Go Higher"
            Function 5: A way to compare numbers input that are higher than the chosen number, and say the phrase "Go Lower"
            Function 6: A way to recognize the guessed number and chosen number are the same, and then say "You're Right!"
            Function 7: A way to recognize an invalid number that is not between the lowest and highest numbers, and then say "Invalid Number, please choose a number between X and Y"
            
    Finally just create the program using the functions provided above in a logical and organized fashion.
    
    For example
    
        First choose correct namespace/directory
        
        Next Run Function 1
        Next Run Function 2
        
        Then based on what the USER inputs a function is run by comparing the number input to the number selected by Function 1
        
        If USER input number is lower than number chosen by Function 1, RUN function 4
        If USER input number is higher than number chosen by Function 1, RUN function 5
        If USER input is not within the given number range, RUN Function 7
        
        These 3 functions will keep being used as the alorithm asks for a different input, until Function 6 is triggered
        
        Once Function 6 is triggered, the Algorithm is finished
        
*/

//I hope this is somewhat what you wanted, I don't know the exact terminology yet for certain parts of code like "cout" and "int main" so I just used the phrase "Function"