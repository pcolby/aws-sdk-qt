/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "efsclient.h"
#include "efsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace EFS {

/**
 * @class  EfsClient
 *
 * @brief  Client for Amazon Elastic File System (EFS)
 *
 * <fullname>Amazon Elastic File System</fullname>
 *
 * Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 * AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 * files, so your applications have the storage they need, when they need it. For more information, see the <a
 * href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 */

/**
 * @brief  Constructs a new EfsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
EfsClient::EfsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new EfsClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new EfsClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
EfsClient::EfsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new EfsClientPrivate(this), parent)
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

/**
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
 * error> <note>
 *
 * The <code>CreateFileSystem</code> call returns while the file system's lifecycle state is still <code>creating</code>.
 * You can check the file system creation status by calling the <a>DescribeFileSystems</a> operation, which among other
 * things returns the file system
 *
 * state> </note>
 *
 * This operation also takes an optional <code>PerformanceMode</code> parameter that you choose for your file system. We
 * recommend <code>generalPurpose</code> performance mode for most file systems. File systems using the <code>maxIO</code>
 * performance mode can scale to higher levels of aggregate throughput and operations per second with a tradeoff of
 * slightly higher latencies for most file operations. The performance mode can't be changed after the file system has been
 * created. For more information, see <a
 * href="http://docs.aws.amazon.com/efs/latest/ug/performance.html#performancemodes.html">Amazon EFS: Performance
 *
 * Modes</a>>
 *
 * After the file system is fully created, Amazon EFS sets its lifecycle state to <code>available</code>, at which point
 * you can create one or more mount targets for the file system in your VPC. For more information, see
 * <a>CreateMountTarget</a>. You mount your Amazon EFS file system on an EC2 instances in your VPC via the mount target.
 * For more information, see <a href="http://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS: How it
 * Works</a>.
 *
 * </p
 *
 * This operation requires permissions for the <code>elasticfilesystem:CreateFileSystem</code> action.
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFileSystemResponse * EfsClient::createFileSystem(const CreateFileSystemRequest &request)
{
    return qobject_cast<CreateFileSystemResponse *>(send(request));
}

/**
 * Creates a mount target for a file system. You can then mount the file system on EC2 instances via the mount
 *
 * target>
 *
 * You can create one mount target in each Availability Zone in your VPC. All EC2 instances in a VPC within a given
 * Availability Zone share a single mount target for a given file system. If you have multiple subnets in an Availability
 * Zone, you create a mount target in one of the subnets. EC2 instances do not need to be in the same subnet as the mount
 * target in order to access their file system. For more information, see <a
 * href="http://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS: How it Works</a>.
 *
 * </p
 *
 * In the request, you also specify a file system ID for which you are creating the mount target and the file system's
 * lifecycle state must be <code>available</code>. For more information, see
 *
 * <a>DescribeFileSystems</a>>
 *
 * In the request, you also provide a subnet ID, which determines the
 *
 * following> <ul> <li>
 *
 * VPC in which Amazon EFS creates the mount
 *
 * targe> </li> <li>
 *
 * Availability Zone in which Amazon EFS creates the mount
 *
 * targe> </li> <li>
 *
 * IP address range from which Amazon EFS selects the IP address of the mount target (if you don't specify an IP address in
 * the
 *
 * request> </li> </ul>
 *
 * After creating the mount target, Amazon EFS returns a response that includes, a <code>MountTargetId</code> and an
 * <code>IpAddress</code>. You use this IP address when mounting the file system in an EC2 instance. You can also use the
 * mount target's DNS name when mounting the file system. The EC2 instance on which you mount the file system via the mount
 * target can resolve the mount target's DNS name to its IP address. For more information, see <a
 * href="http://docs.aws.amazon.com/efs/latest/ug/how-it-works.html#how-it-works-implementation">How it Works:
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
 * We recommend you create a mount target in each of the Availability Zones. There are cost considerations for using a file
 * system in an Availability Zone through a mount target created in another Availability Zone. For more information, see <a
 * href="http://aws.amazon.com/efs/">Amazon EFS</a>. In addition, by always using a mount target local to the instance's
 * Availability Zone, you eliminate a partial failure scenario. If the Availability Zone in which your mount target is
 * created goes down, then you won't be able to access your file system through that mount target.
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
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateMountTargetResponse * EfsClient::createMountTarget(const CreateMountTargetRequest &request)
{
    return qobject_cast<CreateMountTargetResponse *>(send(request));
}

/**
 * Creates or overwrites tags associated with a file system. Each tag is a key-value pair. If a tag key specified in the
 * request already exists on the file system, this operation overwrites its value with the value provided in the request.
 * If you add the <code>Name</code> tag to your file system, Amazon EFS returns it in the response to the
 * <a>DescribeFileSystems</a> operation.
 *
 * </p
 *
 * This operation requires permission for the <code>elasticfilesystem:CreateTags</code>
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTagsResponse * EfsClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFileSystemResponse * EfsClient::deleteFileSystem(const DeleteFileSystemRequest &request)
{
    return qobject_cast<DeleteFileSystemResponse *>(send(request));
}

/**
 * Deletes the specified mount
 *
 * target>
 *
 * This operation forcibly breaks any mounts of the file system via the mount target that is being deleted, which might
 * disrupt instances or applications using those mounts. To avoid applications getting cut off abruptly, you might consider
 * unmounting any mounts of the mount target, if feasible. The operation also deletes the associated network interface.
 * Uncommitted writes may be lost, but breaking a mount target using this operation does not corrupt the file system
 * itself. The file system you created remains. You can mount an EC2 instance in your VPC via another mount
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
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMountTargetResponse * EfsClient::deleteMountTarget(const DeleteMountTargetRequest &request)
{
    return qobject_cast<DeleteMountTargetResponse *>(send(request));
}

/**
 * Deletes the specified tags from a file system. If the <code>DeleteTags</code> request includes a tag key that does not
 * exist, Amazon EFS ignores it and doesn't cause an error. For more information about tags and related restrictions, see
 * <a href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Tag Restrictions</a> in the
 * <i>AWS Billing and Cost Management User
 *
 * Guide</i>>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DeleteTags</code>
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagsResponse * EfsClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/**
 * Returns the description of a specific Amazon EFS file system if either the file system <code>CreationToken</code> or the
 * <code>FileSystemId</code> is provided. Otherwise, it returns descriptions of all file systems owned by the caller's AWS
 * account in the AWS Region of the endpoint that you're
 *
 * calling>
 *
 * When retrieving all file system descriptions, you can optionally specify the <code>MaxItems</code> parameter to limit
 * the number of descriptions in a response. If more file system descriptions remain, Amazon EFS returns a
 * <code>NextMarker</code>, an opaque token, in the response. In this case, you should send a subsequent request with the
 * <code>Marker</code> request parameter set to the value of <code>NextMarker</code>.
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
 * The implementation may return fewer than <code>MaxItems</code> file system descriptions while still including a
 * <code>NextMarker</code> value.
 *
 * </p
 *
 * The order of file systems returned in the response of one <code>DescribeFileSystems</code> call and the order of file
 * systems returned across the responses of a multi-call iteration is unspecified.
 *
 * </p
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeFileSystems</code> action.
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeFileSystemsResponse * EfsClient::describeFileSystems(const DescribeFileSystemsRequest &request)
{
    return qobject_cast<DescribeFileSystemsResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMountTargetSecurityGroupsResponse * EfsClient::describeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest &request)
{
    return qobject_cast<DescribeMountTargetSecurityGroupsResponse *>(send(request));
}

/**
 * Returns the descriptions of all the current mount targets, or a specific mount target, for a file system. When
 * requesting all of the current mount targets, the order of mount targets returned in the response is
 *
 * unspecified>
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeMountTargets</code> action, on either the
 * file system ID that you specify in <code>FileSystemId</code>, or on the file system of the mount target that you specify
 * in
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMountTargetsResponse * EfsClient::describeMountTargets(const DescribeMountTargetsRequest &request)
{
    return qobject_cast<DescribeMountTargetsResponse *>(send(request));
}

/**
 * Returns the tags associated with a file system. The order of tags returned in the response of one
 * <code>DescribeTags</code> call and the order of tags returned across the responses of a multi-call iteration (when using
 * pagination) is unspecified.
 *
 * </p
 *
 * This operation requires permissions for the <code>elasticfilesystem:DescribeTags</code> action.
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagsResponse * EfsClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to Amazon Elastic File System.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyMountTargetSecurityGroupsResponse * EfsClient::modifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest &request)
{
    return qobject_cast<ModifyMountTargetSecurityGroupsResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  EfsClientPrivate
 *
 * @brief  Private implementation for EfsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EfsClientPrivate object.
 *
 * @param  q  Pointer to this object's public EfsClient instance.
 */
EfsClientPrivate::EfsClientPrivate(EfsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace EFS
} // namespace QtAws
