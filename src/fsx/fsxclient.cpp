// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
#include "createdatarepositoryassociationrequest.h"
#include "createdatarepositoryassociationresponse.h"
#include "createdatarepositorytaskrequest.h"
#include "createdatarepositorytaskresponse.h"
#include "createfilesystemrequest.h"
#include "createfilesystemresponse.h"
#include "createfilesystemfrombackuprequest.h"
#include "createfilesystemfrombackupresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createstoragevirtualmachinerequest.h"
#include "createstoragevirtualmachineresponse.h"
#include "createvolumerequest.h"
#include "createvolumeresponse.h"
#include "createvolumefrombackuprequest.h"
#include "createvolumefrombackupresponse.h"
#include "deletebackuprequest.h"
#include "deletebackupresponse.h"
#include "deletedatarepositoryassociationrequest.h"
#include "deletedatarepositoryassociationresponse.h"
#include "deletefilesystemrequest.h"
#include "deletefilesystemresponse.h"
#include "deletesnapshotrequest.h"
#include "deletesnapshotresponse.h"
#include "deletestoragevirtualmachinerequest.h"
#include "deletestoragevirtualmachineresponse.h"
#include "deletevolumerequest.h"
#include "deletevolumeresponse.h"
#include "describebackupsrequest.h"
#include "describebackupsresponse.h"
#include "describedatarepositoryassociationsrequest.h"
#include "describedatarepositoryassociationsresponse.h"
#include "describedatarepositorytasksrequest.h"
#include "describedatarepositorytasksresponse.h"
#include "describefilesystemaliasesrequest.h"
#include "describefilesystemaliasesresponse.h"
#include "describefilesystemsrequest.h"
#include "describefilesystemsresponse.h"
#include "describesnapshotsrequest.h"
#include "describesnapshotsresponse.h"
#include "describestoragevirtualmachinesrequest.h"
#include "describestoragevirtualmachinesresponse.h"
#include "describevolumesrequest.h"
#include "describevolumesresponse.h"
#include "disassociatefilesystemaliasesrequest.h"
#include "disassociatefilesystemaliasesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "releasefilesystemnfsv3locksrequest.h"
#include "releasefilesystemnfsv3locksresponse.h"
#include "restorevolumefromsnapshotrequest.h"
#include "restorevolumefromsnapshotresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedatarepositoryassociationrequest.h"
#include "updatedatarepositoryassociationresponse.h"
#include "updatefilesystemrequest.h"
#include "updatefilesystemresponse.h"
#include "updatesnapshotrequest.h"
#include "updatesnapshotresponse.h"
#include "updatestoragevirtualmachinerequest.h"
#include "updatestoragevirtualmachineresponse.h"
#include "updatevolumerequest.h"
#include "updatevolumeresponse.h"

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
 * Server file system. A file system can have a maximum of 50 DNS aliases associated with it at any one time. If you try to
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
 * Copies an existing backup within the same Amazon Web Services account to another Amazon Web Services Region
 * (cross-Region copy) or within the same Amazon Web Services Region (in-Region copy). You can have up to five backup copy
 * requests in progress to a single destination Region per
 *
 * account>
 *
 * You can use cross-Region backup copies for cross-Region disaster recovery. You can periodically take backups and copy
 * them to another Region so that in the event of a disaster in the primary Region, you can restore from backup and recover
 * availability quickly in the other Region. You can make cross-Region copies only within your Amazon Web Services
 * partition. A partition is a grouping of Regions. Amazon Web Services currently has three partitions: <code>aws</code>
 * (Standard Regions), <code>aws-cn</code> (China Regions), and <code>aws-us-gov</code> (Amazon Web Services GovCloud [US]
 *
 * Regions)>
 *
 * You can also use backup copies to clone your file dataset to another Region or within the same
 *
 * Region>
 *
 * You can use the <code>SourceRegion</code> parameter to specify the Amazon Web Services Region from which the backup will
 * be copied. For example, if you make the call from the <code>us-west-1</code> Region and want to copy a backup from the
 * <code>us-east-2</code> Region, you specify <code>us-east-2</code> in the <code>SourceRegion</code> parameter to make a
 * cross-Region copy. If you don't specify a Region, the backup copy is created in the same Region where the request is
 * sent from (in-Region
 *
 * copy)>
 *
 * For more information about creating backup copies, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#copy-backups"> Copying backups</a> in the
 * <i>Amazon FSx for Windows User Guide</i>, <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html#copy-backups">Copying backups</a> in the
 * <i>Amazon FSx for Lustre User Guide</i>, and <a
 * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/using-backups.html#copy-backups">Copying backups</a> in the
 * <i>Amazon FSx for OpenZFS User
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
 * Creates a backup of an existing Amazon FSx for Windows File Server file system, Amazon FSx for Lustre file system,
 * Amazon FSx for NetApp ONTAP volume, or Amazon FSx for OpenZFS file system. We recommend creating regular backups so that
 * you can restore a file system or volume from a backup if an issue arises with the original file system or
 *
 * volume>
 *
 * For Amazon FSx for Lustre file systems, you can create a backup only for file systems that have the following
 *
 * configuration> <ul> <li>
 *
 * A Persistent deployment
 *
 * typ> </li> <li>
 *
 * Are <i>not</i> linked to a data
 *
 * repositor> </li> </ul>
 *
 * For more information about backups, see the
 *
 * following> <ul> <li>
 *
 * For Amazon FSx for Lustre, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working with FSx for Lustre
 *
 * backups</a>> </li> <li>
 *
 * For Amazon FSx for Windows, see <a href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html">Working
 * with FSx for Windows
 *
 * backups</a>> </li> <li>
 *
 * For Amazon FSx for NetApp ONTAP, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/using-backups.html">Working with FSx for NetApp ONTAP
 *
 * backups</a>> </li> <li>
 *
 * For Amazon FSx for OpenZFS, see <a href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/using-backups.html">Working
 * with FSx for OpenZFS
 *
 * backups</a>> </li> </ul>
 *
 * If a backup with the specified client request token exists and the parameters match, this operation returns the
 * description of the existing backup. If a backup with the specified client request token exists and the parameters don't
 * match, this operation returns <code>IncompatibleParameterError</code>. If a backup with the specified client request
 * token doesn't exist, <code>CreateBackup</code> does the following:
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
 * can check the backup creation status by calling the <a
 * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeBackups.html">DescribeBackups</a> operation, which
 * returns the backup state along with other
 */
