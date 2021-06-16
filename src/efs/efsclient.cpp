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

#include "efsclient.h"
#include "efsclient_p.h"

#include "core/awssignaturev4.h"
#include "createaccesspointrequest.h"
#include "createaccesspointresponse.h"
#include "createfilesystemrequest.h"
#include "createfilesystemresponse.h"
#include "createmounttargetrequest.h"
#include "createmounttargetresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "deleteaccesspointrequest.h"
#include "deleteaccesspointresponse.h"
#include "deletefilesystemrequest.h"
#include "deletefilesystemresponse.h"
#include "deletefilesystempolicyrequest.h"
#include "deletefilesystempolicyresponse.h"
#include "deletemounttargetrequest.h"
#include "deletemounttargetresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describeaccesspointsrequest.h"
#include "describeaccesspointsresponse.h"
#include "describeaccountpreferencesrequest.h"
#include "describeaccountpreferencesresponse.h"
#include "describebackuppolicyrequest.h"
#include "describebackuppolicyresponse.h"
#include "describefilesystempolicyrequest.h"
#include "describefilesystempolicyresponse.h"
#include "describefilesystemsrequest.h"
#include "describefilesystemsresponse.h"
#include "describelifecycleconfigurationrequest.h"
#include "describelifecycleconfigurationresponse.h"
#include "describemounttargetsecuritygroupsrequest.h"
#include "describemounttargetsecuritygroupsresponse.h"
#include "describemounttargetsrequest.h"
#include "describemounttargetsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifymounttargetsecuritygroupsrequest.h"
#include "modifymounttargetsecuritygroupsresponse.h"
#include "putaccountpreferencesrequest.h"
#include "putaccountpreferencesresponse.h"
#include "putbackuppolicyrequest.h"
#include "putbackuppolicyresponse.h"
#include "putfilesystempolicyrequest.h"
#include "putfilesystempolicyresponse.h"
#include "putlifecycleconfigurationrequest.h"
#include "putlifecycleconfigurationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatefilesystemrequest.h"
#include "updatefilesystemresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::EFS
 * \brief Contains classess for accessing Amazon Elastic File System (EFS).
 *
 * \inmodule QtAwsEfs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::EfsClient
 * \brief The EfsClient class provides access to the Amazon Elastic File System (EFS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
 */

/*!
 * \brief Constructs a EfsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EfsClient::EfsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EfsClientPrivate(this), parent)
{
    Q_D(EfsClient);
    d->apiVersion = QStringLiteral("2015-02-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("elasticfilesystem");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elastic File System");
    d->serviceName = QStringLiteral("elasticfilesystem");
}

/*!
 * \overload EfsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EfsClient::EfsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EfsClientPrivate(this), parent)
{
    Q_D(EfsClient);
    d->apiVersion = QStringLiteral("2015-02-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("elasticfilesystem");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elastic File System");
    d->serviceName = QStringLiteral("elasticfilesystem");
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * CreateAccessPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an EFS access point. An access point is an application-specific view into an EFS file system that applies an
 * operating system user and group, and a file system path, to any file system request made through the access point. The
 * operating system user and group override any identity information provided by the NFS client. The file system path is
 * exposed as the access point's root directory. Applications using the access point can only access data in its own
 * directory and below. To learn more, see <a
 * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Mounting a file system using EFS access
 *
 * points</a>>
 *
 * This operation requires permissions for the <code>elasticfilesystem:CreateAccessPoint</code>
 */
CreateAccessPointResponse * EfsClient::createAccessPoint(const CreateAccessPointRequest &request)
{
    return qobject_cast<CreateAccessPointResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * CreateFileSystemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new, empty file system. The operation requires a creation token in the request that Amazon EFS uses to ensure
 * idempotent creation (calling the operation with same creation token has no effect). If a file system does not currently
 * exist that is owned by the caller's AWS account with the specified creation token, this operation does the
 *
 * following> <ul> <li>
 *
 * Creates a new, empty file system. The file system will have an Amazon EFS assigned ID, and an initial lifecycle state
 *
 * <code>creating</code>> </li> <li>
 *
 * Returns with the description of the created file
 *
 * system> </li> </ul>
 *
 * Otherwise, this operation returns a <code>FileSystemAlreadyExists</code> error with the ID of the existing file
 *
 * system> <note>
 *
 * For basic use cases, you can use a randomly generated UUID for the creation
 *
 * token> </note>
 *
 * The idempotent operation allows you to retry a <code>CreateFileSystem</code> call without risk of creating an extra file
 * system. This can happen when an initial call fails in a way that leaves it uncertain whether or not a file system was
 * actually created. An example might be that a transport level timeout occurred or your connection was reset. As long as
 * you use the same creation token, if the initial call had succeeded in creating a file system, the client can learn of
 * its existence from the <code>FileSystemAlreadyExists</code>
 *
 * error>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/efs/latest/ug/creating-using-create-fs.html#creating-using-create-fs-part1">Creating a
 * file system</a> in the <i>Amazon EFS User
 *
 * Guide</i>> <note>
 *
 * The <code>CreateFileSystem</code> call returns while the file system's lifecycle state is still <code>creating</code>.
 * You can check the file system creation status by calling the <a>DescribeFileSystems</a> operation, which among other
 * things returns the file system
 *
 * state> </note>
 *
 * This operation accepts an optional <code>PerformanceMode</code> parameter that you choose for your file system. We
 * recommend <code>generalPurpose</code> performance mode for most file systems. File systems using the <code>maxIO</code>
 * performance mode can scale to higher levels of aggregate throughput and operations per second with a tradeoff of
 * slightly higher latencies for most file operations. The performance mode can't be changed after the file system has been
 * created. For more information, see <a
 * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#performancemodes.html">Amazon EFS performance
 *
 * modes</a>>
 *
 * You can set the throughput mode for the file system using the <code>ThroughputMode</code>
 *
 * parameter>
 *
 * After the file system is fully created, Amazon EFS sets its lifecycle state to <code>available</code>, at which point
 * you can create one or more mount targets for the file system in your VPC. For more information, see
 * <a>CreateMountTarget</a>. You mount your Amazon EFS file system on an EC2 instances in your VPC by using the mount
 * target. For more information, see <a href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS: How
 * it Works</a>.
 *
 * </p
 *
 * This operation requires permissions for the <code>elasticfilesystem:CreateFileSystem</code> action.
 */
CreateFileSystemResponse * EfsClient::createFileSystem(const CreateFileSystemRequest &request)
{
    return qobject_cast<CreateFileSystemResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * CreateMountTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a mount target for a file system. You can then mount the file system on EC2 instances by using the mount
 *
 * target>
 *
 * You can create one mount target in each Availability Zone in your VPC. All EC2 instances in a VPC within a given
 * Availability Zone share a single mount target for a given file system. If you have multiple subnets in an Availability
 * Zone, you create a mount target in one of the subnets. EC2 instances do not need to be in the same subnet as the mount
 * target in order to access their file
 *
 * system>
 *
 * You can create only one mount target for an EFS file system using One Zone storage classes. You must create that mount
 * target in the same Availability Zone in which the file system is located. Use the <code>AvailabilityZoneName</code> and
 * <code>AvailabiltyZoneId</code> properties in the <a>DescribeFileSystems</a> response object to get this information. Use
 * the <code>subnetId</code> associated with the file system's Availability Zone when creating the mount
 *
 * target>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS: How it
 * Works</a>.
 *
 * </p
 *
 * To create a mount target for a file system, the file system's lifecycle state must be <code>available</code>. For more
 * information, see
 *
 * <a>DescribeFileSystems</a>>
 *
 * In the request, provide the
 *
 * following> <ul> <li>
 *
 * The file system ID for which you are creating the mount
 *
 * target> </li> <li>
 *
 * A subnet ID, which determines the
 *
 * following> <ul> <li>
 *
 * The VPC in which Amazon EFS creates the mount
 *
 * targe> </li> <li>
 *
 * The Availability Zone in which Amazon EFS creates the mount
 *
 * targe> </li> <li>
 *
 * The IP address range from which Amazon EFS selects the IP address of the mount target (if you don't specify an IP
 * address in the
 *
 * request> </li> </ul> </li> </ul>
 *
 * After creating the mount target, Amazon EFS returns a response that includes, a <code>MountTargetId</code> and an
 * <code>IpAddress</code>. You use this IP address when mounting the file system in an EC2 instance. You can also use the
 * mount target's DNS name when mounting the file system. The EC2 instance on which you mount the file system by using the
 * mount target can resolve the mount target's DNS name to its IP address. For more information, see <a
 * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html#how-it-works-implementation">How it Works:
 * Implementation Overview</a>.
 *
 * </p
 *
 * Note that you can create mount targets for a file system in only one VPC, and there can be only one mount target per
 * Availability Zone. That is, if the file system already has one or more mount targets created for it, the subnet
 * specified in the request to add another mount target must meet the following
 *
 * requirements> <ul> <li>
 *
 * Must belong to the same VPC as the subnets of the existing mount
 *
 * target> </li> <li>
 *
 * Must not be in the same Availability Zone as any of the subnets of the existing mount
 *
 * target> </li> </ul>
 *
 * If the request satisfies the requirements, Amazon EFS does the
 *
 * following> <ul> <li>
 *
 * Creates a new mount target in the specified
 *
 * subnet> </li> <li>
 *
 * Also creates a new network interface in the subnet as
 *
 * follows> <ul> <li>
 *
 * If the request provides an <code>IpAddress</code>, Amazon EFS assigns that IP address to the network interface.
 * Otherwise, Amazon EFS assigns a free address in the subnet (in the same way that the Amazon EC2
 * <code>CreateNetworkInterface</code> call does when a request does not specify a primary private IP
 *
 * address)> </li> <li>
 *
 * If the request provides <code>SecurityGroups</code>, this network interface is associated with those security groups.
 * Otherwise, it belongs to the default security group for the subnet's
 *
 * VPC> </li> <li>
 *
 * Assigns the description <code>Mount target <i>fsmt-id</i> for file system <i>fs-id</i> </code> where <code>
 * <i>fsmt-id</i> </code> is the mount target ID, and <code> <i>fs-id</i> </code> is the
 *
 * <code>FileSystemId</code>> </li> <li>
 *
 * Sets the <code>requesterManaged</code> property of the network interface to <code>true</code>, and the
 * <code>requesterId</code> value to
 *
 * <code>EFS</code>> </li> </ul>
 *
 * Each Amazon EFS mount target has one corresponding requester-managed EC2 network interface. After the network interface
 * is created, Amazon EFS sets the <code>NetworkInterfaceId</code> field in the mount target's description to the network
 * interface ID, and the <code>IpAddress</code> field to its address. If network interface creation fails, the entire
 * <code>CreateMountTarget</code> operation
 *
 * fails> </li> </ul> <note>
 *
 * The <code>CreateMountTarget</code> call returns only after creating the network interface, but while the mount target
 * state is still <code>creating</code>, you can check the mount target creation status by calling the
 * <a>DescribeMountTargets</a> operation, which among other things returns the mount target
 *
 * state> </note>
 *
 * We recommend that you create a mount target in each of the Availability Zones. There are cost considerations for using a
 * file system in an Availability Zone through a mount target created in another Availability Zone. For more information,
 * see <a href="http://aws.amazon.com/efs/">Amazon EFS</a>. In addition, by always using a mount target local to the
 * instance's Availability Zone, you eliminate a partial failure scenario. If the Availability Zone in which your mount
 * target is created goes down, then you can't access your file system through that mount target.
 *
 * </p
 *
 * This operation requires permissions for the following action on the file
 *
 * system> <ul> <li>
 *
 * <code>elasticfilesystem:CreateMountTarget</code>
 *
 * </p </li> </ul>
 *
 * This operation also requires permissions for the following Amazon EC2
 *
 * actions> <ul> <li>
 *
 * <code>ec2:DescribeSubnets</code>
 *
 * </p </li> <li>
 *
 * <code>ec2:DescribeNetworkInterfaces</code>
 *
 * </p </li> <li>
 *
 * <code>ec2:CreateNetworkInterface</code>
 */
CreateMountTargetResponse * EfsClient::createMountTarget(const CreateMountTargetRequest &request)
{
    return qobject_cast<CreateMountTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * DEPRECATED - CreateTags is deprecated and not maintained. Please use the API action to create tags for EFS
 *
 * resources> </note>
 *
 * Creates or overwrites tags associated with a file system. Each tag is a key-value pair. If a tag key specified in the
 * request already exists on the file system, this operation overwrites its value with the value provided in the request.
 * If you add the <code>Name</code> tag to your file system, Amazon EFS returns it in the response to the
 * <a>DescribeFileSystems</a> operation.
 *
 * </p
 *
 * This operation requires permission for the <code>elasticfilesystem:CreateTags</code>
 */
CreateTagsResponse * EfsClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DeleteAccessPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified access point. After deletion is complete, new clients can no longer connect to the access points.
 * Clients connected to the access point at the time of deletion will continue to function until they terminate their
 *
 * connection>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DeleteAccessPoint</code>
 */
DeleteAccessPointResponse * EfsClient::deleteAccessPoint(const DeleteAccessPointRequest &request)
{
    return qobject_cast<DeleteAccessPointResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DeleteFileSystemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a file system, permanently severing access to its contents. Upon return, the file system no longer exists and
 * you can't access any contents of the deleted file
 *
 * system>
 *
 * You can't delete a file system that is in use. That is, if the file system has any mount targets, you must first delete
 * them. For more information, see <a>DescribeMountTargets</a> and <a>DeleteMountTarget</a>.
 *
 * </p <note>
 *
 * The <code>DeleteFileSystem</code> call returns while the file system state is still <code>deleting</code>. You can check
 * the file system deletion status by calling the <a>DescribeFileSystems</a> operation, which returns a list of file
 * systems in your account. If you pass file system ID or creation token for the deleted file system, the
 * <a>DescribeFileSystems</a> returns a <code>404 FileSystemNotFound</code>
 *
 * error> </note>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DeleteFileSystem</code>
 */
DeleteFileSystemResponse * EfsClient::deleteFileSystem(const DeleteFileSystemRequest &request)
{
    return qobject_cast<DeleteFileSystemResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DeleteFileSystemPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the <code>FileSystemPolicy</code> for the specified file system. The default <code>FileSystemPolicy</code> goes
 * into effect once the existing policy is deleted. For more information about the default file system policy, see <a
 * href="https://docs.aws.amazon.com/efs/latest/ug/res-based-policies-efs.html">Using Resource-based Policies with
 *
 * EFS</a>>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DeleteFileSystemPolicy</code>
 */
DeleteFileSystemPolicyResponse * EfsClient::deleteFileSystemPolicy(const DeleteFileSystemPolicyRequest &request)
{
    return qobject_cast<DeleteFileSystemPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DeleteMountTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified mount
 *
 * target>
 *
 * This operation forcibly breaks any mounts of the file system by using the mount target that is being deleted, which
 * might disrupt instances or applications using those mounts. To avoid applications getting cut off abruptly, you might
 * consider unmounting any mounts of the mount target, if feasible. The operation also deletes the associated network
 * interface. Uncommitted writes might be lost, but breaking a mount target using this operation does not corrupt the file
 * system itself. The file system you created remains. You can mount an EC2 instance in your VPC by using another mount
 *
 * target>
 *
 * This operation requires permissions for the following action on the file
 *
 * system> <ul> <li>
 *
 * <code>elasticfilesystem:DeleteMountTarget</code>
 *
 * </p </li> </ul> <note>
 *
 * The <code>DeleteMountTarget</code> call returns while the mount target state is still <code>deleting</code>. You can
 * check the mount target deletion by calling the <a>DescribeMountTargets</a> operation, which returns a list of mount
 * target descriptions for the given file system.
 *
 * </p </note>
 *
 * The operation also requires permissions for the following Amazon EC2 action on the mount target's network
 *
 * interface> <ul> <li>
 *
 * <code>ec2:DeleteNetworkInterface</code>
 */
DeleteMountTargetResponse * EfsClient::deleteMountTarget(const DeleteMountTargetRequest &request)
{
    return qobject_cast<DeleteMountTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * DEPRECATED - DeleteTags is deprecated and not maintained. Please use the API action to remove tags from EFS
 *
 * resources> </note>
 *
 * Deletes the specified tags from a file system. If the <code>DeleteTags</code> request includes a tag key that doesn't
 * exist, Amazon EFS ignores it and doesn't cause an error. For more information about tags and related restrictions, see
 * <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Tag Restrictions</a> in the
 * <i>AWS Billing and Cost Management User
 *
 * Guide</i>>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DeleteTags</code>
 */
DeleteTagsResponse * EfsClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeAccessPointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of a specific Amazon EFS access point if the <code>AccessPointId</code> is provided. If you
 * provide an EFS <code>FileSystemId</code>, it returns descriptions of all access points for that file system. You can
 * provide either an <code>AccessPointId</code> or a <code>FileSystemId</code> in the request, but not both.
 *
 * </p
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeAccessPoints</code>
 */
DescribeAccessPointsResponse * EfsClient::describeAccessPoints(const DescribeAccessPointsRequest &request)
{
    return qobject_cast<DescribeAccessPointsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeAccountPreferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeAccountPreferencesResponse * EfsClient::describeAccountPreferences(const DescribeAccountPreferencesRequest &request)
{
    return qobject_cast<DescribeAccountPreferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeBackupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the backup policy for the specified EFS file
 */
DescribeBackupPolicyResponse * EfsClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request)
{
    return qobject_cast<DescribeBackupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeFileSystemPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the <code>FileSystemPolicy</code> for the specified EFS file
 *
 * system>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeFileSystemPolicy</code>
 */
DescribeFileSystemPolicyResponse * EfsClient::describeFileSystemPolicy(const DescribeFileSystemPolicyRequest &request)
{
    return qobject_cast<DescribeFileSystemPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeFileSystemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of a specific Amazon EFS file system if either the file system <code>CreationToken</code> or the
 * <code>FileSystemId</code> is provided. Otherwise, it returns descriptions of all file systems owned by the caller's AWS
 * account in the AWS Region of the endpoint that you're
 *
 * calling>
 *
 * When retrieving all file system descriptions, you can optionally specify the <code>MaxItems</code> parameter to limit
 * the number of descriptions in a response. Currently, this number is automatically set to 10. If more file system
 * descriptions remain, Amazon EFS returns a <code>NextMarker</code>, an opaque token, in the response. In this case, you
 * should send a subsequent request with the <code>Marker</code> request parameter set to the value of
 * <code>NextMarker</code>.
 *
 * </p
 *
 * To retrieve a list of your file system descriptions, this operation is used in an iterative process, where
 * <code>DescribeFileSystems</code> is called first without the <code>Marker</code> and then the operation continues to
 * call it with the <code>Marker</code> parameter set to the value of the <code>NextMarker</code> from the previous
 * response until the response has no <code>NextMarker</code>.
 *
 * </p
 *
 * The order of file systems returned in the response of one <code>DescribeFileSystems</code> call and the order of file
 * systems returned across the responses of a multi-call iteration is unspecified.
 *
 * </p
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeFileSystems</code> action.
 */
DescribeFileSystemsResponse * EfsClient::describeFileSystems(const DescribeFileSystemsRequest &request)
{
    return qobject_cast<DescribeFileSystemsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current <code>LifecycleConfiguration</code> object for the specified Amazon EFS file system. EFS lifecycle
 * management uses the <code>LifecycleConfiguration</code> object to identify which files to move to the EFS Infrequent
 * Access (IA) storage class. For a file system without a <code>LifecycleConfiguration</code> object, the call returns an
 * empty array in the
 *
 * response>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeLifecycleConfiguration</code>
 */
DescribeLifecycleConfigurationResponse * EfsClient::describeLifecycleConfiguration(const DescribeLifecycleConfigurationRequest &request)
{
    return qobject_cast<DescribeLifecycleConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeMountTargetSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the security groups currently in effect for a mount target. This operation requires that the network interface
 * of the mount target has been created and the lifecycle state of the mount target is not
 *
 * <code>deleted</code>>
 *
 * This operation requires permissions for the following
 *
 * actions> <ul> <li>
 *
 * <code>elasticfilesystem:DescribeMountTargetSecurityGroups</code> action on the mount target's file system.
 *
 * </p </li> <li>
 *
 * <code>ec2:DescribeNetworkInterfaceAttribute</code> action on the mount target's network interface.
 */
DescribeMountTargetSecurityGroupsResponse * EfsClient::describeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest &request)
{
    return qobject_cast<DescribeMountTargetSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeMountTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the descriptions of all the current mount targets, or a specific mount target, for a file system. When
 * requesting all of the current mount targets, the order of mount targets returned in the response is
 *
 * unspecified>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeMountTargets</code> action, on either the
 * file system ID that you specify in <code>FileSystemId</code>, or on the file system of the mount target that you specify
 * in
 */
DescribeMountTargetsResponse * EfsClient::describeMountTargets(const DescribeMountTargetsRequest &request)
{
    return qobject_cast<DescribeMountTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * DEPRECATED - The DeleteTags action is deprecated and not maintained. Please use the API action to remove tags from EFS
 *
 * resources> </note>
 *
 * Returns the tags associated with a file system. The order of tags returned in the response of one
 * <code>DescribeTags</code> call and the order of tags returned across the responses of a multiple-call iteration (when
 * using pagination) is unspecified.
 *
 * </p
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeTags</code> action.
 */
DescribeTagsResponse * EfsClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags for a top-level EFS resource. You must provide the ID of the resource that you want to retrieve the tags
 *
 * for>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeAccessPoints</code>
 */
ListTagsForResourceResponse * EfsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * ModifyMountTargetSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the set of security groups in effect for a mount
 *
 * target>
 *
 * When you create a mount target, Amazon EFS also creates a new network interface. For more information, see
 * <a>CreateMountTarget</a>. This operation replaces the security groups in effect for the network interface associated
 * with a mount target, with the <code>SecurityGroups</code> provided in the request. This operation requires that the
 * network interface of the mount target has been created and the lifecycle state of the mount target is not
 * <code>deleted</code>.
 *
 * </p
 *
 * The operation requires permissions for the following
 *
 * actions> <ul> <li>
 *
 * <code>elasticfilesystem:ModifyMountTargetSecurityGroups</code> action on the mount target's file system.
 *
 * </p </li> <li>
 *
 * <code>ec2:ModifyNetworkInterfaceAttribute</code> action on the mount target's network interface.
 */
ModifyMountTargetSecurityGroupsResponse * EfsClient::modifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest &request)
{
    return qobject_cast<ModifyMountTargetSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * PutAccountPreferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutAccountPreferencesResponse * EfsClient::putAccountPreferences(const PutAccountPreferencesRequest &request)
{
    return qobject_cast<PutAccountPreferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * PutBackupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the file system's backup policy. Use this action to start or stop automatic backups of the file system.
 */
PutBackupPolicyResponse * EfsClient::putBackupPolicy(const PutBackupPolicyRequest &request)
{
    return qobject_cast<PutBackupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * PutFileSystemPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies an Amazon EFS <code>FileSystemPolicy</code> to an Amazon EFS file system. A file system policy is an IAM
 * resource-based policy and can contain multiple policy statements. A file system always has exactly one file system
 * policy, which can be the default policy or an explicit policy set or updated using this API operation. EFS file system
 * policies have a 20,000 character limit. When an explicit policy is set, it overrides the default policy. For more
 * information about the default file system policy, see <a
 * href="https://docs.aws.amazon.com/efs/latest/ug/iam-access-control-nfs-efs.html#default-filesystempolicy">Default EFS
 * File System Policy</a>.
 *
 * </p
 *
 * EFS file system policies have a 20,000 character
 *
 * limit>
 *
 * This operation requires permissions for the <code>elasticfilesystem:PutFileSystemPolicy</code>
 */
PutFileSystemPolicyResponse * EfsClient::putFileSystemPolicy(const PutFileSystemPolicyRequest &request)
{
    return qobject_cast<PutFileSystemPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * PutLifecycleConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables lifecycle management by creating a new <code>LifecycleConfiguration</code> object. A
 * <code>LifecycleConfiguration</code> object defines when files in an Amazon EFS file system are automatically
 * transitioned to the lower-cost EFS Infrequent Access (IA) storage class. A <code>LifecycleConfiguration</code> applies
 * to all files in a file
 *
 * system>
 *
 * Each Amazon EFS file system supports one lifecycle configuration, which applies to all files in the file system. If a
 * <code>LifecycleConfiguration</code> object already exists for the specified file system, a
 * <code>PutLifecycleConfiguration</code> call modifies the existing configuration. A
 * <code>PutLifecycleConfiguration</code> call with an empty <code>LifecyclePolicies</code> array in the request body
 * deletes any existing <code>LifecycleConfiguration</code> and disables lifecycle
 *
 * management>
 *
 * In the request, specify the following:
 *
 * </p <ul> <li>
 *
 * The ID for the file system for which you are enabling, disabling, or modifying lifecycle
 *
 * management> </li> <li>
 *
 * A <code>LifecyclePolicies</code> array of <code>LifecyclePolicy</code> objects that define when files are moved to the
 * IA storage class. The array can contain only one <code>LifecyclePolicy</code>
 *
 * item> </li> </ul>
 *
 * This operation requires permissions for the <code>elasticfilesystem:PutLifecycleConfiguration</code>
 *
 * operation>
 *
 * To apply a <code>LifecycleConfiguration</code> object to an encrypted file system, you need the same AWS Key Management
 * Service (AWS KMS) permissions as when you created the encrypted file system.
 */
PutLifecycleConfigurationResponse * EfsClient::putLifecycleConfiguration(const PutLifecycleConfigurationRequest &request)
{
    return qobject_cast<PutLifecycleConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a tag for an EFS resource. You can create tags for EFS file systems and access points using this API
 *
 * operation>
 *
 * This operation requires permissions for the <code>elasticfilesystem:TagResource</code>
 */
TagResourceResponse * EfsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from an EFS resource. You can remove tags from EFS file systems and access points using this API
 *
 * operation>
 *
 * This operation requires permissions for the <code>elasticfilesystem:UntagResource</code>
 */
UntagResourceResponse * EfsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EfsClient service, and returns a pointer to an
 * UpdateFileSystemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the throughput mode or the amount of provisioned throughput of an existing file
 */
UpdateFileSystemResponse * EfsClient::updateFileSystem(const UpdateFileSystemRequest &request)
{
    return qobject_cast<UpdateFileSystemResponse *>(send(request));
}

/*!
 * \class QtAws::EFS::EfsClientPrivate
 * \brief The EfsClientPrivate class provides private implementation for EfsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a EfsClientPrivate object with public implementation \a q.
 */
EfsClientPrivate::EfsClientPrivate(EfsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace EFS
} // namespace QtAws
