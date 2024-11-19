#ifndef APPLETCONTEXT_H
#define APPLETCONTEXT_H
#include <string>

#include "Applet.h"

struct AppletContext {
    awt::Applet getApplet(std::string name);


    void showStatus();
};

#endif