CreateBackupResponse * FSxClient::createBackup(const CreateBackupRequest &request)
{
    return qobject_cast<CreateBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateDataRepositoryAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon FSx for Lustre data repository association (DRA). A data repository association is a link between a
 * directory on the file system and an Amazon S3 bucket or prefix. You can have a maximum of 8 data repository associations
 * on a file system. Data repository associations are supported only for file systems with the <code>Persistent_2</code>
 * deployment
 *
 * type>
 *
 * Each data repository association must have a unique Amazon FSx file system directory and a unique S3 bucket or prefix
 * associated with it. You can configure a data repository association for automatic import only, for automatic export
 * only, or for both. To learn more about linking a data repository to your file system, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-dra-linked-data-repo.html">Linking your file system to
 * an S3
 */
CreateDataRepositoryAssociationResponse * FSxClient::createDataRepositoryAssociation(const CreateDataRepositoryAssociationRequest &request)
{
    return qobject_cast<CreateDataRepositoryAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateDataRepositoryTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon FSx for Lustre data repository task. You use data repository tasks to perform bulk operations between
 * your Amazon FSx file system and its linked data repositories. An example of a data repository task is exporting any data
 * and metadata changes, including POSIX metadata, to files, directories, and symbolic links (symlinks) from your FSx file
 * system to a linked data repository. A <code>CreateDataRepositoryTask</code> operation will fail if a data repository is
 * not linked to the FSx file system. To learn more about data repository tasks, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-repository-tasks.html">Data Repository Tasks</a>. To learn
 * more about linking a data repository to your file system, see <a
 * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-dra-linked-data-repo.html">Linking your file system to
 * an S3
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
 * Creates a new, empty Amazon FSx file system. You can create the following supported Amazon FSx file systems using the
 * <code>CreateFileSystem</code> API
 *
 * operation> <ul> <li>
 *
 * Amazon FSx for
 *
 * Lustr> </li> <li>
 *
 * Amazon FSx for NetApp
 *
 * ONTA> </li> <li>
 *
 * Amazon FSx for
 *
 * OpenZF> </li> <li>
 *
 * Amazon FSx for Windows File
 *
 * Serve> </li> </ul>
 *
 * This operation requires a client request token in the request that Amazon FSx uses to ensure idempotent creation. This
 * means that calling the operation multiple times with the same client request token has no effect. By using the
 * idempotent operation, you can retry a <code>CreateFileSystem</code> operation without the risk of creating an extra file
 * system. This approach can be useful when an initial call fails in a way that makes it unclear whether a file system was
 * created. Examples are if a transport level timeout occurred, or your connection was reset. If you use the same client
 * request token and the initial call created a file system, the client receives success as long as the parameters are the
 *
 * same>
 *
 * If a file system with the specified client request token exists and the parameters match, <code>CreateFileSystem</code>
 * returns the description of the existing file system. If a file system with the specified client request token exists and
 * the parameters don't match, this call returns <code>IncompatibleParameterError</code>. If a file system with the
 * specified client request token doesn't exist, <code>CreateFileSystem</code> does the following:
 *
 * </p <ul> <li>
 *
 * Creates a new, empty Amazon FSx file system with an assigned ID, and an initial lifecycle state of
 *
 * <code>CREATING</code>> </li> <li>
 *
 * Returns the description of the file system in JSON
 *
 * format> </li> </ul>
 *
 * This operation requires a client request token in the request that Amazon FSx uses to ensure idempotent creation. This
 * means that calling the operation multiple times with the same client request token has no effect. By using the
 * idempotent operation, you can retry a <code>CreateFileSystem</code> operation without the risk of creating an extra file
 * system. This approach can be useful when an initial call fails in a way that makes it unclear whether a file system was
 * created. Examples are if a transport-level timeout occurred, or your connection was reset. If you use the same client
 * request token and the initial call created a file system, the client receives a success message as long as the
 * parameters are the
 *
 * same> <note>
 *
 * The <code>CreateFileSystem</code> call returns while the file system's lifecycle state is still <code>CREATING</code>.
 * You can check the file-system creation status by calling the <a
 * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileSystems.html">DescribeFileSystems</a>
 * operation, which returns the file system state along with other
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
 * Creates a new Amazon FSx for Lustre, Amazon FSx for Windows File Server, or Amazon FSx for OpenZFS file system from an
 * existing Amazon FSx
 *
 * backup>
 *
 * If a file system with the specified client request token exists and the parameters match, this operation returns the
 * description of the file system. If a file system with the specified client request token exists but the parameters don't
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
 * Parameters like the Active Directory, default share name, automatic backup, and backup settings default to the
 * parameters of the file system that was backed up, unless overridden. You can explicitly supply other
 *
 * settings>
 *
 * By using the idempotent operation, you can retry a <code>CreateFileSystemFromBackup</code> call without the risk of
 * creating an extra file system. This approach can be useful when an initial call fails in a way that makes it unclear
 * whether a file system was created. Examples are if a transport level timeout occurred, or your connection was reset. If
 * you use the same client request token and the initial call created a file system, the client receives a success message
 * as long as the parameters are the
 *
 * same> <note>
 *
 * The <code>CreateFileSystemFromBackup</code> call returns while the file system's lifecycle state is still
 * <code>CREATING</code>. You can check the file-system creation status by calling the <a
 * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileSystems.html"> DescribeFileSystems</a>
 * operation, which returns the file system state along with other
 */
CreateFileSystemFromBackupResponse * FSxClient::createFileSystemFromBackup(const CreateFileSystemFromBackupRequest &request)
{
    return qobject_cast<CreateFileSystemFromBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of an existing Amazon FSx for OpenZFS volume. With snapshots, you can easily undo file changes and
 * compare file versions by restoring the volume to a previous
 *
 * version>
 *
 * If a snapshot with the specified client request token exists, and the parameters match, this operation returns the
 * description of the existing snapshot. If a snapshot with the specified client request token exists, and the parameters
 * don't match, this operation returns <code>IncompatibleParameterError</code>. If a snapshot with the specified client
 * request token doesn't exist, <code>CreateSnapshot</code> does the
 *
 * following> <ul> <li>
 *
 * Creates a new OpenZFS snapshot with an assigned ID, and an initial lifecycle state of
 *
 * <code>CREATING</code>> </li> <li>
 *
 * Returns the description of the
 *
 * snapshot> </li> </ul>
 *
 * By using the idempotent operation, you can retry a <code>CreateSnapshot</code> operation without the risk of creating an
 * extra snapshot. This approach can be useful when an initial call fails in a way that makes it unclear whether a snapshot
 * was created. If you use the same client request token and the initial call created a snapshot, the operation returns a
 * successful result because all the parameters are the
 *
 * same>
 *
 * The <code>CreateSnapshot</code> operation returns while the snapshot's lifecycle state is still <code>CREATING</code>.
 * You can check the snapshot creation status by calling the <a
 * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeSnapshots.html">DescribeSnapshots</a> operation,
 * which returns the snapshot state along with other
 */
CreateSnapshotResponse * FSxClient::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateStorageVirtualMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a storage virtual machine (SVM) for an Amazon FSx for ONTAP file
 */
CreateStorageVirtualMachineResponse * FSxClient::createStorageVirtualMachine(const CreateStorageVirtualMachineRequest &request)
{
    return qobject_cast<CreateStorageVirtualMachineResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an FSx for ONTAP or Amazon FSx for OpenZFS storage
 */
CreateVolumeResponse * FSxClient::createVolume(const CreateVolumeRequest &request)
{
    return qobject_cast<CreateVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * CreateVolumeFromBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon FSx for NetApp ONTAP volume from an existing Amazon FSx volume
 */
CreateVolumeFromBackupResponse * FSxClient::createVolumeFromBackup(const CreateVolumeFromBackupRequest &request)
{
    return qobject_cast<CreateVolumeFromBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DeleteBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon FSx backup. After deletion, the backup no longer exists, and its data is
 *
 * gone>
 *
 * The <code>DeleteBackup</code> call returns instantly. The backup won't show up in later <code>DescribeBackups</code>
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
 * DeleteDataRepositoryAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a data repository association on an Amazon FSx for Lustre file system. Deleting the data repository association
 * unlinks the file system from the Amazon S3 bucket. When deleting a data repository association, you have the option of
 * deleting the data in the file system that corresponds to the data repository association. Data repository associations
 * are supported only for file systems with the <code>Persistent_2</code> deployment
 */
DeleteDataRepositoryAssociationResponse * FSxClient::deleteDataRepositoryAssociation(const DeleteDataRepositoryAssociationRequest &request)
{
    return qobject_cast<DeleteDataRepositoryAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DeleteFileSystemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a file system. After deletion, the file system no longer exists, and its data is gone. Any existing automatic
 * backups and snapshots are also
 *
 * deleted>
 *
 * To delete an Amazon FSx for NetApp ONTAP file system, first delete all the volumes and storage virtual machines (SVMs)
 * on the file system. Then provide a <code>FileSystemId</code> value to the <code>DeleFileSystem</code>
 *
 * operation>
 *
 * By default, when you delete an Amazon FSx for Windows File Server file system, a final backup is created upon deletion.
 * This final backup isn't subject to the file system's retention policy, and must be manually
 *
 * deleted>
 *
 * The <code>DeleteFileSystem</code> operation returns while the file system has the <code>DELETING</code> status. You can
 * check the file system deletion status by calling the <a
 * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileSystems.html">DescribeFileSystems</a>
 * operation, which returns a list of file systems in your account. If you pass the file system ID for a deleted file
 * system, the <code>DescribeFileSystems</code> operation returns a <code>FileSystemNotFound</code>
 *
 * error> <note>
 *
 * If a data repository task is in a <code>PENDING</code> or <code>EXECUTING</code> state, deleting an Amazon FSx for
 * Lustre file system will fail with an HTTP status code 400 (Bad
 *
 * Request)> </note> <b>
 *
 * The data in a deleted file system is also deleted and can't be recovered by any
 */
DeleteFileSystemResponse * FSxClient::deleteFileSystem(const DeleteFileSystemRequest &request)
{
    return qobject_cast<DeleteFileSystemResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DeleteSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon FSx for OpenZFS snapshot. After deletion, the snapshot no longer exists, and its data is gone.
 * Deleting a snapshot doesn't affect snapshots stored in a file system backup.
 *
 * </p
 *
 * The <code>DeleteSnapshot</code> operation returns instantly. The snapshot appears with the lifecycle status of
 * <code>DELETING</code> until the deletion is
 */
DeleteSnapshotResponse * FSxClient::deleteSnapshot(const DeleteSnapshotRequest &request)
{
    return qobject_cast<DeleteSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DeleteStorageVirtualMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amazon FSx for ONTAP storage virtual machine (SVM). Prior to deleting an SVM, you must delete all
 * non-root volumes in the SVM, otherwise the operation will
 */
DeleteStorageVirtualMachineResponse * FSxClient::deleteStorageVirtualMachine(const DeleteStorageVirtualMachineRequest &request)
{
    return qobject_cast<DeleteStorageVirtualMachineResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DeleteVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon FSx for NetApp ONTAP or Amazon FSx for OpenZFS
 */
DeleteVolumeResponse * FSxClient::deleteVolume(const DeleteVolumeRequest &request)
{
    return qobject_cast<DeleteVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeBackupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of a specific Amazon FSx backup, if a <code>BackupIds</code> value is provided for that backup.
 * Otherwise, it returns all backups owned by your Amazon Web Services account in the Amazon Web Services Region of the
 * endpoint that you're
 *
 * calling>
 *
 * When retrieving all backups, you can optionally specify the <code>MaxResults</code> parameter to limit the number of
 * backups in a response. If more backups remain, Amazon FSx returns a <code>NextToken</code> value in the response. In
 * this case, send a later request with the <code>NextToken</code> request parameter set to the value of the
 * <code>NextToken</code> value from the last
 *
 * response>
 *
 * This operation is used in an iterative process to retrieve a list of your backups. <code>DescribeBackups</code> is
 * called first without a <code>NextToken</code> value. Then the operation continues to be called with the
 * <code>NextToken</code> parameter set to the value of the last <code>NextToken</code> value until a response has no
 * <code>NextToken</code>
 *
 * value>
 *
 * When using this operation, keep the following in
 *
 * mind> <ul> <li>
 *
 * The operation might return fewer than the <code>MaxResults</code> value of backup descriptions while still including a
 * <code>NextToken</code>
 *
 * value> </li> <li>
 *
 * The order of the backups returned in the response of one <code>DescribeBackups</code> call and the order of the backups
 * returned across the responses of a multi-call iteration is
 */
DescribeBackupsResponse * FSxClient::describeBackups(const DescribeBackupsRequest &request)
{
    return qobject_cast<DescribeBackupsResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeDataRepositoryAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of specific Amazon FSx for Lustre data repository associations, if one or more
 * <code>AssociationIds</code> values are provided in the request, or if filters are used in the request. Data repository
 * associations are supported only for file systems with the <code>Persistent_2</code> deployment
 *
 * type>
 *
 * You can use filters to narrow the response to include just data repository associations for specific file systems (use
 * the <code>file-system-id</code> filter with the ID of the file system) or data repository associations for a specific
 * repository type (use the <code>data-repository-type</code> filter with a value of <code>S3</code>). If you don't use
 * filters, the response returns all data repository associations owned by your Amazon Web Services account in the Amazon
 * Web Services Region of the endpoint that you're
 *
 * calling>
 *
 * When retrieving all data repository associations, you can paginate the response by using the optional
 * <code>MaxResults</code> parameter to limit the number of data repository associations returned in a response. If more
 * data repository associations remain, Amazon FSx returns a <code>NextToken</code> value in the response. In this case,
 * send a later request with the <code>NextToken</code> request parameter set to the value of <code>NextToken</code> from
 * the last
 */
DescribeDataRepositoryAssociationsResponse * FSxClient::describeDataRepositoryAssociations(const DescribeDataRepositoryAssociationsRequest &request)
{
    return qobject_cast<DescribeDataRepositoryAssociationsResponse *>(send(request));
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
 * repository tasks owned by your Amazon Web Services account in the Amazon Web Services Region of the endpoint that you're
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
 * file system. Otherwise, it returns descriptions of all file systems owned by your Amazon Web Services account in the
 * Amazon Web Services Region of the endpoint that you're
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
 * This operation is used in an iterative process to retrieve a list of your file system descriptions.
 * <code>DescribeFileSystems</code> is called first without a <code>NextToken</code>value. Then the operation continues to
 * be called with the <code>NextToken</code> parameter set to the value of the last <code>NextToken</code> value until a
 * response has no
 *
 * <code>NextToken</code>>
 *
 * When using this operation, keep the following in
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
 * DescribeSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of specific Amazon FSx for OpenZFS snapshots, if a <code>SnapshotIds</code> value is provided.
 * Otherwise, this operation returns all snapshots owned by your Amazon Web Services account in the Amazon Web Services
 * Region of the endpoint that you're
 *
 * calling>
 *
 * When retrieving all snapshots, you can optionally specify the <code>MaxResults</code> parameter to limit the number of
 * snapshots in a response. If more backups remain, Amazon FSx returns a <code>NextToken</code> value in the response. In
 * this case, send a later request with the <code>NextToken</code> request parameter set to the value of
 * <code>NextToken</code> from the last response.
 *
 * </p
 *
 * Use this operation in an iterative process to retrieve a list of your snapshots. <code>DescribeSnapshots</code> is
 * called first without a <code>NextToken</code> value. Then the operation continues to be called with the
 * <code>NextToken</code> parameter set to the value of the last <code>NextToken</code> value until a response has no
 * <code>NextToken</code>
 *
 * value>
 *
 * When using this operation, keep the following in
 *
 * mind> <ul> <li>
 *
 * The operation might return fewer than the <code>MaxResults</code> value of snapshot descriptions while still including a
 * <code>NextToken</code>
 *
 * value> </li> <li>
 *
 * The order of snapshots returned in the response of one <code>DescribeSnapshots</code> call and the order of backups
 * returned across the responses of a multi-call iteration is unspecified.
 */
DescribeSnapshotsResponse * FSxClient::describeSnapshots(const DescribeSnapshotsRequest &request)
{
    return qobject_cast<DescribeSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeStorageVirtualMachinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more Amazon FSx for NetApp ONTAP storage virtual machines
 */
DescribeStorageVirtualMachinesResponse * FSxClient::describeStorageVirtualMachines(const DescribeStorageVirtualMachinesRequest &request)
{
    return qobject_cast<DescribeStorageVirtualMachinesResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * DescribeVolumesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more Amazon FSx for NetApp ONTAP or Amazon FSx for OpenZFS
 */
DescribeVolumesResponse * FSxClient::describeVolumes(const DescribeVolumesRequest &request)
{
    return qobject_cast<DescribeVolumesResponse *>(send(request));
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
 * Lists tags for Amazon FSx
 *
 * resources>
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
 * ReleaseFileSystemNfsV3LocksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Releases the file system lock from an Amazon FSx for OpenZFS file
 */
ReleaseFileSystemNfsV3LocksResponse * FSxClient::releaseFileSystemNfsV3Locks(const ReleaseFileSystemNfsV3LocksRequest &request)
{
    return qobject_cast<ReleaseFileSystemNfsV3LocksResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * RestoreVolumeFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an Amazon FSx for OpenZFS volume to the state saved by the specified snapshot.
 */
RestoreVolumeFromSnapshotResponse * FSxClient::restoreVolumeFromSnapshot(const RestoreVolumeFromSnapshotRequest &request)
{
    return qobject_cast<RestoreVolumeFromSnapshotResponse *>(send(request));
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
 * UpdateDataRepositoryAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an existing data repository association on an Amazon FSx for Lustre file system. Data
 * repository associations are supported only for file systems with the <code>Persistent_2</code> deployment
 */
UpdateDataRepositoryAssociationResponse * FSxClient::updateDataRepositoryAssociation(const UpdateDataRepositoryAssociationRequest &request)
{
    return qobject_cast<UpdateDataRepositoryAssociationResponse *>(send(request));
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
 * <code>AuditLogConfiguration</code>
 *
 * </p </li> <li>
 *
 * <code>AutomaticBackupRetentionDays</code>
 *
 * </p </li> <li>
 *
 * <code>DailyAutomaticBackupStartTime</code>
 *
 * </p </li> <li>
 *
 * <code>SelfManagedActiveDirectoryConfiguration</code>
 *
 * </p </li> <li>
 *
 * <code>StorageCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>ThroughputCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>WeeklyMaintenanceStartTime</code>
 *
 * </p </li> </ul>
 *
 * For Amazon FSx for Lustre file systems, you can update the following
 *
 * properties> <ul> <li>
 *
 * <code>AutoImportPolicy</code>
 *
 * </p </li> <li>
 *
 * <code>AutomaticBackupRetentionDays</code>
 *
 * </p </li> <li>
 *
 * <code>DailyAutomaticBackupStartTime</code>
 *
 * </p </li> <li>
 *
 * <code>DataCompressionType</code>
 *
 * </p </li> <li>
 *
 * <code>LustreRootSquashConfiguration</code>
 *
 * </p </li> <li>
 *
 * <code>StorageCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>WeeklyMaintenanceStartTime</code>
 *
 * </p </li> </ul>
 *
 * For Amazon FSx for NetApp ONTAP file systems, you can update the following
 *
 * properties> <ul> <li>
 *
 * <code>AutomaticBackupRetentionDays</code>
 *
 * </p </li> <li>
 *
 * <code>DailyAutomaticBackupStartTime</code>
 *
 * </p </li> <li>
 *
 * <code>DiskIopsConfiguration</code>
 *
 * </p </li> <li>
 *
 * <code>FsxAdminPassword</code>
 *
 * </p </li> <li>
 *
 * <code>StorageCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>ThroughputCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>WeeklyMaintenanceStartTime</code>
 *
 * </p </li> </ul>
 *
 * For the Amazon FSx for OpenZFS file systems, you can update the following
 *
 * properties> <ul> <li>
 *
 * <code>AutomaticBackupRetentionDays</code>
 *
 * </p </li> <li>
 *
 * <code>CopyTagsToBackups</code>
 *
 * </p </li> <li>
 *
 * <code>CopyTagsToVolumes</code>
 *
 * </p </li> <li>
 *
 * <code>DailyAutomaticBackupStartTime</code>
 *
 * </p </li> <li>
 *
 * <code>ThroughputCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>WeeklyMaintenanceStartTime</code>
 */
UpdateFileSystemResponse * FSxClient::updateFileSystem(const UpdateFileSystemRequest &request)
{
    return qobject_cast<UpdateFileSystemResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * UpdateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name of an Amazon FSx for OpenZFS
 */
UpdateSnapshotResponse * FSxClient::updateSnapshot(const UpdateSnapshotRequest &request)
{
    return qobject_cast<UpdateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * UpdateStorageVirtualMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon FSx for ONTAP storage virtual machine
 */
UpdateStorageVirtualMachineResponse * FSxClient::updateStorageVirtualMachine(const UpdateStorageVirtualMachineRequest &request)
{
    return qobject_cast<UpdateStorageVirtualMachineResponse *>(send(request));
}

/*!
 * Sends \a request to the FSxClient service, and returns a pointer to an
 * UpdateVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an Amazon FSx for NetApp ONTAP or Amazon FSx for OpenZFS
 */
UpdateVolumeResponse * FSxClient::updateVolume(const UpdateVolumeRequest &request)
{
    return qobject_cast<UpdateVolumeResponse *>(send(request));
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
