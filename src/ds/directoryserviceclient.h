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

#ifndef QTAWS_DIRECTORYSERVICECLIENT_H
#define QTAWS_DIRECTORYSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace DirectoryService {

class DirectoryServiceClientPrivate;
class AddIpRoutesResponse;
class AddTagsToResourceResponse;
class CancelSchemaExtensionResponse;
class ConnectDirectoryResponse;
class CreateAliasResponse;
class CreateComputerResponse;
class CreateConditionalForwarderResponse;
class CreateDirectoryResponse;
class CreateMicrosoftADResponse;
class CreateSnapshotResponse;
class CreateTrustResponse;
class DeleteConditionalForwarderResponse;
class DeleteDirectoryResponse;
class DeleteSnapshotResponse;
class DeleteTrustResponse;
class DeregisterEventTopicResponse;
class DescribeConditionalForwardersResponse;
class DescribeDirectoriesResponse;
class DescribeDomainControllersResponse;
class DescribeEventTopicsResponse;
class DescribeSnapshotsResponse;
class DescribeTrustsResponse;
class DisableRadiusResponse;
class DisableSsoResponse;
class EnableRadiusResponse;
class EnableSsoResponse;
class GetDirectoryLimitsResponse;
class GetSnapshotLimitsResponse;
class ListIpRoutesResponse;
class ListSchemaExtensionsResponse;
class ListTagsForResourceResponse;
class RegisterEventTopicResponse;
class RemoveIpRoutesResponse;
class RemoveTagsFromResourceResponse;
class RestoreFromSnapshotResponse;
class StartSchemaExtensionResponse;
class UpdateConditionalForwarderResponse;
class UpdateNumberOfDomainControllersResponse;
class UpdateRadiusResponse;
class VerifyTrustResponse;

class QTAWS_EXPORT DirectoryServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DirectoryServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DirectoryServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddIpRoutesResponse * addIpRoutes(const AddIpRoutesRequest &request);
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    CancelSchemaExtensionResponse * cancelSchemaExtension(const CancelSchemaExtensionRequest &request);
    ConnectDirectoryResponse * connectDirectory(const ConnectDirectoryRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateComputerResponse * createComputer(const CreateComputerRequest &request);
    CreateConditionalForwarderResponse * createConditionalForwarder(const CreateConditionalForwarderRequest &request);
    CreateDirectoryResponse * createDirectory(const CreateDirectoryRequest &request);
    CreateMicrosoftADResponse * createMicrosoftAD(const CreateMicrosoftADRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateTrustResponse * createTrust(const CreateTrustRequest &request);
    DeleteConditionalForwarderResponse * deleteConditionalForwarder(const DeleteConditionalForwarderRequest &request);
    DeleteDirectoryResponse * deleteDirectory(const DeleteDirectoryRequest &request);
    DeleteSnapshotResponse * deleteSnapshot(const DeleteSnapshotRequest &request);
    DeleteTrustResponse * deleteTrust(const DeleteTrustRequest &request);
    DeregisterEventTopicResponse * deregisterEventTopic(const DeregisterEventTopicRequest &request);
    DescribeConditionalForwardersResponse * describeConditionalForwarders(const DescribeConditionalForwardersRequest &request);
    DescribeDirectoriesResponse * describeDirectories(const DescribeDirectoriesRequest &request);
    DescribeDomainControllersResponse * describeDomainControllers(const DescribeDomainControllersRequest &request);
    DescribeEventTopicsResponse * describeEventTopics(const DescribeEventTopicsRequest &request);
    DescribeSnapshotsResponse * describeSnapshots(const DescribeSnapshotsRequest &request);
    DescribeTrustsResponse * describeTrusts(const DescribeTrustsRequest &request);
    DisableRadiusResponse * disableRadius(const DisableRadiusRequest &request);
    DisableSsoResponse * disableSso(const DisableSsoRequest &request);
    EnableRadiusResponse * enableRadius(const EnableRadiusRequest &request);
    EnableSsoResponse * enableSso(const EnableSsoRequest &request);
    GetDirectoryLimitsResponse * getDirectoryLimits(const GetDirectoryLimitsRequest &request);
    GetSnapshotLimitsResponse * getSnapshotLimits(const GetSnapshotLimitsRequest &request);
    ListIpRoutesResponse * listIpRoutes(const ListIpRoutesRequest &request);
    ListSchemaExtensionsResponse * listSchemaExtensions(const ListSchemaExtensionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RegisterEventTopicResponse * registerEventTopic(const RegisterEventTopicRequest &request);
    RemoveIpRoutesResponse * removeIpRoutes(const RemoveIpRoutesRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    RestoreFromSnapshotResponse * restoreFromSnapshot(const RestoreFromSnapshotRequest &request);
    StartSchemaExtensionResponse * startSchemaExtension(const StartSchemaExtensionRequest &request);
    UpdateConditionalForwarderResponse * updateConditionalForwarder(const UpdateConditionalForwarderRequest &request);
    UpdateNumberOfDomainControllersResponse * updateNumberOfDomainControllers(const UpdateNumberOfDomainControllersRequest &request);
    UpdateRadiusResponse * updateRadius(const UpdateRadiusRequest &request);
    VerifyTrustResponse * verifyTrust(const VerifyTrustRequest &request);

private:
    Q_DECLARE_PRIVATE(DirectoryServiceClient)
    Q_DISABLE_COPY(DirectoryServiceClient)

};

} // namespace DirectoryService
} // namespace AWS

#endif
