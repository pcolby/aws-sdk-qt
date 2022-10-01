// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "backupclient.h"
#include "backupclient_p.h"

#include "core/awssignaturev4.h"
#include "createbackupplanrequest.h"
#include "createbackupplanresponse.h"
#include "createbackupselectionrequest.h"
#include "createbackupselectionresponse.h"
#include "createbackupvaultrequest.h"
#include "createbackupvaultresponse.h"
#include "createframeworkrequest.h"
#include "createframeworkresponse.h"
#include "createreportplanrequest.h"
#include "createreportplanresponse.h"
#include "deletebackupplanrequest.h"
#include "deletebackupplanresponse.h"
#include "deletebackupselectionrequest.h"
#include "deletebackupselectionresponse.h"
#include "deletebackupvaultrequest.h"
#include "deletebackupvaultresponse.h"
#include "deletebackupvaultaccesspolicyrequest.h"
#include "deletebackupvaultaccesspolicyresponse.h"
#include "deletebackupvaultlockconfigurationrequest.h"
#include "deletebackupvaultlockconfigurationresponse.h"
#include "deletebackupvaultnotificationsrequest.h"
#include "deletebackupvaultnotificationsresponse.h"
#include "deleteframeworkrequest.h"
#include "deleteframeworkresponse.h"
#include "deleterecoverypointrequest.h"
#include "deleterecoverypointresponse.h"
#include "deletereportplanrequest.h"
#include "deletereportplanresponse.h"
#include "describebackupjobrequest.h"
#include "describebackupjobresponse.h"
#include "describebackupvaultrequest.h"
#include "describebackupvaultresponse.h"
#include "describecopyjobrequest.h"
#include "describecopyjobresponse.h"
#include "describeframeworkrequest.h"
#include "describeframeworkresponse.h"
#include "describeglobalsettingsrequest.h"
#include "describeglobalsettingsresponse.h"
#include "describeprotectedresourcerequest.h"
#include "describeprotectedresourceresponse.h"
#include "describerecoverypointrequest.h"
#include "describerecoverypointresponse.h"
#include "describeregionsettingsrequest.h"
#include "describeregionsettingsresponse.h"
#include "describereportjobrequest.h"
#include "describereportjobresponse.h"
#include "describereportplanrequest.h"
#include "describereportplanresponse.h"
#include "describerestorejobrequest.h"
#include "describerestorejobresponse.h"
#include "disassociaterecoverypointrequest.h"
#include "disassociaterecoverypointresponse.h"
#include "exportbackupplantemplaterequest.h"
#include "exportbackupplantemplateresponse.h"
#include "getbackupplanrequest.h"
#include "getbackupplanresponse.h"
#include "getbackupplanfromjsonrequest.h"
#include "getbackupplanfromjsonresponse.h"
#include "getbackupplanfromtemplaterequest.h"
#include "getbackupplanfromtemplateresponse.h"
#include "getbackupselectionrequest.h"
#include "getbackupselectionresponse.h"
#include "getbackupvaultaccesspolicyrequest.h"
#include "getbackupvaultaccesspolicyresponse.h"
#include "getbackupvaultnotificationsrequest.h"
#include "getbackupvaultnotificationsresponse.h"
#include "getrecoverypointrestoremetadatarequest.h"
#include "getrecoverypointrestoremetadataresponse.h"
#include "getsupportedresourcetypesrequest.h"
#include "getsupportedresourcetypesresponse.h"
#include "listbackupjobsrequest.h"
#include "listbackupjobsresponse.h"
#include "listbackupplantemplatesrequest.h"
#include "listbackupplantemplatesresponse.h"
#include "listbackupplanversionsrequest.h"
#include "listbackupplanversionsresponse.h"
#include "listbackupplansrequest.h"
#include "listbackupplansresponse.h"
#include "listbackupselectionsrequest.h"
#include "listbackupselectionsresponse.h"
#include "listbackupvaultsrequest.h"
#include "listbackupvaultsresponse.h"
#include "listcopyjobsrequest.h"
#include "listcopyjobsresponse.h"
#include "listframeworksrequest.h"
#include "listframeworksresponse.h"
#include "listprotectedresourcesrequest.h"
#include "listprotectedresourcesresponse.h"
#include "listrecoverypointsbybackupvaultrequest.h"
#include "listrecoverypointsbybackupvaultresponse.h"
#include "listrecoverypointsbyresourcerequest.h"
#include "listrecoverypointsbyresourceresponse.h"
#include "listreportjobsrequest.h"
#include "listreportjobsresponse.h"
#include "listreportplansrequest.h"
#include "listreportplansresponse.h"
#include "listrestorejobsrequest.h"
#include "listrestorejobsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "putbackupvaultaccesspolicyrequest.h"
#include "putbackupvaultaccesspolicyresponse.h"
#include "putbackupvaultlockconfigurationrequest.h"
#include "putbackupvaultlockconfigurationresponse.h"
#include "putbackupvaultnotificationsrequest.h"
#include "putbackupvaultnotificationsresponse.h"
#include "startbackupjobrequest.h"
#include "startbackupjobresponse.h"
#include "startcopyjobrequest.h"
#include "startcopyjobresponse.h"
#include "startreportjobrequest.h"
#include "startreportjobresponse.h"
#include "startrestorejobrequest.h"
#include "startrestorejobresponse.h"
#include "stopbackupjobrequest.h"
#include "stopbackupjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatebackupplanrequest.h"
#include "updatebackupplanresponse.h"
#include "updateframeworkrequest.h"
#include "updateframeworkresponse.h"
#include "updateglobalsettingsrequest.h"
#include "updateglobalsettingsresponse.h"
#include "updaterecoverypointlifecyclerequest.h"
#include "updaterecoverypointlifecycleresponse.h"
#include "updateregionsettingsrequest.h"
#include "updateregionsettingsresponse.h"
#include "updatereportplanrequest.h"
#include "updatereportplanresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Backup
 * \brief Contains classess for accessing AWS Backup.
 *
 * \inmodule QtAwsBackup
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::BackupClient
 * \brief The BackupClient class provides access to the AWS Backup service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 */

