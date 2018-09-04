//
//  main.cpp
//  AutoHouse
//
//  Created by Iliya Iliev on 28/08/18.
//  Copyright © 2018 Iliya Iliev. All rights reserved.
//

#include <iostream>
#include "Vehicle.hpp"

int main(int argc, const char * argv[]) {

    Vehicle m_vehCar("volkswagen", "golf", 2004, 4.000, 207.353, 1.9, "TDI", "Manual", "Auto Window");
    
    m_vehCar.PrintInfo();


    
    return 0;
}
