// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMV2CLIENT_H
#define QTAWS_CLOUDHSMV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudhsmv2global.h"

class QNetworkReply;

namespace QtAws {
namespace CloudHsmV2 {

class CloudHsmV2ClientPrivate;
class CopyBackupToRegionRequest;
class CopyBackupToRegionResponse;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateHsmRequest;
class CreateHsmResponse;
class DeleteBackupRequest;
class DeleteBackupResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteHsmRequest;
class DeleteHsmResponse;
class DescribeBackupsRequest;
class DescribeBackupsResponse;
class DescribeClustersRequest;
class DescribeClustersResponse;
class InitializeClusterRequest;
class InitializeClusterResponse;
class ListTagsRequest;
class ListTagsResponse;
class ModifyBackupAttributesRequest;
class ModifyBackupAttributesResponse;
class ModifyClusterRequest;
class ModifyClusterResponse;
class RestoreBackupRequest;
class RestoreBackupResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSCLOUDHSMV2_EXPORT CloudHsmV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudHsmV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudHsmV2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CopyBackupToRegionResponse * copyBackupToRegion(const CopyBackupToRegionRequest &request);
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateHsmResponse * createHsm(const CreateHsmRequest &request);
    DeleteBackupResponse * deleteBackup(const DeleteBackupRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteHsmResponse * deleteHsm(const DeleteHsmRequest &request);
    DescribeBackupsResponse * describeBackups(const DescribeBackupsRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    InitializeClusterResponse * initializeCluster(const InitializeClusterRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ModifyBackupAttributesResponse * modifyBackupAttributes(const ModifyBackupAttributesRequest &request);
    ModifyClusterResponse * modifyCluster(const ModifyClusterRequest &request);
    RestoreBackupResponse * restoreBackup(const RestoreBackupRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudHsmV2Client)
    Q_DISABLE_COPY(CloudHsmV2Client)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
