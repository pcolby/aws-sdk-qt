/*
    Copyright 2013-2020 Paul Colby

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

#include "backupclient.h"
#include "backupclient_p.h"

#include "core/awssignaturev4.h"
#include "createbackupplanrequest.h"
#include "createbackupplanresponse.h"
#include "createbackupselectionrequest.h"
#include "createbackupselectionresponse.h"
#include "createbackupvaultrequest.h"
#include "createbackupvaultresponse.h"
#include "deletebackupplanrequest.h"
#include "deletebackupplanresponse.h"
#include "deletebackupselectionrequest.h"
#include "deletebackupselectionresponse.h"
#include "deletebackupvaultrequest.h"
#include "deletebackupvaultresponse.h"
#include "deletebackupvaultaccesspolicyrequest.h"
#include "deletebackupvaultaccesspolicyresponse.h"
#include "deletebackupvaultnotificationsrequest.h"
#include "deletebackupvaultnotificationsresponse.h"
#include "deleterecoverypointrequest.h"
#include "deleterecoverypointresponse.h"
#include "describebackupjobrequest.h"
#include "describebackupjobresponse.h"
#include "describebackupvaultrequest.h"
#include "describebackupvaultresponse.h"
#include "describeprotectedresourcerequest.h"
#include "describeprotectedresourceresponse.h"
#include "describerecoverypointrequest.h"
#include "describerecoverypointresponse.h"
#include "describerestorejobrequest.h"
#include "describerestorejobresponse.h"
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
#include "listprotectedresourcesrequest.h"
#include "listprotectedresourcesresponse.h"
#include "listrecoverypointsbybackupvaultrequest.h"
#include "listrecoverypointsbybackupvaultresponse.h"
#include "listrecoverypointsbyresourcerequest.h"
#include "listrecoverypointsbyresourceresponse.h"
#include "listrestorejobsrequest.h"
#include "listrestorejobsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "putbackupvaultaccesspolicyrequest.h"
#include "putbackupvaultaccesspolicyresponse.h"
#include "putbackupvaultnotificationsrequest.h"
#include "putbackupvaultnotificationsresponse.h"
#include "startbackupjobrequest.h"
#include "startbackupjobresponse.h"
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
#include "updaterecoverypointlifecyclerequest.h"
#include "updaterecoverypointlifecycleresponse.h"

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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
 * Backup plans are documents that contain information that AWS Backup uses to schedule tasks that create recovery points
 * of
 *
 * resources>
 *
 * If you call <code>CreateBackupPlan</code> with a plan that already exists, the existing <code>backupPlanId</code> is
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
 * Creates a JSON document that specifies a set of resources to assign to a backup plan. Resources can be included by
 * specifying patterns for a <code>ListOfTags</code> and selected <code>Resources</code>.
 *
 * </p
 *
 * For example, consider the following
 *
 * patterns> <ul> <li>
 *
 * <code>Resources: "arn:aws:ec2:region:account-id:volume/volume-id"</code>
 *
 * </p </li> <li>
 *
 * <code>ConditionKey:"department"</code>
 *
 * </p
 *
 * <code>ConditionValue:"finance"</code>
 *
 * </p
 *
 * <code>ConditionType:"StringEquals"</code>
 *
 * </p </li> <li>
 *
 * <code>ConditionKey:"importance"</code>
 *
 * </p
 *
 * <code>ConditionValue:"critical"</code>
 *
 * </p
 *
 * <code>ConditionType:"StringEquals"</code>
 *
 * </p </li> </ul>
 *
 * Using these patterns would back up all Amazon Elastic Block Store (Amazon EBS) volumes that are tagged as
 * <code>"department=finance"</code>, <code>"importance=critical"</code>, in addition to an EBS volume with the specified
 * volume
 *
 * Id>
 *
 * Resources and conditions are additive in that all resources that match the pattern are selected. This shouldn't be
 * confused with a logical AND, where all conditions must match. The matching patterns are logically 'put together using
 * the OR operator. In other words, all patterns that match are selected for
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
 * Sensitive data, such as passport numbers, should not be included the name of a backup
 */
