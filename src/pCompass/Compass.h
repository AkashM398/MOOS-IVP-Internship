/************************************************************/
/*    NAME: Akash M                                              */
/*    ORGN: MIT                                             */
/*    FILE: Compass.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef Compass_HEADER
#define Compass_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class Compass : public CMOOSApp
{
 public:
   Compass();
   ~Compass();

 protected: // Standard MOOSApp functions to overload  
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();

 protected:
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
};

#endif 
