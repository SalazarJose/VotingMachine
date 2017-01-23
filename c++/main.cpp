//
//  main.cpp
//  
//
//  Created by Jose Salazar on 1/22/17.
//
//

#include "main.hpp"
#include "machine.cpp"
#include "resp.cpp"
#include "linkedlist.hpp"
int main(){
    
    
    //MAIN PROGRAM IMPLEMENTATION
    //This section will run the linked list that us still under construction.
    
    
    cout << "*****This part is still under construction*****" <<endl;
    voters myvoter1;
    myvoter1.addvoter();
    myvoter1.printList();
    cout << "*****end of this section*****" <<endl;
    //END OF LINKED LIST SECTION.
    
    
    //DEMO BELOW*****
    //This section will run a simple "demo", might be used for the above section later on.
    voterDEMO voter1;
    
    cout << "*****This is a sample DEMO version.*****" <<endl;
    //Generate Voter Test
    voter1.ModName("Robot # 1");
    voter1.ModID(1);
    cout << "Running Auto-population" <<endl;
    voter1.ModExp();
    cout << "Thanks!" <<endl;
    voter1.ModHasVoted(true);

    
    cout << endl << endl <<endl;
    cout << "Pulling Data on Test Voter.." <<endl;
    //Return Voter Test Results
    voter1.Pull_Name();
    voter1.Pull_ID();
    voter1.Pull_Exp();
    voter1.Pull_HasVoted();
    
    //End Program with Code 0 *****
    
    return 0;
}
