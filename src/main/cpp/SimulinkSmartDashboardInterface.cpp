// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
// Janelyn <3
#include "include/SimulinkSmartDashboardInterface.h"
 
SimulinkSmartDashboardInterface::SimulinkSmartDashboardInterface()
{
    nt::NetworkTableInstance NTinst = nt::NetworkTableInstance::GetDefault();
    auto NTtable_Tune = NTinst.GetTable("Simulink Tunable Params");
    auto NTtable_Inport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_Outport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_TPoint = NTinst.GetTable("Simulink Test Points");
 
    P__Auto_Signal_one__Entry = NTtable_Tune->GetEntry("Auto_Signal_one");
    NTinst.AddListener(P__Auto_Signal_one__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Signal_one = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Signal_one__Entry.SetDouble(50);
 
    P__Auto_Signal_two__Entry = NTtable_Tune->GetEntry("Auto_Signal_two");
    NTinst.AddListener(P__Auto_Signal_two__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Signal_two = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Signal_two__Entry.SetDouble(60);
 
    P__Teleop_Signal_one__Entry = NTtable_Tune->GetEntry("Teleop_Signal_one");
    NTinst.AddListener(P__Teleop_Signal_one__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Teleop_Signal_one = event.GetValueEventData()->value.GetDouble();});
    P__Teleop_Signal_one__Entry.SetDouble(10);
 
    P__Teleop_Signal_two__Entry = NTtable_Tune->GetEntry("Teleop_Signal_two");
    NTinst.AddListener(P__Teleop_Signal_two__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Teleop_Signal_two = event.GetValueEventData()->value.GetDouble();});
    P__Teleop_Signal_two__Entry.SetDouble(20);
 
// Inports
    I__GameState__Entry = NTtable_Inport->GetEntry("GameState");
 
// Outports
    O__Signal_one__Entry = NTtable_Outport->GetEntry("Signal_one");
    O__Signal_two__Entry = NTtable_Outport->GetEntry("Signal_two");
 
// Test Points
    T__Signal_one__Entry = NTtable_TPoint->GetEntry("Signal_one");
}
 
void SimulinkSmartDashboardInterface::PreStepCallback() {}
 
void SimulinkSmartDashboardInterface::PostStepCallback()
{
    // Tunable Parameters
    P__Auto_Signal_one__Entry.SetDouble(Auto_Signal_one);
    P__Auto_Signal_two__Entry.SetDouble(Auto_Signal_two);
    P__Teleop_Signal_one__Entry.SetDouble(Teleop_Signal_one);
    P__Teleop_Signal_two__Entry.SetDouble(Teleop_Signal_two);
    // Inports
    I__GameState__Entry.SetDouble(Code_Gen_Model_U.GameState);
    // Outports
    O__Signal_one__Entry.SetDouble(Code_Gen_Model_Y.Signal_one);
    O__Signal_two__Entry.SetDouble(Code_Gen_Model_Y.Signal_two);
    // Test Points
    T__Signal_one__Entry.SetDouble(Code_Gen_Model_B.Signal_one);
}
// Why are you reading to the bottom of an autogen file?
// Get a life...
