#include "SimG4Core/Generators/interface/LumiMonitorFilter.h"

#include "FWCore/MessageLogger/interface/MessageLogger.h"

using namespace edm;
//using std::cout;
//using std::endl;

LumiMonitorFilter::LumiMonitorFilter() 
{} 

LumiMonitorFilter::~LumiMonitorFilter() 
{}

void LumiMonitorFilter::Describe() const
{
  edm::LogInfo("LumiMonitorFilter") 
    << " is active ";
}

bool LumiMonitorFilter::isGoodForLumiMonitor(const HepMC::GenParticle* particle) const
{
    using namespace HepMC;
    using namespace std;

    FourVector p = particle->momentum();
    double eta = p.eta();
    if ( eta > 4.14 && eta < 4.35 ){
        // cout << "Particle passed with eta = " << eta << "!" << endl;
        return true;
    }
    else
        // cout << "Particle didn't pass the cut!" << endl;
        return false;
}
