/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "migrationhubclient.h"
#include "migrationhubclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace MigrationHub {

/**
 * @class  MigrationHubClient
 *
 * @brief  Client for AWS Migration Hub
 *
 * The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 * resource-specific migration tool by providing a programmatic interface to Migration Hub.
 */

/**
 * @brief  Constructs a new MigrationHubClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
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

/**
 * @brief  Constructs a new MigrationHubClient object.
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

/**
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
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateCreatedArtifactResponse * MigrationHubClient::associateCreatedArtifact(const AssociateCreatedArtifactRequest &request)
{
    return qobject_cast<AssociateCreatedArtifactResponse *>(send(request));
}

/**
 * Associates a discovered resource ID from Application Discovery Service (ADS) with a migration
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateDiscoveredResourceResponse * MigrationHubClient::associateDiscoveredResource(const AssociateDiscoveredResourceRequest &request)
{
    return qobject_cast<AssociateDiscoveredResourceResponse *>(send(request));
}

/**
 * Creates a progress update stream which is an AWS resource used for access control as well as a namespace for migration
 * task names that is implicitly linked to your AWS account. It must uniquely identify the migration tool as it is used for
 * all updates made by the tool; however, it does not need to be unique for each AWS account because it is scoped to the
 * AWS
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProgressUpdateStreamResponse * MigrationHubClient::createProgressUpdateStream(const CreateProgressUpdateStreamRequest &request)
{
    return qobject_cast<CreateProgressUpdateStreamResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProgressUpdateStreamResponse * MigrationHubClient::deleteProgressUpdateStream(const DeleteProgressUpdateStreamRequest &request)
{
    return qobject_cast<DeleteProgressUpdateStreamResponse *>(send(request));
}

/**
 * Gets the migration status of an
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeApplicationStateResponse * MigrationHubClient::describeApplicationState(const DescribeApplicationStateRequest &request)
{
    return qobject_cast<DescribeApplicationStateResponse *>(send(request));
}

/**
 * Retrieves a list of all attributes associated with a specific migration
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMigrationTaskResponse * MigrationHubClient::describeMigrationTask(const DescribeMigrationTaskRequest &request)
{
    return qobject_cast<DescribeMigrationTaskResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateCreatedArtifactResponse * MigrationHubClient::disassociateCreatedArtifact(const DisassociateCreatedArtifactRequest &request)
{
    return qobject_cast<DisassociateCreatedArtifactResponse *>(send(request));
}

/**
 * Disassociate an Application Discovery Service (ADS) discovered resource from a migration
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateDiscoveredResourceResponse * MigrationHubClient::disassociateDiscoveredResource(const DisassociateDiscoveredResourceRequest &request)
{
    return qobject_cast<DisassociateDiscoveredResourceResponse *>(send(request));
}

/**
 * Registers a new migration task which represents a server, database, etc., being migrated to AWS by a migration
 *
 * tool>
 *
 * This API is a prerequisite to calling the <code>NotifyMigrationTaskState</code> API as the migration tool must first
 * register the migration task with Migration
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportMigrationTaskResponse * MigrationHubClient::importMigrationTask(const ImportMigrationTaskRequest &request)
{
    return qobject_cast<ImportMigrationTaskResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCreatedArtifactsResponse * MigrationHubClient::listCreatedArtifacts(const ListCreatedArtifactsRequest &request)
{
    return qobject_cast<ListCreatedArtifactsResponse *>(send(request));
}

/**
 * Lists discovered resources associated with the given
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDiscoveredResourcesResponse * MigrationHubClient::listDiscoveredResources(const ListDiscoveredResourcesRequest &request)
{
    return qobject_cast<ListDiscoveredResourcesResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListMigrationTasksResponse * MigrationHubClient::listMigrationTasks(const ListMigrationTasksRequest &request)
{
    return qobject_cast<ListMigrationTasksResponse *>(send(request));
}

/**
 * Lists progress update streams associated with the user account making this
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProgressUpdateStreamsResponse * MigrationHubClient::listProgressUpdateStreams(const ListProgressUpdateStreamsRequest &request)
{
    return qobject_cast<ListProgressUpdateStreamsResponse *>(send(request));
}

/**
 * Sets the migration state of an application. For a given application identified by the value passed to
 * <code>ApplicationId</code>, its status is set or updated by passing one of three values to <code>Status</code>:
 * <code>NOT_STARTED | IN_PROGRESS |
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
NotifyApplicationStateResponse * MigrationHubClient::notifyApplicationState(const NotifyApplicationStateRequest &request)
{
    return qobject_cast<NotifyApplicationStateResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
NotifyMigrationTaskStateResponse * MigrationHubClient::notifyMigrationTaskState(const NotifyMigrationTaskStateRequest &request)
{
    return qobject_cast<NotifyMigrationTaskStateResponse *>(send(request));
}

/**
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
 * Note the instructions regarding the special use case of the <code>ResourceAttributeList</code> parameter when specifying
 * any "VM" related
 *
 * value> </li> </ul> </b> <note>
 *
 * Because this is an asynchronous call, it will always return 200, whether an association occurs or not. To confirm if an
 * association was found based on the provided details, call
 *
 * @param  request Request to send to AWS Migration Hub.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutResourceAttributesResponse * MigrationHubClient::putResourceAttributes(const PutResourceAttributesRequest &request)
{
    return qobject_cast<PutResourceAttributesResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  MigrationHubClientPrivate
 *
 * @brief  Private implementation for MigrationHubClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MigrationHubClientPrivate object.
 *
 * @param  q  Pointer to this object's public MigrationHubClient instance.
 */
MigrationHubClientPrivate::MigrationHubClientPrivate(MigrationHubClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MigrationHub
} // namespace QtAws
