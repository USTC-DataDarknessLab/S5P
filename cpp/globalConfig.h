#ifndef GLOBALCONFIG_H
#define GLOBALCONFIG_H

#include "common.h"
class GlobalConfig {
private:
    std::unordered_map<std::string, std::string> properties;

public:
    int k;
    double tao;
    double tau;
    int batchSize;
    int threads;
    int partitionNum;
    int vCount;
    double eCount;
    std::string inputGraphPath;
    int clusterBSize;

    GlobalConfig() {};
    GlobalConfig(std::string filepath);
    double getMaxClusterVolume();
    double getAverageDegree();
};

#endif // GLOBALCONFIG_H
