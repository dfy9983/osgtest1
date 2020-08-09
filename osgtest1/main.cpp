#include "osgtest1.h"
#include <Windows.h>
#include <QtWidgets/QApplication>
#include <osgViewer/Viewer>
#include <osgDB/ReadFile>


using namespace osg;
using namespace osgViewer;
using namespace osgDB;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	ref_ptr<Viewer> viewer = new Viewer;
	viewer->setSceneData(readNodeFile("E:/OSG/OpenSceneGraph-Data/cow.osg"));
	return viewer->run();

    
}
