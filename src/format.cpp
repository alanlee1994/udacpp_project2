#include <string>

#include "format.h"

using std::string;
using std::to_string;
// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
	int SS, MM , HH;
    string time;
    // Compute hours
    HH = seconds / 3600;
    // Compute minutes
    seconds = seconds % 3600;
    MM = seconds / 60;  
    // Compute seconds
    SS = seconds % 60;

    // Format time string
    if (HH < 10) { time = "0"; }
    time += to_string(HH) + ":";

    if (MM < 10) { time += "0"; }
    time += to_string(MM) + ":";

    if (SS < 10) { time += "0"; }
    time += to_string(SS);

    return time; 
}