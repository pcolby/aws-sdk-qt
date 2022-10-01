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

#include "datasyncclient.h"
#include "datasyncclient_p.h"

#include "core/awssignaturev4.h"
#include "canceltaskexecutionrequest.h"
#include "canceltaskexecutionresponse.h"
#include "createagentrequest.h"
#include "createagentresponse.h"
#include "createlocationefsrequest.h"
#include "createlocationefsresponse.h"
#include "createlocationfsxlustrerequest.h"
#include "createlocationfsxlustreresponse.h"
#include "createlocationfsxontaprequest.h"
#include "createlocationfsxontapresponse.h"
#include "createlocationfsxopenzfsrequest.h"
#include "createlocationfsxopenzfsresponse.h"
#include "createlocationfsxwindowsrequest.h"
#include "createlocationfsxwindowsresponse.h"
#include "createlocationhdfsrequest.h"
#include "createlocationhdfsresponse.h"
#include "createlocationnfsrequest.h"
#include "createlocationnfsresponse.h"
#include "createlocationobjectstoragerequest.h"
#include "createlocationobjectstorageresponse.h"
#include "createlocations3request.h"
#include "createlocations3response.h"
#include "createlocationsmbrequest.h"
#include "createlocationsmbresponse.h"
#include "createtaskrequest.h"
#include "createtaskresponse.h"
#include "deleteagentrequest.h"
#include "deleteagentresponse.h"
#include "deletelocationrequest.h"
#include "deletelocationresponse.h"
#include "deletetaskrequest.h"
#include "deletetaskresponse.h"
#include "describeagentrequest.h"
#include "describeagentresponse.h"
#include "describelocationefsrequest.h"
#include "describelocationefsresponse.h"
#include "describelocationfsxlustrerequest.h"
#include "describelocationfsxlustreresponse.h"
#include "describelocationfsxontaprequest.h"
#include "describelocationfsxontapresponse.h"
#include "describelocationfsxopenzfsrequest.h"
#include "describelocationfsxopenzfsresponse.h"
#include "describelocationfsxwindowsrequest.h"
#include "describelocationfsxwindowsresponse.h"
#include "describelocationhdfsrequest.h"
#include "describelocationhdfsresponse.h"
#include "describelocationnfsrequest.h"
#include "describelocationnfsresponse.h"
#include "describelocationobjectstoragerequest.h"
#include "describelocationobjectstorageresponse.h"
#include "describelocations3request.h"
#include "describelocations3response.h"
#include "describelocationsmbrequest.h"
#include "describelocationsmbresponse.h"
#include "describetaskrequest.h"
#include "describetaskresponse.h"
#include "describetaskexecutionrequest.h"
#include "describetaskexecutionresponse.h"
#include "listagentsrequest.h"
#include "listagentsresponse.h"
#include "listlocationsrequest.h"
#include "listlocationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtaskexecutionsrequest.h"
#include "listtaskexecutionsresponse.h"
#include "listtasksrequest.h"
#include "listtasksresponse.h"
#include "starttaskexecutionrequest.h"
#include "starttaskexecutionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateagentrequest.h"
#include "updateagentresponse.h"
#include "updatelocationhdfsrequest.h"
#include "updatelocationhdfsresponse.h"
#include "updatelocationnfsrequest.h"
#include "updatelocationnfsresponse.h"
#include "updatelocationobjectstoragerequest.h"
#include "updatelocationobjectstorageresponse.h"
#include "updatelocationsmbrequest.h"
#include "updatelocationsmbresponse.h"
#include "updatetaskrequest.h"
#include "updatetaskresponse.h"
#include "updatetaskexecutionrequest.h"
#include "updatetaskexecutionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DataSync
 * \brief Contains classess for accessing AWS DataSync.
 *
 * \inmodule QtAwsDataSync
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DataSyncClient
 * \brief The DataSyncClient class provides access to the AWS DataSync service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 */

