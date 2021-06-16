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

#ifndef QTAWS_GLACIERCLIENT_H
#define QTAWS_GLACIERCLIENT_H

#include "core/awsabstractclient.h"

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

class QTAWS_EXPORT GlacierClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GlacierClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GlacierClient(
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
