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

int main(){

    voter voter1;
    
    
    cout << "Generating Test Voter.." <<endl;
    /*Generate Voter Test*/
    voter1.ModName("Robot # 1");
    voter1.ModID(1);
    voter1.ModExp();
    voter1.ModHasVoted(true);
    
    
    cout << endl << endl <<endl;
    cout << "Pulling Data on Test Voter.." <<endl;
    /*Return Voter Test Results*/
    voter1.Pull_Name();
    voter1.Pull_ID();
    voter1.Pull_Exp();
    voter1.Pull_HasVoted();
    
    /*End Program with Code 0*/
    
    return 0;
}
