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
#include "deleteassessmentframeworksharerequest.h"
#include "deleteassessmentframeworkshareresponse.h"
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
#include "getinsightsrequest.h"
#include "getinsightsresponse.h"
#include "getinsightsbyassessmentrequest.h"
#include "getinsightsbyassessmentresponse.h"
#include "getorganizationadminaccountrequest.h"
#include "getorganizationadminaccountresponse.h"
#include "getservicesinscoperequest.h"
#include "getservicesinscoperesponse.h"
#include "getsettingsrequest.h"
#include "getsettingsresponse.h"
#include "listassessmentcontrolinsightsbycontroldomainrequest.h"
#include "listassessmentcontrolinsightsbycontroldomainresponse.h"
#include "listassessmentframeworksharerequestsrequest.h"
#include "listassessmentframeworksharerequestsresponse.h"
#include "listassessmentframeworksrequest.h"
#include "listassessmentframeworksresponse.h"
#include "listassessmentreportsrequest.h"
#include "listassessmentreportsresponse.h"
#include "listassessmentsrequest.h"
#include "listassessmentsresponse.h"
#include "listcontroldomaininsightsrequest.h"
#include "listcontroldomaininsightsresponse.h"
#include "listcontroldomaininsightsbyassessmentrequest.h"
#include "listcontroldomaininsightsbyassessmentresponse.h"
#include "listcontrolinsightsbycontroldomainrequest.h"
#include "listcontrolinsightsbycontroldomainresponse.h"
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
#include "startassessmentframeworksharerequest.h"
#include "startassessmentframeworkshareresponse.h"
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
#include "updateassessmentframeworksharerequest.h"
#include "updateassessmentframeworkshareresponse.h"
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
 *  Welcome to the Audit Manager API reference. This guide is for developers who need detailed information about the Audit
 *  Manager API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Audit Manager is a service that provides automated evidence collection so that you can continually audit your Amazon Web
 *  Services usage. You can use it to assess the effectiveness of your controls, manage risk, and simplify
 * 
 *  compliance>
 * 
 *  Audit Manager provides prebuilt frameworks that structure and automate assessments for a given compliance standard.
 *  Frameworks include a prebuilt collection of controls with descriptions and testing procedures. These controls are
 *  grouped according to the requirements of the specified compliance standard or regulation. You can also customize
 *  frameworks and controls to support internal audits with specific requirements.
 * 
 *  </p
 * 
 *  Use the following links to get started with the Audit Manager
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical
 *  list of all Audit Manager API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data types</a>: An alphabetical
 *  list of all Audit Manager data
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
 *  If you're new to Audit Manager, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html"> Audit Manager User
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
: QtAws::Core::AwsAbstractClient(new AuditManagerClientPrivate(this), parent)
{
    Q_D(AuditManagerClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("auditmanager");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Audit Manager");
    d->serviceName = QStringLiteral("auditmanager");
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
: QtAws::Core::AwsAbstractClient(new AuditManagerClientPrivate(this), parent)
{
    Q_D(AuditManagerClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("auditmanager");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Audit Manager");
    d->serviceName = QStringLiteral("auditmanager");
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * AssociateAssessmentReportEvidenceFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an evidence folder to an assessment report in a Audit Manager assessment.
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
 * Associates a list of evidence to an assessment report in an Audit Manager assessment.
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
 * Creates a batch of delegations for an assessment in Audit Manager.
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
 * Deletes a batch of delegations for an assessment in Audit Manager.
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
 * Disassociates a list of evidence from an assessment report in Audit Manager.
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
 * Uploads one or more pieces of evidence to a control in an Audit Manager assessment.
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
 * Creates an assessment in Audit Manager.
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
 * Creates a custom framework in Audit Manager.
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
 * Creates a new custom control in Audit Manager.
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
 * Deletes an assessment in Audit Manager.
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
 * Deletes a custom framework in Audit Manager.
 */
DeleteAssessmentFrameworkResponse * AuditManagerClient::deleteAssessmentFramework(const DeleteAssessmentFrameworkRequest &request)
{
    return qobject_cast<DeleteAssessmentFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeleteAssessmentFrameworkShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a share request for a custom framework in Audit Manager.
 */
DeleteAssessmentFrameworkShareResponse * AuditManagerClient::deleteAssessmentFrameworkShare(const DeleteAssessmentFrameworkShareRequest &request)
{
    return qobject_cast<DeleteAssessmentFrameworkShareResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * DeleteAssessmentReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an assessment report in Audit Manager.
 *
 * </p
 *
 * When you run the <code>DeleteAssessmentReport</code> operation, Audit Manager attempts to delete the following
 *
 * data> <ol> <li>
 *
 * The specified assessment report that’s stored in your S3
 *
 * bucke> </li> <li>
 *
 * The associated metadata that’s stored in Audit
 *
 * Manage> </li> </ol>
 *
 * If Audit Manager can’t access the assessment report in your S3 bucket, the report isn’t deleted. In this event, the
 * <code>DeleteAssessmentReport</code> operation doesn’t fail. Instead, it proceeds to delete the associated metadata only.
 * You must then delete the assessment report from the S3 bucket yourself.
 *
 * </p
 *
 * This scenario happens when Audit Manager receives a <code>403 (Forbidden)</code> or <code>404 (Not Found)</code> error
 * from Amazon S3. To avoid this, make sure that your S3 bucket is available, and that you configured the correct
 * permissions for Audit Manager to delete resources in your S3 bucket. For an example permissions policy that you can use,
 * see <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/security_iam_id-based-policy-examples.html#full-administrator-access-assessment-report-destination">Assessment
 * report destination permissions</a> in the <i>Audit Manager User Guide</i>. For information about the issues that could
 * cause a <code>403 (Forbidden)</code> or <code>404 (Not Found</code>) error from Amazon S3, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ErrorCodeList">List of Error Codes</a> in the
 * <i>Amazon Simple Storage Service API Reference</i>.
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
 * Deletes a custom control in Audit Manager.
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
 * Deregisters an account in Audit Manager.
 *
 * </p <note>
 *
 * When you deregister your account from Audit Manager, your data isn’t deleted. If you want to delete your resource data,
 * you must perform that task separately before you deregister your account. Either, you can do this in the Audit Manager
 * console. Or, you can use one of the delete API operations that are provided by Audit Manager.
 *
 * </p
 *
 * To delete your Audit Manager resource data, see the following instructions:
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessment.html">DeleteAssessment</a>
 * (see also: <a href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-assessment.html">Deleting an
 * assessment</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFramework.html">DeleteAssessmentFramework</a>
 * (see also: <a href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-custom-framework.html">Deleting a
 * custom framework</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFrameworkShare.html">DeleteAssessmentFrameworkShare</a>
 * (see also: <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/deleting-shared-framework-requests.html">Deleting a
 * share request</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentReport.html">DeleteAssessmentReport</a>
 * (see also: <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/generate-assessment-report.html#delete-assessment-report-steps">Deleting
 * an assessment report</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteControl.html">DeleteControl</a> (see
 * also: <a href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-controls.html">Deleting a custom
 * control</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> </ul>
 *
 * At this time, Audit Manager doesn't provide an option to delete evidence. All available delete operations are listed
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
 * Removes the specified Amazon Web Services account as a delegated administrator for Audit Manager.
 *
 * </p <b>
 *
 * When you remove a delegated administrator from your Audit Manager settings, you continue to have access to the evidence
 * that you previously collected under that account. This is also the case when you deregister a delegated administrator
 * from Organizations. However, Audit Manager will stop collecting and attaching evidence to that delegated administrator
 * account moving
 *
 * forward> </b> <note>
 *
 * When you deregister a delegated administrator account for Audit Manager, the data for that account isn’t deleted. If you
 * want to delete resource data for a delegated administrator account, you must perform that task separately before you
 * deregister the account. Either, you can do this in the Audit Manager console. Or, you can use one of the delete API
 * operations that are provided by Audit Manager.
 *
 * </p
 *
 * To delete your Audit Manager resource data, see the following instructions:
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessment.html">DeleteAssessment</a>
 * (see also: <a href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-assessment.html">Deleting an
 * assessment</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFramework.html">DeleteAssessmentFramework</a>
 * (see also: <a href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-custom-framework.html">Deleting a
 * custom framework</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFrameworkShare.html">DeleteAssessmentFrameworkShare</a>
 * (see also: <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/deleting-shared-framework-requests.html">Deleting a
 * share request</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentReport.html">DeleteAssessmentReport</a>
 * (see also: <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/generate-assessment-report.html#delete-assessment-report-steps">Deleting
 * an assessment report</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteControl.html">DeleteControl</a> (see
 * also: <a href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-controls.html">Deleting a custom
 * control</a> in the <i>Audit Manager User
 *
 * Guide</i>> </li> </ul>
 *
 * At this time, Audit Manager doesn't provide an option to delete evidence. All available delete operations are listed
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
 * Disassociates an evidence folder from the specified assessment report in Audit Manager.
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
 * Returns the registration status of an account in Audit Manager.
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
 * Returns an assessment from Audit Manager.
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
 * Returns a framework from Audit Manager.
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
 * Returns the URL of an assessment report in Audit Manager.
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
 * Returns a list of changelogs from Audit Manager.
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
 * Returns a control from Audit Manager.
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
 * Returns evidence from Audit Manager.
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
 * Returns all evidence from a specified evidence folder in Audit Manager.
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
 * Returns an evidence folder from the specified assessment in Audit Manager.
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
 * Returns the evidence folders from a specified assessment in Audit Manager.
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
 * Returns a list of evidence folders that are associated with a specified control of an assessment in Audit Manager.
 */
GetEvidenceFoldersByAssessmentControlResponse * AuditManagerClient::getEvidenceFoldersByAssessmentControl(const GetEvidenceFoldersByAssessmentControlRequest &request)
{
    return qobject_cast<GetEvidenceFoldersByAssessmentControlResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the latest analytics data for all your current active assessments.
 */
GetInsightsResponse * AuditManagerClient::getInsights(const GetInsightsRequest &request)
{
    return qobject_cast<GetInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetInsightsByAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the latest analytics data for a specific active assessment.
 */
GetInsightsByAssessmentResponse * AuditManagerClient::getInsightsByAssessment(const GetInsightsByAssessmentRequest &request)
{
    return qobject_cast<GetInsightsByAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * GetOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name of the delegated Amazon Web Services administrator account for the organization.
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
 * Returns a list of the in-scope Amazon Web Services for the specified assessment.
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
 * Returns the settings for the specified Amazon Web Services account.
 */
GetSettingsResponse * AuditManagerClient::getSettings(const GetSettingsRequest &request)
{
    return qobject_cast<GetSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListAssessmentControlInsightsByControlDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the latest analytics data for controls within a specific control domain and a specific active
 *
 * assessment> <note>
 *
 * Control insights are listed only if the control belongs to the control domain and assessment that was specified.
 * Moreover, the control must have collected evidence on the <code>lastUpdated</code> date of
 * <code>controlInsightsByAssessment</code>. If neither of these conditions are met, no data is listed for that control.
 */
ListAssessmentControlInsightsByControlDomainResponse * AuditManagerClient::listAssessmentControlInsightsByControlDomain(const ListAssessmentControlInsightsByControlDomainRequest &request)
{
    return qobject_cast<ListAssessmentControlInsightsByControlDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListAssessmentFrameworkShareRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of sent or received share requests for custom frameworks in Audit Manager.
 */
ListAssessmentFrameworkShareRequestsResponse * AuditManagerClient::listAssessmentFrameworkShareRequests(const ListAssessmentFrameworkShareRequestsRequest &request)
{
    return qobject_cast<ListAssessmentFrameworkShareRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListAssessmentFrameworksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the frameworks that are available in the Audit Manager framework library.
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
 * Returns a list of assessment reports created in Audit Manager.
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
 * Returns a list of current and past assessments from Audit Manager.
 */
ListAssessmentsResponse * AuditManagerClient::listAssessments(const ListAssessmentsRequest &request)
{
    return qobject_cast<ListAssessmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListControlDomainInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the latest analytics data for control domains across all of your active assessments.
 *
 * </p <note>
 *
 * A control domain is listed only if at least one of the controls within that domain collected evidence on the
 * <code>lastUpdated</code> date of <code>controlDomainInsights</code>. If this condition isn’t met, no data is listed for
 * that control
 */
ListControlDomainInsightsResponse * AuditManagerClient::listControlDomainInsights(const ListControlDomainInsightsRequest &request)
{
    return qobject_cast<ListControlDomainInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListControlDomainInsightsByAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists analytics data for control domains within a specified active
 *
 * assessment> <note>
 *
 * A control domain is listed only if at least one of the controls within that domain collected evidence on the
 * <code>lastUpdated</code> date of <code>controlDomainInsights</code>. If this condition isn’t met, no data is listed for
 * that
 */
ListControlDomainInsightsByAssessmentResponse * AuditManagerClient::listControlDomainInsightsByAssessment(const ListControlDomainInsightsByAssessmentRequest &request)
{
    return qobject_cast<ListControlDomainInsightsByAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListControlInsightsByControlDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the latest analytics data for controls within a specific control domain across all active
 *
 * assessments> <note>
 *
 * Control insights are listed only if the control belongs to the control domain that was specified and the control
 * collected evidence on the <code>lastUpdated</code> date of <code>controlInsightsMetadata</code>. If neither of these
 * conditions are met, no data is listed for that control.
 */
ListControlInsightsByControlDomainResponse * AuditManagerClient::listControlInsightsByControlDomain(const ListControlInsightsByControlDomainRequest &request)
{
    return qobject_cast<ListControlInsightsByControlDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * ListControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of controls from Audit Manager.
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
 * Returns a list of keywords that are pre-mapped to the specified control data source.
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
 * Returns a list of all Audit Manager notifications.
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
 * Returns a list of tags for the specified resource in Audit Manager.
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
 * Enables Audit Manager for the specified Amazon Web Services account.
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
 * Enables an Amazon Web Services account within the organization as the delegated administrator for Audit Manager.
 */
RegisterOrganizationAdminAccountResponse * AuditManagerClient::registerOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest &request)
{
    return qobject_cast<RegisterOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * StartAssessmentFrameworkShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a share request for a custom framework in Audit Manager.
 *
 * </p
 *
 * The share request specifies a recipient and notifies them that a custom framework is available. Recipients have 120 days
 * to accept or decline the request. If no action is taken, the share request
 *
 * expires>
 *
 * When you create a share request, Audit Manager stores a snapshot of your custom framework in the US East (N. Virginia)
 * Amazon Web Services Region. Audit Manager also stores a backup of the same snapshot in the US West (Oregon) Amazon Web
 * Services
 *
 * Region>
 *
 * Audit Manager deletes the snapshot and the backup snapshot when one of the following events
 *
 * occurs> <ul> <li>
 *
 * The sender revokes the share
 *
 * request> </li> <li>
 *
 * The recipient declines the share
 *
 * request> </li> <li>
 *
 * The recipient encounters an error and doesn't successfully accept the share
 *
 * request> </li> <li>
 *
 * The share request expires before the recipient responds to the
 *
 * request> </li> </ul>
 *
 * When a sender <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/framework-sharing.html#framework-sharing-resend">resends
 * a share request</a>, the snapshot is replaced with an updated version that corresponds with the latest version of the
 * custom framework.
 *
 * </p
 *
 * When a recipient accepts a share request, the snapshot is replicated into their Amazon Web Services account under the
 * Amazon Web Services Region that was specified in the share request.
 *
 * </p <b>
 *
 * When you invoke the <code>StartAssessmentFrameworkShare</code> API, you are about to share a custom framework with
 * another Amazon Web Services account. You may not share a custom framework that is derived from a standard framework if
 * the standard framework is designated as not eligible for sharing by Amazon Web Services, unless you have obtained
 * permission to do so from the owner of the standard framework. To learn more about which standard frameworks are eligible
 * for sharing, see <a
 * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/share-custom-framework-concepts-and-terminology.html#eligibility">Framework
 * sharing eligibility</a> in the <i>Audit Manager User
 */
StartAssessmentFrameworkShareResponse * AuditManagerClient::startAssessmentFrameworkShare(const StartAssessmentFrameworkShareRequest &request)
{
    return qobject_cast<StartAssessmentFrameworkShareResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags the specified resource in Audit Manager.
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
 * Removes a tag from a resource in Audit Manager.
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
 * Edits an Audit Manager assessment.
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
 * Updates a control within an assessment in Audit Manager.
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
 * Updates the status of a control set in an Audit Manager assessment.
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
 * Updates a custom framework in Audit Manager.
 */
UpdateAssessmentFrameworkResponse * AuditManagerClient::updateAssessmentFramework(const UpdateAssessmentFrameworkRequest &request)
{
    return qobject_cast<UpdateAssessmentFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateAssessmentFrameworkShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a share request for a custom framework in Audit Manager.
 */
UpdateAssessmentFrameworkShareResponse * AuditManagerClient::updateAssessmentFrameworkShare(const UpdateAssessmentFrameworkShareRequest &request)
{
    return qobject_cast<UpdateAssessmentFrameworkShareResponse *>(send(request));
}

/*!
 * Sends \a request to the AuditManagerClient service, and returns a pointer to an
 * UpdateAssessmentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of an assessment in Audit Manager.
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
 * Updates a custom control in Audit Manager.
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
 * Updates Audit Manager settings for the current user account.
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
 * Validates the integrity of an assessment report in Audit Manager.
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
AuditManagerClientPrivate::AuditManagerClientPrivate(AuditManagerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AuditManager
} // namespace QtAws
