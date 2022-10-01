// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLACIERCLIENT_H
#define QTAWS_GLACIERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsglacierglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Glacier {

class GlacierClientPrivate;
class AbortMultipartUploadRequest;
class AbortMultipartUploadResponse;
class AbortVaultLockRequest;
class AbortVaultLockResponse;
class AddTagsToVaultRequest;
class AddTagsToVaultResponse;
class CompleteMultipartUploadRequest;
class CompleteMultipartUploadResponse;
class CompleteVaultLockRequest;
class CompleteVaultLockResponse;
class CreateVaultRequest;
class CreateVaultResponse;
class DeleteArchiveRequest;
class DeleteArchiveResponse;
class DeleteVaultRequest;
class DeleteVaultResponse;
class DeleteVaultAccessPolicyRequest;
class DeleteVaultAccessPolicyResponse;
class DeleteVaultNotificationsRequest;
class DeleteVaultNotificationsResponse;
class DescribeJobRequest;
class DescribeJobResponse;
class DescribeVaultRequest;
class DescribeVaultResponse;
class GetDataRetrievalPolicyRequest;
class GetDataRetrievalPolicyResponse;
class GetJobOutputRequest;
class GetJobOutputResponse;
class GetVaultAccessPolicyRequest;
class GetVaultAccessPolicyResponse;
class GetVaultLockRequest;
class GetVaultLockResponse;
class GetVaultNotificationsRequest;
class GetVaultNotificationsResponse;
class InitiateJobRequest;
class InitiateJobResponse;
class InitiateMultipartUploadRequest;
class InitiateMultipartUploadResponse;
class InitiateVaultLockRequest;
class InitiateVaultLockResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListMultipartUploadsRequest;
class ListMultipartUploadsResponse;
class ListPartsRequest;
class ListPartsResponse;
class ListProvisionedCapacityRequest;
class ListProvisionedCapacityResponse;
class ListTagsForVaultRequest;
class ListTagsForVaultResponse;
class ListVaultsRequest;
class ListVaultsResponse;
class PurchaseProvisionedCapacityRequest;
class PurchaseProvisionedCapacityResponse;
class RemoveTagsFromVaultRequest;
class RemoveTagsFromVaultResponse;
class SetDataRetrievalPolicyRequest;
class SetDataRetrievalPolicyResponse;
class SetVaultAccessPolicyRequest;
class SetVaultAccessPolicyResponse;
class SetVaultNotificationsRequest;
class SetVaultNotificationsResponse;
class UploadArchiveRequest;
class UploadArchiveResponse;
class UploadMultipartPartRequest;
class UploadMultipartPartResponse;

class QTAWSGLACIER_EXPORT GlacierClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GlacierClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GlacierClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    ListProvisionedCapacityResponse * listProvisionedCapacity(const ListProvisionedCapacityRequest &request);
    ListTagsForVaultResponse * listTagsForVault(const ListTagsForVaultRequest &request);
    ListVaultsResponse * listVaults(const ListVaultsRequest &request);
    PurchaseProvisionedCapacityResponse * purchaseProvisionedCapacity(const PurchaseProvisionedCapacityRequest &request);
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
} // namespace QtAws

#endif
