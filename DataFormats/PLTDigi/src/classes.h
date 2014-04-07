#ifndef PLTDIGI_CLASSES_H
#define PLTDIGI_CLASSES_H

#include "DataFormats/PLTDigi/interface/PLTDigi.h"
#include <vector>

struct dictionary {
	PLTDigi pltdigi;
	std::vector<PLTDigi> pltdigivector;
	edm::Wrapper<std::vector<PLTDigi> > edmwrapperpltdigivector;
};

#endif