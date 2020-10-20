/*
    Copyright 2013-2020 Paul Colby

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

#include "migrationhubclient.h"
#include "migrationhubclient_p.h"

#include "core/awssignaturev4.h"
#include "associatecreatedartifactrequest.h"
#include "associatecreatedartifactresponse.h"
#include "associatediscoveredresourcerequest.h"
#include "associatediscoveredresourceresponse.h"
#include "createprogressupdatestreamrequest.h"
#include "createprogressupdatestreamresponse.h"
#include "deleteprogressupdatestreamrequest.h"
#include "deleteprogressupdatestreamresponse.h"
#include "describeapplicationstaterequest.h"
#include "describeapplicationstateresponse.h"
#include "describemigrationtaskrequest.h"
#include "describemigrationtaskresponse.h"
#include "disassociatecreatedartifactrequest.h"
#include "disassociatecreatedartifactresponse.h"
#include "disassociatediscoveredresourcerequest.h"
#include "disassociatediscoveredresourceresponse.h"
#include "importmigrationtaskrequest.h"
#include "importmigrationtaskresponse.h"
#include "listcreatedartifactsrequest.h"
#include "listcreatedartifactsresponse.h"
#include "listdiscoveredresourcesrequest.h"
#include "listdiscoveredresourcesresponse.h"
#include "listmigrationtasksrequest.h"
#include "listmigrationtasksresponse.h"
#include "listprogressupdatestreamsrequest.h"
#include "listprogressupdatestreamsresponse.h"
#include "notifyapplicationstaterequest.h"
#include "notifyapplicationstateresponse.h"
#include "notifymigrationtaskstaterequest.h"
#include "notifymigrationtaskstateresponse.h"
#include "putresourceattributesrequest.h"
#include "putresourceattributesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MigrationHub
 * \brief Contains classess for accessing AWS Migration Hub.
 *
 * \inmodule QtAwsMigrationHub
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::MigrationHubClient
 * \brief The MigrationHubClient class provides access to the AWS Migration Hub service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 */

/*!
 * \brief Constructs a MigrationHubClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MigrationHubClient::MigrationHubClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MigrationHubClientPrivate(this), parent)
{
    Q_D(MigrationHubClient);
    d->apiVersion = QStringLiteral("2017-05-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mgh");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Migration Hub");
    d->serviceName = QStringLiteral("mgh");
}

/*!
 * \overload MigrationHubClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MigrationHubClient::MigrationHubClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MigrationHubClientPrivate(this), parent)
{
    Q_D(MigrationHubClient);
    d->apiVersion = QStringLiteral("2017-05-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mgh");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Migration Hub");
    d->serviceName = QStringLiteral("mgh");
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * AssociateCreatedArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a created artifact of an AWS cloud resource, the target receiving the migration, with the migration task
 * performed by a migration tool. This API has the following
 *
 * traits> <ul> <li>
 *
 * Migration tools can call the <code>AssociateCreatedArtifact</code> operation to indicate which AWS artifact is
 * associated with a migration
 *
 * task> </li> <li>
 *
 * The created artifact name must be provided in ARN (Amazon Resource Name) format which will contain information about
 * type and region; for example:
 *
 * <code>arn:aws:ec2:us-east-1:488216288981:image/ami-6d0ba87b</code>> </li> <li>
 *
 * Examples of the AWS resource behind the created artifact are, AMI's, EC2 instance, or DMS endpoint,
 */
