// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
// Janelyn <3
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
        nt::NetworkTableEntry __Auto_Signal_one__Entry;
        nt::NetworkTableEntry __Auto_Signal_two__Entry;
        nt::NetworkTableEntry __Teleop_Signal_one__Entry;
        nt::NetworkTableEntry __Teleop_Signal_two__Entry;
 
        // Inports
        nt::NetworkTableEntry __GameState__Entry;
        nt::NetworkTableEntry __In1__Entry;
        // Outports
        nt::NetworkTableEntry __Out1__Entry;
        nt::NetworkTableEntry __Signal_one__Entry;
        nt::NetworkTableEntry __Signal_two__Entry;
 
        // Test Points
};
