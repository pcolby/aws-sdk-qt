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

#ifndef QTAWS_DIRECTORYSERVICECLIENT_H
#define QTAWS_DIRECTORYSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace DirectoryService {

class DirectoryServiceClientPrivate;
class AddIpRoutesRequest;
class AddIpRoutesResponse;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class CancelSchemaExtensionRequest;
class CancelSchemaExtensionResponse;
class ConnectDirectoryRequest;
class ConnectDirectoryResponse;
class CreateAliasRequest;
class CreateAliasResponse;
class CreateComputerRequest;
class CreateComputerResponse;
class CreateConditionalForwarderRequest;
class CreateConditionalForwarderResponse;
class CreateDirectoryRequest;
class CreateDirectoryResponse;
class CreateMicrosoftADRequest;
class CreateMicrosoftADResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class CreateTrustRequest;
class CreateTrustResponse;
class DeleteConditionalForwarderRequest;
class DeleteConditionalForwarderResponse;
class DeleteDirectoryRequest;
class DeleteDirectoryResponse;
class DeleteSnapshotRequest;
class DeleteSnapshotResponse;
class DeleteTrustRequest;
class DeleteTrustResponse;
class DeregisterEventTopicRequest;
class DeregisterEventTopicResponse;
class DescribeConditionalForwardersRequest;
class DescribeConditionalForwardersResponse;
class DescribeDirectoriesRequest;
class DescribeDirectoriesResponse;
class DescribeDomainControllersRequest;
class DescribeDomainControllersResponse;
class DescribeEventTopicsRequest;
class DescribeEventTopicsResponse;
class DescribeSnapshotsRequest;
class DescribeSnapshotsResponse;
class DescribeTrustsRequest;
class DescribeTrustsResponse;
class DisableRadiusRequest;
class DisableRadiusResponse;
class DisableSsoRequest;
class DisableSsoResponse;
class EnableRadiusRequest;
class EnableRadiusResponse;
class EnableSsoRequest;
class EnableSsoResponse;
class GetDirectoryLimitsRequest;
class GetDirectoryLimitsResponse;
class GetSnapshotLimitsRequest;
class GetSnapshotLimitsResponse;
class ListIpRoutesRequest;
class ListIpRoutesResponse;
class ListSchemaExtensionsRequest;
class ListSchemaExtensionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RegisterEventTopicRequest;
class RegisterEventTopicResponse;
class RemoveIpRoutesRequest;
class RemoveIpRoutesResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;
class RestoreFromSnapshotRequest;
class RestoreFromSnapshotResponse;
class StartSchemaExtensionRequest;
class StartSchemaExtensionResponse;
class UpdateConditionalForwarderRequest;
class UpdateConditionalForwarderResponse;
class UpdateNumberOfDomainControllersRequest;
class UpdateNumberOfDomainControllersResponse;
class UpdateRadiusRequest;
class UpdateRadiusResponse;
class VerifyTrustRequest;
class VerifyTrustResponse;

class QTAWS_EXPORT DirectoryServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DirectoryServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DirectoryServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif
