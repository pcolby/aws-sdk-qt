/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "iotjobsdataplaneclient.h"
#include "iotjobsdataplaneclient_p.h"

#include "core/awssignaturev4.h"
#include "describejobexecutionrequest.h"
#include "describejobexecutionresponse.h"
#include "getpendingjobexecutionsrequest.h"
#include "getpendingjobexecutionsresponse.h"
#include "startnextpendingjobexecutionrequest.h"
#include "startnextpendingjobexecutionresponse.h"
#include "updatejobexecutionrequest.h"
#include "updatejobexecutionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTJobsDataPlane
 * \brief Contains classess for accessing AWS IoT Jobs Data Plane.
 *
 * \inmodule QtAwsIoTJobsDataPlane
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneClient
 * \brief The IoTJobsDataPlaneClient class provides access to the AWS IoT Jobs Data Plane service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTJobsDataPlane
 *
 *  AWS IoT Jobs is a service that allows you to define a set of jobs — remote operations that are sent to and executed on
 *  one or more devices connected to AWS IoT. For example, you can define a job that instructs a set of devices to download
 *  and install application or firmware updates, reboot, rotate certificates, or perform remote troubleshooting
 * 
 *  operations>
 * 
 *  To create a job, you make a job document which is a description of the remote operations to be performed, and you
 *  specify a list of targets that should perform the operations. The targets can be individual things, thing groups or
 * 
 *  both>
 * 
 *  AWS IoT Jobs sends a message to inform the targets that a job is available. The target starts the execution of the job
 *  by downloading the job document, performing the operations it specifies, and reporting its progress to AWS IoT. The Jobs
 *  service provides commands to track the progress of a job on a specific target and for all the targets of the
 */

/*!
 * \brief Constructs a IoTJobsDataPlaneClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTJobsDataPlaneClient::IoTJobsDataPlaneClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTJobsDataPlaneClientPrivate(this), parent)
{
    Q_D(IoTJobsDataPlaneClient);
    d->apiVersion = QStringLiteral("2017-09-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("data.jobs.iot");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Jobs Data Plane");
    d->serviceName = QStringLiteral("iot-jobs-data");
}

/*!
 * \overload IoTJobsDataPlaneClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTJobsDataPlaneClient::IoTJobsDataPlaneClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTJobsDataPlaneClientPrivate(this), parent)
{
    Q_D(IoTJobsDataPlaneClient);
    d->apiVersion = QStringLiteral("2017-09-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("data.jobs.iot");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Jobs Data Plane");
    d->serviceName = QStringLiteral("iot-jobs-data");
}

/*!
 * Sends \a request to the IoTJobsDataPlaneClient service, and returns a pointer to an
 * DescribeJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details of a job
 */
DescribeJobExecutionResponse * IoTJobsDataPlaneClient::describeJobExecution(const DescribeJobExecutionRequest &request)
{
    return qobject_cast<DescribeJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTJobsDataPlaneClient service, and returns a pointer to an
 * GetPendingJobExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the list of all jobs for a thing that are not in a terminal
 */
GetPendingJobExecutionsResponse * IoTJobsDataPlaneClient::getPendingJobExecutions(const GetPendingJobExecutionsRequest &request)
{
    return qobject_cast<GetPendingJobExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTJobsDataPlaneClient service, and returns a pointer to an
 * StartNextPendingJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets and starts the next pending (status IN_PROGRESS or QUEUED) job execution for a
 */
StartNextPendingJobExecutionResponse * IoTJobsDataPlaneClient::startNextPendingJobExecution(const StartNextPendingJobExecutionRequest &request)
{
    return qobject_cast<StartNextPendingJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTJobsDataPlaneClient service, and returns a pointer to an
 * UpdateJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of a job
 */
UpdateJobExecutionResponse * IoTJobsDataPlaneClient::updateJobExecution(const UpdateJobExecutionRequest &request)
{
    return qobject_cast<UpdateJobExecutionResponse *>(send(request));
}

/*!
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneClientPrivate
 * \brief The IoTJobsDataPlaneClientPrivate class provides private implementation for IoTJobsDataPlaneClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a IoTJobsDataPlaneClientPrivate object with public implementation \a q.
 */
IoTJobsDataPlaneClientPrivate::IoTJobsDataPlaneClientPrivate(IoTJobsDataPlaneClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTJobsDataPlane
} // namespace QtAws
