//
//  main.cpp
//  DegreePlanCalculator
//
//  Created by Jackson Sandidge and Anjala Katuri on 11/12/19.
//  Copyright © 2019 Anjala Katuri. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 The majors will be read from a text file
 
 Struct nodes represent classes that the student will need to take in order to graduate.
 The class struct will include the name of the class, the number of credit hours the class is,
 and a boolean to keep track of whether it has been taken or not. Each node will point to the
 classes that it is a prerequisite for.
 
 We will both work together while creating the project.
 The components of the project will include the User Interface,
 implementing the engineering classes as nodes of the graph, creating the graph,
 outputting the created schedule, updating the current schedule, and showing the students
 their degree plan for a different major. As we begin coding, we will divide the
 different components in between the two of us.
 */

struct classes
{
    string name;
    int hours;
    bool completed;
};

class Plan
{
public:
    void displayMajors()
    {
        cout<<"Choose an Option"<<endl;
        cout<<"1. Computer Science"<<endl;
        cout<<"2. Aerospace Engineering"<<endl;
        cout<<"3. Mechanical Engineering"<<endl;
    }
};

int main()
{
    Plan plan;
    plan.displayMajors();
    return 0;
    
    
}

