#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofImage image_driveC;
		ofImage image_driveD;
		ofImage image_directPath;

		ofVideoPlayer 		movieClip_driveC;
		ofVideoPlayer 		movieClip_driveD;
		ofVideoPlayer 		movieClip_directPath;


};
