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

#ifndef QTAWS_LAKEFORMATIONCLIENT_H
#define QTAWS_LAKEFORMATIONCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslakeformationglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LakeFormation {

class LakeFormationClientPrivate;
class AddLFTagsToResourceRequest;
class AddLFTagsToResourceResponse;
class BatchGrantPermissionsRequest;
class BatchGrantPermissionsResponse;
class BatchRevokePermissionsRequest;
class BatchRevokePermissionsResponse;
class CreateLFTagRequest;
class CreateLFTagResponse;
class DeleteLFTagRequest;
class DeleteLFTagResponse;
class DeregisterResourceRequest;
class DeregisterResourceResponse;
class DescribeResourceRequest;
class DescribeResourceResponse;
class GetDataLakeSettingsRequest;
class GetDataLakeSettingsResponse;
class GetEffectivePermissionsForPathRequest;
class GetEffectivePermissionsForPathResponse;
class GetLFTagRequest;
class GetLFTagResponse;
class GetResourceLFTagsRequest;
class GetResourceLFTagsResponse;
class GrantPermissionsRequest;
class GrantPermissionsResponse;
class ListLFTagsRequest;
class ListLFTagsResponse;
class ListPermissionsRequest;
class ListPermissionsResponse;
class ListResourcesRequest;
class ListResourcesResponse;
class PutDataLakeSettingsRequest;
class PutDataLakeSettingsResponse;
class RegisterResourceRequest;
class RegisterResourceResponse;
class RemoveLFTagsFromResourceRequest;
class RemoveLFTagsFromResourceResponse;
class RevokePermissionsRequest;
class RevokePermissionsResponse;
class SearchDatabasesByLFTagsRequest;
class SearchDatabasesByLFTagsResponse;
class SearchTablesByLFTagsRequest;
class SearchTablesByLFTagsResponse;
class UpdateLFTagRequest;
class UpdateLFTagResponse;
class UpdateResourceRequest;
class UpdateResourceResponse;

class QTAWSLAKEFORMATION_EXPORT LakeFormationClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LakeFormationClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LakeFormationClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddLFTagsToResourceResponse * addLFTagsToResource(const AddLFTagsToResourceRequest &request);
    BatchGrantPermissionsResponse * batchGrantPermissions(const BatchGrantPermissionsRequest &request);
    BatchRevokePermissionsResponse * batchRevokePermissions(const BatchRevokePermissionsRequest &request);
    CreateLFTagResponse * createLFTag(const CreateLFTagRequest &request);
    DeleteLFTagResponse * deleteLFTag(const DeleteLFTagRequest &request);
    DeregisterResourceResponse * deregisterResource(const DeregisterResourceRequest &request);
    DescribeResourceResponse * describeResource(const DescribeResourceRequest &request);
    GetDataLakeSettingsResponse * getDataLakeSettings(const GetDataLakeSettingsRequest &request);
    GetEffectivePermissionsForPathResponse * getEffectivePermissionsForPath(const GetEffectivePermissionsForPathRequest &request);
    GetLFTagResponse * getLFTag(const GetLFTagRequest &request);
    GetResourceLFTagsResponse * getResourceLFTags(const GetResourceLFTagsRequest &request);
    GrantPermissionsResponse * grantPermissions(const GrantPermissionsRequest &request);
    ListLFTagsResponse * listLFTags(const ListLFTagsRequest &request);
    ListPermissionsResponse * listPermissions(const ListPermissionsRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    PutDataLakeSettingsResponse * putDataLakeSettings(const PutDataLakeSettingsRequest &request);
    RegisterResourceResponse * registerResource(const RegisterResourceRequest &request);
    RemoveLFTagsFromResourceResponse * removeLFTagsFromResource(const RemoveLFTagsFromResourceRequest &request);
    RevokePermissionsResponse * revokePermissions(const RevokePermissionsRequest &request);
    SearchDatabasesByLFTagsResponse * searchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest &request);
    SearchTablesByLFTagsResponse * searchTablesByLFTags(const SearchTablesByLFTagsRequest &request);
    UpdateLFTagResponse * updateLFTag(const UpdateLFTagRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);

protected:
    /// @cond internal
    LakeFormationClientPrivate * const d_ptr; ///< Internal d-pointer.
    LakeFormationClient(LakeFormationClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(LakeFormationClient)
    Q_DISABLE_COPY(LakeFormationClient)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
