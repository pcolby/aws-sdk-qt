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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    GlacierAbortMultipartUploadResponse * abortMultipartUpload(const GlacierAbortMultipartUploadRequest &request);
    GlacierAbortVaultLockResponse * abortVaultLock(const GlacierAbortVaultLockRequest &request);
    GlacierAddTagsToVaultResponse * addTagsToVault(const GlacierAddTagsToVaultRequest &request);
    GlacierCompleteMultipartUploadResponse * completeMultipartUpload(const GlacierCompleteMultipartUploadRequest &request);
    GlacierCompleteVaultLockResponse * completeVaultLock(const GlacierCompleteVaultLockRequest &request);
    GlacierCreateVaultResponse * createVault(const GlacierCreateVaultRequest &request);
    GlacierDeleteArchiveResponse * deleteArchive(const GlacierDeleteArchiveRequest &request);
    GlacierDeleteVaultResponse * deleteVault(const GlacierDeleteVaultRequest &request);
    GlacierDeleteVaultAccessPolicyResponse * deleteVaultAccessPolicy(const GlacierDeleteVaultAccessPolicyRequest &request);
    GlacierDeleteVaultNotificationsResponse * deleteVaultNotifications(const GlacierDeleteVaultNotificationsRequest &request);
    GlacierDescribeJobResponse * describeJob(const GlacierDescribeJobRequest &request);
    GlacierDescribeVaultResponse * describeVault(const GlacierDescribeVaultRequest &request);
    GlacierGetDataRetrievalPolicyResponse * getDataRetrievalPolicy(const GlacierGetDataRetrievalPolicyRequest &request);
    GlacierGetJobOutputResponse * getJobOutput(const GlacierGetJobOutputRequest &request);
    GlacierGetVaultAccessPolicyResponse * getVaultAccessPolicy(const GlacierGetVaultAccessPolicyRequest &request);
    GlacierGetVaultLockResponse * getVaultLock(const GlacierGetVaultLockRequest &request);
    GlacierGetVaultNotificationsResponse * getVaultNotifications(const GlacierGetVaultNotificationsRequest &request);
    GlacierInitiateJobResponse * initiateJob(const GlacierInitiateJobRequest &request);
    GlacierInitiateMultipartUploadResponse * initiateMultipartUpload(const GlacierInitiateMultipartUploadRequest &request);
    GlacierInitiateVaultLockResponse * initiateVaultLock(const GlacierInitiateVaultLockRequest &request);
    GlacierListJobsResponse * listJobs(const GlacierListJobsRequest &request);
    GlacierListMultipartUploadsResponse * listMultipartUploads(const GlacierListMultipartUploadsRequest &request);
    GlacierListPartsResponse * listParts(const GlacierListPartsRequest &request);
    GlacierListTagsForVaultResponse * listTagsForVault(const GlacierListTagsForVaultRequest &request);
    GlacierListVaultsResponse * listVaults(const GlacierListVaultsRequest &request);
    GlacierRemoveTagsFromVaultResponse * removeTagsFromVault(const GlacierRemoveTagsFromVaultRequest &request);
    GlacierSetDataRetrievalPolicyResponse * setDataRetrievalPolicy(const GlacierSetDataRetrievalPolicyRequest &request);
    GlacierSetVaultAccessPolicyResponse * setVaultAccessPolicy(const GlacierSetVaultAccessPolicyRequest &request);
    GlacierSetVaultNotificationsResponse * setVaultNotifications(const GlacierSetVaultNotificationsRequest &request);
    GlacierUploadArchiveResponse * uploadArchive(const GlacierUploadArchiveRequest &request);
    GlacierUploadMultipartPartResponse * uploadMultipartPart(const GlacierUploadMultipartPartRequest &request);

private:
    Q_DECLARE_PRIVATE(GlacierClient)
    Q_DISABLE_COPY(GlacierClient)

};

QTAWS_END_NAMESPACE

#endif
