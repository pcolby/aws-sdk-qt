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

#ifndef QTAWS_CLOUDHSMV2CLIENT_H
#define QTAWS_CLOUDHSMV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudhsmv2global.h"

class QNetworkReply;

namespace QtAws {
namespace CloudHSMV2 {

class CloudHSMV2ClientPrivate;
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

class QTAWSCLOUDHSMV2_EXPORT CloudHSMV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudHSMV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudHSMV2Client(
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

protected:
    /// @cond internal
    CloudHSMV2ClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit CloudHSMV2Client(CloudHSMV2ClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CloudHSMV2Client)
    Q_DISABLE_COPY(CloudHSMV2Client)

};

} // namespace CloudHSMV2
} // namespace QtAws

#endif
