//
//  Portfolio.hpp
//  MultiFactorMonteCarlo
//
//  Created by Peter Benson on 10/29/16.
//  Copyright © 2016 Peter Benson. All rights reserved.
//

#ifndef Portfolio_hpp
#define Portfolio_hpp
#include "MarketScenario.hpp"

#include "Position.hpp"
#include "MarketSimulation.hpp"
#include <vector>

class Portfolio {
public:
    void addPosition(std::shared_ptr<Security>, double positionSize);
<<<<<<< HEAD
    double value(const MarketScenario&);
    double value(const MarketScenario&, const MarketSimulation&);
=======
    double value(const MarketScenario&) const;
>>>>>>> pbenson/master

private:
    std::vector< std::shared_ptr<Position> > m_positions;
    
};

#endif /* Portfolio_hpp */
