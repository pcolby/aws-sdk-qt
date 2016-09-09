/*
    Copyright 2013-2016 Paul Colby

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

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class DirectoryServiceClientPrivate;

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
    DirectoryServiceAddIpRoutesResponse * addIpRoutes(const DirectoryServiceAddIpRoutesRequest &request);
    DirectoryServiceAddTagsToResourceResponse * addTagsToResource(const DirectoryServiceAddTagsToResourceRequest &request);
    DirectoryServiceConnectDirectoryResponse * connectDirectory(const DirectoryServiceConnectDirectoryRequest &request);
    DirectoryServiceCreateAliasResponse * createAlias(const DirectoryServiceCreateAliasRequest &request);
    DirectoryServiceCreateComputerResponse * createComputer(const DirectoryServiceCreateComputerRequest &request);
    DirectoryServiceCreateConditionalForwarderResponse * createConditionalForwarder(const DirectoryServiceCreateConditionalForwarderRequest &request);
    DirectoryServiceCreateDirectoryResponse * createDirectory(const DirectoryServiceCreateDirectoryRequest &request);
    DirectoryServiceCreateMicrosoftADResponse * createMicrosoftAD(const DirectoryServiceCreateMicrosoftADRequest &request);
    DirectoryServiceCreateSnapshotResponse * createSnapshot(const DirectoryServiceCreateSnapshotRequest &request);
    DirectoryServiceCreateTrustResponse * createTrust(const DirectoryServiceCreateTrustRequest &request);
    DirectoryServiceDeleteConditionalForwarderResponse * deleteConditionalForwarder(const DirectoryServiceDeleteConditionalForwarderRequest &request);
    DirectoryServiceDeleteDirectoryResponse * deleteDirectory(const DirectoryServiceDeleteDirectoryRequest &request);
    DirectoryServiceDeleteSnapshotResponse * deleteSnapshot(const DirectoryServiceDeleteSnapshotRequest &request);
    DirectoryServiceDeleteTrustResponse * deleteTrust(const DirectoryServiceDeleteTrustRequest &request);
    DirectoryServiceDeregisterEventTopicResponse * deregisterEventTopic(const DirectoryServiceDeregisterEventTopicRequest &request);
    DirectoryServiceDescribeConditionalForwardersResponse * describeConditionalForwarders(const DirectoryServiceDescribeConditionalForwardersRequest &request);
    DirectoryServiceDescribeDirectoriesResponse * describeDirectories(const DirectoryServiceDescribeDirectoriesRequest &request);
    DirectoryServiceDescribeEventTopicsResponse * describeEventTopics(const DirectoryServiceDescribeEventTopicsRequest &request);
    DirectoryServiceDescribeSnapshotsResponse * describeSnapshots(const DirectoryServiceDescribeSnapshotsRequest &request);
    DirectoryServiceDescribeTrustsResponse * describeTrusts(const DirectoryServiceDescribeTrustsRequest &request);
    DirectoryServiceDisableRadiusResponse * disableRadius(const DirectoryServiceDisableRadiusRequest &request);
    DirectoryServiceDisableSsoResponse * disableSso(const DirectoryServiceDisableSsoRequest &request);
    DirectoryServiceEnableRadiusResponse * enableRadius(const DirectoryServiceEnableRadiusRequest &request);
    DirectoryServiceEnableSsoResponse * enableSso(const DirectoryServiceEnableSsoRequest &request);
    DirectoryServiceGetDirectoryLimitsResponse * getDirectoryLimits(const DirectoryServiceGetDirectoryLimitsRequest &request);
    DirectoryServiceGetSnapshotLimitsResponse * getSnapshotLimits(const DirectoryServiceGetSnapshotLimitsRequest &request);
    DirectoryServiceListIpRoutesResponse * listIpRoutes(const DirectoryServiceListIpRoutesRequest &request);
    DirectoryServiceListTagsForResourceResponse * listTagsForResource(const DirectoryServiceListTagsForResourceRequest &request);
    DirectoryServiceRegisterEventTopicResponse * registerEventTopic(const DirectoryServiceRegisterEventTopicRequest &request);
    DirectoryServiceRemoveIpRoutesResponse * removeIpRoutes(const DirectoryServiceRemoveIpRoutesRequest &request);
    DirectoryServiceRemoveTagsFromResourceResponse * removeTagsFromResource(const DirectoryServiceRemoveTagsFromResourceRequest &request);
    DirectoryServiceRestoreFromSnapshotResponse * restoreFromSnapshot(const DirectoryServiceRestoreFromSnapshotRequest &request);
    DirectoryServiceUpdateConditionalForwarderResponse * updateConditionalForwarder(const DirectoryServiceUpdateConditionalForwarderRequest &request);
    DirectoryServiceUpdateRadiusResponse * updateRadius(const DirectoryServiceUpdateRadiusRequest &request);
    DirectoryServiceVerifyTrustResponse * verifyTrust(const DirectoryServiceVerifyTrustRequest &request);

private:
    Q_DECLARE_PRIVATE(DirectoryServiceClient)
    Q_DISABLE_COPY(DirectoryServiceClient)

};

QTAWS_END_NAMESPACE

#endif