/*!
 * \brief Constructs a DataSyncClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DataSyncClient::DataSyncClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DataSyncClientPrivate(this), parent)
{
    Q_D(DataSyncClient);
    d->apiVersion = QStringLiteral("2018-11-09");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("datasync");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS DataSync");
    d->serviceName = QStringLiteral("datasync");
}

/*!
 * \overload DataSyncClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DataSyncClient::DataSyncClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DataSyncClientPrivate(this), parent)
{
    Q_D(DataSyncClient);
    d->apiVersion = QStringLiteral("2018-11-09");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("datasync");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS DataSync");
    d->serviceName = QStringLiteral("datasync");
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CancelTaskExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels execution of a task.
 *
 * </p
 *
 * When you cancel a task execution, the transfer of some files is abruptly interrupted. The contents of files that are
 * transferred to the destination might be incomplete or inconsistent with the source files. However, if you start a new
 * task execution on the same task and you allow the task execution to complete, file content on the destination is
 * complete and consistent. This applies to other unexpected failures that interrupt a task execution. In all of these
 * cases, DataSync successfully complete the transfer when you start the next task
 */
CancelTaskExecutionResponse * DataSyncClient::cancelTaskExecution(const CancelTaskExecutionRequest &request)
{
    return qobject_cast<CancelTaskExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateAgentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates an DataSync agent that you have deployed on your host. The activation process associates your agent with your
 * account. In the activation process, you specify information such as the Amazon Web Services Region that you want to
 * activate the agent in. You activate the agent in the Amazon Web Services Region where your target locations (in Amazon
 * S3 or Amazon EFS) reside. Your tasks are created in this Amazon Web Services
 *
 * Region>
 *
 * You can activate the agent in a VPC (virtual private cloud) or provide the agent access to a VPC endpoint so you can run
 * tasks without going over the public
 *
 * internet>
 *
 * You can use an agent for more than one location. If a task uses multiple agents, all of them need to have status
 * AVAILABLE for the task to run. If you use multiple agents for a source location, the status of all the agents must be
 * AVAILABLE for the task to run.
 *
 * </p
 *
 * Agents are automatically updated by Amazon Web Services on a regular basis, using a mechanism that ensures minimal
 * interruption to your
 *
 * tasks>
 */
CreateAgentResponse * DataSyncClient::createAgent(const CreateAgentRequest &request)
{
    return qobject_cast<CreateAgentResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationEfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for an Amazon EFS file system that DataSync can access for a transfer. For more information, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html">Creating a location for Amazon
 */
CreateLocationEfsResponse * DataSyncClient::createLocationEfs(const CreateLocationEfsRequest &request)
{
    return qobject_cast<CreateLocationEfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationFsxLustreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for an Amazon FSx for Lustre file
 */
CreateLocationFsxLustreResponse * DataSyncClient::createLocationFsxLustre(const CreateLocationFsxLustreRequest &request)
{
    return qobject_cast<CreateLocationFsxLustreResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationFsxOntapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for an Amazon FSx for NetApp ONTAP file system that DataSync can access for a transfer. For more
 * information, see <a href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html">Creating a
 * location for FSx for
 */
CreateLocationFsxOntapResponse * DataSyncClient::createLocationFsxOntap(const CreateLocationFsxOntapRequest &request)
{
    return qobject_cast<CreateLocationFsxOntapResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationFsxOpenZfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for an Amazon FSx for OpenZFS file
 */
CreateLocationFsxOpenZfsResponse * DataSyncClient::createLocationFsxOpenZfs(const CreateLocationFsxOpenZfsRequest &request)
{
    return qobject_cast<CreateLocationFsxOpenZfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationFsxWindowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for an Amazon FSx for Windows File Server file
 */
CreateLocationFsxWindowsResponse * DataSyncClient::createLocationFsxWindows(const CreateLocationFsxWindowsRequest &request)
{
    return qobject_cast<CreateLocationFsxWindowsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationHdfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for a Hadoop Distributed File System (HDFS).
 */
CreateLocationHdfsResponse * DataSyncClient::createLocationHdfs(const CreateLocationHdfsRequest &request)
{
    return qobject_cast<CreateLocationHdfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationNfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines a file system on a Network File System (NFS) server that can be read from or written
 */
CreateLocationNfsResponse * DataSyncClient::createLocationNfs(const CreateLocationNfsRequest &request)
{
    return qobject_cast<CreateLocationNfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationObjectStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for an object storage system that DataSync can access for a transfer. For more information, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-object-location.html">Creating a location for object
 */
CreateLocationObjectStorageResponse * DataSyncClient::createLocationObjectStorage(const CreateLocationObjectStorageRequest &request)
{
    return qobject_cast<CreateLocationObjectStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationS3Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for an Amazon S3
 *
 * bucket>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-locations-cli.html#create-location-s3-cli">Create an
 * Amazon S3 location</a> in the <i>DataSync User
 */
CreateLocationS3Response * DataSyncClient::createLocationS3(const CreateLocationS3Request &request)
{
    return qobject_cast<CreateLocationS3Response *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateLocationSmbResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines a file system on a Server Message Block (SMB) server that can be read from or written
 */
CreateLocationSmbResponse * DataSyncClient::createLocationSmb(const CreateLocationSmbRequest &request)
{
    return qobject_cast<CreateLocationSmbResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * CreateTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures a task, which defines where and how DataSync transfers your
 *
 * data>
 *
 * A task includes a source location, a destination location, and the preferences for how and when you want to transfer
 * your data (such as bandwidth limits, scheduling, among other
 *
 * options)>
 *
 * When you create a task that transfers data between Amazon Web Services services in different Amazon Web Services
 * Regions, one of your locations must reside in the Region where you're using
 *
 * DataSync>
 *
 * For more information, see the following
 *
 * topics> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/datasync/latest/userguide/working-with-locations.html">Working with DataSync
 * locations</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/datasync/latest/userguide/create-task.html">Configure DataSync task settings</a>
 */
CreateTaskResponse * DataSyncClient::createTask(const CreateTaskRequest &request)
{
    return qobject_cast<CreateTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DeleteAgentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an agent. To specify which agent to delete, use the Amazon Resource Name (ARN) of the agent in your request. The
 * operation disassociates the agent from your Amazon Web Services account. However, it doesn't delete the agent virtual
 * machine (VM) from your on-premises
 */
DeleteAgentResponse * DataSyncClient::deleteAgent(const DeleteAgentRequest &request)
{
    return qobject_cast<DeleteAgentResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DeleteLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the configuration of a location used by DataSync.
 */
DeleteLocationResponse * DataSyncClient::deleteLocation(const DeleteLocationRequest &request)
{
    return qobject_cast<DeleteLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DeleteTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteTaskResponse * DataSyncClient::deleteTask(const DeleteTaskRequest &request)
{
    return qobject_cast<DeleteTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeAgentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata such as the name, the network interfaces, and the status (that is, whether the agent is running or not)
 * for an agent. To specify which agent to describe, use the Amazon Resource Name (ARN) of the agent in your request.
 */
DescribeAgentResponse * DataSyncClient::describeAgent(const DescribeAgentRequest &request)
{
    return qobject_cast<DescribeAgentResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationEfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about your DataSync location for an Amazon EFS file
 */
DescribeLocationEfsResponse * DataSyncClient::describeLocationEfs(const DescribeLocationEfsRequest &request)
{
    return qobject_cast<DescribeLocationEfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationFsxLustreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about an Amazon FSx for Lustre location, such as information about its
 */
DescribeLocationFsxLustreResponse * DataSyncClient::describeLocationFsxLustre(const DescribeLocationFsxLustreRequest &request)
{
    return qobject_cast<DescribeLocationFsxLustreResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationFsxOntapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details about how an DataSync location for an Amazon FSx for NetApp ONTAP file system is
 */
DescribeLocationFsxOntapResponse * DataSyncClient::describeLocationFsxOntap(const DescribeLocationFsxOntapRequest &request)
{
    return qobject_cast<DescribeLocationFsxOntapResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationFsxOpenZfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about an Amazon FSx for OpenZFS location, such as information about its
 */
DescribeLocationFsxOpenZfsResponse * DataSyncClient::describeLocationFsxOpenZfs(const DescribeLocationFsxOpenZfsRequest &request)
{
    return qobject_cast<DescribeLocationFsxOpenZfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationFsxWindowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about an Amazon FSx for Windows File Server location, such as information about its
 */
DescribeLocationFsxWindowsResponse * DataSyncClient::describeLocationFsxWindows(const DescribeLocationFsxWindowsRequest &request)
{
    return qobject_cast<DescribeLocationFsxWindowsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationHdfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata, such as the authentication information about the Hadoop Distributed File System (HDFS) location.
 */
DescribeLocationHdfsResponse * DataSyncClient::describeLocationHdfs(const DescribeLocationHdfsRequest &request)
{
    return qobject_cast<DescribeLocationHdfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationNfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata, such as the path information, about an NFS
 */
DescribeLocationNfsResponse * DataSyncClient::describeLocationNfs(const DescribeLocationNfsRequest &request)
{
    return qobject_cast<DescribeLocationNfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationObjectStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about your DataSync location for an object storage
 */
DescribeLocationObjectStorageResponse * DataSyncClient::describeLocationObjectStorage(const DescribeLocationObjectStorageRequest &request)
{
    return qobject_cast<DescribeLocationObjectStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationS3Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata, such as bucket name, about an Amazon S3 bucket
 */
DescribeLocationS3Response * DataSyncClient::describeLocationS3(const DescribeLocationS3Request &request)
{
    return qobject_cast<DescribeLocationS3Response *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeLocationSmbResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata, such as the path and user information about an SMB
 */
DescribeLocationSmbResponse * DataSyncClient::describeLocationSmb(const DescribeLocationSmbRequest &request)
{
    return qobject_cast<DescribeLocationSmbResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about a
 */
DescribeTaskResponse * DataSyncClient::describeTask(const DescribeTaskRequest &request)
{
    return qobject_cast<DescribeTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * DescribeTaskExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed metadata about a task that is being
 */
DescribeTaskExecutionResponse * DataSyncClient::describeTaskExecution(const DescribeTaskExecutionRequest &request)
{
    return qobject_cast<DescribeTaskExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * ListAgentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of agents owned by an Amazon Web Services account in the Amazon Web Services Region specified in the
 * request. The returned list is ordered by agent Amazon Resource Name
 *
 * (ARN)>
 *
 * By default, this operation returns a maximum of 100 agents. This operation supports pagination that enables you to
 * optionally reduce the number of agents returned in a
 *
 * response>
 *
 * If you have more agents than are returned in a response (that is, the response returns only a truncated list of your
 * agents), the response contains a marker that you can specify in your next request to fetch the next page of
 */
ListAgentsResponse * DataSyncClient::listAgents(const ListAgentsRequest &request)
{
    return qobject_cast<ListAgentsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * ListLocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of source and destination
 *
 * locations>
 *
 * If you have more locations than are returned in a response (that is, the response returns only a truncated list of your
 * agents), the response contains a token that you can specify in your next request to fetch the next page of
 */
ListLocationsResponse * DataSyncClient::listLocations(const ListLocationsRequest &request)
{
    return qobject_cast<ListLocationsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all the tags associated with a specified resource.
 */
ListTagsForResourceResponse * DataSyncClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * ListTaskExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of executed
 */
ListTaskExecutionsResponse * DataSyncClient::listTaskExecutions(const ListTaskExecutionsRequest &request)
{
    return qobject_cast<ListTaskExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * ListTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the DataSync tasks you
 */
ListTasksResponse * DataSyncClient::listTasks(const ListTasksRequest &request)
{
    return qobject_cast<ListTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * StartTaskExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a specific invocation of a task. A <code>TaskExecution</code> value represents an individual run of a task. Each
 * task can have at most one <code>TaskExecution</code> at a
 *
 * time>
 *
 * <code>TaskExecution</code> has the following transition phases: INITIALIZING | PREPARING | TRANSFERRING | VERIFYING |
 * SUCCESS/FAILURE.
 *
 * </p
 *
 * For detailed information, see the Task Execution section in the Components and Terminology topic in the <i>DataSync User
 */
StartTaskExecutionResponse * DataSyncClient::startTaskExecution(const StartTaskExecutionRequest &request)
{
    return qobject_cast<StartTaskExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a key-value pair to an Amazon Web Services
 */
TagResourceResponse * DataSyncClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from an Amazon Web Services
 */
UntagResourceResponse * DataSyncClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UpdateAgentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name of an
 */
UpdateAgentResponse * DataSyncClient::updateAgent(const UpdateAgentRequest &request)
{
    return qobject_cast<UpdateAgentResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UpdateLocationHdfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates some parameters of a previously created location for a Hadoop Distributed File System
 */
UpdateLocationHdfsResponse * DataSyncClient::updateLocationHdfs(const UpdateLocationHdfsRequest &request)
{
    return qobject_cast<UpdateLocationHdfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UpdateLocationNfsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates some of the parameters of a previously created location for Network File System (NFS) access. For information
 * about creating an NFS location, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html">Creating a location for
 */
UpdateLocationNfsResponse * DataSyncClient::updateLocationNfs(const UpdateLocationNfsRequest &request)
{
    return qobject_cast<UpdateLocationNfsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UpdateLocationObjectStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates some of the parameters of a previously created location for self-managed object storage server access. For
 * information about creating a self-managed object storage location, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-object-location.html">Creating a location for object
 */
UpdateLocationObjectStorageResponse * DataSyncClient::updateLocationObjectStorage(const UpdateLocationObjectStorageRequest &request)
{
    return qobject_cast<UpdateLocationObjectStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UpdateLocationSmbResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates some of the parameters of a previously created location for Server Message Block (SMB) file system access. For
 * information about creating an SMB location, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html">Creating a location for
 */
UpdateLocationSmbResponse * DataSyncClient::updateLocationSmb(const UpdateLocationSmbRequest &request)
{
    return qobject_cast<UpdateLocationSmbResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UpdateTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the metadata associated with a
 */
UpdateTaskResponse * DataSyncClient::updateTask(const UpdateTaskRequest &request)
{
    return qobject_cast<UpdateTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DataSyncClient service, and returns a pointer to an
 * UpdateTaskExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates execution of a
 *
 * task>
 *
 * You can modify bandwidth throttling for a task execution that is running or queued. For more information, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/working-with-task-executions.html#adjust-bandwidth-throttling">Adjusting
 * Bandwidth Throttling for a Task
 *
 * Execution</a>> <note>
 *
 * The only <code>Option</code> that can be modified by <code>UpdateTaskExecution</code> is <code> <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-BytesPerSecond">BytesPerSecond</a>
 */
UpdateTaskExecutionResponse * DataSyncClient::updateTaskExecution(const UpdateTaskExecutionRequest &request)
{
    return qobject_cast<UpdateTaskExecutionResponse *>(send(request));
}

/*!
 * \class QtAws::DataSync::DataSyncClientPrivate
 * \brief The DataSyncClientPrivate class provides private implementation for DataSyncClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DataSyncClientPrivate object with public implementation \a q.
 */
DataSyncClientPrivate::DataSyncClientPrivate(DataSyncClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DataSync
} // namespace QtAws
