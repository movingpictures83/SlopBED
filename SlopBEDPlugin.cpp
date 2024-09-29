#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SlopBEDPlugin.h"

void SlopBEDPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void SlopBEDPlugin::run() {}

void SlopBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "slopBed -i";
myCommand += " ";
addRequiredParameterNoFlag("bedfile");
addRequiredParameter("-g", "genome");
addRequiredParameter("-b", "bases");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<SlopBEDPlugin> SlopBEDPluginProxy = PluginProxy<SlopBEDPlugin>("SlopBED", PluginManager::getInstance());
