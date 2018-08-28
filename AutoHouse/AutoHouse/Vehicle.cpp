//
//  Vehicle.cpp
//  AutoHouse
//
//  Created by Iliya Iliev on 28/08/18.
//  Copyright © 2018 Iliya Iliev. All rights reserved.
//

#include "Vehicle.hpp"

Vehicle::Vehicle()
{
    m_sMade = "N/A";
    
    m_sModel = "N/A";
    
    m_nYear = 0;
    
    m_dPrice = 0;
    
    m_dKilometers = 0;
    
    m_dLiters = 0;
    
    m_sTypeOfEngine = "N/A";
    
    m_sTransmission = "N/A";
    
    m_sOther = "N/A";
}

Vehicle::Vehicle(  std::string sMade, std::string sModel, int nYear, double dPrice, double dKilometers, double dLiters, std::string sTypeOfEngine, std::string sTransmission, std::string sOthers )
{
    m_sMade = sMade;
    
    m_sModel = sModel;
    
    m_nYear = nYear;
    
    m_dPrice = dPrice;
    
    m_dKilometers = dKilometers;
    
    m_dLiters = dLiters;
    
    m_sTypeOfEngine = sTypeOfEngine;
    
    m_sTransmission = sTransmission;
    
    m_sOther = sOthers;
}

void Vehicle::SetMade( std::string sMade )
{
    m_sMade = sMade;
}

void Vehicle::SetModel( std::string sModel )
{
    m_sModel = sModel;
}

void Vehicle::SetYear(int nYear)
{
    m_nYear = nYear;
}

void Vehicle::SetPrice( double dPrice )
{
    m_dPrice = dPrice;
}

void Vehicle::SetKilometers(double dKilometers)
{
    m_dKilometers = dKilometers;
}

void Vehicle::SetLiters(double dLiters)
{
    m_dLiters = dLiters;
}

void Vehicle::SetTypeOfEngine(std::string sTypeOfEngine)
{
    m_sTypeOfEngine = sTypeOfEngine;
}

void Vehicle::SetTransmission(std::string sTransmission)
{
    m_sTransmission = sTransmission;
}

void Vehicle::SetOthers(std::string sOthers)
{
    m_sOther = sOthers;
}