AssociateCreatedArtifactResponse * MigrationHubClient::associateCreatedArtifact(const AssociateCreatedArtifactRequest &request)
{
    return qobject_cast<AssociateCreatedArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * AssociateDiscoveredResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a discovered resource ID from Application Discovery Service (ADS) with a migration
 */
AssociateDiscoveredResourceResponse * MigrationHubClient::associateDiscoveredResource(const AssociateDiscoveredResourceRequest &request)
{
    return qobject_cast<AssociateDiscoveredResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * CreateProgressUpdateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a progress update stream which is an AWS resource used for access control as well as a namespace for migration
 * task names that is implicitly linked to your AWS account. It must uniquely identify the migration tool as it is used for
 * all updates made by the tool; however, it does not need to be unique for each AWS account because it is scoped to the
 * AWS
 */
CreateProgressUpdateStreamResponse * MigrationHubClient::createProgressUpdateStream(const CreateProgressUpdateStreamRequest &request)
{
    return qobject_cast<CreateProgressUpdateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * DeleteProgressUpdateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a progress update stream, including all of its tasks, which was previously created as an AWS resource used for
 * access control. This API has the following
 *
 * traits> <ul> <li>
 *
 * The only parameter needed for <code>DeleteProgressUpdateStream</code> is the stream name (same as a
 * <code>CreateProgressUpdateStream</code>
 *
 * call)> </li> <li>
 *
 * The call will return, and a background process will asynchronously delete the stream and all of its resources (tasks,
 * associated resources, resource attributes, created
 *
 * artifacts)> </li> <li>
 *
 * If the stream takes time to be deleted, it might still show up on a <code>ListProgressUpdateStreams</code>
 *
 * call> </li> <li>
 *
 * <code>CreateProgressUpdateStream</code>, <code>ImportMigrationTask</code>, <code>NotifyMigrationTaskState</code>, and
 * all Associate[*] APIs realted to the tasks belonging to the stream will throw "InvalidInputException" if the stream of
 * the same name is in the process of being
 *
 * deleted> </li> <li>
 *
 * Once the stream and all of its resources are deleted, <code>CreateProgressUpdateStream</code> for a stream of the same
 * name will succeed, and that stream will be an entirely new logical resource (without any resources associated with the
 * old
 */
DeleteProgressUpdateStreamResponse * MigrationHubClient::deleteProgressUpdateStream(const DeleteProgressUpdateStreamRequest &request)
{
    return qobject_cast<DeleteProgressUpdateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * DescribeApplicationStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the migration status of an
 */
DescribeApplicationStateResponse * MigrationHubClient::describeApplicationState(const DescribeApplicationStateRequest &request)
{
    return qobject_cast<DescribeApplicationStateResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * DescribeMigrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all attributes associated with a specific migration
 */
DescribeMigrationTaskResponse * MigrationHubClient::describeMigrationTask(const DescribeMigrationTaskRequest &request)
{
    return qobject_cast<DescribeMigrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * DisassociateCreatedArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a created artifact of an AWS resource with a migration task performed by a migration tool that was
 * previously associated. This API has the following
 *
 * traits> <ul> <li>
 *
 * A migration user can call the <code>DisassociateCreatedArtifacts</code> operation to disassociate a created AWS Artifact
 * from a migration
 *
 * task> </li> <li>
 *
 * The created artifact name must be provided in ARN (Amazon Resource Name) format which will contain information about
 * type and region; for example:
 *
 * <code>arn:aws:ec2:us-east-1:488216288981:image/ami-6d0ba87b</code>> </li> <li>
 *
 * Examples of the AWS resource behind the created artifact are, AMI's, EC2 instance, or RDS instance,
 */
DisassociateCreatedArtifactResponse * MigrationHubClient::disassociateCreatedArtifact(const DisassociateCreatedArtifactRequest &request)
{
    return qobject_cast<DisassociateCreatedArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * DisassociateDiscoveredResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociate an Application Discovery Service (ADS) discovered resource from a migration
 */
DisassociateDiscoveredResourceResponse * MigrationHubClient::disassociateDiscoveredResource(const DisassociateDiscoveredResourceRequest &request)
{
    return qobject_cast<DisassociateDiscoveredResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * ImportMigrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a new migration task which represents a server, database, etc., being migrated to AWS by a migration
 *
 * tool>
 *
 * This API is a prerequisite to calling the <code>NotifyMigrationTaskState</code> API as the migration tool must first
 * register the migration task with Migration
 */
ImportMigrationTaskResponse * MigrationHubClient::importMigrationTask(const ImportMigrationTaskRequest &request)
{
    return qobject_cast<ImportMigrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * ListCreatedArtifactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the created artifacts attached to a given migration task in an update stream. This API has the following
 *
 * traits> <ul> <li>
 *
 * Gets the list of the created artifacts while migration is taking
 *
 * place> </li> <li>
 *
 * Shows the artifacts created by the migration tool that was associated by the <code>AssociateCreatedArtifact</code> API.
 *
 * </p </li> <li>
 *
 * Lists created artifacts in a paginated interface.
 */
ListCreatedArtifactsResponse * MigrationHubClient::listCreatedArtifacts(const ListCreatedArtifactsRequest &request)
{
    return qobject_cast<ListCreatedArtifactsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * ListDiscoveredResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists discovered resources associated with the given
 */
ListDiscoveredResourcesResponse * MigrationHubClient::listDiscoveredResources(const ListDiscoveredResourcesRequest &request)
{
    return qobject_cast<ListDiscoveredResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * ListMigrationTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all, or filtered by resource name, migration tasks associated with the user account making this call. This API has
 * the following
 *
 * traits> <ul> <li>
 *
 * Can show a summary list of the most recent migration
 *
 * tasks> </li> <li>
 *
 * Can show a summary list of migration tasks associated with a given discovered
 *
 * resource> </li> <li>
 *
 * Lists migration tasks in a paginated
 */
ListMigrationTasksResponse * MigrationHubClient::listMigrationTasks(const ListMigrationTasksRequest &request)
{
    return qobject_cast<ListMigrationTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * ListProgressUpdateStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists progress update streams associated with the user account making this
 */
ListProgressUpdateStreamsResponse * MigrationHubClient::listProgressUpdateStreams(const ListProgressUpdateStreamsRequest &request)
{
    return qobject_cast<ListProgressUpdateStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * NotifyApplicationStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the migration state of an application. For a given application identified by the value passed to
 * <code>ApplicationId</code>, its status is set or updated by passing one of three values to <code>Status</code>:
 * <code>NOT_STARTED | IN_PROGRESS |
 */
NotifyApplicationStateResponse * MigrationHubClient::notifyApplicationState(const NotifyApplicationStateRequest &request)
{
    return qobject_cast<NotifyApplicationStateResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * NotifyMigrationTaskStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Notifies Migration Hub of the current status, progress, or other detail regarding a migration task. This API has the
 * following
 *
 * traits> <ul> <li>
 *
 * Migration tools will call the <code>NotifyMigrationTaskState</code> API to share the latest progress and
 *
 * status> </li> <li>
 *
 * <code>MigrationTaskName</code> is used for addressing updates to the correct
 *
 * target> </li> <li>
 *
 * <code>ProgressUpdateStream</code> is used for access control and to provide a namespace for each migration
 */
NotifyMigrationTaskStateResponse * MigrationHubClient::notifyMigrationTaskState(const NotifyMigrationTaskStateRequest &request)
{
    return qobject_cast<NotifyMigrationTaskStateResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubClient service, and returns a pointer to an
 * PutResourceAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides identifying details of the resource being migrated so that it can be associated in the Application Discovery
 * Service (ADS)'s repository. This association occurs asynchronously after <code>PutResourceAttributes</code>
 *
 * returns> <b> <ul> <li>
 *
 * Keep in mind that subsequent calls to PutResourceAttributes will override previously stored attributes. For example, if
 * it is first called with a MAC address, but later, it is desired to <i>add</i> an IP address, it will then be required to
 * call it with <i>both</i> the IP and MAC addresses to prevent overiding the MAC
 *
 * address> </li> <li>
 *
 * Note the instructions regarding the special use case of the <a
 * href="https://docs.aws.amazon.com/migrationhub/latest/ug/API_PutResourceAttributes.html#migrationhub-PutResourceAttributes-request-ResourceAttributeList">
 * <code>ResourceAttributeList</code> </a> parameter when specifying any "VM" related value.
 *
 * </p </li> </ul> </b> <note>
 *
 * Because this is an asynchronous call, it will always return 200, whether an association occurs or not. To confirm if an
 * association was found based on the provided details, call
 */
PutResourceAttributesResponse * MigrationHubClient::putResourceAttributes(const PutResourceAttributesRequest &request)
{
    return qobject_cast<PutResourceAttributesResponse *>(send(request));
}

/*!
 * \class QtAws::MigrationHub::MigrationHubClientPrivate
 * \brief The MigrationHubClientPrivate class provides private implementation for MigrationHubClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a MigrationHubClientPrivate object with public implementation \a q.
 */
MigrationHubClientPrivate::MigrationHubClientPrivate(MigrationHubClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MigrationHub
} // namespace QtAws
