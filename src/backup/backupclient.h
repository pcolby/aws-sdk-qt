// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
class CreateFrameworkRequest;
class CreateFrameworkResponse;
class CreateReportPlanRequest;
class CreateReportPlanResponse;
class DeleteBackupPlanRequest;
class DeleteBackupPlanResponse;
class DeleteBackupSelectionRequest;
class DeleteBackupSelectionResponse;
class DeleteBackupVaultRequest;
class DeleteBackupVaultResponse;
class DeleteBackupVaultAccessPolicyRequest;
class DeleteBackupVaultAccessPolicyResponse;
class DeleteBackupVaultLockConfigurationRequest;
class DeleteBackupVaultLockConfigurationResponse;
class DeleteBackupVaultNotificationsRequest;
class DeleteBackupVaultNotificationsResponse;
class DeleteFrameworkRequest;
class DeleteFrameworkResponse;
class DeleteRecoveryPointRequest;
class DeleteRecoveryPointResponse;
class DeleteReportPlanRequest;
class DeleteReportPlanResponse;
class DescribeBackupJobRequest;
class DescribeBackupJobResponse;
class DescribeBackupVaultRequest;
class DescribeBackupVaultResponse;
class DescribeCopyJobRequest;
class DescribeCopyJobResponse;
class DescribeFrameworkRequest;
class DescribeFrameworkResponse;
class DescribeGlobalSettingsRequest;
class DescribeGlobalSettingsResponse;
class DescribeProtectedResourceRequest;
class DescribeProtectedResourceResponse;
class DescribeRecoveryPointRequest;
class DescribeRecoveryPointResponse;
class DescribeRegionSettingsRequest;
class DescribeRegionSettingsResponse;
class DescribeReportJobRequest;
class DescribeReportJobResponse;
class DescribeReportPlanRequest;
class DescribeReportPlanResponse;
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
class ListFrameworksRequest;
class ListFrameworksResponse;
class ListProtectedResourcesRequest;
class ListProtectedResourcesResponse;
class ListRecoveryPointsByBackupVaultRequest;
class ListRecoveryPointsByBackupVaultResponse;
class ListRecoveryPointsByResourceRequest;
class ListRecoveryPointsByResourceResponse;
class ListReportJobsRequest;
class ListReportJobsResponse;
class ListReportPlansRequest;
class ListReportPlansResponse;
class ListRestoreJobsRequest;
class ListRestoreJobsResponse;
class ListTagsRequest;
class ListTagsResponse;
class PutBackupVaultAccessPolicyRequest;
class PutBackupVaultAccessPolicyResponse;
class PutBackupVaultLockConfigurationRequest;
class PutBackupVaultLockConfigurationResponse;
class PutBackupVaultNotificationsRequest;
class PutBackupVaultNotificationsResponse;
class StartBackupJobRequest;
class StartBackupJobResponse;
class StartCopyJobRequest;
class StartCopyJobResponse;
class StartReportJobRequest;
class StartReportJobResponse;
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
class UpdateFrameworkRequest;
class UpdateFrameworkResponse;
class UpdateGlobalSettingsRequest;
class UpdateGlobalSettingsResponse;
class UpdateRecoveryPointLifecycleRequest;
class UpdateRecoveryPointLifecycleResponse;
class UpdateRegionSettingsRequest;
class UpdateRegionSettingsResponse;
class UpdateReportPlanRequest;
class UpdateReportPlanResponse;

