#ifndef SLOPBEDPLUGIN_H
#define SLOPBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class SlopBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SlopBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
