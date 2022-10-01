// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEDATACLIENT_H
#define QTAWS_FINSPACEDATACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfinspacedataglobal.h"

class QNetworkReply;

namespace QtAws {
namespace FinspaceData {

class FinspaceDataClientPrivate;
class AssociateUserToPermissionGroupRequest;
class AssociateUserToPermissionGroupResponse;
class CreateChangesetRequest;
class CreateChangesetResponse;
class CreateDataViewRequest;
class CreateDataViewResponse;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreatePermissionGroupRequest;
class CreatePermissionGroupResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeletePermissionGroupRequest;
class DeletePermissionGroupResponse;
class DisableUserRequest;
class DisableUserResponse;
class DisassociateUserFromPermissionGroupRequest;
class DisassociateUserFromPermissionGroupResponse;
class EnableUserRequest;
class EnableUserResponse;
class GetChangesetRequest;
class GetChangesetResponse;
class GetDataViewRequest;
class GetDataViewResponse;
class GetDatasetRequest;
class GetDatasetResponse;
class GetExternalDataViewAccessDetailsRequest;
class GetExternalDataViewAccessDetailsResponse;
class GetPermissionGroupRequest;
class GetPermissionGroupResponse;
class GetProgrammaticAccessCredentialsRequest;
class GetProgrammaticAccessCredentialsResponse;
class GetUserRequest;
class GetUserResponse;
class GetWorkingLocationRequest;
class GetWorkingLocationResponse;
class ListChangesetsRequest;
class ListChangesetsResponse;
class ListDataViewsRequest;
class ListDataViewsResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListPermissionGroupsRequest;
class ListPermissionGroupsResponse;
class ListPermissionGroupsByUserRequest;
class ListPermissionGroupsByUserResponse;
class ListUsersRequest;
class ListUsersResponse;
class ListUsersByPermissionGroupRequest;
class ListUsersByPermissionGroupResponse;
class ResetUserPasswordRequest;
class ResetUserPasswordResponse;
class UpdateChangesetRequest;
class UpdateChangesetResponse;
class UpdateDatasetRequest;
class UpdateDatasetResponse;
class UpdatePermissionGroupRequest;
class UpdatePermissionGroupResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWSFINSPACEDATA_EXPORT FinspaceDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FinspaceDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit FinspaceDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateUserToPermissionGroupResponse * associateUserToPermissionGroup(const AssociateUserToPermissionGroupRequest &request);
    CreateChangesetResponse * createChangeset(const CreateChangesetRequest &request);
    CreateDataViewResponse * createDataView(const CreateDataViewRequest &request);
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreatePermissionGroupResponse * createPermissionGroup(const CreatePermissionGroupRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeletePermissionGroupResponse * deletePermissionGroup(const DeletePermissionGroupRequest &request);
    DisableUserResponse * disableUser(const DisableUserRequest &request);
    DisassociateUserFromPermissionGroupResponse * disassociateUserFromPermissionGroup(const DisassociateUserFromPermissionGroupRequest &request);
    EnableUserResponse * enableUser(const EnableUserRequest &request);
    GetChangesetResponse * getChangeset(const GetChangesetRequest &request);
    GetDataViewResponse * getDataView(const GetDataViewRequest &request);
    GetDatasetResponse * getDataset(const GetDatasetRequest &request);
    GetExternalDataViewAccessDetailsResponse * getExternalDataViewAccessDetails(const GetExternalDataViewAccessDetailsRequest &request);
    GetPermissionGroupResponse * getPermissionGroup(const GetPermissionGroupRequest &request);
    GetProgrammaticAccessCredentialsResponse * getProgrammaticAccessCredentials(const GetProgrammaticAccessCredentialsRequest &request);
    GetUserResponse * getUser(const GetUserRequest &request);
    GetWorkingLocationResponse * getWorkingLocation(const GetWorkingLocationRequest &request);
    ListChangesetsResponse * listChangesets(const ListChangesetsRequest &request);
    ListDataViewsResponse * listDataViews(const ListDataViewsRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListPermissionGroupsResponse * listPermissionGroups(const ListPermissionGroupsRequest &request);
    ListPermissionGroupsByUserResponse * listPermissionGroupsByUser(const ListPermissionGroupsByUserRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    ListUsersByPermissionGroupResponse * listUsersByPermissionGroup(const ListUsersByPermissionGroupRequest &request);
    ResetUserPasswordResponse * resetUserPassword(const ResetUserPasswordRequest &request);
    UpdateChangesetResponse * updateChangeset(const UpdateChangesetRequest &request);
    UpdateDatasetResponse * updateDataset(const UpdateDatasetRequest &request);
    UpdatePermissionGroupResponse * updatePermissionGroup(const UpdatePermissionGroupRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(FinspaceDataClient)
    Q_DISABLE_COPY(FinspaceDataClient)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