class QTAWSBACKUP_EXPORT BackupClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BackupClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit BackupClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBackupPlanResponse * createBackupPlan(const CreateBackupPlanRequest &request);
    CreateBackupSelectionResponse * createBackupSelection(const CreateBackupSelectionRequest &request);
    CreateBackupVaultResponse * createBackupVault(const CreateBackupVaultRequest &request);
    CreateFrameworkResponse * createFramework(const CreateFrameworkRequest &request);
    CreateReportPlanResponse * createReportPlan(const CreateReportPlanRequest &request);
    DeleteBackupPlanResponse * deleteBackupPlan(const DeleteBackupPlanRequest &request);
    DeleteBackupSelectionResponse * deleteBackupSelection(const DeleteBackupSelectionRequest &request);
    DeleteBackupVaultResponse * deleteBackupVault(const DeleteBackupVaultRequest &request);
    DeleteBackupVaultAccessPolicyResponse * deleteBackupVaultAccessPolicy(const DeleteBackupVaultAccessPolicyRequest &request);
    DeleteBackupVaultLockConfigurationResponse * deleteBackupVaultLockConfiguration(const DeleteBackupVaultLockConfigurationRequest &request);
    DeleteBackupVaultNotificationsResponse * deleteBackupVaultNotifications(const DeleteBackupVaultNotificationsRequest &request);
    DeleteFrameworkResponse * deleteFramework(const DeleteFrameworkRequest &request);
    DeleteRecoveryPointResponse * deleteRecoveryPoint(const DeleteRecoveryPointRequest &request);
    DeleteReportPlanResponse * deleteReportPlan(const DeleteReportPlanRequest &request);
    DescribeBackupJobResponse * describeBackupJob(const DescribeBackupJobRequest &request);
    DescribeBackupVaultResponse * describeBackupVault(const DescribeBackupVaultRequest &request);
    DescribeCopyJobResponse * describeCopyJob(const DescribeCopyJobRequest &request);
    DescribeFrameworkResponse * describeFramework(const DescribeFrameworkRequest &request);
    DescribeGlobalSettingsResponse * describeGlobalSettings(const DescribeGlobalSettingsRequest &request);
    DescribeProtectedResourceResponse * describeProtectedResource(const DescribeProtectedResourceRequest &request);
    DescribeRecoveryPointResponse * describeRecoveryPoint(const DescribeRecoveryPointRequest &request);
    DescribeRegionSettingsResponse * describeRegionSettings(const DescribeRegionSettingsRequest &request);
    DescribeReportJobResponse * describeReportJob(const DescribeReportJobRequest &request);
    DescribeReportPlanResponse * describeReportPlan(const DescribeReportPlanRequest &request);
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
    ListBackupJobsResponse * listBackupJobs(const ListBackupJobsRequest &request);
    ListBackupPlanTemplatesResponse * listBackupPlanTemplates(const ListBackupPlanTemplatesRequest &request);
    ListBackupPlanVersionsResponse * listBackupPlanVersions(const ListBackupPlanVersionsRequest &request);
    ListBackupPlansResponse * listBackupPlans(const ListBackupPlansRequest &request);
    ListBackupSelectionsResponse * listBackupSelections(const ListBackupSelectionsRequest &request);
    ListBackupVaultsResponse * listBackupVaults(const ListBackupVaultsRequest &request);
    ListCopyJobsResponse * listCopyJobs(const ListCopyJobsRequest &request);
    ListFrameworksResponse * listFrameworks(const ListFrameworksRequest &request);
    ListProtectedResourcesResponse * listProtectedResources(const ListProtectedResourcesRequest &request);
    ListRecoveryPointsByBackupVaultResponse * listRecoveryPointsByBackupVault(const ListRecoveryPointsByBackupVaultRequest &request);
    ListRecoveryPointsByResourceResponse * listRecoveryPointsByResource(const ListRecoveryPointsByResourceRequest &request);
    ListReportJobsResponse * listReportJobs(const ListReportJobsRequest &request);
    ListReportPlansResponse * listReportPlans(const ListReportPlansRequest &request);
    ListRestoreJobsResponse * listRestoreJobs(const ListRestoreJobsRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    PutBackupVaultAccessPolicyResponse * putBackupVaultAccessPolicy(const PutBackupVaultAccessPolicyRequest &request);
    PutBackupVaultLockConfigurationResponse * putBackupVaultLockConfiguration(const PutBackupVaultLockConfigurationRequest &request);
    PutBackupVaultNotificationsResponse * putBackupVaultNotifications(const PutBackupVaultNotificationsRequest &request);
    StartBackupJobResponse * startBackupJob(const StartBackupJobRequest &request);
    StartCopyJobResponse * startCopyJob(const StartCopyJobRequest &request);
    StartReportJobResponse * startReportJob(const StartReportJobRequest &request);
    StartRestoreJobResponse * startRestoreJob(const StartRestoreJobRequest &request);
    StopBackupJobResponse * stopBackupJob(const StopBackupJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateBackupPlanResponse * updateBackupPlan(const UpdateBackupPlanRequest &request);
    UpdateFrameworkResponse * updateFramework(const UpdateFrameworkRequest &request);
    UpdateGlobalSettingsResponse * updateGlobalSettings(const UpdateGlobalSettingsRequest &request);
    UpdateRecoveryPointLifecycleResponse * updateRecoveryPointLifecycle(const UpdateRecoveryPointLifecycleRequest &request);
    UpdateRegionSettingsResponse * updateRegionSettings(const UpdateRegionSettingsRequest &request);
    UpdateReportPlanResponse * updateReportPlan(const UpdateReportPlanRequest &request);

private:
    Q_DECLARE_PRIVATE(BackupClient)
    Q_DISABLE_COPY(BackupClient)

};

} // namespace Backup
} // namespace QtAws

#endif
