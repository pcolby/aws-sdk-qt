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

#include "finspacedataclient.h"
#include "finspacedataclient_p.h"

#include "core/awssignaturev4.h"
#include "associateusertopermissiongrouprequest.h"
#include "associateusertopermissiongroupresponse.h"
#include "createchangesetrequest.h"
#include "createchangesetresponse.h"
#include "createdataviewrequest.h"
#include "createdataviewresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createpermissiongrouprequest.h"
#include "createpermissiongroupresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletepermissiongrouprequest.h"
#include "deletepermissiongroupresponse.h"
#include "disableuserrequest.h"
#include "disableuserresponse.h"
#include "disassociateuserfrompermissiongrouprequest.h"
#include "disassociateuserfrompermissiongroupresponse.h"
#include "enableuserrequest.h"
#include "enableuserresponse.h"
#include "getchangesetrequest.h"
#include "getchangesetresponse.h"
#include "getdataviewrequest.h"
#include "getdataviewresponse.h"
#include "getdatasetrequest.h"
#include "getdatasetresponse.h"
#include "getexternaldataviewaccessdetailsrequest.h"
#include "getexternaldataviewaccessdetailsresponse.h"
#include "getpermissiongrouprequest.h"
#include "getpermissiongroupresponse.h"
#include "getprogrammaticaccesscredentialsrequest.h"
#include "getprogrammaticaccesscredentialsresponse.h"
#include "getuserrequest.h"
#include "getuserresponse.h"
#include "getworkinglocationrequest.h"
#include "getworkinglocationresponse.h"
#include "listchangesetsrequest.h"
#include "listchangesetsresponse.h"
#include "listdataviewsrequest.h"
#include "listdataviewsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listpermissiongroupsrequest.h"
#include "listpermissiongroupsresponse.h"
#include "listpermissiongroupsbyuserrequest.h"
#include "listpermissiongroupsbyuserresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "listusersbypermissiongrouprequest.h"
#include "listusersbypermissiongroupresponse.h"
#include "resetuserpasswordrequest.h"
#include "resetuserpasswordresponse.h"
#include "updatechangesetrequest.h"
#include "updatechangesetresponse.h"
#include "updatedatasetrequest.h"
#include "updatedatasetresponse.h"
#include "updatepermissiongrouprequest.h"
#include "updatepermissiongroupresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::FinspaceData
 * \brief Contains classess for accessing FinSpace Public API.
 *
 * \inmodule QtAwsFinspaceData
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::FinspaceDataClient
 * \brief The FinspaceDataClient class provides access to the FinSpace Public API service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 */

/*!
 * \brief Constructs a FinspaceDataClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FinspaceDataClient::FinspaceDataClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FinspaceDataClientPrivate(this), parent)
{
    Q_D(FinspaceDataClient);
    d->apiVersion = QStringLiteral("2020-07-13");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("finspace-api");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("FinSpace Public API");
    d->serviceName = QStringLiteral("finspace-api");
}

/*!
 * \overload FinspaceDataClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
FinspaceDataClient::FinspaceDataClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FinspaceDataClientPrivate(this), parent)
{
    Q_D(FinspaceDataClient);
    d->apiVersion = QStringLiteral("2020-07-13");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("finspace-api");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("FinSpace Public API");
    d->serviceName = QStringLiteral("finspace-api");
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * AssociateUserToPermissionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a user account to a permission group to grant permissions for actions a user can perform in
 */
