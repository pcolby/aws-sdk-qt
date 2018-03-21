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

#ifndef QTAWS_CLOUDHSMV2CLIENT_H
#define QTAWS_CLOUDHSMV2CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CloudHSMV2 {

class CloudHSMV2ClientPrivate;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateHsmRequest;
class CreateHsmResponse;
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
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT CloudHSMV2Client : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudHSMV2Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudHSMV2Client(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateHsmResponse * createHsm(const CreateHsmRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteHsmResponse * deleteHsm(const DeleteHsmRequest &request);
    DescribeBackupsResponse * describeBackups(const DescribeBackupsRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    InitializeClusterResponse * initializeCluster(const InitializeClusterRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudHSMV2Client)
    Q_DISABLE_COPY(CloudHSMV2Client)

};

} // namespace CloudHSMV2
} // namespace AWS

#endif
