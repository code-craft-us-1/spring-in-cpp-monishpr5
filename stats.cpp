#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& values) {
    //Implement statistics here
    Stats stats;

    if (values.empty()) {
        stats.min = 0;
        stats.max = 0;
        stats.average = 0.0;
        stats.sum = 0.0;
        stats.count = 0;
        return stats;
    }

    // Calculate the minimum and maximum values
    stats.min = *std::min_element(values.begin(), values.end());
    stats.max = *std::max_element(values.begin(), values.end());

    // Calculate the sum and count
    stats.sum = 0.0;
    stats.count = values.size();
    for (int value : values) {
        stats.sum += value;
    }

    // Calculate the average
    stats.average = stats.sum / stats.count;

    return stats;
}
