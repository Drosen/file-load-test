#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	
	// 1) From C drive:
	string path_C_drive = "C:\\OF_testing\\";
	ofSetDataPathRoot(path_C_drive);

	image_driveC.load("DSC09302.jpg");
	movieClip_driveC.load("fingers.mov");
	movieClip_driveC.play();
	

	// 2) From D drive:
	string path_D_drive = "D:\\OF_testing\\";
	ofSetDataPathRoot(path_D_drive);
	
	image_driveD.load("DSC09302.jpg");
	movieClip_driveD.load("fingers.mov");
	movieClip_driveD.play();

	// 3) From D drive, using the full string, without 'ofSetDataPathRoot'
	image_directPath.load("D:\\OF_testing\\DSC09302.jpg");
	movieClip_directPath.load("D:\\OF_testing\\fingers.mov");
	movieClip_directPath.play();

}

//--------------------------------------------------------------
void ofApp::update(){
	movieClip_driveC.update();
	movieClip_driveD.update();
	movieClip_directPath.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(0, 0, 0);
	ofDrawBitmapString("From C: Drive, using 'ofSetDataPathRoot'", 20, 35);
	ofSetColor(255, 255, 255);

	image_driveC.draw(20, 40);
	movieClip_driveC.draw(350, 40);
	//-------------------------
	ofSetColor(0, 0, 0);
	ofDrawBitmapString("From D: Drive, using 'ofSetDataPathRoot'", 20, 415);
	ofSetColor(255, 255, 255);

	image_driveD.draw(20, 420);
	movieClip_driveD.draw(350, 420);
	//-------------------------
	ofSetColor(0, 0, 0);
	ofDrawBitmapString("From D: Drive, but using the full path", 20, 815);
	ofSetColor(255, 255, 255);

	image_directPath.draw(20, 820);
	movieClip_directPath.draw(350, 820);
}

//--------------------------------------------------------------

