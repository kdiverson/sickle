//
//  sicklecommand.cpp
//  Mothur
//
//  Created by Kathryn Iverson on 11/4/2014
//  Copyright (c) 2014 Schloss Lab. All rights reserved.
//


#include "sicklecommand.h"
#ifdef __cplusplus
extern "C"
{
#endif
    
    #include <kseq.h>
    #include <trim_paired.c>
    #include <trim_single.c>
    
#ifdef __cplusplus
}
#endif


//**********************************************************************************************************************
vector<string> SickleCommand::setParameters(){
    try {
        
        CommandParameter pqualtype("qualtype", "Multiple", "sanger-illumina-solexa", "sanger"); {"qual-type", required_argument, 0, 't'},
        {"pe-file1", optional_argument, 0, 'f'},
        {"pe-file2", optional_argument, 0, 'r'},
        {"pe-combo", optional_argument, 0, 'c'},
        {"output-pe1", optional_argument, 0, 'o'},
        {"output-pe2", optional_argument, 0, 'p'},
        {"output-single", optional_argument, 0, 's'},
        {"output-combo", optional_argument, 0, 'm'},
        {"qual-threshold", optional_argument, 0, 'q'},
        {"length-threshold", optional_argument, 0, 'l'},
        {"no-fiveprime", optional_argument, 0, 'x'},
        {"truncate-n", optional_argument, 0, 'n'},
        {"gzip-output", optional_argument, 0, 'g'},
        {"output-combo-all", optional_argument, 0, 'M'},
        {"quiet", optional_argument, 0, 'z'},
        
        
        //CommandParameter pprocessors("processors", "Number", "", "1", "", "", "",false,false); parameters.push_back(pprocessors);
        CommandParameter pshared("shared", "InputTypes", "", "", "none", "none", "none","summary",false,true,true);
        parameters.push_back(pshared);
        CommandParameter pdesign("design", "InputTypes", "", "", "none", "none", "none","",false,true,true);
        parameters.push_back(pdesign);
        CommandParameter potupersplit("otupersplit", "Multiple", "log2-squareroot", "log2", "", "", "","",false,false);
        parameters.push_back(potupersplit);
        CommandParameter psplitcriteria("splitcriteria", "Multiple", "gainratio-infogain", "gainratio", "", "", "","",false,false);
        parameters.push_back(psplitcriteria);
        CommandParameter pnumtrees("numtrees", "Number", "", "100", "", "", "","",false,false);
        parameters.push_back(pnumtrees);
        
        // parameters related to pruning
        CommandParameter pdopruning("prune", "Boolean", "", "T", "", "", "", "", false, false);
        parameters.push_back(pdopruning);
        CommandParameter ppruneaggrns("pruneaggressiveness", "Number", "", "0.9", "", "", "", "", false, false);
        parameters.push_back(ppruneaggrns);
        CommandParameter pdiscardhetrees("discarderrortrees", "Boolean", "", "T", "", "", "", "", false, false);
        parameters.push_back(pdiscardhetrees);
        CommandParameter phetdiscardthreshold("errorthreshold", "Number", "", "0.4", "", "", "", "", false, false);
        parameters.push_back(phetdiscardthreshold);
        CommandParameter psdthreshold("stdthreshold", "Number", "", "0.0", "", "", "", "", false, false);
        parameters.push_back(psdthreshold);
        // pruning params end
        
        CommandParameter pgroups("groups", "String", "", "", "", "", "","",false,false);
        parameters.push_back(pgroups);
        CommandParameter plabel("label", "String", "", "", "", "", "","",false,false);
        parameters.push_back(plabel);
        CommandParameter pinputdir("inputdir", "String", "", "", "", "", "","",false,false);
        parameters.push_back(pinputdir);
        CommandParameter poutputdir("outputdir", "String", "", "", "", "", "","",false,false);
        parameters.push_back(poutputdir);
        
        vector<string> myArray;
        for (int i = 0; i < parameters.size(); i++) {	myArray.push_back(parameters[i].name);		}
        return myArray;
    }
    catch(exception& e) {
        m->errorOut(e, "SickleCommand", "setParameters");
        exit(1);
    }
}

//**********************************************************************************************************************
//option will contain the parameter string from your command 
//for example: yourcommand(parameter1=value1, parameter2=value2)
//option = "parameter1=value1, parameter2=value2"

SickleCommand::SickleCommand(string option){
	try {
		

	}
	catch(exception& e) {
		errorOut(e, "SickleCommand", "SickleCommand");
		exit(1);
	}
}
//**********************************************************************************************************************

void SickleCommand::help(){
	try {
		mothurOut("The SickleCommand command ....\n");
	}
	catch(exception& e) {
		errorOut(e, "SickleCommand", "help");
		exit(1);
	}
}

//**********************************************************************************************************************
SickleCommand::~SickleCommand(){}
//**********************************************************************************************************************
int SickleCommand::execute(){
	try {
		
		return 0;		
	}

	catch(exception& e) {
		errorOut(e, "SickleCommand", "execute");
		exit(1);
	}
}
//**********************************************************************************************************************


