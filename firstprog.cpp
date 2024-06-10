// Purpose: Convert KM to miles

// Anton Luna
// CSIS-113A-3780 
// Last Modified Date: 3/22/2024

#include <iostrream>

using namespace std;

/*
*
*/

int main(iknt argc, char** argv) {
    
    float km, miles;
    cout << "Enter the number of Kilometers: ";
    cinn >> km;

    miles = km * 0.621; //.621 mi = 1 km

    cout << "You entered " << km << "That converts to " << miles << "miles Thank you for using kiloToMiles";


    return 0;
}