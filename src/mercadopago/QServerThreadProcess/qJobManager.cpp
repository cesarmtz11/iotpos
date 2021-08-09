
// Qt includes
#include <QDebug>

// qJob includes
#include "qJobManager.h"

//-----------------------------------------------------------------------------
qJobManager::qJobManager():Superclass()
{

}

//-----------------------------------------------------------------------------
qJobManager::~qJobManager()
{

}

//-----------------------------------------------------------------------------
void qJobManager::setJobPath(const QString& jobPath)
{
  this->JobPath = jobPath;
}

void qJobManager::stopJobs()
{

  this->Jobs.last()->terminate();
  qDebug() << "---------------- Terminating the job";
}

//-----------------------------------------------------------------------------
void qJobManager::startJobs()
{
  qDebug() << "Starting SERVER ...";

  for(int i = 0; i < 3; ++i)
    {
    this->Jobs << QSharedPointer<qJob>(new qJob(this->JobPath));
    this->Jobs.last()->start();
    }
}

