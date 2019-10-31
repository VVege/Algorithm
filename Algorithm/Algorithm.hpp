//
//  Algorithm.hpp
//  Algorithm
//
//  Created by 周智伟 on 2019/10/28.
//  Copyright © 2019 vege. All rights reserved.
//

#ifndef Algorithm_hpp
#define Algorithm_hpp

#include <stdio.h>
#include <string>
#define DescriptionPrefix "已选择 "
class Algorithm {
    
protected:
    std::string mTitle;
    std::string mInputDescription;
    
protected:
    virtual bool verifyInput();
    
public:
    virtual void coutTitle();
    virtual void coutInputDescription();
    virtual bool cinInputContent();
    virtual void coutResult();
};

#endif /* Algorithm_hpp */
