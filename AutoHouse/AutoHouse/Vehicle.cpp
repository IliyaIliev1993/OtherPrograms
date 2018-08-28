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

// Setters

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

void Vehicle::SetKilometers( double dKilometers )
{
    m_dKilometers = dKilometers;
}

void Vehicle::SetLiters( double dLiters )
{
    m_dLiters = dLiters;
}

void Vehicle::SetTypeOfEngine( std::string sTypeOfEngine )
{
    m_sTypeOfEngine = sTypeOfEngine;
}

void Vehicle::SetTransmission( std::string sTransmission )
{
    m_sTransmission = sTransmission;
}

void Vehicle::SetOthers( std::string sOthers )
{
    m_sOther = sOthers;
}

//Getters

std::string Vehicle::GetMade()
{
    return m_sMade;
}

std::string Vehicle::GetModel()
{
    return m_sModel;
}

int Vehicle::GetYear()
{
    return m_nYear;
}

double Vehicle::GetPrice()
{
    return m_dPrice;
}

double Vehicle::GetKilometers()
{
    return m_dKilometers;
}

double Vehicle::GetLiters()
{
    return m_dLiters;
}

std::string Vehicle::GetTypeOfEngine()
{
    return m_sTypeOfEngine;
}

std::string Vehicle::GetTransmission()
{
    return m_sTransmission;
}

std::string Vehicle::GetOthers()
{
    return m_sOther;
}

void Vehicle::PrintInfo()
{
    std::cout << " Made -> " << m_sMade << std::endl;
    
    std::cout << " Model -> " << m_sModel << std::endl;
    
    std::cout << " Year -> " << m_nYear << std::endl;
    
    std::cout << " Price -> " << m_dPrice << std::endl;
    
    std::cout << " Kilometers -> " << m_dKilometers << std::endl;
    
    std::cout << " Engine Liters -> " << m_dLiters << std::endl;
    
    std::cout << " Type Of Engine -> " << m_sTypeOfEngine << std::endl;
    
    std::cout << " Transmission -> " << m_sTransmission << std::endl;
    
    std::cout << " Others -> " << m_sOther << std::endl;
}
