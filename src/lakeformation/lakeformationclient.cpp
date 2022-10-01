// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lakeformationclient.h"
#include "lakeformationclient_p.h"

#include "core/awssignaturev4.h"
#include "addlftagstoresourcerequest.h"
#include "addlftagstoresourceresponse.h"
#include "assumedecoratedrolewithsamlrequest.h"
#include "assumedecoratedrolewithsamlresponse.h"
#include "batchgrantpermissionsrequest.h"
#include "batchgrantpermissionsresponse.h"
#include "batchrevokepermissionsrequest.h"
#include "batchrevokepermissionsresponse.h"
#include "canceltransactionrequest.h"
#include "canceltransactionresponse.h"
#include "committransactionrequest.h"
#include "committransactionresponse.h"
#include "createdatacellsfilterrequest.h"
#include "createdatacellsfilterresponse.h"
#include "createlftagrequest.h"
#include "createlftagresponse.h"
#include "deletedatacellsfilterrequest.h"
#include "deletedatacellsfilterresponse.h"
#include "deletelftagrequest.h"
#include "deletelftagresponse.h"
#include "deleteobjectsoncancelrequest.h"
#include "deleteobjectsoncancelresponse.h"
#include "deregisterresourcerequest.h"
#include "deregisterresourceresponse.h"
#include "describeresourcerequest.h"
#include "describeresourceresponse.h"
#include "describetransactionrequest.h"
#include "describetransactionresponse.h"
#include "extendtransactionrequest.h"
#include "extendtransactionresponse.h"
#include "getdatalakesettingsrequest.h"
#include "getdatalakesettingsresponse.h"
#include "geteffectivepermissionsforpathrequest.h"
#include "geteffectivepermissionsforpathresponse.h"
#include "getlftagrequest.h"
#include "getlftagresponse.h"
#include "getquerystaterequest.h"
#include "getquerystateresponse.h"
#include "getquerystatisticsrequest.h"
#include "getquerystatisticsresponse.h"
#include "getresourcelftagsrequest.h"
#include "getresourcelftagsresponse.h"
#include "gettableobjectsrequest.h"
#include "gettableobjectsresponse.h"
#include "gettemporarygluepartitioncredentialsrequest.h"
#include "gettemporarygluepartitioncredentialsresponse.h"
#include "gettemporarygluetablecredentialsrequest.h"
#include "gettemporarygluetablecredentialsresponse.h"
#include "getworkunitresultsrequest.h"
#include "getworkunitresultsresponse.h"
#include "getworkunitsrequest.h"
#include "getworkunitsresponse.h"
#include "grantpermissionsrequest.h"
#include "grantpermissionsresponse.h"
#include "listdatacellsfilterrequest.h"
#include "listdatacellsfilterresponse.h"
#include "listlftagsrequest.h"
#include "listlftagsresponse.h"
#include "listpermissionsrequest.h"
#include "listpermissionsresponse.h"
#include "listresourcesrequest.h"
#include "listresourcesresponse.h"
#include "listtablestorageoptimizersrequest.h"
#include "listtablestorageoptimizersresponse.h"
#include "listtransactionsrequest.h"
#include "listtransactionsresponse.h"
#include "putdatalakesettingsrequest.h"
#include "putdatalakesettingsresponse.h"
#include "registerresourcerequest.h"
#include "registerresourceresponse.h"
#include "removelftagsfromresourcerequest.h"
#include "removelftagsfromresourceresponse.h"
#include "revokepermissionsrequest.h"
#include "revokepermissionsresponse.h"
#include "searchdatabasesbylftagsrequest.h"
#include "searchdatabasesbylftagsresponse.h"
#include "searchtablesbylftagsrequest.h"
#include "searchtablesbylftagsresponse.h"
#include "startqueryplanningrequest.h"
#include "startqueryplanningresponse.h"
#include "starttransactionrequest.h"
#include "starttransactionresponse.h"
#include "updatelftagrequest.h"
#include "updatelftagresponse.h"
#include "updateresourcerequest.h"
#include "updateresourceresponse.h"
#include "updatetableobjectsrequest.h"
#include "updatetableobjectsresponse.h"
#include "updatetablestorageoptimizerrequest.h"
#include "updatetablestorageoptimizerresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LakeFormation
 * \brief Contains classess for accessing AWS Lake Formation.
 *
 * \inmodule QtAwsLakeFormation
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::LakeFormationClient
 * \brief The LakeFormationClient class provides access to the AWS Lake Formation service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 */