/*!
 * \brief Constructs a BackupClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
BackupClient::BackupClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BackupClientPrivate(this), parent)
{
    Q_D(BackupClient);
    d->apiVersion = QStringLiteral("2018-11-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("backup");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Backup");
    d->serviceName = QStringLiteral("backup");
}

/*!
 * \overload BackupClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
BackupClient::BackupClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BackupClientPrivate(this), parent)
{
    Q_D(BackupClient);
    d->apiVersion = QStringLiteral("2018-11-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("backup");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Backup");
    d->serviceName = QStringLiteral("backup");
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * CreateBackupPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a backup plan using a backup plan name and backup rules. A backup plan is a document that contains information
 * that Backup uses to schedule tasks that create recovery points for
 *
 * resources>
 *
 * If you call <code>CreateBackupPlan</code> with a plan that already exists, you receive an
 * <code>AlreadyExistsException</code>
 */
CreateBackupPlanResponse * BackupClient::createBackupPlan(const CreateBackupPlanRequest &request)
{
    return qobject_cast<CreateBackupPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * CreateBackupSelectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a JSON document that specifies a set of resources to assign to a backup plan. For examples, see <a
 * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/assigning-resources.html#assigning-resources-json">Assigning
 * resources programmatically</a>.
 */
CreateBackupSelectionResponse * BackupClient::createBackupSelection(const CreateBackupSelectionRequest &request)
{
    return qobject_cast<CreateBackupSelectionResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * CreateBackupVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a logical container where backups are stored. A <code>CreateBackupVault</code> request includes a name,
 * optionally one or more resource tags, an encryption key, and a request
 *
 * ID> <note>
 *
 * Do not include sensitive data, such as passport numbers, in the name of a backup
 */
CreateBackupVaultResponse * BackupClient::createBackupVault(const CreateBackupVaultRequest &request)
{
    return qobject_cast<CreateBackupVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * CreateFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a framework with one or more controls. A framework is a collection of controls that you can use to evaluate your
 * backup practices. By using pre-built customizable controls to define your policies, you can evaluate whether your backup
 * practices comply with your policies and which resources are not yet in
 */
CreateFrameworkResponse * BackupClient::createFramework(const CreateFrameworkRequest &request)
{
    return qobject_cast<CreateFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * CreateReportPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a report plan. A report plan is a document that contains information about the contents of the report and where
 * Backup will deliver
 *
 * it>
 *
 * If you call <code>CreateReportPlan</code> with a plan that already exists, you receive an
 * <code>AlreadyExistsException</code>
 */
CreateReportPlanResponse * BackupClient::createReportPlan(const CreateReportPlanRequest &request)
{
    return qobject_cast<CreateReportPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteBackupPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a backup plan. A backup plan can only be deleted after all associated selections of resources have been deleted.
 * Deleting a backup plan deletes the current version of a backup plan. Previous versions, if any, will still
 */
DeleteBackupPlanResponse * BackupClient::deleteBackupPlan(const DeleteBackupPlanRequest &request)
{
    return qobject_cast<DeleteBackupPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteBackupSelectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource selection associated with a backup plan that is specified by the
 */
DeleteBackupSelectionResponse * BackupClient::deleteBackupSelection(const DeleteBackupSelectionRequest &request)
{
    return qobject_cast<DeleteBackupSelectionResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteBackupVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the backup vault identified by its name. A vault can be deleted only if it is
 */
DeleteBackupVaultResponse * BackupClient::deleteBackupVault(const DeleteBackupVaultRequest &request)
{
    return qobject_cast<DeleteBackupVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteBackupVaultAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the policy document that manages permissions on a backup
 */
DeleteBackupVaultAccessPolicyResponse * BackupClient::deleteBackupVaultAccessPolicy(const DeleteBackupVaultAccessPolicyRequest &request)
{
    return qobject_cast<DeleteBackupVaultAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteBackupVaultLockConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes Backup Vault Lock from a backup vault specified by a backup vault
 *
 * name>
 *
 * If the Vault Lock configuration is immutable, then you cannot delete Vault Lock using API operations, and you will
 * receive an <code>InvalidRequestException</code> if you attempt to do so. For more information, see <a
 * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/vault-lock.html">Vault Lock</a> in the <i>Backup Developer
 */
DeleteBackupVaultLockConfigurationResponse * BackupClient::deleteBackupVaultLockConfiguration(const DeleteBackupVaultLockConfigurationRequest &request)
{
    return qobject_cast<DeleteBackupVaultLockConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteBackupVaultNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes event notifications for the specified backup
 */
DeleteBackupVaultNotificationsResponse * BackupClient::deleteBackupVaultNotifications(const DeleteBackupVaultNotificationsRequest &request)
{
    return qobject_cast<DeleteBackupVaultNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the framework specified by a framework
 */
DeleteFrameworkResponse * BackupClient::deleteFramework(const DeleteFrameworkRequest &request)
{
    return qobject_cast<DeleteFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the recovery point specified by a recovery point
 *
 * ID>
 *
 * If the recovery point ID belongs to a continuous backup, calling this endpoint deletes the existing continuous backup
 * and stops future continuous
 */
DeleteRecoveryPointResponse * BackupClient::deleteRecoveryPoint(const DeleteRecoveryPointRequest &request)
{
    return qobject_cast<DeleteRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DeleteReportPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the report plan specified by a report plan
 */
DeleteReportPlanResponse * BackupClient::deleteReportPlan(const DeleteReportPlanRequest &request)
{
    return qobject_cast<DeleteReportPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeBackupJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns backup job details for the specified
 */
DescribeBackupJobResponse * BackupClient::describeBackupJob(const DescribeBackupJobRequest &request)
{
    return qobject_cast<DescribeBackupJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeBackupVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about a backup vault specified by its
 */
DescribeBackupVaultResponse * BackupClient::describeBackupVault(const DescribeBackupVaultRequest &request)
{
    return qobject_cast<DescribeBackupVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeCopyJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata associated with creating a copy of a
 */
DescribeCopyJobResponse * BackupClient::describeCopyJob(const DescribeCopyJobRequest &request)
{
    return qobject_cast<DescribeCopyJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the framework details for the specified
 */
DescribeFrameworkResponse * BackupClient::describeFramework(const DescribeFrameworkRequest &request)
{
    return qobject_cast<DescribeFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeGlobalSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes whether the Amazon Web Services account is opted in to cross-account backup. Returns an error if the account
 * is not a member of an Organizations organization. Example: <code>describe-global-settings --region us-west-2</code>
 */
DescribeGlobalSettingsResponse * BackupClient::describeGlobalSettings(const DescribeGlobalSettingsRequest &request)
{
    return qobject_cast<DescribeGlobalSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeProtectedResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a saved resource, including the last time it was backed up, its Amazon Resource Name (ARN),
 * and the Amazon Web Services service type of the saved
 */
DescribeProtectedResourceResponse * BackupClient::describeProtectedResource(const DescribeProtectedResourceRequest &request)
{
    return qobject_cast<DescribeProtectedResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata associated with a recovery point, including ID, status, encryption, and
 */
DescribeRecoveryPointResponse * BackupClient::describeRecoveryPoint(const DescribeRecoveryPointRequest &request)
{
    return qobject_cast<DescribeRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeRegionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current service opt-in settings for the Region. If service opt-in is enabled for a service, Backup tries to
 * protect that service's resources in this Region, when the resource is included in an on-demand backup or scheduled
 * backup plan. Otherwise, Backup does not try to protect that service's resources in this
 */
DescribeRegionSettingsResponse * BackupClient::describeRegionSettings(const DescribeRegionSettingsRequest &request)
{
    return qobject_cast<DescribeRegionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeReportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details associated with creating a report as specified by its
 */
DescribeReportJobResponse * BackupClient::describeReportJob(const DescribeReportJobRequest &request)
{
    return qobject_cast<DescribeReportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeReportPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all report plans for an Amazon Web Services account and Amazon Web Services
 */
DescribeReportPlanResponse * BackupClient::describeReportPlan(const DescribeReportPlanRequest &request)
{
    return qobject_cast<DescribeReportPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeRestoreJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata associated with a restore job that is specified by a job
 */
DescribeRestoreJobResponse * BackupClient::describeRestoreJob(const DescribeRestoreJobRequest &request)
{
    return qobject_cast<DescribeRestoreJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DisassociateRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified continuous backup recovery point from Backup and releases control of that continuous backup to the
 * source service, such as Amazon RDS. The source service will continue to create and retain continuous backups using the
 * lifecycle that you specified in your original backup
 *
 * plan>
 *
 * Does not support snapshot backup recovery
 */
DisassociateRecoveryPointResponse * BackupClient::disassociateRecoveryPoint(const DisassociateRecoveryPointRequest &request)
{
    return qobject_cast<DisassociateRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ExportBackupPlanTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the backup plan that is specified by the plan ID as a backup
 */
ExportBackupPlanTemplateResponse * BackupClient::exportBackupPlanTemplate(const ExportBackupPlanTemplateRequest &request)
{
    return qobject_cast<ExportBackupPlanTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetBackupPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns <code>BackupPlan</code> details for the specified <code>BackupPlanId</code>. The details are the body of a
 * backup plan in JSON format, in addition to plan
 */
GetBackupPlanResponse * BackupClient::getBackupPlan(const GetBackupPlanRequest &request)
{
    return qobject_cast<GetBackupPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetBackupPlanFromJSONResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a valid JSON document specifying a backup plan or an
 */
GetBackupPlanFromJSONResponse * BackupClient::getBackupPlanFromJSON(const GetBackupPlanFromJSONRequest &request)
{
    return qobject_cast<GetBackupPlanFromJSONResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetBackupPlanFromTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the template specified by its <code>templateId</code> as a backup
 */
GetBackupPlanFromTemplateResponse * BackupClient::getBackupPlanFromTemplate(const GetBackupPlanFromTemplateRequest &request)
{
    return qobject_cast<GetBackupPlanFromTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetBackupSelectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns selection metadata and a document in JSON format that specifies a list of resources that are associated with a
 * backup
 */
GetBackupSelectionResponse * BackupClient::getBackupSelection(const GetBackupSelectionRequest &request)
{
    return qobject_cast<GetBackupSelectionResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetBackupVaultAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the access policy document that is associated with the named backup
 */
GetBackupVaultAccessPolicyResponse * BackupClient::getBackupVaultAccessPolicy(const GetBackupVaultAccessPolicyRequest &request)
{
    return qobject_cast<GetBackupVaultAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetBackupVaultNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns event notifications for the specified backup
 */
GetBackupVaultNotificationsResponse * BackupClient::getBackupVaultNotifications(const GetBackupVaultNotificationsRequest &request)
{
    return qobject_cast<GetBackupVaultNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetRecoveryPointRestoreMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a set of metadata key-value pairs that were used to create the
 */
GetRecoveryPointRestoreMetadataResponse * BackupClient::getRecoveryPointRestoreMetadata(const GetRecoveryPointRestoreMetadataRequest &request)
{
    return qobject_cast<GetRecoveryPointRestoreMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * GetSupportedResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the Amazon Web Services resource types supported by
 */
GetSupportedResourceTypesResponse * BackupClient::getSupportedResourceTypes(const GetSupportedResourceTypesRequest &request)
{
    return qobject_cast<GetSupportedResourceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListBackupJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of existing backup jobs for an authenticated account for the last 30 days. For a longer period of time,
 * consider using these <a href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">monitoring
 */
ListBackupJobsResponse * BackupClient::listBackupJobs(const ListBackupJobsRequest &request)
{
    return qobject_cast<ListBackupJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListBackupPlanTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata of your saved backup plan templates, including the template ID, name, and the creation and deletion
 */
ListBackupPlanTemplatesResponse * BackupClient::listBackupPlanTemplates(const ListBackupPlanTemplatesRequest &request)
{
    return qobject_cast<ListBackupPlanTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListBackupPlanVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns version metadata of your backup plans, including Amazon Resource Names (ARNs), backup plan IDs, creation and
 * deletion dates, plan names, and version
 */
ListBackupPlanVersionsResponse * BackupClient::listBackupPlanVersions(const ListBackupPlanVersionsRequest &request)
{
    return qobject_cast<ListBackupPlanVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListBackupPlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all active backup plans for an authenticated account. The list contains information such as Amazon
 * Resource Names (ARNs), plan IDs, creation and deletion dates, version IDs, plan names, and creator request
 */
ListBackupPlansResponse * BackupClient::listBackupPlans(const ListBackupPlansRequest &request)
{
    return qobject_cast<ListBackupPlansResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListBackupSelectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array containing metadata of the resources associated with the target backup
 */
ListBackupSelectionsResponse * BackupClient::listBackupSelections(const ListBackupSelectionsRequest &request)
{
    return qobject_cast<ListBackupSelectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListBackupVaultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of recovery point storage containers along with information about
 */
ListBackupVaultsResponse * BackupClient::listBackupVaults(const ListBackupVaultsRequest &request)
{
    return qobject_cast<ListBackupVaultsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListCopyJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about your copy
 */
ListCopyJobsResponse * BackupClient::listCopyJobs(const ListCopyJobsRequest &request)
{
    return qobject_cast<ListCopyJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListFrameworksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all frameworks for an Amazon Web Services account and Amazon Web Services
 */
ListFrameworksResponse * BackupClient::listFrameworks(const ListFrameworksRequest &request)
{
    return qobject_cast<ListFrameworksResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListProtectedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of resources successfully backed up by Backup, including the time the resource was saved, an Amazon
 * Resource Name (ARN) of the resource, and a resource
 */
ListProtectedResourcesResponse * BackupClient::listProtectedResources(const ListProtectedResourcesRequest &request)
{
    return qobject_cast<ListProtectedResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListRecoveryPointsByBackupVaultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about the recovery points stored in a backup
 */
ListRecoveryPointsByBackupVaultResponse * BackupClient::listRecoveryPointsByBackupVault(const ListRecoveryPointsByBackupVaultRequest &request)
{
    return qobject_cast<ListRecoveryPointsByBackupVaultResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListRecoveryPointsByResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about all the recovery points of the type specified by a resource Amazon Resource Name
 *
 * (ARN)> <note>
 *
 * For Amazon EFS and Amazon EC2, this action only lists recovery points created by
 */
ListRecoveryPointsByResourceResponse * BackupClient::listRecoveryPointsByResource(const ListRecoveryPointsByResourceRequest &request)
{
    return qobject_cast<ListRecoveryPointsByResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListReportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about your report
 */
ListReportJobsResponse * BackupClient::listReportJobs(const ListReportJobsRequest &request)
{
    return qobject_cast<ListReportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListReportPlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of your report plans. For detailed information about a single report plan, use
 */
ListReportPlansResponse * BackupClient::listReportPlans(const ListReportPlansRequest &request)
{
    return qobject_cast<ListReportPlansResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListRestoreJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of jobs that Backup initiated to restore a saved resource, including details about the recovery
 */
ListRestoreJobsResponse * BackupClient::listRestoreJobs(const ListRestoreJobsRequest &request)
{
    return qobject_cast<ListRestoreJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of key-value pairs assigned to a target recovery point, backup plan, or backup
 *
 * vault>
 *
 * <code>ListTags</code> only works for resource types that support full Backup management of their backups. Those resource
 * types are listed in the "Full Backup management" section of the <a
 * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource"> Feature
 * availability by resource</a>
 */
ListTagsResponse * BackupClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * PutBackupVaultAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets a resource-based policy that is used to manage access permissions on the target backup vault. Requires a backup
 * vault name and an access policy document in JSON
 */
PutBackupVaultAccessPolicyResponse * BackupClient::putBackupVaultAccessPolicy(const PutBackupVaultAccessPolicyRequest &request)
{
    return qobject_cast<PutBackupVaultAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * PutBackupVaultLockConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies Backup Vault Lock to a backup vault, preventing attempts to delete any recovery point stored in or created in a
 * backup vault. Vault Lock also prevents attempts to update the lifecycle policy that controls the retention period of any
 * recovery point currently stored in a backup vault. If specified, Vault Lock enforces a minimum and maximum retention
 * period for future backup and copy jobs that target a backup
 *
 * vault> <note>
 *
 * Backup Vault Lock has yet to receive a third-party assessment for SEC 17a-4(f) and
 */
PutBackupVaultLockConfigurationResponse * BackupClient::putBackupVaultLockConfiguration(const PutBackupVaultLockConfigurationRequest &request)
{
    return qobject_cast<PutBackupVaultLockConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * PutBackupVaultNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Turns on notifications on a backup vault for the specified topic and
 */
PutBackupVaultNotificationsResponse * BackupClient::putBackupVaultNotifications(const PutBackupVaultNotificationsRequest &request)
{
    return qobject_cast<PutBackupVaultNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * StartBackupJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an on-demand backup job for the specified
 */
StartBackupJobResponse * BackupClient::startBackupJob(const StartBackupJobRequest &request)
{
    return qobject_cast<StartBackupJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * StartCopyJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a job to create a one-time copy of the specified
 *
 * resource>
 *
 * Does not support continuous
 */
StartCopyJobResponse * BackupClient::startCopyJob(const StartCopyJobRequest &request)
{
    return qobject_cast<StartCopyJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * StartReportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an on-demand report job for the specified report
 */
StartReportJobResponse * BackupClient::startReportJob(const StartReportJobRequest &request)
{
    return qobject_cast<StartReportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * StartRestoreJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Recovers the saved resource identified by an Amazon Resource Name
 */
StartRestoreJobResponse * BackupClient::startRestoreJob(const StartRestoreJobRequest &request)
{
    return qobject_cast<StartRestoreJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * StopBackupJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel a job to create a one-time backup of a
 */
StopBackupJobResponse * BackupClient::stopBackupJob(const StopBackupJobRequest &request)
{
    return qobject_cast<StopBackupJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns a set of key-value pairs to a recovery point, backup plan, or backup vault identified by an Amazon Resource Name
 */
TagResourceResponse * BackupClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a set of key-value pairs from a recovery point, backup plan, or backup vault identified by an Amazon Resource
 * Name
 */
UntagResourceResponse * BackupClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * UpdateBackupPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing backup plan identified by its <code>backupPlanId</code> with the input document in JSON format. The
 * new version is uniquely identified by a
 */
UpdateBackupPlanResponse * BackupClient::updateBackupPlan(const UpdateBackupPlanRequest &request)
{
    return qobject_cast<UpdateBackupPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * UpdateFrameworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing framework identified by its <code>FrameworkName</code> with the input document in JSON
 */
UpdateFrameworkResponse * BackupClient::updateFramework(const UpdateFrameworkRequest &request)
{
    return qobject_cast<UpdateFrameworkResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * UpdateGlobalSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates whether the Amazon Web Services account is opted in to cross-account backup. Returns an error if the account is
 * not an Organizations management account. Use the <code>DescribeGlobalSettings</code> API to determine the current
 */
UpdateGlobalSettingsResponse * BackupClient::updateGlobalSettings(const UpdateGlobalSettingsRequest &request)
{
    return qobject_cast<UpdateGlobalSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * UpdateRecoveryPointLifecycleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the transition lifecycle of a recovery
 *
 * point>
 *
 * The lifecycle defines when a protected resource is transitioned to cold storage and when it expires. Backup transitions
 * and expires backups automatically according to the lifecycle that you
 *
 * define>
 *
 * Backups transitioned to cold storage must be stored in cold storage for a minimum of 90 days. Therefore, the “retention”
 * setting must be 90 days greater than the “transition to cold after days” setting. The “transition to cold after days”
 * setting cannot be changed after a backup has been transitioned to
 *
 * cold>
 *
 * Resource types that are able to be transitioned to cold storage are listed in the "Lifecycle to cold storage" section of
 * the <a href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource"> Feature
 * availability by resource</a> table. Backup ignores this expression for other resource
 *
 * types>
 *
 * This operation does not support continuous
 */
UpdateRecoveryPointLifecycleResponse * BackupClient::updateRecoveryPointLifecycle(const UpdateRecoveryPointLifecycleRequest &request)
{
    return qobject_cast<UpdateRecoveryPointLifecycleResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * UpdateRegionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the current service opt-in settings for the Region. If service-opt-in is enabled for a service, Backup tries to
 * protect that service's resources in this Region, when the resource is included in an on-demand backup or scheduled
 * backup plan. Otherwise, Backup does not try to protect that service's resources in this Region. Use the
 * <code>DescribeRegionSettings</code> API to determine the resource types that are
 */
UpdateRegionSettingsResponse * BackupClient::updateRegionSettings(const UpdateRegionSettingsRequest &request)
{
    return qobject_cast<UpdateRegionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * UpdateReportPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing report plan identified by its <code>ReportPlanName</code> with the input document in JSON
 */
UpdateReportPlanResponse * BackupClient::updateReportPlan(const UpdateReportPlanRequest &request)
{
    return qobject_cast<UpdateReportPlanResponse *>(send(request));
}

/*!
 * \class QtAws::Backup::BackupClientPrivate
 * \brief The BackupClientPrivate class provides private implementation for BackupClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a BackupClientPrivate object with public implementation \a q.
 */
BackupClientPrivate::BackupClientPrivate(BackupClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Backup
} // namespace QtAws
