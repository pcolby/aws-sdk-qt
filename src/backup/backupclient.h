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

#ifndef QTAWS_BACKUPCLIENT_H
#define QTAWS_BACKUPCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsbackupglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Backup {

class BackupClientPrivate;
class CreateBackupPlanRequest;
class CreateBackupPlanResponse;
class CreateBackupSelectionRequest;
class CreateBackupSelectionResponse;
class CreateBackupVaultRequest;
class CreateBackupVaultResponse;
class DeleteBackupPlanRequest;
class DeleteBackupPlanResponse;
class DeleteBackupSelectionRequest;
class DeleteBackupSelectionResponse;
class DeleteBackupVaultRequest;
class DeleteBackupVaultResponse;
class DeleteBackupVaultAccessPolicyRequest;
class DeleteBackupVaultAccessPolicyResponse;
class DeleteBackupVaultNotificationsRequest;
class DeleteBackupVaultNotificationsResponse;
class DeleteRecoveryPointRequest;
class DeleteRecoveryPointResponse;
class DescribeBackupJobRequest;
class DescribeBackupJobResponse;
class DescribeBackupVaultRequest;
class DescribeBackupVaultResponse;
class DescribeCopyJobRequest;
class DescribeCopyJobResponse;
class DescribeGlobalSettingsRequest;
class DescribeGlobalSettingsResponse;
class DescribeProtectedResourceRequest;
class DescribeProtectedResourceResponse;
class DescribeRecoveryPointRequest;
class DescribeRecoveryPointResponse;
class DescribeRegionSettingsRequest;
class DescribeRegionSettingsResponse;
class DescribeRestoreJobRequest;
class DescribeRestoreJobResponse;
class DisassociateRecoveryPointRequest;
class DisassociateRecoveryPointResponse;
class ExportBackupPlanTemplateRequest;
class ExportBackupPlanTemplateResponse;
class GetBackupPlanRequest;
class GetBackupPlanResponse;
class GetBackupPlanFromJSONRequest;
class GetBackupPlanFromJSONResponse;
class GetBackupPlanFromTemplateRequest;
class GetBackupPlanFromTemplateResponse;
class GetBackupSelectionRequest;
class GetBackupSelectionResponse;
class GetBackupVaultAccessPolicyRequest;
class GetBackupVaultAccessPolicyResponse;
class GetBackupVaultNotificationsRequest;
class GetBackupVaultNotificationsResponse;
class GetRecoveryPointRestoreMetadataRequest;
class GetRecoveryPointRestoreMetadataResponse;
class GetSupportedResourceTypesRequest;
class GetSupportedResourceTypesResponse;
class ListBackupJobsRequest;
class ListBackupJobsResponse;
class ListBackupPlanTemplatesRequest;
class ListBackupPlanTemplatesResponse;
class ListBackupPlanVersionsRequest;
class ListBackupPlanVersionsResponse;
class ListBackupPlansRequest;
class ListBackupPlansResponse;
class ListBackupSelectionsRequest;
class ListBackupSelectionsResponse;
class ListBackupVaultsRequest;
class ListBackupVaultsResponse;
class ListCopyJobsRequest;
class ListCopyJobsResponse;
class ListProtectedResourcesRequest;
class ListProtectedResourcesResponse;
class ListRecoveryPointsByBackupVaultRequest;
class ListRecoveryPointsByBackupVaultResponse;
class ListRecoveryPointsByResourceRequest;
class ListRecoveryPointsByResourceResponse;
class ListRestoreJobsRequest;
class ListRestoreJobsResponse;
class ListTagsRequest;
class ListTagsResponse;
class PutBackupVaultAccessPolicyRequest;
class PutBackupVaultAccessPolicyResponse;
class PutBackupVaultNotificationsRequest;
class PutBackupVaultNotificationsResponse;
class StartBackupJobRequest;
class StartBackupJobResponse;
class StartCopyJobRequest;
class StartCopyJobResponse;
class StartRestoreJobRequest;
class StartRestoreJobResponse;
class StopBackupJobRequest;
class StopBackupJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateBackupPlanRequest;
class UpdateBackupPlanResponse;
class UpdateGlobalSettingsRequest;
class UpdateGlobalSettingsResponse;
class UpdateRecoveryPointLifecycleRequest;
class UpdateRecoveryPointLifecycleResponse;
class UpdateRegionSettingsRequest;
class UpdateRegionSettingsResponse;

