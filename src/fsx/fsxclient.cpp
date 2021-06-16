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

#include "fsxclient.h"
#include "fsxclient_p.h"

#include "core/awssignaturev4.h"
#include "associatefilesystemaliasesrequest.h"
#include "associatefilesystemaliasesresponse.h"
#include "canceldatarepositorytaskrequest.h"
#include "canceldatarepositorytaskresponse.h"
#include "copybackuprequest.h"
#include "copybackupresponse.h"
#include "createbackuprequest.h"
#include "createbackupresponse.h"
#include "createdatarepositorytaskrequest.h"
#include "createdatarepositorytaskresponse.h"
#include "createfilesystemrequest.h"
#include "createfilesystemresponse.h"
#include "createfilesystemfrombackuprequest.h"
#include "createfilesystemfrombackupresponse.h"
#include "deletebackuprequest.h"
#include "deletebackupresponse.h"
#include "deletefilesystemrequest.h"
#include "deletefilesystemresponse.h"
#include "describebackupsrequest.h"
#include "describebackupsresponse.h"
#include "describedatarepositorytasksrequest.h"
#include "describedatarepositorytasksresponse.h"
#include "describefilesystemaliasesrequest.h"
#include "describefilesystemaliasesresponse.h"
#include "describefilesystemsrequest.h"
#include "describefilesystemsresponse.h"
#include "disassociatefilesystemaliasesrequest.h"
#include "disassociatefilesystemaliasesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatefilesystemrequest.h"
#include "updatefilesystemresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::FSx
 * \brief Contains classess for accessing Amazon FSx.
 *
 * \inmodule QtAwsFSx
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::FSxClient
 * \brief The FSxClient class provides access to the Amazon FSx service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 */

/*!
 * \brief Constructs a FSxClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FSxClient::FSxClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FSxClientPrivate(this), parent)
{
    Q_D(FSxClient);
    d->apiVersion = QStringLiteral("2018-03-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("fsx");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon FSx");
    d->serviceName = QStringLiteral("fsx");
}

/*!
 * \overload FSxClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
FSxClient::FSxClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FSxClientPrivate(this), parent)
{
    Q_D(FSxClient);
    d->apiVersion = QStringLiteral("2018-03-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("fsx");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon FSx");
    d->serviceName = QStringLiteral("fsx");
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * AssociateFileSystemAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this action to associate one or more Domain Name Server (DNS) aliases with an existing Amazon FSx for Windows File
 * Server file system. A file systen can have a maximum of 50 DNS aliases associated with it at any one time. If you try to
 * associate a DNS alias that is already associated with the file system, FSx takes no action on that alias in the request.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working with DNS Aliases</a> and <a
 * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/walkthrough05-file-system-custom-CNAME.html">Walkthrough 5:
 * Using DNS aliases to access your file system</a>, including additional steps you must take to be able to access your
 * file system using a DNS
 *
 * alias>
 *
 * The system response shows the DNS aliases that Amazon FSx is attempting to associate with the file system. Use the API
 * operation to monitor the status of the aliases Amazon FSx is associating with the file
 */
