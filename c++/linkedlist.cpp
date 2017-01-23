//
//  linkedlist.cpp
//  
//
//  Created by Jose Salazar on 1/22/17.
//
//

#include "linkedlist.hpp"

//linkedlist.cpp

Voter_List::Voter_List()
{
    front = NULL;
    back = NULL;
}
Voter_List::~Voter_List()
{
    destroyVoterList();
}


void Voter_List:: appendVoterNode(int voterID, string voterName, bool voted)
{
    VOTER_NODE* n = new VOTER_NODE();
    if(back == NULL)
    {
        back = n;
        front = n;
    }
    else
    {
        back->next = n;
        n-> previous = back;
        back =n;
    }
}

void Voter_List::displayVoters()
{
    cout << "Voters: " <<endl;
    VOTER_NODE* temp = front;
    
    while(temp!= NULL)
    {
        cout << " " << temp->voterID << endl;
        temp = temp->next;
    }

}
