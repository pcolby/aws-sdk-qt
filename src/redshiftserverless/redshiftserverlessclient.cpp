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

#include "redshiftserverlessclient.h"
#include "redshiftserverlessclient_p.h"

#include "core/awssignaturev4.h"
#include "convertrecoverypointtosnapshotrequest.h"
#include "convertrecoverypointtosnapshotresponse.h"
#include "createendpointaccessrequest.h"
#include "createendpointaccessresponse.h"
#include "createnamespacerequest.h"
#include "createnamespaceresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createusagelimitrequest.h"
#include "createusagelimitresponse.h"
#include "createworkgrouprequest.h"
#include "createworkgroupresponse.h"
#include "deleteendpointaccessrequest.h"
#include "deleteendpointaccessresponse.h"
#include "deletenamespacerequest.h"
#include "deletenamespaceresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deletesnapshotrequest.h"
#include "deletesnapshotresponse.h"
#include "deleteusagelimitrequest.h"
#include "deleteusagelimitresponse.h"
#include "deleteworkgrouprequest.h"
#include "deleteworkgroupresponse.h"
#include "getcredentialsrequest.h"
#include "getcredentialsresponse.h"
#include "getendpointaccessrequest.h"
#include "getendpointaccessresponse.h"
#include "getnamespacerequest.h"
#include "getnamespaceresponse.h"
#include "getrecoverypointrequest.h"
#include "getrecoverypointresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "getsnapshotrequest.h"
#include "getsnapshotresponse.h"
#include "getusagelimitrequest.h"
#include "getusagelimitresponse.h"
#include "getworkgrouprequest.h"
#include "getworkgroupresponse.h"
#include "listendpointaccessrequest.h"
#include "listendpointaccessresponse.h"
#include "listnamespacesrequest.h"
#include "listnamespacesresponse.h"
#include "listrecoverypointsrequest.h"
#include "listrecoverypointsresponse.h"
#include "listsnapshotsrequest.h"
#include "listsnapshotsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listusagelimitsrequest.h"
#include "listusagelimitsresponse.h"
#include "listworkgroupsrequest.h"
#include "listworkgroupsresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "restorefromrecoverypointrequest.h"
#include "restorefromrecoverypointresponse.h"
#include "restorefromsnapshotrequest.h"
#include "restorefromsnapshotresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateendpointaccessrequest.h"
#include "updateendpointaccessresponse.h"
#include "updatenamespacerequest.h"
#include "updatenamespaceresponse.h"
#include "updatesnapshotrequest.h"
#include "updatesnapshotresponse.h"
#include "updateusagelimitrequest.h"
#include "updateusagelimitresponse.h"
#include "updateworkgrouprequest.h"
#include "updateworkgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::RedshiftServerless
 * \brief Contains classess for accessing Redshift Serverless.
 *
 * \inmodule QtAwsRedshiftServerless
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RedshiftServerlessClient
 * \brief The RedshiftServerlessClient class provides access to the Redshift Serverless service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRedshiftServerless
 *
 *  This is an interface reference for Amazon Redshift Serverless. It contains documentation for one of the programming or
 *  command line interfaces you can use to manage Amazon Redshift Serverless.
 * 
 *  </p
 * 
 *  Amazon Redshift Serverless automatically provisions data warehouse capacity and intelligently scales the underlying
 *  resources based on workload demands. Amazon Redshift Serverless adjusts capacity in seconds to deliver consistently high
 *  performance and simplified operations for even the most demanding and volatile workloads. Amazon Redshift Serverless
 *  lets you focus on using your data to acquire new insights for your business and customers.
 * 
 *  </p
 * 
 *  To learn more about Amazon Redshift Serverless, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What is Amazon Redshift Serverless</a>.
 */

/*!
 * \brief Constructs a RedshiftServerlessClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RedshiftServerlessClient::RedshiftServerlessClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RedshiftServerlessClientPrivate(this), parent)
{
    Q_D(RedshiftServerlessClient);
    d->apiVersion = QStringLiteral("2021-04-21");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Redshift Serverless");
    d->serviceName = QStringLiteral("redshift-serverless");
}

/*!
 * \overload RedshiftServerlessClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RedshiftServerlessClient::RedshiftServerlessClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RedshiftServerlessClientPrivate(this), parent)
{
    Q_D(RedshiftServerlessClient);
    d->apiVersion = QStringLiteral("2021-04-21");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Redshift Serverless");
    d->serviceName = QStringLiteral("redshift-serverless");
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ConvertRecoveryPointToSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Converts a recovery point to a snapshot. For more information about recovery points and snapshots, see <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html">Working with snapshots and
 * recovery
 */
