#ifndef DataFormats_PLTDigi_h
#define DataFormats_PLTDigi_h

#include <vector>
#include <iostream>
#include "SimDataFormats/TrackingHit/interface/PSimHitContainer.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
#include "DataFormats/HepMCCandidate/interface/GenParticleFwd.h"

/*******************************************************
*                                                      *
* Class representing a digitized pixel hit in the PLT  *
* Written by Steven M. Kaplan                          *
* skaplan@cern.ch                                      *
* April 6, 2014                                        * 
*                                                      *
********************************************************/

class PLTDigi {
  public:
    PLTDigi(void) { }
    PLTDigi(int rowNum, int columnNum, int pulseHeightAmt):
      row(rowNum),
      column(columnNum),
      pulseHeight(pulseHeightAmt)
      { }
    //initialize from a simhit
     // PLTDigi(PSimHit pltHit) {

     // }

    int getRow() {return row;}
    int getColumn() {return column;}
    int getPulseHeight() {return pulseHeight;}
    void setRow(int rowNum) {row = rowNum;}
    void setColumn(int columnNum) {column = columnNum;}
    void setPulseHeight(int pulseHeightAmt) {pulseHeight = pulseHeightAmt;}
    void print() {std::cout << "row: " << row << " column: " << column << " pulse height: " << pulseHeight << std::endl; }

  private:
    int row;
    int column;
    int pulseHeight;
};

#endif