#include "bird.h"
#include <iostream>
using namespace std;

Duck::Duck() : Bird("Duck") { cry(); }
Duck::~Duck() { cry(); }
void Duck::cry() { cout << "Quack!" << endl; }

Penguin::Penguin() : Bird("Penguin") { cry(); }
Penguin::~Penguin() { cry(); }
void Penguin::cry() { cout << "Squawk!" << endl; }
void Penguin::fly() { cout << "This bird can't fly." << endl; }

Eagle::Eagle() : Bird("Eagle") { cry(); }
Eagle::~Eagle() { cry(); }
void Eagle::cry() { cout << "Screech!" << endl; }
void Eagle::swim() { cout << "This bird can't swim." << endl; }