AssociateUserToPermissionGroupResponse * FinspaceDataClient::associateUserToPermissionGroup(const AssociateUserToPermissionGroupRequest &request)
{
    return qobject_cast<AssociateUserToPermissionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * CreateChangesetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Changeset in a FinSpace
 */
CreateChangesetResponse * FinspaceDataClient::createChangeset(const CreateChangesetRequest &request)
{
    return qobject_cast<CreateChangesetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * CreateDataViewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Dataview for a
 */
CreateDataViewResponse * FinspaceDataClient::createDataView(const CreateDataViewRequest &request)
{
    return qobject_cast<CreateDataViewResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new FinSpace
 */
CreateDatasetResponse * FinspaceDataClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * CreatePermissionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a group of permissions for various actions that a user can perform in
 */
CreatePermissionGroupResponse * FinspaceDataClient::createPermissionGroup(const CreatePermissionGroupRequest &request)
{
    return qobject_cast<CreatePermissionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new user in
 */
CreateUserResponse * FinspaceDataClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a FinSpace
 */
DeleteDatasetResponse * FinspaceDataClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * DeletePermissionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a permission group. This action is
 */
DeletePermissionGroupResponse * FinspaceDataClient::deletePermissionGroup(const DeletePermissionGroupRequest &request)
{
    return qobject_cast<DeletePermissionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * DisableUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Denies access to the FinSpace web application and API for the specified
 */
DisableUserResponse * FinspaceDataClient::disableUser(const DisableUserRequest &request)
{
    return qobject_cast<DisableUserResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * DisassociateUserFromPermissionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a user account from a permission
 */
DisassociateUserFromPermissionGroupResponse * FinspaceDataClient::disassociateUserFromPermissionGroup(const DisassociateUserFromPermissionGroupRequest &request)
{
    return qobject_cast<DisassociateUserFromPermissionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * EnableUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the specified user to access the FinSpace web application and
 */
EnableUserResponse * FinspaceDataClient::enableUser(const EnableUserRequest &request)
{
    return qobject_cast<EnableUserResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetChangesetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a
 */
GetChangesetResponse * FinspaceDataClient::getChangeset(const GetChangesetRequest &request)
{
    return qobject_cast<GetChangesetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetDataViewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetDataViewResponse * FinspaceDataClient::getDataView(const GetDataViewRequest &request)
{
    return qobject_cast<GetDataViewResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a
 */
GetDatasetResponse * FinspaceDataClient::getDataset(const GetDatasetRequest &request)
{
    return qobject_cast<GetDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetExternalDataViewAccessDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the credentials to access the external Dataview from an S3 location. To call this
 *
 * API> <ul> <li>
 *
 * You must retrieve the programmatic
 *
 * credentials> </li> <li>
 *
 * You must be a member of a FinSpace user group, where the dataset that you want to access has <code>Read Dataset
 * Data</code>
 */
GetExternalDataViewAccessDetailsResponse * FinspaceDataClient::getExternalDataViewAccessDetails(const GetExternalDataViewAccessDetailsRequest &request)
{
    return qobject_cast<GetExternalDataViewAccessDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetPermissionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of a specific permission
 */
GetPermissionGroupResponse * FinspaceDataClient::getPermissionGroup(const GetPermissionGroupRequest &request)
{
    return qobject_cast<GetPermissionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetProgrammaticAccessCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Request programmatic credentials to use with FinSpace
 */
GetProgrammaticAccessCredentialsResponse * FinspaceDataClient::getProgrammaticAccessCredentials(const GetProgrammaticAccessCredentialsRequest &request)
{
    return qobject_cast<GetProgrammaticAccessCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for a specific
 */
GetUserResponse * FinspaceDataClient::getUser(const GetUserRequest &request)
{
    return qobject_cast<GetUserResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * GetWorkingLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A temporary Amazon S3 location, where you can copy your files from a source location to stage or use as a scratch space
 * in FinSpace
 */
GetWorkingLocationResponse * FinspaceDataClient::getWorkingLocation(const GetWorkingLocationRequest &request)
{
    return qobject_cast<GetWorkingLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ListChangesetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the FinSpace Changesets for a
 */
ListChangesetsResponse * FinspaceDataClient::listChangesets(const ListChangesetsRequest &request)
{
    return qobject_cast<ListChangesetsResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ListDataViewsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available Dataviews for a
 */
ListDataViewsResponse * FinspaceDataClient::listDataViews(const ListDataViewsRequest &request)
{
    return qobject_cast<ListDataViewsResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the active Datasets that a user has access
 */
ListDatasetsResponse * FinspaceDataClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ListPermissionGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available permission groups in
 */
ListPermissionGroupsResponse * FinspaceDataClient::listPermissionGroups(const ListPermissionGroupsRequest &request)
{
    return qobject_cast<ListPermissionGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ListPermissionGroupsByUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the permission groups that are associated with a specific user
 */
ListPermissionGroupsByUserResponse * FinspaceDataClient::listPermissionGroupsByUser(const ListPermissionGroupsByUserRequest &request)
{
    return qobject_cast<ListPermissionGroupsByUserResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available user accounts in
 */
ListUsersResponse * FinspaceDataClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ListUsersByPermissionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists details of all the users in a specific permission
 */
ListUsersByPermissionGroupResponse * FinspaceDataClient::listUsersByPermissionGroup(const ListUsersByPermissionGroupRequest &request)
{
    return qobject_cast<ListUsersByPermissionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * ResetUserPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets the password for a specified user ID and generates a temporary one. Only a superuser can reset password for other
 * users. Resetting the password immediately invalidates the previous password associated with the
 */
ResetUserPasswordResponse * FinspaceDataClient::resetUserPassword(const ResetUserPasswordRequest &request)
{
    return qobject_cast<ResetUserPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * UpdateChangesetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a FinSpace
 */
UpdateChangesetResponse * FinspaceDataClient::updateChangeset(const UpdateChangesetRequest &request)
{
    return qobject_cast<UpdateChangesetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * UpdateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a FinSpace
 */
UpdateDatasetResponse * FinspaceDataClient::updateDataset(const UpdateDatasetRequest &request)
{
    return qobject_cast<UpdateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * UpdatePermissionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the details of a permission group. You cannot modify a
 */
UpdatePermissionGroupResponse * FinspaceDataClient::updatePermissionGroup(const UpdatePermissionGroupRequest &request)
{
    return qobject_cast<UpdatePermissionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the FinspaceDataClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the details of the specified user account. You cannot update the <code>userId</code> for a
 */
UpdateUserResponse * FinspaceDataClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::FinspaceData::FinspaceDataClientPrivate
 * \brief The FinspaceDataClientPrivate class provides private implementation for FinspaceDataClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a FinspaceDataClientPrivate object with public implementation \a q.
 */
FinspaceDataClientPrivate::FinspaceDataClientPrivate(FinspaceDataClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace FinspaceData
} // namespace QtAws
