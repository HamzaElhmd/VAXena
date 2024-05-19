#ifndef XENAUI_H
#define XENAUI_H

#include <QtWidgets>
#include "XConfigs.h"

// Main widget class, configurations are passed by arguments or set by user.
class XenaApplication::QApplication {
	public:
		XenaApplication(XenaConfig config, int agrc, char *argv[]);

		int start();
		int stop();
		XenaConfig get_configs();
		void set_configs(const XenaConfig& config);

	private:
		XenaConfig configuration;
}

#endif
