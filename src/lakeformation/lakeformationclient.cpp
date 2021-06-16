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

#include "lakeformationclient.h"
#include "lakeformationclient_p.h"

#include "core/awssignaturev4.h"
#include "addlftagstoresourcerequest.h"
#include "addlftagstoresourceresponse.h"
#include "batchgrantpermissionsrequest.h"
#include "batchgrantpermissionsresponse.h"
#include "batchrevokepermissionsrequest.h"
#include "batchrevokepermissionsresponse.h"
#include "createlftagrequest.h"
#include "createlftagresponse.h"
#include "deletelftagrequest.h"
#include "deletelftagresponse.h"
#include "deregisterresourcerequest.h"
#include "deregisterresourceresponse.h"
#include "describeresourcerequest.h"
#include "describeresourceresponse.h"
#include "getdatalakesettingsrequest.h"
#include "getdatalakesettingsresponse.h"
#include "geteffectivepermissionsforpathrequest.h"
#include "geteffectivepermissionsforpathresponse.h"
#include "getlftagrequest.h"
#include "getlftagresponse.h"
#include "getresourcelftagsrequest.h"
#include "getresourcelftagsresponse.h"
#include "grantpermissionsrequest.h"
#include "grantpermissionsresponse.h"
#include "listlftagsrequest.h"
#include "listlftagsresponse.h"
#include "listpermissionsrequest.h"
#include "listpermissionsresponse.h"
#include "listresourcesrequest.h"
#include "listresourcesresponse.h"
#include "putdatalakesettingsrequest.h"
#include "putdatalakesettingsresponse.h"
#include "registerresourcerequest.h"
#include "registerresourceresponse.h"
#include "removelftagsfromresourcerequest.h"
#include "removelftagsfromresourceresponse.h"
#include "revokepermissionsrequest.h"
#include "revokepermissionsresponse.h"
#include "searchdatabasesbylftagsrequest.h"
#include "searchdatabasesbylftagsresponse.h"
#include "searchtablesbylftagsrequest.h"
#include "searchtablesbylftagsresponse.h"
#include "updatelftagrequest.h"
#include "updatelftagresponse.h"
#include "updateresourcerequest.h"
#include "updateresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LakeFormation
 * \brief Contains classess for accessing AWS Lake Formation.
 *
 * \inmodule QtAwsLakeFormation
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::LakeFormationClient
 * \brief The LakeFormationClient class provides access to the AWS Lake Formation service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 */

/*!
 * \brief Constructs a LakeFormationClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LakeFormationClient::LakeFormationClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LakeFormationClientPrivate(this), parent)
{
    Q_D(LakeFormationClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("lakeformation");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Lake Formation");
    d->serviceName = QStringLiteral("lakeformation");
}

/*!
 * \overload LakeFormationClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LakeFormationClient::LakeFormationClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LakeFormationClientPrivate(this), parent)
{
    Q_D(LakeFormationClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("lakeformation");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Lake Formation");
    d->serviceName = QStringLiteral("lakeformation");
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * AddLFTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches one or more tags to an existing
 */
