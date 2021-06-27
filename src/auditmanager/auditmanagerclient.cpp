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

#include "auditmanagerclient.h"
#include "auditmanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "associateassessmentreportevidencefolderrequest.h"
#include "associateassessmentreportevidencefolderresponse.h"
#include "batchassociateassessmentreportevidencerequest.h"
#include "batchassociateassessmentreportevidenceresponse.h"
#include "batchcreatedelegationbyassessmentrequest.h"
#include "batchcreatedelegationbyassessmentresponse.h"
#include "batchdeletedelegationbyassessmentrequest.h"
#include "batchdeletedelegationbyassessmentresponse.h"
#include "batchdisassociateassessmentreportevidencerequest.h"
#include "batchdisassociateassessmentreportevidenceresponse.h"
#include "batchimportevidencetoassessmentcontrolrequest.h"
#include "batchimportevidencetoassessmentcontrolresponse.h"
#include "createassessmentrequest.h"
#include "createassessmentresponse.h"
#include "createassessmentframeworkrequest.h"
#include "createassessmentframeworkresponse.h"
#include "createassessmentreportrequest.h"
#include "createassessmentreportresponse.h"
#include "createcontrolrequest.h"
#include "createcontrolresponse.h"
#include "deleteassessmentrequest.h"
#include "deleteassessmentresponse.h"
#include "deleteassessmentframeworkrequest.h"
#include "deleteassessmentframeworkresponse.h"
#include "deleteassessmentreportrequest.h"
#include "deleteassessmentreportresponse.h"
#include "deletecontrolrequest.h"
#include "deletecontrolresponse.h"
#include "deregisteraccountrequest.h"
#include "deregisteraccountresponse.h"
#include "deregisterorganizationadminaccountrequest.h"
#include "deregisterorganizationadminaccountresponse.h"
#include "disassociateassessmentreportevidencefolderrequest.h"
#include "disassociateassessmentreportevidencefolderresponse.h"
#include "getaccountstatusrequest.h"
#include "getaccountstatusresponse.h"
#include "getassessmentrequest.h"
#include "getassessmentresponse.h"
#include "getassessmentframeworkrequest.h"
#include "getassessmentframeworkresponse.h"
#include "getassessmentreporturlrequest.h"
#include "getassessmentreporturlresponse.h"
#include "getchangelogsrequest.h"
#include "getchangelogsresponse.h"
#include "getcontrolrequest.h"
#include "getcontrolresponse.h"
#include "getdelegationsrequest.h"
#include "getdelegationsresponse.h"
#include "getevidencerequest.h"
#include "getevidenceresponse.h"
#include "getevidencebyevidencefolderrequest.h"
#include "getevidencebyevidencefolderresponse.h"
#include "getevidencefolderrequest.h"
#include "getevidencefolderresponse.h"
#include "getevidencefoldersbyassessmentrequest.h"
#include "getevidencefoldersbyassessmentresponse.h"
#include "getevidencefoldersbyassessmentcontrolrequest.h"
#include "getevidencefoldersbyassessmentcontrolresponse.h"
#include "getorganizationadminaccountrequest.h"
#include "getorganizationadminaccountresponse.h"
#include "getservicesinscoperequest.h"
#include "getservicesinscoperesponse.h"
#include "getsettingsrequest.h"
#include "getsettingsresponse.h"
#include "listassessmentframeworksrequest.h"
#include "listassessmentframeworksresponse.h"
#include "listassessmentreportsrequest.h"
#include "listassessmentreportsresponse.h"
#include "listassessmentsrequest.h"
#include "listassessmentsresponse.h"
#include "listcontrolsrequest.h"
#include "listcontrolsresponse.h"
#include "listkeywordsfordatasourcerequest.h"
#include "listkeywordsfordatasourceresponse.h"
#include "listnotificationsrequest.h"
#include "listnotificationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "registeraccountrequest.h"
#include "registeraccountresponse.h"
#include "registerorganizationadminaccountrequest.h"
#include "registerorganizationadminaccountresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateassessmentrequest.h"
#include "updateassessmentresponse.h"
#include "updateassessmentcontrolrequest.h"
#include "updateassessmentcontrolresponse.h"
#include "updateassessmentcontrolsetstatusrequest.h"
#include "updateassessmentcontrolsetstatusresponse.h"
#include "updateassessmentframeworkrequest.h"
#include "updateassessmentframeworkresponse.h"
#include "updateassessmentstatusrequest.h"
#include "updateassessmentstatusresponse.h"
#include "updatecontrolrequest.h"
#include "updatecontrolresponse.h"
#include "updatesettingsrequest.h"
#include "updatesettingsresponse.h"
#include "validateassessmentreportintegrityrequest.h"
#include "validateassessmentreportintegrityresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AuditManager
 * \brief Contains classess for accessing AWS Audit Manager.
 *
 * \inmodule QtAwsAuditManager
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::AuditManagerClient
 * \brief The AuditManagerClient class provides access to the AWS Audit Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAuditManager
 *
 *  Welcome to the AWS Audit Manager API reference. This guide is for developers who need detailed information about the AWS
 *  Audit Manager API operations, data types, and errors.
 * 
 *  </p
 * 
 *  AWS Audit Manager is a service that provides automated evidence collection so that you can continuously audit your AWS
 *  usage, and assess the effectiveness of your controls to better manage risk and simplify
 * 
 *  compliance>
 * 
 *  AWS Audit Manager provides pre-built frameworks that structure and automate assessments for a given compliance standard.
 *  Frameworks include a pre-built collection of controls with descriptions and testing procedures, which are grouped
 *  according to the requirements of the specified compliance standard or regulation. You can also customize frameworks and
 *  controls to support internal audits with unique requirements.
 * 
 *  </p
 * 
 *  Use the following links to get started with the AWS Audit Manager
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical
 *  list of all AWS Audit Manager API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data types</a>: An alphabetical
 *  list of all AWS Audit Manager data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonParameters.html">Common parameters</a>:
 *  Parameters that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonErrors.html">Common errors</a>: Client and
 *  server errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to AWS Audit Manager, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html"> AWS Audit Manager User
 */

