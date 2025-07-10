// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
// Janelyn <3
#pragma once
#include <frc/smartdashboard/SmartDashboard.h>
#include <networktables/NetworkTable.h>
#include <networktables/RawTopic.h>
#include <networktables/NetworkTableInstance.h>
#include "Code_Gen_Model_ert_rtw\Code_Gen_Model.h"
#include "DertLib/include/Component.h"
 
class SimulinkSmartDashboardInterface : public dlib::Component
{
public:
    SimulinkSmartDashboardInterface();
    void PreStepCallback() override ;
    void PostStepCallback() override;
private:
        // Parameters
        nt::NetworkTableEntry P__Auto_Signal_one__Entry;
        nt::NetworkTableEntry P__Auto_Signal_two__Entry;
        nt::NetworkTableEntry P__Teleop_Signal_one__Entry;
        nt::NetworkTableEntry P__Teleop_Signal_two__Entry;
 
        // Inports
        nt::NetworkTableEntry I__GameState__Entry;
        // Outports
        nt::NetworkTableEntry O__Signal_one__Entry;
        nt::NetworkTableEntry O__Signal_two__Entry;
 
        // Test Points
        nt::NetworkTableEntry T__Signal_one__Entry;
};