AssociateFileSystemAliasesResponse * FSxClient::associateFileSystemAliases(const AssociateFileSystemAliasesRequest &request)
{
    return qobject_cast<AssociateFileSystemAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CancelDataRepositoryTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an existing Amazon FSx for Lustre data repository task if that task is in either the <code>PENDING</code> or
 * <code>EXECUTING</code> state. When you cancel a task, Amazon FSx does the
 *
 * following> <ul> <li>
 *
 * Any files that FSx has already exported are not
 *
 * reverted> </li> <li>
 *
 * FSx continues to export any files that are "in-flight" when the cancel operation is
 *
 * received> </li> <li>
 *
 * FSx does not export any files that have not yet been
 */
CancelDataRepositoryTaskResponse * FSxClient::cancelDataRepositoryTask(const CancelDataRepositoryTaskRequest &request)
{
    return qobject_cast<CancelDataRepositoryTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CopyBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies an existing backup within the same AWS account to another Region (cross-Region copy) or within the same Region
 * (in-Region copy). You can have up to five backup copy requests in progress to a single destination Region per
 *
 * account>
 *
 * You can use cross-Region backup copies for cross-region disaster recovery. You periodically take backups and copy them
 * to another Region so that in the event of a disaster in the primary Region, you can restore from backup and recover
 * availability quickly in the other Region. You can make cross-Region copies only within your AWS
 *
 * partition>
 *
 * You can also use backup copies to clone your file data set to another Region or within the same
 *
 * Region>
 *
 * You can use the <code>SourceRegion</code> parameter to specify the AWS Region from which the backup will be copied. For
 * example, if you make the call from the <code>us-west-1</code> Region and want to copy a backup from the
 * <code>us-east-2</code> Region, you specify <code>us-east-2</code> in the <code>SourceRegion</code> parameter to make a
 * cross-Region copy. If you don't specify a Region, the backup copy is created in the same Region where the request is
 * sent from (in-Region
 *
 * copy)>
 *
 * For more information on creating backup copies, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#copy-backups"> Copying backups</a> in the
 * <i>Amazon FSx for Windows User Guide</i> and <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html#copy-backups">Copying backups</a> in the
 * <i>Amazon FSx for Lustre User
 */
CopyBackupResponse * FSxClient::copyBackup(const CopyBackupRequest &request)
{
    return qobject_cast<CopyBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a backup of an existing Amazon FSx file system. Creating regular backups for your file system is a best
 * practice, enabling you to restore a file system from a backup if an issue arises with the original file
 *
 * system>
 *
 * For Amazon FSx for Lustre file systems, you can create a backup only for file systems with the following
 *
 * configuration> <ul> <li>
 *
 * a Persistent deployment
 *
 * typ> </li> <li>
 *
 * is <i>not</i> linked to a data
 *
 * respository> </li> </ul>
 *
 * For more information about backing up Amazon FSx for Lustre file systems, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working with FSx for Lustre
 *
 * backups</a>>
 *
 * For more information about backing up Amazon FSx for Windows file systems, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html">Working with FSx for Windows
 *
 * backups</a>>
 *
 * If a backup with the specified client request token exists, and the parameters match, this operation returns the
 * description of the existing backup. If a backup specified client request token exists, and the parameters don't match,
 * this operation returns <code>IncompatibleParameterError</code>. If a backup with the specified client request token
 * doesn't exist, <code>CreateBackup</code> does the following:
 *
 * </p <ul> <li>
 *
 * Creates a new Amazon FSx backup with an assigned ID, and an initial lifecycle state of
 *
 * <code>CREATING</code>> </li> <li>
 *
 * Returns the description of the
 *
 * backup> </li> </ul>
 *
 * By using the idempotent operation, you can retry a <code>CreateBackup</code> operation without the risk of creating an
 * extra backup. This approach can be useful when an initial call fails in a way that makes it unclear whether a backup was
 * created. If you use the same client request token and the initial call created a backup, the operation returns a
 * successful result because all the parameters are the
 *
 * same>
 *
 * The <code>CreateBackup</code> operation returns while the backup's lifecycle state is still <code>CREATING</code>. You
 * can check the backup creation status by calling the <a>DescribeBackups</a> operation, which returns the backup state
 * along with other
 */
CreateBackupResponse * FSxClient::createBackup(const CreateBackupRequest &request)
{
    return qobject_cast<CreateBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateDataRepositoryTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon FSx for Lustre data repository task. You use data repository tasks to perform bulk operations between
 * your Amazon FSx file system and its linked data repository. An example of a data repository task is exporting any data
 * and metadata changes, including POSIX metadata, to files, directories, and symbolic links (symlinks) from your FSx file
 * system to its linked data repository. A <code>CreateDataRepositoryTask</code> operation will fail if a data repository
 * is not linked to the FSx file system. To learn more about data repository tasks, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-repository-tasks.html">Data Repository Tasks</a>. To learn
 * more about linking a data repository to your file system, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-fs-linked-data-repo.html">Linking your file system to an
 * S3
 */
CreateDataRepositoryTaskResponse * FSxClient::createDataRepositoryTask(const CreateDataRepositoryTaskRequest &request)
{
    return qobject_cast<CreateDataRepositoryTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateFileSystemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new, empty Amazon FSx file
 *
 * system>
 *
 * If a file system with the specified client request token exists and the parameters match, <code>CreateFileSystem</code>
 * returns the description of the existing file system. If a file system specified client request token exists and the
 * parameters don't match, this call returns <code>IncompatibleParameterError</code>. If a file system with the specified
 * client request token doesn't exist, <code>CreateFileSystem</code> does the following:
 *
 * </p <ul> <li>
 *
 * Creates a new, empty Amazon FSx file system with an assigned ID, and an initial lifecycle state of
 *
 * <code>CREATING</code>> </li> <li>
 *
 * Returns the description of the file
 *
 * system> </li> </ul>
 *
 * This operation requires a client request token in the request that Amazon FSx uses to ensure idempotent creation. This
 * means that calling the operation multiple times with the same client request token has no effect. By using the
 * idempotent operation, you can retry a <code>CreateFileSystem</code> operation without the risk of creating an extra file
 * system. This approach can be useful when an initial call fails in a way that makes it unclear whether a file system was
 * created. Examples are if a transport level timeout occurred, or your connection was reset. If you use the same client
 * request token and the initial call created a file system, the client receives success as long as the parameters are the
 *
 * same> <note>
 *
 * The <code>CreateFileSystem</code> call returns while the file system's lifecycle state is still <code>CREATING</code>.
 * You can check the file-system creation status by calling the <a>DescribeFileSystems</a> operation, which returns the
 * file system state along with other
 */
CreateFileSystemResponse * FSxClient::createFileSystem(const CreateFileSystemRequest &request)
{
    return qobject_cast<CreateFileSystemResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateFileSystemFromBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon FSx file system from an existing Amazon FSx
 *
 * backup>
 *
 * If a file system with the specified client request token exists and the parameters match, this operation returns the
 * description of the file system. If a client request token specified by the file system exists and the parameters don't
 * match, this call returns <code>IncompatibleParameterError</code>. If a file system with the specified client request
 * token doesn't exist, this operation does the
 *
 * following> <ul> <li>
 *
 * Creates a new Amazon FSx file system from backup with an assigned ID, and an initial lifecycle state of
 *
 * <code>CREATING</code>> </li> <li>
 *
 * Returns the description of the file
 *
 * system> </li> </ul>
 *
 * Parameters like Active Directory, default share name, automatic backup, and backup settings default to the parameters of
 * the file system that was backed up, unless overridden. You can explicitly supply other
 *
 * settings>
 *
 * By using the idempotent operation, you can retry a <code>CreateFileSystemFromBackup</code> call without the risk of
 * creating an extra file system. This approach can be useful when an initial call fails in a way that makes it unclear
 * whether a file system was created. Examples are if a transport level timeout occurred, or your connection was reset. If
 * you use the same client request token and the initial call created a file system, the client receives success as long as
 * the parameters are the
 *
 * same> <note>
 *
 * The <code>CreateFileSystemFromBackup</code> call returns while the file system's lifecycle state is still
 * <code>CREATING</code>. You can check the file-system creation status by calling the <a>DescribeFileSystems</a>
 * operation, which returns the file system state along with other
 */
CreateFileSystemFromBackupResponse * FSxClient::createFileSystemFromBackup(const CreateFileSystemFromBackupRequest &request)
{
    return qobject_cast<CreateFileSystemFromBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DeleteBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon FSx backup, deleting its contents. After deletion, the backup no longer exists, and its data is
 *
 * gone>
 *
 * The <code>DeleteBackup</code> call returns instantly. The backup will not show up in later <code>DescribeBackups</code>
 *
 * calls> <b>
 *
 * The data in a deleted backup is also deleted and can't be recovered by any
 */
DeleteBackupResponse * FSxClient::deleteBackup(const DeleteBackupRequest &request)
{
    return qobject_cast<DeleteBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DeleteFileSystemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a file system, deleting its contents. After deletion, the file system no longer exists, and its data is gone.
 * Any existing automatic backups will also be
 *
 * deleted>
 *
 * By default, when you delete an Amazon FSx for Windows File Server file system, a final backup is created upon deletion.
 * This final backup is not subject to the file system's retention policy, and must be manually
 *
 * deleted>
 *
 * The <code>DeleteFileSystem</code> action returns while the file system has the <code>DELETING</code> status. You can
 * check the file system deletion status by calling the <a>DescribeFileSystems</a> action, which returns a list of file
 * systems in your account. If you pass the file system ID for a deleted file system, the <a>DescribeFileSystems</a>
 * returns a <code>FileSystemNotFound</code>
 *
 * error> <note>
 *
 * Deleting an Amazon FSx for Lustre file system will fail with a 400 BadRequest if a data repository task is in a
 * <code>PENDING</code> or <code>EXECUTING</code>
 *
 * state> </note> <b>
 *
 * The data in a deleted file system is also deleted and can't be recovered by any
 */
DeleteFileSystemResponse * FSxClient::deleteFileSystem(const DeleteFileSystemRequest &request)
{
    return qobject_cast<DeleteFileSystemResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeBackupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of specific Amazon FSx backups, if a <code>BackupIds</code> value is provided for that backup.
 * Otherwise, it returns all backups owned by your AWS account in the AWS Region of the endpoint that you're
 *
 * calling>
 *
 * When retrieving all backups, you can optionally specify the <code>MaxResults</code> parameter to limit the number of
 * backups in a response. If more backups remain, Amazon FSx returns a <code>NextToken</code> value in the response. In
 * this case, send a later request with the <code>NextToken</code> request parameter set to the value of
 * <code>NextToken</code> from the last
 *
 * response>
 *
 * This action is used in an iterative process to retrieve a list of your backups. <code>DescribeBackups</code> is called
 * first without a <code>NextToken</code>value. Then the action continues to be called with the <code>NextToken</code>
 * parameter set to the value of the last <code>NextToken</code> value until a response has no
 *
 * <code>NextToken</code>>
 *
 * When using this action, keep the following in
 *
 * mind> <ul> <li>
 *
 * The implementation might return fewer than <code>MaxResults</code> file system descriptions while still including a
 * <code>NextToken</code>
 *
 * value> </li> <li>
 *
 * The order of backups returned in the response of one <code>DescribeBackups</code> call and the order of backups returned
 * across the responses of a multi-call iteration is
 */
DescribeBackupsResponse * FSxClient::describeBackups(const DescribeBackupsRequest &request)
{
    return qobject_cast<DescribeBackupsResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeDataRepositoryTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of specific Amazon FSx for Lustre data repository tasks, if one or more <code>TaskIds</code>
 * values are provided in the request, or if filters are used in the request. You can use filters to narrow the response to
 * include just tasks for specific file systems, or tasks in a specific lifecycle state. Otherwise, it returns all data
 * repository tasks owned by your AWS account in the AWS Region of the endpoint that you're
 *
 * calling>
 *
 * When retrieving all tasks, you can paginate the response by using the optional <code>MaxResults</code> parameter to
 * limit the number of tasks returned in a response. If more tasks remain, Amazon FSx returns a <code>NextToken</code>
 * value in the response. In this case, send a later request with the <code>NextToken</code> request parameter set to the
 * value of <code>NextToken</code> from the last
 */
DescribeDataRepositoryTasksResponse * FSxClient::describeDataRepositoryTasks(const DescribeDataRepositoryTasksRequest &request)
{
    return qobject_cast<DescribeDataRepositoryTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeFileSystemAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the DNS aliases that are associated with the specified Amazon FSx for Windows File Server file system. A history
 * of all DNS aliases that have been associated with and disassociated from the file system is available in the list of
 * <a>AdministrativeAction</a> provided in the <a>DescribeFileSystems</a> operation
 */
DescribeFileSystemAliasesResponse * FSxClient::describeFileSystemAliases(const DescribeFileSystemAliasesRequest &request)
{
    return qobject_cast<DescribeFileSystemAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeFileSystemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of specific Amazon FSx file systems, if a <code>FileSystemIds</code> value is provided for that
 * file system. Otherwise, it returns descriptions of all file systems owned by your AWS account in the AWS Region of the
 * endpoint that you're
 *
 * calling>
 *
 * When retrieving all file system descriptions, you can optionally specify the <code>MaxResults</code> parameter to limit
 * the number of descriptions in a response. If more file system descriptions remain, Amazon FSx returns a
 * <code>NextToken</code> value in the response. In this case, send a later request with the <code>NextToken</code> request
 * parameter set to the value of <code>NextToken</code> from the last
 *
 * response>
 *
 * This action is used in an iterative process to retrieve a list of your file system descriptions.
 * <code>DescribeFileSystems</code> is called first without a <code>NextToken</code>value. Then the action continues to be
 * called with the <code>NextToken</code> parameter set to the value of the last <code>NextToken</code> value until a
 * response has no
 *
 * <code>NextToken</code>>
 *
 * When using this action, keep the following in
 *
 * mind> <ul> <li>
 *
 * The implementation might return fewer than <code>MaxResults</code> file system descriptions while still including a
 * <code>NextToken</code>
 *
 * value> </li> <li>
 *
 * The order of file systems returned in the response of one <code>DescribeFileSystems</code> call and the order of file
 * systems returned across the responses of a multicall iteration is
 */
DescribeFileSystemsResponse * FSxClient::describeFileSystems(const DescribeFileSystemsRequest &request)
{
    return qobject_cast<DescribeFileSystemsResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DisassociateFileSystemAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this action to disassociate, or remove, one or more Domain Name Service (DNS) aliases from an Amazon FSx for Windows
 * File Server file system. If you attempt to disassociate a DNS alias that is not associated with the file system, Amazon
 * FSx responds with a 400 Bad Request. For more information, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working with DNS
 *
 * Aliases</a>>
 *
 * The system generated response showing the DNS aliases that Amazon FSx is attempting to disassociate from the file
 * system. Use the API operation to monitor the status of the aliases Amazon FSx is disassociating with the file
 */
DisassociateFileSystemAliasesResponse * FSxClient::disassociateFileSystemAliases(const DisassociateFileSystemAliasesRequest &request)
{
    return qobject_cast<DisassociateFileSystemAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags for an Amazon FSx file systems and backups in the case of Amazon FSx for Windows File
 *
 * Server>
 *
 * When retrieving all tags, you can optionally specify the <code>MaxResults</code> parameter to limit the number of tags
 * in a response. If more tags remain, Amazon FSx returns a <code>NextToken</code> value in the response. In this case,
 * send a later request with the <code>NextToken</code> request parameter set to the value of <code>NextToken</code> from
 * the last
 *
 * response>
 *
 * This action is used in an iterative process to retrieve a list of your tags. <code>ListTagsForResource</code> is called
 * first without a <code>NextToken</code>value. Then the action continues to be called with the <code>NextToken</code>
 * parameter set to the value of the last <code>NextToken</code> value until a response has no
 *
 * <code>NextToken</code>>
 *
 * When using this action, keep the following in
 *
 * mind> <ul> <li>
 *
 * The implementation might return fewer than <code>MaxResults</code> file system descriptions while still including a
 * <code>NextToken</code>
 *
 * value> </li> <li>
 *
 * The order of tags returned in the response of one <code>ListTagsForResource</code> call and the order of tags returned
 * across the responses of a multi-call iteration is
 */
ListTagsForResourceResponse * FSxClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags an Amazon FSx
 */
TagResourceResponse * FSxClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This action removes a tag from an Amazon FSx
 */
UntagResourceResponse * FSxClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * UpdateFileSystemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to update the configuration of an existing Amazon FSx file system. You can update multiple properties
 * in a single
 *
 * request>
 *
 * For Amazon FSx for Windows File Server file systems, you can update the following
 *
 * properties> <ul> <li>
 *
 * AuditLogConfiguratio> </li> <li>
 *
 * AutomaticBackupRetentionDay> </li> <li>
 *
 * DailyAutomaticBackupStartTim> </li> <li>
 *
 * SelfManagedActiveDirectoryConfiguratio> </li> <li>
 *
 * StorageCapacit> </li> <li>
 *
 * ThroughputCapacit> </li> <li>
 *
 * WeeklyMaintenanceStartTim> </li> </ul>
 *
 * For Amazon FSx for Lustre file systems, you can update the following
 *
 * properties> <ul> <li>
 *
 * AutoImportPolic> </li> <li>
 *
 * AutomaticBackupRetentionDay> </li> <li>
 *
 * DailyAutomaticBackupStartTim> </li> <li>
 *
 * DataCompressionTyp> </li> <li>
 *
 * StorageCapacit> </li> <li>
 */
UpdateFileSystemResponse * FSxClient::updateFileSystem(const UpdateFileSystemRequest &request)
{
    return qobject_cast<UpdateFileSystemResponse *>(send(request));
}

/*!
 * \class QtAws::FSx::FSxClientPrivate
 * \brief The FSxClientPrivate class provides private implementation for FSxClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a FSxClientPrivate object with public implementation \a q.
 */
FSxClientPrivate::FSxClientPrivate(FSxClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace FSx
} // namespace QtAws
