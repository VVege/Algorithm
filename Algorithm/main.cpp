//
//  main.cpp
//  Algorithm
//
//  Created by 伟哥 on 2019/10/26.
//  Copyright © 2019 vege. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

typedef enum : int {
    type1,
    type2,
} AlgorithmType;


class Algorithm {
    
public:
    string title;
    string cinDescription;
    string result;
    
public:
    
    void cinParam() {
        
    }
};

class AlgorithmFactory {
    
public:
    static Algorithm generate(AlgorithmType type) {
        switch (type) {
            case type1:
            {
               Algorithm algorithm = Algorithm();
                algorithm.title = "1.算法1哈哈哈";
                algorithm.cinDescription = "请输入算法1的参数啦啦啦";
                algorithm.result = "结果是6";
                return algorithm;
            }
            case type2:
            {
                Algorithm algorithm = Algorithm();
                algorithm.title = "2.算法2哈哈哈";
                algorithm.cinDescription = "请输入算法2的参数啦啦啦";
                algorithm.result = "结果是0988";
                return algorithm;
            }
        }
    }
};

class OperationalProcess {

private:
    vector<Algorithm> dataSource;
    int currentSelectIndex = 0;
public:
    OperationalProcess(){
        Algorithm algorithm1 = AlgorithmFactory::generate(type1);
        Algorithm algorithm2 = AlgorithmFactory::generate(type2);
        dataSource.push_back(algorithm1);
        dataSource.push_back(algorithm2);
    }
    
    void coutAlgorithmList() {
        
        for (int i = 0; i < dataSource.size(); i ++) {
            cout << dataSource[i].title << endl;
        }
        
        cout << "请输入你要选择的算法，只支持整数：" << endl;
    }
    
    void cinChoosedAlgorithm() {
        cin >> currentSelectIndex;
        currentSelectIndex --;
        if (currentSelectIndex < 0 || currentSelectIndex > dataSource.size()) {
            cout << "无效的输入" << endl;
            currentSelectIndex = 0;
        }
        cout << "你已选择了" << dataSource[currentSelectIndex].title << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "*************欢迎来到算法的世界*************" << endl;
    OperationalProcess process = OperationalProcess();
    process.coutAlgorithmList();
    process.cinChoosedAlgorithm();
    return 0;
}
