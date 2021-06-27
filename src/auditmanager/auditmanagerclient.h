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

#ifndef QTAWS_AUDITMANAGERCLIENT_H
#define QTAWS_AUDITMANAGERCLIENT_H

#include "core/awsabstractclient.h"

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
class GetOrganizationAdminAccountRequest;
class GetOrganizationAdminAccountResponse;
class GetServicesInScopeRequest;
class GetServicesInScopeResponse;
class GetSettingsRequest;
class GetSettingsResponse;
class ListAssessmentFrameworksRequest;
class ListAssessmentFrameworksResponse;
class ListAssessmentReportsRequest;
class ListAssessmentReportsResponse;
class ListAssessmentsRequest;
class ListAssessmentsResponse;
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
class UpdateAssessmentStatusRequest;
class UpdateAssessmentStatusResponse;
class UpdateControlRequest;
class UpdateControlResponse;
class UpdateSettingsRequest;
class UpdateSettingsResponse;
class ValidateAssessmentReportIntegrityRequest;
class ValidateAssessmentReportIntegrityResponse;

class QTAWS_EXPORT AuditManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AuditManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AuditManagerClient(
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
    GetOrganizationAdminAccountResponse * getOrganizationAdminAccount(const GetOrganizationAdminAccountRequest &request);
    GetServicesInScopeResponse * getServicesInScope(const GetServicesInScopeRequest &request);
    GetSettingsResponse * getSettings(const GetSettingsRequest &request);
    ListAssessmentFrameworksResponse * listAssessmentFrameworks(const ListAssessmentFrameworksRequest &request);
    ListAssessmentReportsResponse * listAssessmentReports(const ListAssessmentReportsRequest &request);
    ListAssessmentsResponse * listAssessments(const ListAssessmentsRequest &request);
    ListControlsResponse * listControls(const ListControlsRequest &request);
    ListKeywordsForDataSourceResponse * listKeywordsForDataSource(const ListKeywordsForDataSourceRequest &request);
    ListNotificationsResponse * listNotifications(const ListNotificationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RegisterAccountResponse * registerAccount(const RegisterAccountRequest &request);
    RegisterOrganizationAdminAccountResponse * registerOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAssessmentResponse * updateAssessment(const UpdateAssessmentRequest &request);
    UpdateAssessmentControlResponse * updateAssessmentControl(const UpdateAssessmentControlRequest &request);
    UpdateAssessmentControlSetStatusResponse * updateAssessmentControlSetStatus(const UpdateAssessmentControlSetStatusRequest &request);
    UpdateAssessmentFrameworkResponse * updateAssessmentFramework(const UpdateAssessmentFrameworkRequest &request);
    UpdateAssessmentStatusResponse * updateAssessmentStatus(const UpdateAssessmentStatusRequest &request);
    UpdateControlResponse * updateControl(const UpdateControlRequest &request);
    UpdateSettingsResponse * updateSettings(const UpdateSettingsRequest &request);
    ValidateAssessmentReportIntegrityResponse * validateAssessmentReportIntegrity(const ValidateAssessmentReportIntegrityRequest &request);

protected:
    /// @cond internal
    AuditManagerClientPrivate * const d_ptr; ///< Internal d-pointer.
    AuditManagerClient(AuditManagerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AuditManagerClient)
    Q_DISABLE_COPY(AuditManagerClient)

};

} // namespace AuditManager
} // namespace QtAws

#endif
