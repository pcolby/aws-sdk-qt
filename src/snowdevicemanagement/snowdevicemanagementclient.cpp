/*
    Copyright 2013-2021 Paul Colby

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

#include "snowdevicemanagementclient.h"
#include "snowdevicemanagementclient_p.h"

#include "core/awssignaturev4.h"
#include "canceltaskrequest.h"
#include "canceltaskresponse.h"
#include "createtaskrequest.h"
#include "createtaskresponse.h"
#include "describedevicerequest.h"
#include "describedeviceresponse.h"
#include "describedeviceec2instancesrequest.h"
#include "describedeviceec2instancesresponse.h"
#include "describeexecutionrequest.h"
#include "describeexecutionresponse.h"
#include "describetaskrequest.h"
#include "describetaskresponse.h"
#include "listdeviceresourcesrequest.h"
#include "listdeviceresourcesresponse.h"
#include "listdevicesrequest.h"
#include "listdevicesresponse.h"
#include "listexecutionsrequest.h"
#include "listexecutionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtasksrequest.h"
#include "listtasksresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SnowDeviceManagement
 * \brief Contains classess for accessing AWS Snow Device Management.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::SnowDeviceManagementClient
 * \brief The SnowDeviceManagementClient class provides access to the AWS Snow Device Management service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 */

/*!
 * \brief Constructs a SnowDeviceManagementClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SnowDeviceManagementClient::SnowDeviceManagementClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SnowDeviceManagementClientPrivate(this), parent)
{
    Q_D(SnowDeviceManagementClient);
    d->apiVersion = QStringLiteral("2021-08-04");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("snow-device-management");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Snow Device Management");
    d->serviceName = QStringLiteral("snow-device-management");
}

/*!
 * \overload SnowDeviceManagementClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SnowDeviceManagementClient::SnowDeviceManagementClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SnowDeviceManagementClientPrivate(this), parent)
{
    Q_D(SnowDeviceManagementClient);
    d->apiVersion = QStringLiteral("2021-08-04");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("snow-device-management");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Snow Device Management");
    d->serviceName = QStringLiteral("snow-device-management");
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * CancelTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a cancel request for a specified task. You can cancel a task only if it's still in a <code>QUEUED</code> state.
 * Tasks that are already running can't be
 *
 * cancelled> <note>
 *
 * A task might still run if it's processed from the queue before the <code>CancelTask</code> operation changes the task's
 */
CancelTaskResponse * SnowDeviceManagementClient::cancelTask(const CancelTaskRequest &request)
{
    return qobject_cast<CancelTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * CreateTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instructs one or more devices to start a task, such as unlocking or
 */
CreateTaskResponse * SnowDeviceManagementClient::createTask(const CreateTaskRequest &request)
{
    return qobject_cast<CreateTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * DescribeDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks device-specific information, such as the device type, software version, IP addresses, and lock
 */
DescribeDeviceResponse * SnowDeviceManagementClient::describeDevice(const DescribeDeviceRequest &request)
{
    return qobject_cast<DescribeDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * DescribeDeviceEc2InstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks the current state of the Amazon EC2 instances. The output is similar to <code>describeDevice</code>, but the
 * results are sourced from the device cache in the Amazon Web Services Cloud and include a subset of the available fields.
 */
DescribeDeviceEc2InstancesResponse * SnowDeviceManagementClient::describeDeviceEc2Instances(const DescribeDeviceEc2InstancesRequest &request)
{
    return qobject_cast<DescribeDeviceEc2InstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * DescribeExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks the status of a remote task running on one or more target
 */
DescribeExecutionResponse * SnowDeviceManagementClient::describeExecution(const DescribeExecutionRequest &request)
{
    return qobject_cast<DescribeExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * DescribeTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks the metadata for a given task on a device.
 */
DescribeTaskResponse * SnowDeviceManagementClient::describeTask(const DescribeTaskRequest &request)
{
    return qobject_cast<DescribeTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * ListDeviceResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the Amazon Web Services resources available for a device. Currently, Amazon EC2 instances are the only
 * supported resource
 */
ListDeviceResourcesResponse * SnowDeviceManagementClient::listDeviceResources(const ListDeviceResourcesRequest &request)
{
    return qobject_cast<ListDeviceResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * ListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all devices on your Amazon Web Services account that have Amazon Web Services Snow Device Management
 * enabled in the Amazon Web Services Region where the command is
 */
ListDevicesResponse * SnowDeviceManagementClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * ListExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the status of tasks for one or more target
 */
ListExecutionsResponse * SnowDeviceManagementClient::listExecutions(const ListExecutionsRequest &request)
{
    return qobject_cast<ListExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags for a managed device or
 */
ListTagsForResourceResponse * SnowDeviceManagementClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * ListTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tasks that can be filtered by
 */
ListTasksResponse * SnowDeviceManagementClient::listTasks(const ListTasksRequest &request)
{
    return qobject_cast<ListTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or replaces tags on a device or
 */
TagResourceResponse * SnowDeviceManagementClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowDeviceManagementClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a device or
 */
UntagResourceResponse * SnowDeviceManagementClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::SnowDeviceManagement::SnowDeviceManagementClientPrivate
 * \brief The SnowDeviceManagementClientPrivate class provides private implementation for SnowDeviceManagementClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a SnowDeviceManagementClientPrivate object with public implementation \a q.
 */
SnowDeviceManagementClientPrivate::SnowDeviceManagementClientPrivate(SnowDeviceManagementClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SnowDeviceManagement
} // namespace QtAws