class QTAWSBACKUP_EXPORT BackupClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BackupClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    BackupClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBackupPlanResponse * createBackupPlan(const CreateBackupPlanRequest &request);
    CreateBackupSelectionResponse * createBackupSelection(const CreateBackupSelectionRequest &request);
    CreateBackupVaultResponse * createBackupVault(const CreateBackupVaultRequest &request);
    DeleteBackupPlanResponse * deleteBackupPlan(const DeleteBackupPlanRequest &request);
    DeleteBackupSelectionResponse * deleteBackupSelection(const DeleteBackupSelectionRequest &request);
    DeleteBackupVaultResponse * deleteBackupVault(const DeleteBackupVaultRequest &request);
    DeleteBackupVaultAccessPolicyResponse * deleteBackupVaultAccessPolicy(const DeleteBackupVaultAccessPolicyRequest &request);
    DeleteBackupVaultNotificationsResponse * deleteBackupVaultNotifications(const DeleteBackupVaultNotificationsRequest &request);
    DeleteRecoveryPointResponse * deleteRecoveryPoint(const DeleteRecoveryPointRequest &request);
    DescribeBackupJobResponse * describeBackupJob(const DescribeBackupJobRequest &request);
    DescribeBackupVaultResponse * describeBackupVault(const DescribeBackupVaultRequest &request);
    DescribeCopyJobResponse * describeCopyJob(const DescribeCopyJobRequest &request);
    DescribeGlobalSettingsResponse * describeGlobalSettings(const DescribeGlobalSettingsRequest &request);
    DescribeProtectedResourceResponse * describeProtectedResource(const DescribeProtectedResourceRequest &request);
    DescribeRecoveryPointResponse * describeRecoveryPoint(const DescribeRecoveryPointRequest &request);
    DescribeRegionSettingsResponse * describeRegionSettings(const DescribeRegionSettingsRequest &request);
    DescribeRestoreJobResponse * describeRestoreJob(const DescribeRestoreJobRequest &request);
    DisassociateRecoveryPointResponse * disassociateRecoveryPoint(const DisassociateRecoveryPointRequest &request);
    ExportBackupPlanTemplateResponse * exportBackupPlanTemplate(const ExportBackupPlanTemplateRequest &request);
    GetBackupPlanResponse * getBackupPlan(const GetBackupPlanRequest &request);
    GetBackupPlanFromJSONResponse * getBackupPlanFromJSON(const GetBackupPlanFromJSONRequest &request);
    GetBackupPlanFromTemplateResponse * getBackupPlanFromTemplate(const GetBackupPlanFromTemplateRequest &request);
    GetBackupSelectionResponse * getBackupSelection(const GetBackupSelectionRequest &request);
    GetBackupVaultAccessPolicyResponse * getBackupVaultAccessPolicy(const GetBackupVaultAccessPolicyRequest &request);
    GetBackupVaultNotificationsResponse * getBackupVaultNotifications(const GetBackupVaultNotificationsRequest &request);
    GetRecoveryPointRestoreMetadataResponse * getRecoveryPointRestoreMetadata(const GetRecoveryPointRestoreMetadataRequest &request);
    GetSupportedResourceTypesResponse * getSupportedResourceTypes(const GetSupportedResourceTypesRequest &request);
    GetSupportedResourceTypesResponse * getSupportedResourceTypes();
    ListBackupJobsResponse * listBackupJobs(const ListBackupJobsRequest &request);
    ListBackupPlanTemplatesResponse * listBackupPlanTemplates(const ListBackupPlanTemplatesRequest &request);
    ListBackupPlanVersionsResponse * listBackupPlanVersions(const ListBackupPlanVersionsRequest &request);
    ListBackupPlansResponse * listBackupPlans(const ListBackupPlansRequest &request);
    ListBackupSelectionsResponse * listBackupSelections(const ListBackupSelectionsRequest &request);
    ListBackupVaultsResponse * listBackupVaults(const ListBackupVaultsRequest &request);
    ListCopyJobsResponse * listCopyJobs(const ListCopyJobsRequest &request);
    ListProtectedResourcesResponse * listProtectedResources(const ListProtectedResourcesRequest &request);
    ListRecoveryPointsByBackupVaultResponse * listRecoveryPointsByBackupVault(const ListRecoveryPointsByBackupVaultRequest &request);
    ListRecoveryPointsByResourceResponse * listRecoveryPointsByResource(const ListRecoveryPointsByResourceRequest &request);
    ListRestoreJobsResponse * listRestoreJobs(const ListRestoreJobsRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    PutBackupVaultAccessPolicyResponse * putBackupVaultAccessPolicy(const PutBackupVaultAccessPolicyRequest &request);
    PutBackupVaultNotificationsResponse * putBackupVaultNotifications(const PutBackupVaultNotificationsRequest &request);
    StartBackupJobResponse * startBackupJob(const StartBackupJobRequest &request);
    StartCopyJobResponse * startCopyJob(const StartCopyJobRequest &request);
    StartRestoreJobResponse * startRestoreJob(const StartRestoreJobRequest &request);
    StopBackupJobResponse * stopBackupJob(const StopBackupJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateBackupPlanResponse * updateBackupPlan(const UpdateBackupPlanRequest &request);
    UpdateGlobalSettingsResponse * updateGlobalSettings(const UpdateGlobalSettingsRequest &request);
    UpdateRecoveryPointLifecycleResponse * updateRecoveryPointLifecycle(const UpdateRecoveryPointLifecycleRequest &request);
    UpdateRegionSettingsResponse * updateRegionSettings(const UpdateRegionSettingsRequest &request);

protected:
    /// @cond internal
    BackupClientPrivate * const d_ptr; ///< Internal d-pointer.
    BackupClient(BackupClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(BackupClient)
    Q_DISABLE_COPY(BackupClient)

};

} // namespace Backup
} // namespace QtAws

#endif
