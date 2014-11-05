//
//  sicklecommand.h
//  Mothur
//
//  Created by Kathryn Iverson on 11/4/2014
//  Copyright (c) 2014 Schloss Lab. All rights reserved.
//

#ifndef SICKLECOMMAND_H
#define SICKLECOMMAND_H


#include "command.hpp"

/*****************************************************/

class SickleCommand : public Command {

	public:
		SickleCommand(string);
		~SickleCommand();
        vector<string> setParameters();
        string getCommandName()			{ return "sickle";     }
        string getCommandCategory()		{ return "OTU-Based Approaches";		}
        string getHelpString();
        string getOutputPattern(string);
        string getCitation() { return "http://www.mothur.org/wiki/Sickle\n"; }
        string getDescription()		{ return "implements the sickle sequence trimming algorithm"; }
    
    
		int execute();
		void help() { m->mothurOut(getHelpString()); }
	
	private:
	

};

/*****************************************************/

#endif /*SICKLECOMMAND_H*/