CreateBackupVaultResponse * BackupClient::createBackupVault(const CreateBackupVaultRequest &request)
{
    return qobject_cast<CreateBackupVaultResponse *>(send(request));
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
 * DeleteRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the recovery point specified by a recovery point
 */
DeleteRecoveryPointResponse * BackupClient::deleteRecoveryPoint(const DeleteRecoveryPointRequest &request)
{
    return qobject_cast<DeleteRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * DescribeBackupJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata associated with creating a backup of a
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
 * DescribeProtectedResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a saved resource, including the last time it was backed-up, its Amazon Resource Name (ARN),
 * and the AWS service type of the saved
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
 * Returns the body of a backup plan in JSON format, in addition to plan
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
 * Returns two sets of metadata key-value pairs. The first set lists the metadata that the recovery point was created with.
 * The second set lists the metadata key-value pairs that are required to restore the recovery
 *
 * point>
 *
 * These sets can be the same, or the restore metadata set can contain different values if the target service to be
 * restored has changed since the recovery point was created and now requires additional or different information in order
 * to be
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
 * Returns the AWS resource types supported by AWS
 */
GetSupportedResourceTypesResponse * BackupClient::getSupportedResourceTypes(const GetSupportedResourceTypesRequest &request)
{
    return qobject_cast<GetSupportedResourceTypesResponse *>(send(request));
}

/*!
 * Sends a GetSupportedResourceTypes request to the BackupClient service, and returns a pointer to an
 * GetSupportedResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the AWS resource types supported by AWS
 */
GetSupportedResourceTypesResponse * BackupClient::getSupportedResourceTypes()
{
    return getSupportedResourceTypes(GetSupportedResourceTypesRequest());
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListBackupJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about your backup
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
 * Returns metadata of your saved backup plans, including Amazon Resource Names (ARNs), plan IDs, creation and deletion
 * dates, version IDs, plan names, and creator request
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
 * ListProtectedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of resources successfully backed up by AWS Backup, including the time the resource was saved, an Amazon
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
 * Returns detailed information about recovery points of the type specified by a resource Amazon Resource Name
 */
ListRecoveryPointsByResourceResponse * BackupClient::listRecoveryPointsByResource(const ListRecoveryPointsByResourceRequest &request)
{
    return qobject_cast<ListRecoveryPointsByResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * ListRestoreJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of jobs that AWS Backup initiated to restore a saved resource, including metadata about the recovery
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
 * Starts a job to create a one-time backup of the specified
 */
StartBackupJobResponse * BackupClient::startBackupJob(const StartBackupJobRequest &request)
{
    return qobject_cast<StartBackupJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupClient service, and returns a pointer to an
 * StartRestoreJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Recovers the saved resource identified by an Amazon Resource Name (ARN).
 *
 * </p
 *
 * If the resource ARN is included in the request, then the last complete backup of that resource is recovered. If the ARN
 * of a recovery point is supplied, then that recovery point is
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
 * Replaces the body of a saved backup plan identified by its <code>backupPlanId</code> with the input document in JSON
 * format. The new version is uniquely identified by a
 */
UpdateBackupPlanResponse * BackupClient::updateBackupPlan(const UpdateBackupPlanRequest &request)
{
    return qobject_cast<UpdateBackupPlanResponse *>(send(request));
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
 * The lifecycle defines when a protected resource is transitioned to cold storage and when it expires. AWS Backup
 * transitions and expires backups automatically according to the lifecycle that you define.
 *
 * </p
 *
 * Backups transitioned to cold storage must be stored in cold storage for a minimum of 90 days. Therefore, the “expire
 * after days” setting must be 90 days greater than the “transition to cold after days” setting. The “transition to cold
 * after days” setting cannot be changed after a backup has been transitioned to cold.
 */
UpdateRecoveryPointLifecycleResponse * BackupClient::updateRecoveryPointLifecycle(const UpdateRecoveryPointLifecycleRequest &request)
{
    return qobject_cast<UpdateRecoveryPointLifecycleResponse *>(send(request));
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