/*!
 * \brief Constructs a AuditManagerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AuditManagerClient::AuditManagerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-25"),
    QStringLiteral("auditmanager"),
    QStringLiteral("AWS Audit Manager"),
    QStringLiteral("auditmanager"),
    parent), d_ptr(new AuditManagerClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload AuditManagerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AuditManagerClient::AuditManagerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-25"),
    QStringLiteral("auditmanager"),
    QStringLiteral("AWS Audit Manager"),
    QStringLiteral("auditmanager"),
    parent), d_ptr(new AuditManagerClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * AssociateAssessmentReportEvidenceFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an evidence folder to the specified assessment report in AWS Audit Manager.
 */
AssociateAssessmentReportEvidenceFolderResponse * AuditManagerClient::associateAssessmentReportEvidenceFolder(const AssociateAssessmentReportEvidenceFolderRequest &request)
{
    return qobject_cast<AssociateAssessmentReportEvidenceFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * BatchAssociateAssessmentReportEvidenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a list of evidence to an assessment report in an AWS Audit Manager assessment.
 */
BatchAssociateAssessmentReportEvidenceResponse * AuditManagerClient::batchAssociateAssessmentReportEvidence(const BatchAssociateAssessmentReportEvidenceRequest &request)
{
    return qobject_cast<BatchAssociateAssessmentReportEvidenceResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * BatchCreateDelegationByAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a batch of delegations for a specified assessment in AWS Audit Manager.
 */
BatchCreateDelegationByAssessmentResponse * AuditManagerClient::batchCreateDelegationByAssessment(const BatchCreateDelegationByAssessmentRequest &request)
{
    return qobject_cast<BatchCreateDelegationByAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * BatchDeleteDelegationByAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the delegations in the specified AWS Audit Manager assessment.
 */
BatchDeleteDelegationByAssessmentResponse * AuditManagerClient::batchDeleteDelegationByAssessment(const BatchDeleteDelegationByAssessmentRequest &request)
{
    return qobject_cast<BatchDeleteDelegationByAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * BatchDisassociateAssessmentReportEvidenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a list of evidence from the specified assessment report in AWS Audit Manager.
 */
BatchDisassociateAssessmentReportEvidenceResponse * AuditManagerClient::batchDisassociateAssessmentReportEvidence(const BatchDisassociateAssessmentReportEvidenceRequest &request)
{
    return qobject_cast<BatchDisassociateAssessmentReportEvidenceResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * BatchImportEvidenceToAssessmentControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads one or more pieces of evidence to the specified control in the assessment in AWS Audit Manager.
 */
BatchImportEvidenceToAssessmentControlResponse * AuditManagerClient::batchImportEvidenceToAssessmentControl(const BatchImportEvidenceToAssessmentControlRequest &request)
{
    return qobject_cast<BatchImportEvidenceToAssessmentControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * CreateAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an assessment in AWS Audit Manager.
 */
CreateAssessmentResponse * AuditManagerClient::createAssessment(const CreateAssessmentRequest &request)
{
    return qobject_cast<CreateAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * CreateAssessmentFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom framework in AWS Audit Manager.
 */
CreateAssessmentFrameworkResponse * AuditManagerClient::createAssessmentFramework(const CreateAssessmentFrameworkRequest &request)
{
    return qobject_cast<CreateAssessmentFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * CreateAssessmentReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an assessment report for the specified assessment.
 */
CreateAssessmentReportResponse * AuditManagerClient::createAssessmentReport(const CreateAssessmentReportRequest &request)
{
    return qobject_cast<CreateAssessmentReportResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * CreateControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom control in AWS Audit Manager.
 */
CreateControlResponse * AuditManagerClient::createControl(const CreateControlRequest &request)
{
    return qobject_cast<CreateControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeleteAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an assessment in AWS Audit Manager.
 */
DeleteAssessmentResponse * AuditManagerClient::deleteAssessment(const DeleteAssessmentRequest &request)
{
    return qobject_cast<DeleteAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeleteAssessmentFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom framework in AWS Audit Manager.
 */
DeleteAssessmentFrameworkResponse * AuditManagerClient::deleteAssessmentFramework(const DeleteAssessmentFrameworkRequest &request)
{
    return qobject_cast<DeleteAssessmentFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeleteAssessmentReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an assessment report from an assessment in AWS Audit Manager.
 */
DeleteAssessmentReportResponse * AuditManagerClient::deleteAssessmentReport(const DeleteAssessmentReportRequest &request)
{
    return qobject_cast<DeleteAssessmentReportResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeleteControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom control in AWS Audit Manager.
 */
DeleteControlResponse * AuditManagerClient::deleteControl(const DeleteControlRequest &request)
{
    return qobject_cast<DeleteControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeregisterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters an account in AWS Audit Manager.
 */
DeregisterAccountResponse * AuditManagerClient::deregisterAccount(const DeregisterAccountRequest &request)
{
    return qobject_cast<DeregisterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeregisterOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the delegated AWS administrator account from the AWS organization.
 */
DeregisterOrganizationAdminAccountResponse * AuditManagerClient::deregisterOrganizationAdminAccount(const DeregisterOrganizationAdminAccountRequest &request)
{
    return qobject_cast<DeregisterOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DisassociateAssessmentReportEvidenceFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an evidence folder from the specified assessment report in AWS Audit Manager.
 */
DisassociateAssessmentReportEvidenceFolderResponse * AuditManagerClient::disassociateAssessmentReportEvidenceFolder(const DisassociateAssessmentReportEvidenceFolderRequest &request)
{
    return qobject_cast<DisassociateAssessmentReportEvidenceFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetAccountStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the registration status of an account in AWS Audit Manager.
 */
GetAccountStatusResponse * AuditManagerClient::getAccountStatus(const GetAccountStatusRequest &request)
{
    return qobject_cast<GetAccountStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an assessment from AWS Audit Manager.
 */
GetAssessmentResponse * AuditManagerClient::getAssessment(const GetAssessmentRequest &request)
{
    return qobject_cast<GetAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetAssessmentFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a framework from AWS Audit Manager.
 */
GetAssessmentFrameworkResponse * AuditManagerClient::getAssessmentFramework(const GetAssessmentFrameworkRequest &request)
{
    return qobject_cast<GetAssessmentFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetAssessmentReportUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the URL of a specified assessment report in AWS Audit Manager.
 */
GetAssessmentReportUrlResponse * AuditManagerClient::getAssessmentReportUrl(const GetAssessmentReportUrlRequest &request)
{
    return qobject_cast<GetAssessmentReportUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetChangeLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of changelogs from AWS Audit Manager.
 */
GetChangeLogsResponse * AuditManagerClient::getChangeLogs(const GetChangeLogsRequest &request)
{
    return qobject_cast<GetChangeLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a control from AWS Audit Manager.
 */
GetControlResponse * AuditManagerClient::getControl(const GetControlRequest &request)
{
    return qobject_cast<GetControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetDelegationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of delegations from an audit owner to a delegate.
 */
GetDelegationsResponse * AuditManagerClient::getDelegations(const GetDelegationsRequest &request)
{
    return qobject_cast<GetDelegationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetEvidenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns evidence from AWS Audit Manager.
 */
GetEvidenceResponse * AuditManagerClient::getEvidence(const GetEvidenceRequest &request)
{
    return qobject_cast<GetEvidenceResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetEvidenceByEvidenceFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all evidence from a specified evidence folder in AWS Audit Manager.
 */
GetEvidenceByEvidenceFolderResponse * AuditManagerClient::getEvidenceByEvidenceFolder(const GetEvidenceByEvidenceFolderRequest &request)
{
    return qobject_cast<GetEvidenceByEvidenceFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetEvidenceFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an evidence folder from the specified assessment in AWS Audit Manager.
 */
GetEvidenceFolderResponse * AuditManagerClient::getEvidenceFolder(const GetEvidenceFolderRequest &request)
{
    return qobject_cast<GetEvidenceFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetEvidenceFoldersByAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the evidence folders from a specified assessment in AWS Audit Manager.
 */
GetEvidenceFoldersByAssessmentResponse * AuditManagerClient::getEvidenceFoldersByAssessment(const GetEvidenceFoldersByAssessmentRequest &request)
{
    return qobject_cast<GetEvidenceFoldersByAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetEvidenceFoldersByAssessmentControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of evidence folders associated with a specified control of an assessment in AWS Audit Manager.
 */
GetEvidenceFoldersByAssessmentControlResponse * AuditManagerClient::getEvidenceFoldersByAssessmentControl(const GetEvidenceFoldersByAssessmentControlRequest &request)
{
    return qobject_cast<GetEvidenceFoldersByAssessmentControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name of the delegated AWS administrator account for the AWS organization.
 */
GetOrganizationAdminAccountResponse * AuditManagerClient::getOrganizationAdminAccount(const GetOrganizationAdminAccountRequest &request)
{
    return qobject_cast<GetOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetServicesInScopeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the in-scope AWS services for the specified assessment.
 */
GetServicesInScopeResponse * AuditManagerClient::getServicesInScope(const GetServicesInScopeRequest &request)
{
    return qobject_cast<GetServicesInScopeResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the settings for the specified AWS account.
 */
GetSettingsResponse * AuditManagerClient::getSettings(const GetSettingsRequest &request)
{
    return qobject_cast<GetSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListAssessmentFrameworksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the frameworks available in the AWS Audit Manager framework library.
 */
ListAssessmentFrameworksResponse * AuditManagerClient::listAssessmentFrameworks(const ListAssessmentFrameworksRequest &request)
{
    return qobject_cast<ListAssessmentFrameworksResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListAssessmentReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of assessment reports created in AWS Audit Manager.
 */
ListAssessmentReportsResponse * AuditManagerClient::listAssessmentReports(const ListAssessmentReportsRequest &request)
{
    return qobject_cast<ListAssessmentReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListAssessmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of current and past assessments from AWS Audit Manager.
 */
ListAssessmentsResponse * AuditManagerClient::listAssessments(const ListAssessmentsRequest &request)
{
    return qobject_cast<ListAssessmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of controls from AWS Audit Manager.
 */
ListControlsResponse * AuditManagerClient::listControls(const ListControlsRequest &request)
{
    return qobject_cast<ListControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListKeywordsForDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of keywords that pre-mapped to the specified control data source.
 */
ListKeywordsForDataSourceResponse * AuditManagerClient::listKeywordsForDataSource(const ListKeywordsForDataSourceRequest &request)
{
    return qobject_cast<ListKeywordsForDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all AWS Audit Manager notifications.
 */
ListNotificationsResponse * AuditManagerClient::listNotifications(const ListNotificationsRequest &request)
{
    return qobject_cast<ListNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags for the specified resource in AWS Audit Manager.
 */
ListTagsForResourceResponse * AuditManagerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * RegisterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables AWS Audit Manager for the specified AWS account.
 */
RegisterAccountResponse * AuditManagerClient::registerAccount(const RegisterAccountRequest &request)
{
    return qobject_cast<RegisterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * RegisterOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables an AWS account within the organization as the delegated administrator for AWS Audit Manager.
 */
RegisterOrganizationAdminAccountResponse * AuditManagerClient::registerOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest &request)
{
    return qobject_cast<RegisterOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags the specified resource in AWS Audit Manager.
 */
TagResourceResponse * AuditManagerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a resource in AWS Audit Manager.
 */
UntagResourceResponse * AuditManagerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Edits an AWS Audit Manager assessment.
 */
UpdateAssessmentResponse * AuditManagerClient::updateAssessment(const UpdateAssessmentRequest &request)
{
    return qobject_cast<UpdateAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateAssessmentControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a control within an assessment in AWS Audit Manager.
 */
UpdateAssessmentControlResponse * AuditManagerClient::updateAssessmentControl(const UpdateAssessmentControlRequest &request)
{
    return qobject_cast<UpdateAssessmentControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateAssessmentControlSetStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of a control set in an AWS Audit Manager assessment.
 */
UpdateAssessmentControlSetStatusResponse * AuditManagerClient::updateAssessmentControlSetStatus(const UpdateAssessmentControlSetStatusRequest &request)
{
    return qobject_cast<UpdateAssessmentControlSetStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateAssessmentFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a custom framework in AWS Audit Manager.
 */
UpdateAssessmentFrameworkResponse * AuditManagerClient::updateAssessmentFramework(const UpdateAssessmentFrameworkRequest &request)
{
    return qobject_cast<UpdateAssessmentFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateAssessmentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of an assessment in AWS Audit Manager.
 */
UpdateAssessmentStatusResponse * AuditManagerClient::updateAssessmentStatus(const UpdateAssessmentStatusRequest &request)
{
    return qobject_cast<UpdateAssessmentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a custom control in AWS Audit Manager.
 */
UpdateControlResponse * AuditManagerClient::updateControl(const UpdateControlRequest &request)
{
    return qobject_cast<UpdateControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates AWS Audit Manager settings for the current user account.
 */
UpdateSettingsResponse * AuditManagerClient::updateSettings(const UpdateSettingsRequest &request)
{
    return qobject_cast<UpdateSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ValidateAssessmentReportIntegrityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates the integrity of an assessment report in AWS Audit Manager.
 */
ValidateAssessmentReportIntegrityResponse * AuditManagerClient::validateAssessmentReportIntegrity(const ValidateAssessmentReportIntegrityRequest &request)
{
    return qobject_cast<ValidateAssessmentReportIntegrityResponse *>(send(request));
}

/*!
 * \class QtAws::AuditManager::AuditManagerClientPrivate
 * \brief The AuditManagerClientPrivate class provides private implementation for AuditManagerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a AuditManagerClientPrivate object with public implementation \a q.
 */
AuditManagerClientPrivate::AuditManagerClientPrivate(AuditManagerClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace AuditManager
} // namespace QtAws
