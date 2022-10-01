// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUDITMANAGERCLIENT_H
#define QTAWS_AUDITMANAGERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsauditmanagerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AuditManager {

class AuditManagerClientPrivate;
class AssociateAssessmentReportEvidenceFolderRequest;
class AssociateAssessmentReportEvidenceFolderResponse;
class BatchAssociateAssessmentReportEvidenceRequest;
class BatchAssociateAssessmentReportEvidenceResponse;
class BatchCreateDelegationByAssessmentRequest;
class BatchCreateDelegationByAssessmentResponse;
class BatchDeleteDelegationByAssessmentRequest;
class BatchDeleteDelegationByAssessmentResponse;
class BatchDisassociateAssessmentReportEvidenceRequest;
class BatchDisassociateAssessmentReportEvidenceResponse;
class BatchImportEvidenceToAssessmentControlRequest;
class BatchImportEvidenceToAssessmentControlResponse;
class CreateAssessmentRequest;
class CreateAssessmentResponse;
class CreateAssessmentFrameworkRequest;
class CreateAssessmentFrameworkResponse;
class CreateAssessmentReportRequest;
class CreateAssessmentReportResponse;
class CreateControlRequest;
class CreateControlResponse;
class DeleteAssessmentRequest;
class DeleteAssessmentResponse;
class DeleteAssessmentFrameworkRequest;
class DeleteAssessmentFrameworkResponse;
class DeleteAssessmentFrameworkShareRequest;
class DeleteAssessmentFrameworkShareResponse;
class DeleteAssessmentReportRequest;
class DeleteAssessmentReportResponse;
class DeleteControlRequest;
class DeleteControlResponse;
class DeregisterAccountRequest;
class DeregisterAccountResponse;
class DeregisterOrganizationAdminAccountRequest;
class DeregisterOrganizationAdminAccountResponse;
class DisassociateAssessmentReportEvidenceFolderRequest;
class DisassociateAssessmentReportEvidenceFolderResponse;
class GetAccountStatusRequest;
class GetAccountStatusResponse;
class GetAssessmentRequest;
class GetAssessmentResponse;
class GetAssessmentFrameworkRequest;
class GetAssessmentFrameworkResponse;
class GetAssessmentReportUrlRequest;
class GetAssessmentReportUrlResponse;
class GetChangeLogsRequest;
class GetChangeLogsResponse;
class GetControlRequest;
class GetControlResponse;
class GetDelegationsRequest;
class GetDelegationsResponse;
class GetEvidenceRequest;
class GetEvidenceResponse;
class GetEvidenceByEvidenceFolderRequest;
class GetEvidenceByEvidenceFolderResponse;
class GetEvidenceFolderRequest;
class GetEvidenceFolderResponse;
class GetEvidenceFoldersByAssessmentRequest;
class GetEvidenceFoldersByAssessmentResponse;
class GetEvidenceFoldersByAssessmentControlRequest;
class GetEvidenceFoldersByAssessmentControlResponse;
class GetInsightsRequest;
class GetInsightsResponse;
class GetInsightsByAssessmentRequest;
class GetInsightsByAssessmentResponse;
class GetOrganizationAdminAccountRequest;
class GetOrganizationAdminAccountResponse;
class GetServicesInScopeRequest;
class GetServicesInScopeResponse;
class GetSettingsRequest;
class GetSettingsResponse;
class ListAssessmentControlInsightsByControlDomainRequest;
class ListAssessmentControlInsightsByControlDomainResponse;
class ListAssessmentFrameworkShareRequestsRequest;
class ListAssessmentFrameworkShareRequestsResponse;
class ListAssessmentFrameworksRequest;
class ListAssessmentFrameworksResponse;
class ListAssessmentReportsRequest;
class ListAssessmentReportsResponse;
class ListAssessmentsRequest;
class ListAssessmentsResponse;
class ListControlDomainInsightsRequest;
class ListControlDomainInsightsResponse;
class ListControlDomainInsightsByAssessmentRequest;
class ListControlDomainInsightsByAssessmentResponse;
class ListControlInsightsByControlDomainRequest;
class ListControlInsightsByControlDomainResponse;
class ListControlsRequest;
class ListControlsResponse;
class ListKeywordsForDataSourceRequest;
class ListKeywordsForDataSourceResponse;
class ListNotificationsRequest;
class ListNotificationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RegisterAccountRequest;
class RegisterAccountResponse;
class RegisterOrganizationAdminAccountRequest;
class RegisterOrganizationAdminAccountResponse;
class StartAssessmentFrameworkShareRequest;
class StartAssessmentFrameworkShareResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAssessmentRequest;
class UpdateAssessmentResponse;
class UpdateAssessmentControlRequest;
class UpdateAssessmentControlResponse;
class UpdateAssessmentControlSetStatusRequest;
class UpdateAssessmentControlSetStatusResponse;
class UpdateAssessmentFrameworkRequest;
class UpdateAssessmentFrameworkResponse;
class UpdateAssessmentFrameworkShareRequest;
class UpdateAssessmentFrameworkShareResponse;
class UpdateAssessmentStatusRequest;
class UpdateAssessmentStatusResponse;
class UpdateControlRequest;
class UpdateControlResponse;
class UpdateSettingsRequest;
class UpdateSettingsResponse;
class ValidateAssessmentReportIntegrityRequest;
class ValidateAssessmentReportIntegrityResponse;

