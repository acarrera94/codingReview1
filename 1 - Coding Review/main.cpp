#include <iostream>
using namespace std;

//##############################################################################
//### Please write your name here: Andre Carrera
//###
///##
//##############################################################################



////////////////////////////////////////////////////////////////////////////////
// Exercise 1: (10 points) Swap two variables
// -------------------------------------
// Replace the TODO comment in the function below with code that will swap the
// values in variables a and b.
void Swap()
{
    cout << "### Swap #######################################" << endl;
    int a = 100;
    int b = -100;
    
    
    
    int tempa = a;
    
    a = b;
    b = tempa;
    
    
    
    
    
    
    
    
    // This should print out "a=-100, b=100"
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;
}


////////////////////////////////////////////////////////////////////////////////
// Exercise 2: (15 points) Fizz-Buzz
// -------------------------------------
// Write a program that counts from 1 to 100.  For every number that is a
// multiple of three, print the word �Fizz� instead of the number.  For every
// number that is a multiple of five, print the word �Buzz� instead of the
// number.  If a number is a multiple of both 3 and 5, then print the word
// "FizzBuzz" instead of the number.  If the number does not match is neither a multiple of three or five, then just print
// the number.  Make sure each item is on a separate line, and you don't print
// everything on one long line.
//
// Here is an example of the first 16 lines of output:
//     1
//     2
//     Fizz
//     4
//     Buzz
//     Fizz
//     7
//     8
//     Fizz
//     Buzz
//     11
//     Fizz
//     13
//     14
//     FizzBuzz
//     16
//     (etc...)
//
// How many conditions can you do this in?  A condition is an instance of any of
// the following: if, else-if, or else.  Minus five points for every condition
// over 4.  Use of the conditional operator ( ? : ) counts as two conditions.
void FizzBuzz()
{
    cout << "### FizzBuzz ###################################" << endl;
    
    // TODO: Put your code here.
    
    for (int count = 1; count <= 100; count++) {
        if (count%3 == 0){
            cout << "Fizz";
            if (count%5 == 0) {
                cout << "Buzz";
            }
            cout << endl;
        }
        else if (count%5 == 0){
            
            cout << "Buzz" << endl;
        }
        else {
            cout << count << endl;
        }
    }
    
    
    
    
    
    
    
    // Do not delete this line.
    cout << endl;
}


////////////////////////////////////////////////////////////////////////////////
// Exercise 3: (15 points) Count all instances of x in an array
// -------------------------------------
// This function takes three parameters.  The first is an array, the second is a
// count of all the elements in the array, and a third is a search value, x.
// Your assignment is to count all instances of x's value.
//
// Example:
// Suppose this function was passed in the array, {1, 8, 4, 8, 9, 5, 2, 8, 0},
// and the value for x was 8.  Your program would print out
//     Found 3 instances of the number 8.
void CountAll(int data[], int length, int x)
{
    cout << "### CountAll ###################################" << endl;
    int count;
    
    // TODO: Put your code here.
    
    count = 0;
    for (int counter = 0; counter < length; counter++) {
        if (data[counter] == x ){
            count++;
        }
    }
    
    
    
    
    
    
    
    // Do not modify any of the code below this line.
    cout << "Found " << count << " instances of the number " << x << "." << endl;
    cout << endl;
}


////////////////////////////////////////////////////////////////////////////////
// Exercise 4: (30 points) Intersect the data in two sets
// -------------------------------------
// Add code after the TODO comment that will populate the array named finalData
// with every value that is found in both arrays set1 and set2.  You may assume
// that each entry in set1 will be unique, and each entry in set2 will be
// unique, but that there will be zero or more duplicates between set1 and set2.
// The data in finalData does not have to appear in any order.
void IntersectSets(int set1[], int length1, int set2[], int length2)
{
    cout << "### IntersectSets ##############################" << endl;
    int finalData[100];  // Please use this array to store your result
    int finalLength = 0; // Use this count variable to keep count.
    
    // TODO: Write your code here:
    
    //basically figure out which ints it has in common
    
    for ( int firstSet = 0; firstSet < length1; firstSet++) {
        for (int secondSet = 0; secondSet < length2; secondSet++) {
            if (set1[firstSet]== set2[secondSet]) {
                finalData[finalLength] = set1[firstSet];
                finalLength++;
            }
        }
    }
    
    
    
    
    
    
    // Do not modify any of the code below this line.
    cout << "Intereseciton of set1 and set2:" << endl << "    { ";
    for (int i = 0; i < finalLength; i++)
    {
        cout << finalData[i];
        if (i < finalLength - 1)
            cout << ", ";
    }
    cout << " }" << endl << endl;
}


////////////////////////////////////////////////////////////////////////////////
// Exercise 5: (30 points) Reverse the contents of an array
// -------------------------------------
// Add code after the TODO comment that will reverse the contents of the array
// named data.
//
// Full credit if you can do this in-place, in other words, you do not bulk-copy
// the entire contents of the array to any temporary place.  Half credit,
// otherwise.
void ReverseArray(int data[], int length)
{
    cout << "### ReverseArray ###############################" << endl;
    
    // TODO: Write your code here:
    
    int tempvar = 0;
    int gethalf = 2;
    int countdown = length - 1;
    for (int count = 0; count < length/gethalf; count++) {
        tempvar = data[count];
        data[count] = data[countdown];
        data[countdown] = tempvar;
        
        countdown--;
        
    }
    
    
    
    
    
    // Do not modify any of the code below this line.
    cout << "Intereseciton of set1 and set2:" << endl << "    { ";
    for (int i = 0; i < length; i++)
    {
        cout << data[i];
        if (i < length - 1)
            cout << ", ";
    }
    cout << " }" << endl << endl;
}


int main()
{
    Swap();
    
    FizzBuzz();
    
    int data[] = { 1, 5, 3, 4, 2, 5, 3, 5, 4, 1, 2, 4, 2, 5, 1, 4, 3, 2, 3, 5 };
    CountAll(data, 20, 1); // This should print out 3.
    CountAll(data, 20, 2); // This should print out 4.
    CountAll(data, 20, 3); // This should print out 4.
    CountAll(data, 20, 4); // This should print out 4.
    CountAll(data, 20, 5); // This should print out 5.
    
    int set1[] = { 2, 4, 1, 9, 8, 6 };
    int set2[] = { 3, 1, 9, 7, 5 };
    int set3[] = { 5, 3, 7 };
    IntersectSets(set1, 6, set2, 5); // This should print out: { 1, 9 }
    IntersectSets(set2, 5, set3, 3); // This should print out: { 5, 3, 7 }
    IntersectSets(set1, 6, set3, 3); // This should print out nothing: {  }
    
    int rev[] = { 70, 63, 56, 49, 42, 35, 28, 21, 14, 7 };
    ReverseArray(rev, 7);
    
    
    return 0;
}


