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

#ifndef QTAWS_GLACIERCLIENT_H
#define QTAWS_GLACIERCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Glacier {

class GlacierClientPrivate;

class QTAWS_EXPORT GlacierClient : public AwsAbstractClient {
    Q_OBJECT

public:
    GlacierClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GlacierClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AbortMultipartUploadResponse * abortMultipartUpload(const AbortMultipartUploadRequest &request);
    AbortVaultLockResponse * abortVaultLock(const AbortVaultLockRequest &request);
    AddTagsToVaultResponse * addTagsToVault(const AddTagsToVaultRequest &request);
    CompleteMultipartUploadResponse * completeMultipartUpload(const CompleteMultipartUploadRequest &request);
    CompleteVaultLockResponse * completeVaultLock(const CompleteVaultLockRequest &request);
    CreateVaultResponse * createVault(const CreateVaultRequest &request);
    DeleteArchiveResponse * deleteArchive(const DeleteArchiveRequest &request);
    DeleteVaultResponse * deleteVault(const DeleteVaultRequest &request);
    DeleteVaultAccessPolicyResponse * deleteVaultAccessPolicy(const DeleteVaultAccessPolicyRequest &request);
    DeleteVaultNotificationsResponse * deleteVaultNotifications(const DeleteVaultNotificationsRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    DescribeVaultResponse * describeVault(const DescribeVaultRequest &request);
    GetDataRetrievalPolicyResponse * getDataRetrievalPolicy(const GetDataRetrievalPolicyRequest &request);
    GetJobOutputResponse * getJobOutput(const GetJobOutputRequest &request);
    GetVaultAccessPolicyResponse * getVaultAccessPolicy(const GetVaultAccessPolicyRequest &request);
    GetVaultLockResponse * getVaultLock(const GetVaultLockRequest &request);
    GetVaultNotificationsResponse * getVaultNotifications(const GetVaultNotificationsRequest &request);
    InitiateJobResponse * initiateJob(const InitiateJobRequest &request);
    InitiateMultipartUploadResponse * initiateMultipartUpload(const InitiateMultipartUploadRequest &request);
    InitiateVaultLockResponse * initiateVaultLock(const InitiateVaultLockRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListMultipartUploadsResponse * listMultipartUploads(const ListMultipartUploadsRequest &request);
    ListPartsResponse * listParts(const ListPartsRequest &request);
    ListTagsForVaultResponse * listTagsForVault(const ListTagsForVaultRequest &request);
    ListVaultsResponse * listVaults(const ListVaultsRequest &request);
    RemoveTagsFromVaultResponse * removeTagsFromVault(const RemoveTagsFromVaultRequest &request);
    SetDataRetrievalPolicyResponse * setDataRetrievalPolicy(const SetDataRetrievalPolicyRequest &request);
    SetVaultAccessPolicyResponse * setVaultAccessPolicy(const SetVaultAccessPolicyRequest &request);
    SetVaultNotificationsResponse * setVaultNotifications(const SetVaultNotificationsRequest &request);
    UploadArchiveResponse * uploadArchive(const UploadArchiveRequest &request);
    UploadMultipartPartResponse * uploadMultipartPart(const UploadMultipartPartRequest &request);

private:
    Q_DECLARE_PRIVATE(GlacierClient)
    Q_DISABLE_COPY(GlacierClient)

};

} // namespace Glacier
} // namespace AWS

#endif