class QTAWSAUDITMANAGER_EXPORT AuditManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AuditManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AuditManagerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateAssessmentReportEvidenceFolderResponse * associateAssessmentReportEvidenceFolder(const AssociateAssessmentReportEvidenceFolderRequest &request);
    BatchAssociateAssessmentReportEvidenceResponse * batchAssociateAssessmentReportEvidence(const BatchAssociateAssessmentReportEvidenceRequest &request);
    BatchCreateDelegationByAssessmentResponse * batchCreateDelegationByAssessment(const BatchCreateDelegationByAssessmentRequest &request);
    BatchDeleteDelegationByAssessmentResponse * batchDeleteDelegationByAssessment(const BatchDeleteDelegationByAssessmentRequest &request);
    BatchDisassociateAssessmentReportEvidenceResponse * batchDisassociateAssessmentReportEvidence(const BatchDisassociateAssessmentReportEvidenceRequest &request);
    BatchImportEvidenceToAssessmentControlResponse * batchImportEvidenceToAssessmentControl(const BatchImportEvidenceToAssessmentControlRequest &request);
    CreateAssessmentResponse * createAssessment(const CreateAssessmentRequest &request);
    CreateAssessmentFrameworkResponse * createAssessmentFramework(const CreateAssessmentFrameworkRequest &request);
    CreateAssessmentReportResponse * createAssessmentReport(const CreateAssessmentReportRequest &request);
    CreateControlResponse * createControl(const CreateControlRequest &request);
    DeleteAssessmentResponse * deleteAssessment(const DeleteAssessmentRequest &request);
    DeleteAssessmentFrameworkResponse * deleteAssessmentFramework(const DeleteAssessmentFrameworkRequest &request);
    DeleteAssessmentFrameworkShareResponse * deleteAssessmentFrameworkShare(const DeleteAssessmentFrameworkShareRequest &request);
    DeleteAssessmentReportResponse * deleteAssessmentReport(const DeleteAssessmentReportRequest &request);
    DeleteControlResponse * deleteControl(const DeleteControlRequest &request);
    DeregisterAccountResponse * deregisterAccount(const DeregisterAccountRequest &request);
    DeregisterOrganizationAdminAccountResponse * deregisterOrganizationAdminAccount(const DeregisterOrganizationAdminAccountRequest &request);
    DisassociateAssessmentReportEvidenceFolderResponse * disassociateAssessmentReportEvidenceFolder(const DisassociateAssessmentReportEvidenceFolderRequest &request);
    GetAccountStatusResponse * getAccountStatus(const GetAccountStatusRequest &request);
    GetAssessmentResponse * getAssessment(const GetAssessmentRequest &request);
    GetAssessmentFrameworkResponse * getAssessmentFramework(const GetAssessmentFrameworkRequest &request);
    GetAssessmentReportUrlResponse * getAssessmentReportUrl(const GetAssessmentReportUrlRequest &request);
    GetChangeLogsResponse * getChangeLogs(const GetChangeLogsRequest &request);
    GetControlResponse * getControl(const GetControlRequest &request);
    GetDelegationsResponse * getDelegations(const GetDelegationsRequest &request);
    GetEvidenceResponse * getEvidence(const GetEvidenceRequest &request);
    GetEvidenceByEvidenceFolderResponse * getEvidenceByEvidenceFolder(const GetEvidenceByEvidenceFolderRequest &request);
    GetEvidenceFolderResponse * getEvidenceFolder(const GetEvidenceFolderRequest &request);
    GetEvidenceFoldersByAssessmentResponse * getEvidenceFoldersByAssessment(const GetEvidenceFoldersByAssessmentRequest &request);
    GetEvidenceFoldersByAssessmentControlResponse * getEvidenceFoldersByAssessmentControl(const GetEvidenceFoldersByAssessmentControlRequest &request);
    GetInsightsResponse * getInsights(const GetInsightsRequest &request);
    GetInsightsByAssessmentResponse * getInsightsByAssessment(const GetInsightsByAssessmentRequest &request);
    GetOrganizationAdminAccountResponse * getOrganizationAdminAccount(const GetOrganizationAdminAccountRequest &request);
    GetServicesInScopeResponse * getServicesInScope(const GetServicesInScopeRequest &request);
    GetSettingsResponse * getSettings(const GetSettingsRequest &request);
    ListAssessmentControlInsightsByControlDomainResponse * listAssessmentControlInsightsByControlDomain(const ListAssessmentControlInsightsByControlDomainRequest &request);
    ListAssessmentFrameworkShareRequestsResponse * listAssessmentFrameworkShareRequests(const ListAssessmentFrameworkShareRequestsRequest &request);
    ListAssessmentFrameworksResponse * listAssessmentFrameworks(const ListAssessmentFrameworksRequest &request);
    ListAssessmentReportsResponse * listAssessmentReports(const ListAssessmentReportsRequest &request);
    ListAssessmentsResponse * listAssessments(const ListAssessmentsRequest &request);
    ListControlDomainInsightsResponse * listControlDomainInsights(const ListControlDomainInsightsRequest &request);
    ListControlDomainInsightsByAssessmentResponse * listControlDomainInsightsByAssessment(const ListControlDomainInsightsByAssessmentRequest &request);
    ListControlInsightsByControlDomainResponse * listControlInsightsByControlDomain(const ListControlInsightsByControlDomainRequest &request);
    ListControlsResponse * listControls(const ListControlsRequest &request);
    ListKeywordsForDataSourceResponse * listKeywordsForDataSource(const ListKeywordsForDataSourceRequest &request);
    ListNotificationsResponse * listNotifications(const ListNotificationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RegisterAccountResponse * registerAccount(const RegisterAccountRequest &request);
    RegisterOrganizationAdminAccountResponse * registerOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest &request);
    StartAssessmentFrameworkShareResponse * startAssessmentFrameworkShare(const StartAssessmentFrameworkShareRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAssessmentResponse * updateAssessment(const UpdateAssessmentRequest &request);
    UpdateAssessmentControlResponse * updateAssessmentControl(const UpdateAssessmentControlRequest &request);
    UpdateAssessmentControlSetStatusResponse * updateAssessmentControlSetStatus(const UpdateAssessmentControlSetStatusRequest &request);
    UpdateAssessmentFrameworkResponse * updateAssessmentFramework(const UpdateAssessmentFrameworkRequest &request);
    UpdateAssessmentFrameworkShareResponse * updateAssessmentFrameworkShare(const UpdateAssessmentFrameworkShareRequest &request);
    UpdateAssessmentStatusResponse * updateAssessmentStatus(const UpdateAssessmentStatusRequest &request);
    UpdateControlResponse * updateControl(const UpdateControlRequest &request);
    UpdateSettingsResponse * updateSettings(const UpdateSettingsRequest &request);
    ValidateAssessmentReportIntegrityResponse * validateAssessmentReportIntegrity(const ValidateAssessmentReportIntegrityRequest &request);

private:
    Q_DECLARE_PRIVATE(AuditManagerClient)
    Q_DISABLE_COPY(AuditManagerClient)

};

} // namespace AuditManager
} // namespace QtAws

#endif
