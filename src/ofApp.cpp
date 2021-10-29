#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	const float width = ofGetWidth();
	const float height = ofGetHeight();
	staticRectangle.set(width / 2 - 110, height / 2 - 110, 220, 220);
	dynamicRectangle.set(width / 2, height / 2, 200, 200);
	ofBackground(200);
	leftSquareYPos = height - 200;
	rightSquareYPos = height - 200;
}

//--------------------------------------------------------------
void ofApp::update() {
	dynamicRectangle.setX(ofGetMouseX());
	dynamicRectangle.setY(ofGetMouseY());

	if (wPressed) {
		leftSquareYPos--;
	}

	if (iPressed) {
		rightSquareYPos--;
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	if (staticRectangle.intersects(dynamicRectangle)) {
		ofSetColor(50, 200, 50);
	} else {
		ofSetColor(200, 50, 50);
	}

	ofDrawRectangle(staticRectangle);


	ofSetColor(50, 50, 200);
	ofDrawRectangle(dynamicRectangle);

	if (staticRectangle.intersects(dynamicRectangle)) {
		const ofRectangle intersection = staticRectangle.getIntersection(dynamicRectangle);
		ofSetColor(255);
		ofDrawRectangle(intersection);
	}

	ofSetColor(255);
	ofDrawRectangle(0, leftSquareYPos, 200, 200);
	ofDrawRectangle(ofGetWidth() - 200, rightSquareYPos, 200, 200);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 'w') {
		wPressed = true;
	}

	if (key == 'i') {
		iPressed = true;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	if (key == 'w') {
		wPressed = false;
	}

	if (key == 'i') {
		iPressed = false;
	}
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