/*!
 * \brief Constructs a LakeFormationClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LakeFormationClient::LakeFormationClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LakeFormationClientPrivate(this), parent)
{
    Q_D(LakeFormationClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("lakeformation");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Lake Formation");
    d->serviceName = QStringLiteral("lakeformation");
}

/*!
 * \overload LakeFormationClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LakeFormationClient::LakeFormationClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LakeFormationClientPrivate(this), parent)
{
    Q_D(LakeFormationClient);
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("lakeformation");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Lake Formation");
    d->serviceName = QStringLiteral("lakeformation");
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * AddLFTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches one or more LF-tags to an existing
 */
AddLFTagsToResourceResponse * LakeFormationClient::addLFTagsToResource(const AddLFTagsToResourceRequest &request)
{
    return qobject_cast<AddLFTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * AssumeDecoratedRoleWithSAMLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a caller to assume an IAM role decorated as the SAML user specified in the SAML assertion included in the
 * request. This decoration allows Lake Formation to enforce access policies against the SAML users and groups. This API
 * operation requires SAML federation setup in the caller’s account as it can only be called with valid SAML assertions.
 * Lake Formation does not scope down the permission of the assumed role. All permissions attached to the role via the SAML
 * federation setup will be included in the role session.
 *
 * </p
 *
 * This decorated role is expected to access data in Amazon S3 by getting temporary access from Lake Formation which is
 * authorized via the virtual API <code>GetDataAccess</code>. Therefore, all SAML roles that can be assumed via
 * <code>AssumeDecoratedRoleWithSAML</code> must at a minimum include <code>lakeformation:GetDataAccess</code> in their
 * role policies. A typical IAM policy attached to such a role would look as follows:
 */
AssumeDecoratedRoleWithSAMLResponse * LakeFormationClient::assumeDecoratedRoleWithSAML(const AssumeDecoratedRoleWithSAMLRequest &request)
{
    return qobject_cast<AssumeDecoratedRoleWithSAMLResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * BatchGrantPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Batch operation to grant permissions to the
 */
BatchGrantPermissionsResponse * LakeFormationClient::batchGrantPermissions(const BatchGrantPermissionsRequest &request)
{
    return qobject_cast<BatchGrantPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * BatchRevokePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Batch operation to revoke permissions from the
 */
BatchRevokePermissionsResponse * LakeFormationClient::batchRevokePermissions(const BatchRevokePermissionsRequest &request)
{
    return qobject_cast<BatchRevokePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * CancelTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel the specified transaction. Returns an exception if the transaction was previously
 */
CancelTransactionResponse * LakeFormationClient::cancelTransaction(const CancelTransactionRequest &request)
{
    return qobject_cast<CancelTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * CommitTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to commit the specified transaction. Returns an exception if the transaction was previously aborted. This API
 * action is idempotent if called multiple times for the same
 */
CommitTransactionResponse * LakeFormationClient::commitTransaction(const CommitTransactionRequest &request)
{
    return qobject_cast<CommitTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * CreateDataCellsFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a data cell filter to allow one to grant access to certain columns on certain
 */
CreateDataCellsFilterResponse * LakeFormationClient::createDataCellsFilter(const CreateDataCellsFilterRequest &request)
{
    return qobject_cast<CreateDataCellsFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * CreateLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an LF-tag with the specified name and
 */
CreateLFTagResponse * LakeFormationClient::createLFTag(const CreateLFTagRequest &request)
{
    return qobject_cast<CreateLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DeleteDataCellsFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a data cell
 */
DeleteDataCellsFilterResponse * LakeFormationClient::deleteDataCellsFilter(const DeleteDataCellsFilterRequest &request)
{
    return qobject_cast<DeleteDataCellsFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DeleteLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified LF-tag given a key name. If the input parameter tag key was not found, then the operation will
 * throw an exception. When you delete an LF-tag, the <code>LFTagPolicy</code> attached to the LF-tag becomes invalid. If
 * the deleted LF-tag was still assigned to any resource, the tag policy attach to the deleted LF-tag will no longer be
 * applied to the
 */
DeleteLFTagResponse * LakeFormationClient::deleteLFTag(const DeleteLFTagRequest &request)
{
    return qobject_cast<DeleteLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DeleteObjectsOnCancelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For a specific governed table, provides a list of Amazon S3 objects that will be written during the current transaction
 * and that can be automatically deleted if the transaction is canceled. Without this call, no Amazon S3 objects are
 * automatically deleted when a transaction cancels.
 *
 * </p
 *
 * The Glue ETL library function <code>write_dynamic_frame.from_catalog()</code> includes an option to automatically call
 * <code>DeleteObjectsOnCancel</code> before writes. For more information, see <a
 * href="https://docs.aws.amazon.com/lake-formation/latest/dg/transactions-data-operations.html#rolling-back-writes">Rolling
 * Back Amazon S3 Writes</a>.
 */
DeleteObjectsOnCancelResponse * LakeFormationClient::deleteObjectsOnCancel(const DeleteObjectsOnCancelRequest &request)
{
    return qobject_cast<DeleteObjectsOnCancelResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DeregisterResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the resource as managed by the Data
 *
 * Catalog>
 *
 * When you deregister a path, Lake Formation removes the path from the inline policy attached to your service-linked
 */
DeregisterResourceResponse * LakeFormationClient::deregisterResource(const DeregisterResourceRequest &request)
{
    return qobject_cast<DeregisterResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DescribeResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current data access role for the given resource registered in Lake
 */
DescribeResourceResponse * LakeFormationClient::describeResource(const DescribeResourceRequest &request)
{
    return qobject_cast<DescribeResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * DescribeTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of a single
 */
DescribeTransactionResponse * LakeFormationClient::describeTransaction(const DescribeTransactionRequest &request)
{
    return qobject_cast<DescribeTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ExtendTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Indicates to the service that the specified transaction is still active and should not be treated as idle and
 *
 * aborted>
 *
 * Write transactions that remain idle for a long period are automatically aborted unless explicitly
 */
ExtendTransactionResponse * LakeFormationClient::extendTransaction(const ExtendTransactionRequest &request)
{
    return qobject_cast<ExtendTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetDataLakeSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of the data lake administrators of a Lake Formation-managed data lake.
 */
GetDataLakeSettingsResponse * LakeFormationClient::getDataLakeSettings(const GetDataLakeSettingsRequest &request)
{
    return qobject_cast<GetDataLakeSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetEffectivePermissionsForPathResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the Lake Formation permissions for a specified table or database resource located at a path in Amazon S3.
 * <code>GetEffectivePermissionsForPath</code> will not return databases and tables if the catalog is
 */
GetEffectivePermissionsForPathResponse * LakeFormationClient::getEffectivePermissionsForPath(const GetEffectivePermissionsForPathRequest &request)
{
    return qobject_cast<GetEffectivePermissionsForPathResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an LF-tag
 */
GetLFTagResponse * LakeFormationClient::getLFTag(const GetLFTagRequest &request)
{
    return qobject_cast<GetLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetQueryStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the state of a query previously submitted. Clients are expected to poll <code>GetQueryState</code> to monitor
 * the current state of the planning before retrieving the work units. A query state is only visible to the principal that
 * made the initial call to
 */
GetQueryStateResponse * LakeFormationClient::getQueryState(const GetQueryStateRequest &request)
{
    return qobject_cast<GetQueryStateResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetQueryStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves statistics on the planning and execution of a
 */
GetQueryStatisticsResponse * LakeFormationClient::getQueryStatistics(const GetQueryStatisticsRequest &request)
{
    return qobject_cast<GetQueryStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetResourceLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the LF-tags applied to a
 */
GetResourceLFTagsResponse * LakeFormationClient::getResourceLFTags(const GetResourceLFTagsRequest &request)
{
    return qobject_cast<GetResourceLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetTableObjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the set of Amazon S3 objects that make up the specified governed table. A transaction ID or timestamp can be
 * specified for time-travel
 */
GetTableObjectsResponse * LakeFormationClient::getTableObjects(const GetTableObjectsRequest &request)
{
    return qobject_cast<GetTableObjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetTemporaryGluePartitionCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is identical to <code>GetTemporaryTableCredentials</code> except that this is used when the target Data Catalog
 * resource is of type Partition. Lake Formation restricts the permission of the vended credentials with the same scope
 * down policy which restricts access to a single Amazon S3
 */
GetTemporaryGluePartitionCredentialsResponse * LakeFormationClient::getTemporaryGluePartitionCredentials(const GetTemporaryGluePartitionCredentialsRequest &request)
{
    return qobject_cast<GetTemporaryGluePartitionCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetTemporaryGlueTableCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a caller in a secure environment to assume a role with permission to access Amazon S3. In order to vend such
 * credentials, Lake Formation assumes the role associated with a registered location, for example an Amazon S3 bucket,
 * with a scope down policy which restricts the access to a single
 */
GetTemporaryGlueTableCredentialsResponse * LakeFormationClient::getTemporaryGlueTableCredentials(const GetTemporaryGlueTableCredentialsRequest &request)
{
    return qobject_cast<GetTemporaryGlueTableCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetWorkUnitResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the work units resulting from the query. Work units can be executed in any order and in parallel.
 */
GetWorkUnitResultsResponse * LakeFormationClient::getWorkUnitResults(const GetWorkUnitResultsRequest &request)
{
    return qobject_cast<GetWorkUnitResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GetWorkUnitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the work units generated by the <code>StartQueryPlanning</code>
 */
GetWorkUnitsResponse * LakeFormationClient::getWorkUnits(const GetWorkUnitsRequest &request)
{
    return qobject_cast<GetWorkUnitsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * GrantPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants permissions to the principal to access metadata in the Data Catalog and data organized in underlying data storage
 * such as Amazon
 *
 * S3>
 *
 * For information about permissions, see <a
 * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security and Access Control to
 * Metadata and
 */
GrantPermissionsResponse * LakeFormationClient::grantPermissions(const GrantPermissionsRequest &request)
{
    return qobject_cast<GrantPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListDataCellsFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the data cell filters on a
 */
ListDataCellsFilterResponse * LakeFormationClient::listDataCellsFilter(const ListDataCellsFilterRequest &request)
{
    return qobject_cast<ListDataCellsFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists LF-tags that the requester has permission to view.
 */
ListLFTagsResponse * LakeFormationClient::listLFTags(const ListLFTagsRequest &request)
{
    return qobject_cast<ListLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the principal permissions on the resource, filtered by the permissions of the caller. For example, if
 * you are granted an ALTER permission, you are able to see only the principal permissions for
 *
 * ALTER>
 *
 * This operation returns only those permissions that have been explicitly
 *
 * granted>
 *
 * For information about permissions, see <a
 * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security and Access Control to
 * Metadata and
 */
ListPermissionsResponse * LakeFormationClient::listPermissions(const ListPermissionsRequest &request)
{
    return qobject_cast<ListPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resources registered to be managed by the Data
 */
ListResourcesResponse * LakeFormationClient::listResources(const ListResourcesRequest &request)
{
    return qobject_cast<ListResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListTableStorageOptimizersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the configuration of all storage optimizers associated with a specified
 */
ListTableStorageOptimizersResponse * LakeFormationClient::listTableStorageOptimizers(const ListTableStorageOptimizersRequest &request)
{
    return qobject_cast<ListTableStorageOptimizersResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * ListTransactionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about transactions and their status. To prevent the response from growing indefinitely, only
 * uncommitted transactions and those available for time-travel queries are
 *
 * returned>
 *
 * This operation can help you identify uncommitted transactions or to get information about
 */
ListTransactionsResponse * LakeFormationClient::listTransactions(const ListTransactionsRequest &request)
{
    return qobject_cast<ListTransactionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * PutDataLakeSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the list of data lake administrators who have admin privileges on all resources managed by Lake Formation. For more
 * information on admin privileges, see <a
 * href="https://docs.aws.amazon.com/lake-formation/latest/dg/lake-formation-permissions.html">Granting Lake Formation
 *
 * Permissions</a>>
 *
 * This API replaces the current list of data lake admins with the new list being passed. To add an admin, fetch the
 * current list and add the new admin to that list and pass that list in this
 */
PutDataLakeSettingsResponse * LakeFormationClient::putDataLakeSettings(const PutDataLakeSettingsRequest &request)
{
    return qobject_cast<PutDataLakeSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * RegisterResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers the resource as managed by the Data
 *
 * Catalog>
 *
 * To add or update data, Lake Formation needs read/write access to the chosen Amazon S3 path. Choose a role that you know
 * has permission to do this, or choose the AWSServiceRoleForLakeFormationDataAccess service-linked role. When you register
 * the first Amazon S3 path, the service-linked role and a new inline policy are created on your behalf. Lake Formation
 * adds the first path to the inline policy and attaches it to the service-linked role. When you register subsequent paths,
 * Lake Formation adds the path to the existing
 *
 * policy>
 *
 * The following request registers a new location and gives Lake Formation permission to use the service-linked role to
 * access that
 *
 * location>
 *
 * <code>ResourceArn = arn:aws:s3:::my-bucket UseServiceLinkedRole = true</code>
 *
 * </p
 *
 * If <code>UseServiceLinkedRole</code> is not set to true, you must provide or set the
 *
 * <code>RoleArn</code>>
 *
 * <code>arn:aws:iam::12345:role/my-data-access-role</code>
 */
RegisterResourceResponse * LakeFormationClient::registerResource(const RegisterResourceRequest &request)
{
    return qobject_cast<RegisterResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * RemoveLFTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an LF-tag from the resource. Only database, table, or tableWithColumns resource are allowed. To tag columns, use
 * the column inclusion list in <code>tableWithColumns</code> to specify column
 */
RemoveLFTagsFromResourceResponse * LakeFormationClient::removeLFTagsFromResource(const RemoveLFTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveLFTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * RevokePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes permissions to the principal to access metadata in the Data Catalog and data organized in underlying data
 * storage such as Amazon
 */
RevokePermissionsResponse * LakeFormationClient::revokePermissions(const RevokePermissionsRequest &request)
{
    return qobject_cast<RevokePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * SearchDatabasesByLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation allows a search on <code>DATABASE</code> resources by <code>TagCondition</code>. This operation is used
 * by admins who want to grant user permissions on certain <code>TagConditions</code>. Before making a grant, the admin can
 * use <code>SearchDatabasesByTags</code> to find all resources where the given <code>TagConditions</code> are valid to
 * verify whether the returned resources can be
 */
SearchDatabasesByLFTagsResponse * LakeFormationClient::searchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest &request)
{
    return qobject_cast<SearchDatabasesByLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * SearchTablesByLFTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation allows a search on <code>TABLE</code> resources by <code>LFTag</code>s. This will be used by admins who
 * want to grant user permissions on certain LF-tags. Before making a grant, the admin can use
 * <code>SearchTablesByLFTags</code> to find all resources where the given <code>LFTag</code>s are valid to verify whether
 * the returned resources can be
 */
SearchTablesByLFTagsResponse * LakeFormationClient::searchTablesByLFTags(const SearchTablesByLFTagsRequest &request)
{
    return qobject_cast<SearchTablesByLFTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * StartQueryPlanningResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits a request to process a query
 *
 * statement>
 *
 * This operation generates work units that can be retrieved with the <code>GetWorkUnits</code> operation as soon as the
 * query state is WORKUNITS_AVAILABLE or
 */
StartQueryPlanningResponse * LakeFormationClient::startQueryPlanning(const StartQueryPlanningRequest &request)
{
    return qobject_cast<StartQueryPlanningResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * StartTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new transaction and returns its transaction ID. Transaction IDs are opaque objects that you can use to identify
 * a
 */
StartTransactionResponse * LakeFormationClient::startTransaction(const StartTransactionRequest &request)
{
    return qobject_cast<StartTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * UpdateLFTagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the list of possible values for the specified LF-tag key. If the LF-tag does not exist, the operation throws an
 * EntityNotFoundException. The values in the delete key values will be deleted from list of possible values. If any value
 * in the delete key values is attached to a resource, then API errors out with a 400 Exception - "Update not allowed".
 * Untag the attribute before deleting the LF-tag key's value.
 */
UpdateLFTagResponse * LakeFormationClient::updateLFTag(const UpdateLFTagRequest &request)
{
    return qobject_cast<UpdateLFTagResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * UpdateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the data access role used for vending access to the given (registered) resource in Lake Formation.
 */
UpdateResourceResponse * LakeFormationClient::updateResource(const UpdateResourceRequest &request)
{
    return qobject_cast<UpdateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * UpdateTableObjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the manifest of Amazon S3 objects that make up the specified governed
 */
UpdateTableObjectsResponse * LakeFormationClient::updateTableObjects(const UpdateTableObjectsRequest &request)
{
    return qobject_cast<UpdateTableObjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the LakeFormationClient service, and returns a pointer to an
 * UpdateTableStorageOptimizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of the storage optimizers for a
 */
UpdateTableStorageOptimizerResponse * LakeFormationClient::updateTableStorageOptimizer(const UpdateTableStorageOptimizerRequest &request)
{
    return qobject_cast<UpdateTableStorageOptimizerResponse *>(send(request));
}

/*!
 * \class QtAws::LakeFormation::LakeFormationClientPrivate
 * \brief The LakeFormationClientPrivate class provides private implementation for LakeFormationClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a LakeFormationClientPrivate object with public implementation \a q.
 */
LakeFormationClientPrivate::LakeFormationClientPrivate(LakeFormationClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LakeFormation
} // namespace QtAws