AddLFTagsToResourceResponse * LakeFormationClient::addLFTagsToResource(const AddLFTagsToResourceRequest &request)
{
    return qobject_cast<AddLFTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * BatchGrantPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Batch operation to grant permissions to the
 */
BatchGrantPermissionsResponse * LakeFormationClient::batchGrantPermissions(const BatchGrantPermissionsRequest &request)
{
    return qobject_cast<BatchGrantPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * BatchRevokePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Batch operation to revoke permissions from the
 */
BatchRevokePermissionsResponse * LakeFormationClient::batchRevokePermissions(const BatchRevokePermissionsRequest &request)
{
    return qobject_cast<BatchRevokePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * CreateLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a tag with the specified name and
 */
CreateLFTagResponse * LakeFormationClient::createLFTag(const CreateLFTagRequest &request)
{
    return qobject_cast<CreateLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DeleteLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tag key name. If the attribute key does not exist or the tag does not exist, then the operation
 * will not do anything. If the attribute key exists, then the operation checks if any resources are tagged with this
 * attribute key, if yes, the API throws a 400 Exception with the message "Delete not allowed" as the tag key is still
 * attached with resources. You can consider untagging resources with this tag
 */
DeleteLFTagResponse * LakeFormationClient::deleteLFTag(const DeleteLFTagRequest &request)
{
    return qobject_cast<DeleteLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DeregisterResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the resource as managed by the Data
 *
 * Catalog>
 *
 * When you deregister a path, Lake Formation removes the path from the inline policy attached to your service-linked
 */
DeregisterResourceResponse * LakeFormationClient::deregisterResource(const DeregisterResourceRequest &request)
{
    return qobject_cast<DeregisterResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DescribeResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current data access role for the given resource registered in AWS Lake
 */
DescribeResourceResponse * LakeFormationClient::describeResource(const DescribeResourceRequest &request)
{
    return qobject_cast<DescribeResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetDataLakeSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of the data lake administrators of a Lake Formation-managed data lake.
 */
GetDataLakeSettingsResponse * LakeFormationClient::getDataLakeSettings(const GetDataLakeSettingsRequest &request)
{
    return qobject_cast<GetDataLakeSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetEffectivePermissionsForPathResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the Lake Formation permissions for a specified table or database resource located at a path in Amazon S3.
 * <code>GetEffectivePermissionsForPath</code> will not return databases and tables if the catalog is
 */
GetEffectivePermissionsForPathResponse * LakeFormationClient::getEffectivePermissionsForPath(const GetEffectivePermissionsForPathRequest &request)
{
    return qobject_cast<GetEffectivePermissionsForPathResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a tag
 */
GetLFTagResponse * LakeFormationClient::getLFTag(const GetLFTagRequest &request)
{
    return qobject_cast<GetLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetResourceLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tags applied to a
 */
GetResourceLFTagsResponse * LakeFormationClient::getResourceLFTags(const GetResourceLFTagsRequest &request)
{
    return qobject_cast<GetResourceLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GrantPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants permissions to the principal to access metadata in the Data Catalog and data organized in underlying data storage
 * such as Amazon
 *
 * S3>
 *
 * For information about permissions, see <a
 * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security and Access Control to
 * Metadata and
 */
GrantPermissionsResponse * LakeFormationClient::grantPermissions(const GrantPermissionsRequest &request)
{
    return qobject_cast<GrantPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags that the requester has permission to view.
 */
ListLFTagsResponse * LakeFormationClient::listLFTags(const ListLFTagsRequest &request)
{
    return qobject_cast<ListLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the principal permissions on the resource, filtered by the permissions of the caller. For example, if
 * you are granted an ALTER permission, you are able to see only the principal permissions for
 *
 * ALTER>
 *
 * This operation returns only those permissions that have been explicitly
 *
 * granted>
 *
 * For information about permissions, see <a
 * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security and Access Control to
 * Metadata and
 */
ListPermissionsResponse * LakeFormationClient::listPermissions(const ListPermissionsRequest &request)
{
    return qobject_cast<ListPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resources registered to be managed by the Data
 */
ListResourcesResponse * LakeFormationClient::listResources(const ListResourcesRequest &request)
{
    return qobject_cast<ListResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * PutDataLakeSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the list of data lake administrators who have admin privileges on all resources managed by Lake Formation. For more
 * information on admin privileges, see <a
 * href="https://docs.aws.amazon.com/lake-formation/latest/dg/lake-formation-permissions.html">Granting Lake Formation
 *
 * Permissions</a>>
 *
 * This API replaces the current list of data lake admins with the new list being passed. To add an admin, fetch the
 * current list and add the new admin to that list and pass that list in this
 */
PutDataLakeSettingsResponse * LakeFormationClient::putDataLakeSettings(const PutDataLakeSettingsRequest &request)
{
    return qobject_cast<PutDataLakeSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * RegisterResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers the resource as managed by the Data
 *
 * Catalog>
 *
 * To add or update data, Lake Formation needs read/write access to the chosen Amazon S3 path. Choose a role that you know
 * has permission to do this, or choose the AWSServiceRoleForLakeFormationDataAccess service-linked role. When you register
 * the first Amazon S3 path, the service-linked role and a new inline policy are created on your behalf. Lake Formation
 * adds the first path to the inline policy and attaches it to the service-linked role. When you register subsequent paths,
 * Lake Formation adds the path to the existing
 *
 * policy>
 *
 * The following request registers a new location and gives AWS Lake Formation permission to use the service-linked role to
 * access that
 *
 * location>
 *
 * <code>ResourceArn = arn:aws:s3:::my-bucket UseServiceLinkedRole = true</code>
 *
 * </p
 *
 * If <code>UseServiceLinkedRole</code> is not set to true, you must provide or set the
 *
 * <code>RoleArn</code>>
 *
 * <code>arn:aws:iam::12345:role/my-data-access-role</code>
 */
RegisterResourceResponse * LakeFormationClient::registerResource(const RegisterResourceRequest &request)
{
    return qobject_cast<RegisterResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * RemoveLFTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from the resource. Only database, table, or tableWithColumns resource are allowed. To tag columns, use the
 * column inclusion list in <code>tableWithColumns</code> to specify column
 */
RemoveLFTagsFromResourceResponse * LakeFormationClient::removeLFTagsFromResource(const RemoveLFTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveLFTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * RevokePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes permissions to the principal to access metadata in the Data Catalog and data organized in underlying data
 * storage such as Amazon
 */
RevokePermissionsResponse * LakeFormationClient::revokePermissions(const RevokePermissionsRequest &request)
{
    return qobject_cast<RevokePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * SearchDatabasesByLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation allows a search on <code>DATABASE</code> resources by <code>TagCondition</code>. This operation is used
 * by admins who want to grant user permissions on certain <code>TagConditions</code>. Before making a grant, the admin can
 * use <code>SearchDatabasesByTags</code> to find all resources where the given <code>TagConditions</code> are valid to
 * verify whether the returned resources can be
 */
SearchDatabasesByLFTagsResponse * LakeFormationClient::searchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest &request)
{
    return qobject_cast<SearchDatabasesByLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * SearchTablesByLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation allows a search on <code>TABLE</code> resources by <code>LFTag</code>s. This will be used by admins who
 * want to grant user permissions on certain LFTags. Before making a grant, the admin can use
 * <code>SearchTablesByLFTags</code> to find all resources where the given <code>LFTag</code>s are valid to verify whether
 * the returned resources can be
 */
SearchTablesByLFTagsResponse * LakeFormationClient::searchTablesByLFTags(const SearchTablesByLFTagsRequest &request)
{
    return qobject_cast<SearchTablesByLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * UpdateLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the list of possible values for the specified tag key. If the tag does not exist, the operation throws an
 * EntityNotFoundException. The values in the delete key values will be deleted from list of possible values. If any value
 * in the delete key values is attached to a resource, then API errors out with a 400 Exception - "Update not allowed".
 * Untag the attribute before deleting the tag key's value.
 */
UpdateLFTagResponse * LakeFormationClient::updateLFTag(const UpdateLFTagRequest &request)
{
    return qobject_cast<UpdateLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * UpdateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the data access role used for vending access to the given (registered) resource in AWS Lake Formation.
 */
UpdateResourceResponse * LakeFormationClient::updateResource(const UpdateResourceRequest &request)
{
    return qobject_cast<UpdateResourceResponse *>(send(request));
}

/*!
 * \class QtAws::LakeFormation::LakeFormationClientPrivate
 * \brief The LakeFormationClientPrivate class provides private implementation for LakeFormationClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a LakeFormationClientPrivate object with public implementation \a q.
 */
LakeFormationClientPrivate::LakeFormationClientPrivate(LakeFormationClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LakeFormation
} // namespace QtAws
