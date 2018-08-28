//
//  Vehicle.hpp
//  AutoHouse
//
//  Created by Iliya Iliev on 28/08/18.
//  Copyright © 2018 Iliya Iliev. All rights reserved.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <iostream>
#include <string>

class Vehicle
{
    
private:
    
    std::string m_sMade;
    
    std::string m_sModel;
    
    int m_nYear;
    
    double m_dPrice;
    
    double m_dKilometers;
    
    double m_dLiters;
    
    std::string m_sTypeOfEngine;
    
    std::string m_sTransmission;
    
    std::string m_sOther;
    
public:
    
    Vehicle( std::string sMade, std::string sModel, int nYear, double dPrice, double dKilometers, double dLiters, std::string sTypeOfEngine, std::string sTransmission, std::string sOthers );
    
    Vehicle();
    
    void SetMade( std::string sMade );
    
    std::string GetMade();
    
    
    void SetModel( std::string sModel );
    
    std::string GetModel();
    
    
    void SetYear( int nYear );
    
    int GetYear();
    
    
    void SetPrice( double dPrice );
    
    double GetPrice();
    
    
    void SetKilometers( double dKilometers );
    
    double GetKilometers();
    
    
    void SetLiters( double dLiters );
    
    double GetLiters();
    
    
    void SetTypeOfEngine( std::string sTypeOfEngine );
    
    std::string GetTypeOfEngine();
    
    
    void SetTransmission( std::string sTransmission );
    
    std::string GetTransmission();
    
    
    void SetOthers( std::string sOthers );
    
    std::string GetOthers();
    
    void PrintInfo();
    
    
};

#endif /* Vehicle_hpp */