ConvertRecoveryPointToSnapshotResponse * RedshiftServerlessClient::convertRecoveryPointToSnapshot(const ConvertRecoveryPointToSnapshotRequest &request)
{
    return qobject_cast<ConvertRecoveryPointToSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * CreateEndpointAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Redshift Serverless managed VPC
 */
CreateEndpointAccessResponse * RedshiftServerlessClient::createEndpointAccess(const CreateEndpointAccessRequest &request)
{
    return qobject_cast<CreateEndpointAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * CreateNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a namespace in Amazon Redshift
 */
CreateNamespaceResponse * RedshiftServerlessClient::createNamespace(const CreateNamespaceRequest &request)
{
    return qobject_cast<CreateNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of all databases in a namespace. For more information about snapshots, see <a
 * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html"> Working with snapshots and
 * recovery
 */
CreateSnapshotResponse * RedshiftServerlessClient::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * CreateUsageLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a usage limit for a specified Amazon Redshift Serverless usage type. The usage limit is identified by the
 * returned usage limit identifier.
 */
CreateUsageLimitResponse * RedshiftServerlessClient::createUsageLimit(const CreateUsageLimitRequest &request)
{
    return qobject_cast<CreateUsageLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * CreateWorkgroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an workgroup in Amazon Redshift
 */
CreateWorkgroupResponse * RedshiftServerlessClient::createWorkgroup(const CreateWorkgroupRequest &request)
{
    return qobject_cast<CreateWorkgroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * DeleteEndpointAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Redshift Serverless managed VPC
 */
DeleteEndpointAccessResponse * RedshiftServerlessClient::deleteEndpointAccess(const DeleteEndpointAccessRequest &request)
{
    return qobject_cast<DeleteEndpointAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * DeleteNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a namespace from Amazon Redshift Serverless. Before you delete the namespace, you can create a final snapshot
 * that has all of the data within the
 */
DeleteNamespaceResponse * RedshiftServerlessClient::deleteNamespace(const DeleteNamespaceRequest &request)
{
    return qobject_cast<DeleteNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified resource
 */
DeleteResourcePolicyResponse * RedshiftServerlessClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * DeleteSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a snapshot from Amazon Redshift
 */
DeleteSnapshotResponse * RedshiftServerlessClient::deleteSnapshot(const DeleteSnapshotRequest &request)
{
    return qobject_cast<DeleteSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * DeleteUsageLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a usage limit from Amazon Redshift
 */
DeleteUsageLimitResponse * RedshiftServerlessClient::deleteUsageLimit(const DeleteUsageLimitRequest &request)
{
    return qobject_cast<DeleteUsageLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * DeleteWorkgroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteWorkgroupResponse * RedshiftServerlessClient::deleteWorkgroup(const DeleteWorkgroupRequest &request)
{
    return qobject_cast<DeleteWorkgroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a database user name and temporary password with temporary authorization to log in to Amazon Redshift
 *
 * Serverless>
 *
 * By default, the temporary credentials expire in 900 seconds. You can optionally specify a duration between 900 seconds
 * (15 minutes) and 3600 seconds (60
 *
 * minutes)>
 *
 * The Identity and Access Management (IAM) user or role that runs GetCredentials must have an IAM policy attached that
 * allows access to all necessary actions and resources.
 *
 * </p
 *
 * If the <code>DbName</code> parameter is specified, the IAM policy must allow access to the resource dbname for the
 * specified database
 */
GetCredentialsResponse * RedshiftServerlessClient::getCredentials(const GetCredentialsRequest &request)
{
    return qobject_cast<GetCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetEndpointAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information, such as the name, about a VPC
 */
GetEndpointAccessResponse * RedshiftServerlessClient::getEndpointAccess(const GetEndpointAccessRequest &request)
{
    return qobject_cast<GetEndpointAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a namespace in Amazon Redshift
 */
GetNamespaceResponse * RedshiftServerlessClient::getNamespace(const GetNamespaceRequest &request)
{
    return qobject_cast<GetNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a recovery
 */
GetRecoveryPointResponse * RedshiftServerlessClient::getRecoveryPoint(const GetRecoveryPointRequest &request)
{
    return qobject_cast<GetRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a resource
 */
GetResourcePolicyResponse * RedshiftServerlessClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific
 */
GetSnapshotResponse * RedshiftServerlessClient::getSnapshot(const GetSnapshotRequest &request)
{
    return qobject_cast<GetSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetUsageLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a usage
 */
GetUsageLimitResponse * RedshiftServerlessClient::getUsageLimit(const GetUsageLimitRequest &request)
{
    return qobject_cast<GetUsageLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * GetWorkgroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific
 */
GetWorkgroupResponse * RedshiftServerlessClient::getWorkgroup(const GetWorkgroupRequest &request)
{
    return qobject_cast<GetWorkgroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ListEndpointAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>EndpointAccess</code> objects and relevant
 */
ListEndpointAccessResponse * RedshiftServerlessClient::listEndpointAccess(const ListEndpointAccessRequest &request)
{
    return qobject_cast<ListEndpointAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ListNamespacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a list of specified
 */
ListNamespacesResponse * RedshiftServerlessClient::listNamespaces(const ListNamespacesRequest &request)
{
    return qobject_cast<ListNamespacesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ListRecoveryPointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of recovery
 */
ListRecoveryPointsResponse * RedshiftServerlessClient::listRecoveryPoints(const ListRecoveryPointsRequest &request)
{
    return qobject_cast<ListRecoveryPointsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ListSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
ListSnapshotsResponse * RedshiftServerlessClient::listSnapshots(const ListSnapshotsRequest &request)
{
    return qobject_cast<ListSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags assigned to a
 */
ListTagsForResourceResponse * RedshiftServerlessClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ListUsageLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all usage limits within Amazon Redshift
 */
ListUsageLimitsResponse * RedshiftServerlessClient::listUsageLimits(const ListUsageLimitsRequest &request)
{
    return qobject_cast<ListUsageLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * ListWorkgroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a list of specified
 */
ListWorkgroupsResponse * RedshiftServerlessClient::listWorkgroups(const ListWorkgroupsRequest &request)
{
    return qobject_cast<ListWorkgroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a resource policy. Currently, you can use policies to share snapshots across Amazon Web Services
 */
PutResourcePolicyResponse * RedshiftServerlessClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * RestoreFromRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restore the data from a recovery
 */
RestoreFromRecoveryPointResponse * RedshiftServerlessClient::restoreFromRecoveryPoint(const RestoreFromRecoveryPointRequest &request)
{
    return qobject_cast<RestoreFromRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * RestoreFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a namespace from a
 */
RestoreFromSnapshotResponse * RedshiftServerlessClient::restoreFromSnapshot(const RestoreFromSnapshotRequest &request)
{
    return qobject_cast<RestoreFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags to a
 */
TagResourceResponse * RedshiftServerlessClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag or set of tags from a
 */
UntagResourceResponse * RedshiftServerlessClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * UpdateEndpointAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon Redshift Serverless managed
 */
UpdateEndpointAccessResponse * RedshiftServerlessClient::updateEndpointAccess(const UpdateEndpointAccessRequest &request)
{
    return qobject_cast<UpdateEndpointAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * UpdateNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a namespace with the specified
 */
UpdateNamespaceResponse * RedshiftServerlessClient::updateNamespace(const UpdateNamespaceRequest &request)
{
    return qobject_cast<UpdateNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * UpdateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateSnapshotResponse * RedshiftServerlessClient::updateSnapshot(const UpdateSnapshotRequest &request)
{
    return qobject_cast<UpdateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * UpdateUsageLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a usage limit in Amazon Redshift Serverless. You can't update the usage type or period of a usage
 */
UpdateUsageLimitResponse * RedshiftServerlessClient::updateUsageLimit(const UpdateUsageLimitRequest &request)
{
    return qobject_cast<UpdateUsageLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftServerlessClient service, and returns a pointer to an
 * UpdateWorkgroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a workgroup with the specified configuration
 */
UpdateWorkgroupResponse * RedshiftServerlessClient::updateWorkgroup(const UpdateWorkgroupRequest &request)
{
    return qobject_cast<UpdateWorkgroupResponse *>(send(request));
}

/*!
 * \class QtAws::RedshiftServerless::RedshiftServerlessClientPrivate
 * \brief The RedshiftServerlessClientPrivate class provides private implementation for RedshiftServerlessClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RedshiftServerlessClientPrivate object with public implementation \a q.
 */
RedshiftServerlessClientPrivate::RedshiftServerlessClientPrivate(RedshiftServerlessClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RedshiftServerless
} // namespace QtAws
