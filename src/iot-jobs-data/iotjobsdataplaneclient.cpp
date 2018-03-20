/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "iotjobsdataplaneclient.h"
#include "iotjobsdataplaneclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace IoTJobsDataPlane {

/**
 * @class  IoTJobsDataPlaneClient
 *
 * @brief  Client for AWS IoT Jobs Data Plane
 *
 * AWS IoT Jobs is a service that allows you to define a set of jobs — remote operations that are sent to and executed on
 * one or more devices connected to AWS IoT. For example, you can define a job that instructs a set of devices to download
 * and install application or firmware updates, reboot, rotate certificates, or perform remote troubleshooting
 *
 * operations>
 *
 * To create a job, you make a job document which is a description of the remote operations to be performed, and you
 * specify a list of targets that should perform the operations. The targets can be individual things, thing groups or
 *
 * both>
 *
 * AWS IoT Jobs sends a message to inform the targets that a job is available. The target starts the execution of the job
 * by downloading the job document, performing the operations it specifies, and reporting its progress to AWS IoT. The Jobs
 * service provides commands to track the progress of a job on a specific target and for all the targets of the
 */

/**
 * @brief  Constructs a new IoTJobsDataPlaneClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
IoTJobsDataPlaneClient::IoTJobsDataPlaneClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new IoTJobsDataPlaneClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new IoTJobsDataPlaneClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
IoTJobsDataPlaneClient::IoTJobsDataPlaneClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new IoTJobsDataPlaneClientPrivate(this), parent)
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

/**
 * Gets details of a job
 *
 * @param  request Request to send to AWS IoT Jobs Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeJobExecutionResponse * IoTJobsDataPlaneClient::describeJobExecution(const DescribeJobExecutionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Gets the list of all jobs for a thing that are not in a terminal
 *
 * @param  request Request to send to AWS IoT Jobs Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPendingJobExecutionsResponse * IoTJobsDataPlaneClient::getPendingJobExecutions(const GetPendingJobExecutionsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Gets and starts the next pending (status IN_PROGRESS or QUEUED) job execution for a
 *
 * @param  request Request to send to AWS IoT Jobs Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartNextPendingJobExecutionResponse * IoTJobsDataPlaneClient::startNextPendingJobExecution(const StartNextPendingJobExecutionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates the status of a job
 *
 * @param  request Request to send to AWS IoT Jobs Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateJobExecutionResponse * IoTJobsDataPlaneClient::updateJobExecution(const UpdateJobExecutionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  IoTJobsDataPlaneClientPrivate
 *
 * @brief  Private implementation for IoTJobsDataPlaneClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IoTJobsDataPlaneClientPrivate object.
 *
 * @param  q  Pointer to this object's public IoTJobsDataPlaneClient instance.
 */
IoTJobsDataPlaneClientPrivate::IoTJobsDataPlaneClientPrivate(IoTJobsDataPlaneClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace IoTJobsDataPlane
} // namespace AWS
