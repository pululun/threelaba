﻿#include "Exam.h"
Exam::Exam(void):Test(){
	this->individualTask = true;
}

void Exam::startTest(){
	cout << "Exam start" << endl;
}

void Exam::setIndividualTask(bool individualTask){
	this->individualTask = individualTask;
}

bool Exam::getIndividualTask(){
	return this->individualTask;
}

Exam::~Exam(void){

}