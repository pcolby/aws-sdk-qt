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

#include "lightsailclient.h"
#include "lightsailclient_p.h"

#include "core/awssignaturev4.h"
#include "allocatestaticiprequest.h"
#include "allocatestaticipresponse.h"
#include "attachdiskrequest.h"
#include "attachdiskresponse.h"
#include "attachinstancestoloadbalancerrequest.h"
#include "attachinstancestoloadbalancerresponse.h"
#include "attachloadbalancertlscertificaterequest.h"
#include "attachloadbalancertlscertificateresponse.h"
#include "attachstaticiprequest.h"
#include "attachstaticipresponse.h"
#include "closeinstancepublicportsrequest.h"
#include "closeinstancepublicportsresponse.h"
#include "creatediskrequest.h"
#include "creatediskresponse.h"
#include "creatediskfromsnapshotrequest.h"
#include "creatediskfromsnapshotresponse.h"
#include "createdisksnapshotrequest.h"
#include "createdisksnapshotresponse.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "createdomainentryrequest.h"
#include "createdomainentryresponse.h"
#include "createinstancesnapshotrequest.h"
#include "createinstancesnapshotresponse.h"
#include "createinstancesrequest.h"
#include "createinstancesresponse.h"
#include "createinstancesfromsnapshotrequest.h"
#include "createinstancesfromsnapshotresponse.h"
#include "createkeypairrequest.h"
#include "createkeypairresponse.h"
#include "createloadbalancerrequest.h"
#include "createloadbalancerresponse.h"
#include "createloadbalancertlscertificaterequest.h"
#include "createloadbalancertlscertificateresponse.h"
#include "deletediskrequest.h"
#include "deletediskresponse.h"
#include "deletedisksnapshotrequest.h"
#include "deletedisksnapshotresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "deletedomainentryrequest.h"
#include "deletedomainentryresponse.h"
#include "deleteinstancerequest.h"
#include "deleteinstanceresponse.h"
#include "deleteinstancesnapshotrequest.h"
#include "deleteinstancesnapshotresponse.h"
#include "deletekeypairrequest.h"
#include "deletekeypairresponse.h"
#include "deleteloadbalancerrequest.h"
#include "deleteloadbalancerresponse.h"
#include "deleteloadbalancertlscertificaterequest.h"
#include "deleteloadbalancertlscertificateresponse.h"
#include "detachdiskrequest.h"
#include "detachdiskresponse.h"
#include "detachinstancesfromloadbalancerrequest.h"
#include "detachinstancesfromloadbalancerresponse.h"
#include "detachstaticiprequest.h"
#include "detachstaticipresponse.h"
#include "downloaddefaultkeypairrequest.h"
#include "downloaddefaultkeypairresponse.h"
#include "getactivenamesrequest.h"
#include "getactivenamesresponse.h"
#include "getblueprintsrequest.h"
#include "getblueprintsresponse.h"
#include "getbundlesrequest.h"
#include "getbundlesresponse.h"
#include "getdiskrequest.h"
#include "getdiskresponse.h"
#include "getdisksnapshotrequest.h"
#include "getdisksnapshotresponse.h"
#include "getdisksnapshotsrequest.h"
#include "getdisksnapshotsresponse.h"
#include "getdisksrequest.h"
#include "getdisksresponse.h"
#include "getdomainrequest.h"
#include "getdomainresponse.h"
#include "getdomainsrequest.h"
#include "getdomainsresponse.h"
#include "getinstancerequest.h"
#include "getinstanceresponse.h"
#include "getinstanceaccessdetailsrequest.h"
#include "getinstanceaccessdetailsresponse.h"
#include "getinstancemetricdatarequest.h"
#include "getinstancemetricdataresponse.h"
#include "getinstanceportstatesrequest.h"
#include "getinstanceportstatesresponse.h"
#include "getinstancesnapshotrequest.h"
#include "getinstancesnapshotresponse.h"
#include "getinstancesnapshotsrequest.h"
#include "getinstancesnapshotsresponse.h"
#include "getinstancestaterequest.h"
#include "getinstancestateresponse.h"
#include "getinstancesrequest.h"
#include "getinstancesresponse.h"
#include "getkeypairrequest.h"
#include "getkeypairresponse.h"
#include "getkeypairsrequest.h"
#include "getkeypairsresponse.h"
#include "getloadbalancerrequest.h"
#include "getloadbalancerresponse.h"
#include "getloadbalancermetricdatarequest.h"
#include "getloadbalancermetricdataresponse.h"
#include "getloadbalancertlscertificatesrequest.h"
#include "getloadbalancertlscertificatesresponse.h"
#include "getloadbalancersrequest.h"
#include "getloadbalancersresponse.h"
#include "getoperationrequest.h"
#include "getoperationresponse.h"
#include "getoperationsrequest.h"
#include "getoperationsresponse.h"
#include "getoperationsforresourcerequest.h"
#include "getoperationsforresourceresponse.h"
#include "getregionsrequest.h"
#include "getregionsresponse.h"
#include "getstaticiprequest.h"
#include "getstaticipresponse.h"
#include "getstaticipsrequest.h"
#include "getstaticipsresponse.h"
#include "importkeypairrequest.h"
#include "importkeypairresponse.h"
#include "isvpcpeeredrequest.h"
#include "isvpcpeeredresponse.h"
#include "openinstancepublicportsrequest.h"
#include "openinstancepublicportsresponse.h"
#include "peervpcrequest.h"
#include "peervpcresponse.h"
#include "putinstancepublicportsrequest.h"
#include "putinstancepublicportsresponse.h"
#include "rebootinstancerequest.h"
#include "rebootinstanceresponse.h"
#include "releasestaticiprequest.h"
#include "releasestaticipresponse.h"
#include "startinstancerequest.h"
#include "startinstanceresponse.h"
#include "stopinstancerequest.h"
#include "stopinstanceresponse.h"
#include "unpeervpcrequest.h"
#include "unpeervpcresponse.h"
#include "updatedomainentryrequest.h"
#include "updatedomainentryresponse.h"
#include "updateloadbalancerattributerequest.h"
#include "updateloadbalancerattributeresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Lightsail
 * \brief The QtAws::Lightsail contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::LightsailClient
 *
 * \brief The LightsailClient class provides access the Amazon Lightsail service.
 *
 * \ingroup Lightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 */

/*!
 * \brief Constructs a LightsailClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LightsailClient::LightsailClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LightsailClientPrivate(this), parent)
{
    Q_D(LightsailClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("lightsail");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Lightsail");
    d->serviceName = QStringLiteral("lightsail");
}

/*!
 * \overload LightsailClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
LightsailClient::LightsailClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LightsailClientPrivate(this), parent)
{
    Q_D(LightsailClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("lightsail");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Lightsail");
    d->serviceName = QStringLiteral("lightsail");
}

/*!
 * Allocates a static IP
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AllocateStaticIpResponse * LightsailClient::allocateStaticIp(const AllocateStaticIpRequest &request)
{
    return qobject_cast<AllocateStaticIpResponse *>(send(request));
}

/*!
 * Attaches a block storage disk to a running or stopped Lightsail instance and exposes it to the instance with the
 * specified disk
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachDiskResponse * LightsailClient::attachDisk(const AttachDiskRequest &request)
{
    return qobject_cast<AttachDiskResponse *>(send(request));
}

/*!
 * Attaches one or more Lightsail instances to a load
 *
 * balancer>
 *
 * After some time, the instances are attached to the load balancer and the health check status is
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachInstancesToLoadBalancerResponse * LightsailClient::attachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest &request)
{
    return qobject_cast<AttachInstancesToLoadBalancerResponse *>(send(request));
}

/*!
 * Attaches a Transport Layer Security (TLS) certificate to your load balancer. TLS is just an updated, more secure version
 * of Secure Socket Layer
 *
 * (SSL)>
 *
 * Once you create and validate your certificate, you can attach it to your load balancer. You can also use this API to
 * rotate the certificates on your account. Use the <code>AttachLoadBalancerTlsCertificate</code> operation with the
 * non-attached certificate, and it will replace the existing one and become the attached
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachLoadBalancerTlsCertificateResponse * LightsailClient::attachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest &request)
{
    return qobject_cast<AttachLoadBalancerTlsCertificateResponse *>(send(request));
}

/*!
 * Attaches a static IP address to a specific Amazon Lightsail
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachStaticIpResponse * LightsailClient::attachStaticIp(const AttachStaticIpRequest &request)
{
    return qobject_cast<AttachStaticIpResponse *>(send(request));
}

/*!
 * Closes the public ports on a specific Amazon Lightsail
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CloseInstancePublicPortsResponse * LightsailClient::closeInstancePublicPorts(const CloseInstancePublicPortsRequest &request)
{
    return qobject_cast<CloseInstancePublicPortsResponse *>(send(request));
}

/*!
 * Creates a block storage disk that can be attached to a Lightsail instance in the same Availability Zone (e.g.,
 * <code>us-east-2a</code>). The disk is created in the regional endpoint that you send the HTTP request to. For more
 * information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
 * and Availability Zones in
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDiskResponse * LightsailClient::createDisk(const CreateDiskRequest &request)
{
    return qobject_cast<CreateDiskResponse *>(send(request));
}

/*!
 * Creates a block storage disk from a disk snapshot that can be attached to a Lightsail instance in the same Availability
 * Zone (e.g., <code>us-east-2a</code>). The disk is created in the regional endpoint that you send the HTTP request to.
 * For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
 * and Availability Zones in
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDiskFromSnapshotResponse * LightsailClient::createDiskFromSnapshot(const CreateDiskFromSnapshotRequest &request)
{
    return qobject_cast<CreateDiskFromSnapshotResponse *>(send(request));
}

/*!
 * Creates a snapshot of a block storage disk. You can use snapshots for backups, to make copies of disks, and to save data
 * before shutting down a Lightsail
 *
 * instance>
 *
 * You can take a snapshot of an attached disk that is in use; however, snapshots only capture data that has been written
 * to your disk at the time the snapshot command is issued. This may exclude any data that has been cached by any
 * applications or the operating system. If you can pause any file systems on the disk long enough to take a snapshot, your
 * snapshot should be complete. Nevertheless, if you cannot pause all file writes to the disk, you should unmount the disk
 * from within the Lightsail instance, issue the create disk snapshot command, and then remount the disk to ensure a
 * consistent and complete snapshot. You may remount and use your disk while the snapshot status is
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDiskSnapshotResponse * LightsailClient::createDiskSnapshot(const CreateDiskSnapshotRequest &request)
{
    return qobject_cast<CreateDiskSnapshotResponse *>(send(request));
}

/*!
 * Creates a domain resource for the specified domain (e.g.,
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDomainResponse * LightsailClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Creates one of the following entry records associated with the domain: A record, CNAME record, TXT record, or MX
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDomainEntryResponse * LightsailClient::createDomainEntry(const CreateDomainEntryRequest &request)
{
    return qobject_cast<CreateDomainEntryResponse *>(send(request));
}

/*!
 * Creates a snapshot of a specific virtual private server, or <i>instance</i>. You can use a snapshot to create a new
 * instance that is based on that
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInstanceSnapshotResponse * LightsailClient::createInstanceSnapshot(const CreateInstanceSnapshotRequest &request)
{
    return qobject_cast<CreateInstanceSnapshotResponse *>(send(request));
}

/*!
 * Creates one or more Amazon Lightsail virtual private servers, or
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInstancesResponse * LightsailClient::createInstances(const CreateInstancesRequest &request)
{
    return qobject_cast<CreateInstancesResponse *>(send(request));
}

/*!
 * Uses a specific snapshot as a blueprint for creating one or more new instances that are based on that identical
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInstancesFromSnapshotResponse * LightsailClient::createInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest &request)
{
    return qobject_cast<CreateInstancesFromSnapshotResponse *>(send(request));
}

/*!
 * Creates sn SSH key
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateKeyPairResponse * LightsailClient::createKeyPair(const CreateKeyPairRequest &request)
{
    return qobject_cast<CreateKeyPairResponse *>(send(request));
}

/*!
 * Creates a Lightsail load balancer. To learn more about deciding whether to load balance your application, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/how-to/article/configure-lightsail-instances-for-load-balancing">Configure
 * your Lightsail instances for load balancing</a>. You can create up to 5 load balancers per AWS Region in your
 *
 * account>
 *
 * When you create a load balancer, you can specify a unique name and port settings. To change additional load balancer
 * settings, use the <code>UpdateLoadBalancerAttribute</code>
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoadBalancerResponse * LightsailClient::createLoadBalancer(const CreateLoadBalancerRequest &request)
{
    return qobject_cast<CreateLoadBalancerResponse *>(send(request));
}

/*!
 * Creates a Lightsail load balancer TLS
 *
 * certificate>
 *
 * TLS is just an updated, more secure version of Secure Socket Layer
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoadBalancerTlsCertificateResponse * LightsailClient::createLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest &request)
{
    return qobject_cast<CreateLoadBalancerTlsCertificateResponse *>(send(request));
}

/*!
 * Deletes the specified block storage disk. The disk must be in the <code>available</code> state (not attached to a
 * Lightsail
 *
 * instance)> <note>
 *
 * The disk may remain in the <code>deleting</code> state for several
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDiskResponse * LightsailClient::deleteDisk(const DeleteDiskRequest &request)
{
    return qobject_cast<DeleteDiskResponse *>(send(request));
}

/*!
 * Deletes the specified disk
 *
 * snapshot>
 *
 * When you make periodic snapshots of a disk, the snapshots are incremental, and only the blocks on the device that have
 * changed since your last snapshot are saved in the new snapshot. When you delete a snapshot, only the data not needed for
 * any other snapshot is removed. So regardless of which prior snapshots have been deleted, all active snapshots will have
 * access to all the information needed to restore the
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDiskSnapshotResponse * LightsailClient::deleteDiskSnapshot(const DeleteDiskSnapshotRequest &request)
{
    return qobject_cast<DeleteDiskSnapshotResponse *>(send(request));
}

/*!
 * Deletes the specified domain recordset and all of its domain
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDomainResponse * LightsailClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Deletes a specific domain
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDomainEntryResponse * LightsailClient::deleteDomainEntry(const DeleteDomainEntryRequest &request)
{
    return qobject_cast<DeleteDomainEntryResponse *>(send(request));
}

/*!
 * Deletes a specific Amazon Lightsail virtual private server, or
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInstanceResponse * LightsailClient::deleteInstance(const DeleteInstanceRequest &request)
{
    return qobject_cast<DeleteInstanceResponse *>(send(request));
}

/*!
 * Deletes a specific snapshot of a virtual private server (or
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInstanceSnapshotResponse * LightsailClient::deleteInstanceSnapshot(const DeleteInstanceSnapshotRequest &request)
{
    return qobject_cast<DeleteInstanceSnapshotResponse *>(send(request));
}

/*!
 * Deletes a specific SSH key
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteKeyPairResponse * LightsailClient::deleteKeyPair(const DeleteKeyPairRequest &request)
{
    return qobject_cast<DeleteKeyPairResponse *>(send(request));
}

/*!
 * Deletes a Lightsail load balancer and all its associated SSL/TLS certificates. Once the load balancer is deleted, you
 * will need to create a new load balancer, create a new certificate, and verify domain ownership
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoadBalancerResponse * LightsailClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    return qobject_cast<DeleteLoadBalancerResponse *>(send(request));
}

/*!
 * Deletes an SSL/TLS certificate associated with a Lightsail load
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoadBalancerTlsCertificateResponse * LightsailClient::deleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest &request)
{
    return qobject_cast<DeleteLoadBalancerTlsCertificateResponse *>(send(request));
}

/*!
 * Detaches a stopped block storage disk from a Lightsail instance. Make sure to unmount any file systems on the device
 * within your operating system before stopping the instance and detaching the
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachDiskResponse * LightsailClient::detachDisk(const DetachDiskRequest &request)
{
    return qobject_cast<DetachDiskResponse *>(send(request));
}

/*!
 * Detaches the specified instances from a Lightsail load
 *
 * balancer>
 *
 * This operation waits until the instances are no longer needed before they are detached from the load
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachInstancesFromLoadBalancerResponse * LightsailClient::detachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest &request)
{
    return qobject_cast<DetachInstancesFromLoadBalancerResponse *>(send(request));
}

/*!
 * Detaches a static IP from the Amazon Lightsail instance to which it is
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachStaticIpResponse * LightsailClient::detachStaticIp(const DetachStaticIpRequest &request)
{
    return qobject_cast<DetachStaticIpResponse *>(send(request));
}

/*!
 * Downloads the default SSH key pair from the user's
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DownloadDefaultKeyPairResponse * LightsailClient::downloadDefaultKeyPair(const DownloadDefaultKeyPairRequest &request)
{
    return qobject_cast<DownloadDefaultKeyPairResponse *>(send(request));
}

/*!
 * Returns the names of all active (not deleted)
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetActiveNamesResponse * LightsailClient::getActiveNames(const GetActiveNamesRequest &request)
{
    return qobject_cast<GetActiveNamesResponse *>(send(request));
}

/*!
 * Returns the list of available instance images, or <i>blueprints</i>. You can use a blueprint to create a new virtual
 * private server already running a specific operating system, as well as a preinstalled app or development stack. The
 * software each instance is running depends on the blueprint image you
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBlueprintsResponse * LightsailClient::getBlueprints(const GetBlueprintsRequest &request)
{
    return qobject_cast<GetBlueprintsResponse *>(send(request));
}

/*!
 * Returns the list of bundles that are available for purchase. A bundle describes the specs for your virtual private
 * server (or
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBundlesResponse * LightsailClient::getBundles(const GetBundlesRequest &request)
{
    return qobject_cast<GetBundlesResponse *>(send(request));
}

/*!
 * Returns information about a specific block storage
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDiskResponse * LightsailClient::getDisk(const GetDiskRequest &request)
{
    return qobject_cast<GetDiskResponse *>(send(request));
}

/*!
 * Returns information about a specific block storage disk
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDiskSnapshotResponse * LightsailClient::getDiskSnapshot(const GetDiskSnapshotRequest &request)
{
    return qobject_cast<GetDiskSnapshotResponse *>(send(request));
}

/*!
 * Returns information about all block storage disk snapshots in your AWS account and
 *
 * region>
 *
 * If you are describing a long list of disk snapshots, you can paginate the output to make the list more manageable. You
 * can use the pageToken and nextPageToken values to retrieve the next items in the
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDiskSnapshotsResponse * LightsailClient::getDiskSnapshots(const GetDiskSnapshotsRequest &request)
{
    return qobject_cast<GetDiskSnapshotsResponse *>(send(request));
}

/*!
 * Returns information about all block storage disks in your AWS account and
 *
 * region>
 *
 * If you are describing a long list of disks, you can paginate the output to make the list more manageable. You can use
 * the pageToken and nextPageToken values to retrieve the next items in the
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDisksResponse * LightsailClient::getDisks(const GetDisksRequest &request)
{
    return qobject_cast<GetDisksResponse *>(send(request));
}

/*!
 * Returns information about a specific domain
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDomainResponse * LightsailClient::getDomain(const GetDomainRequest &request)
{
    return qobject_cast<GetDomainResponse *>(send(request));
}

/*!
 * Returns a list of all domains in the user's
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDomainsResponse * LightsailClient::getDomains(const GetDomainsRequest &request)
{
    return qobject_cast<GetDomainsResponse *>(send(request));
}

/*!
 * Returns information about a specific Amazon Lightsail instance, which is a virtual private
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceResponse * LightsailClient::getInstance(const GetInstanceRequest &request)
{
    return qobject_cast<GetInstanceResponse *>(send(request));
}

/*!
 * Returns temporary SSH keys you can use to connect to a specific virtual private server, or
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceAccessDetailsResponse * LightsailClient::getInstanceAccessDetails(const GetInstanceAccessDetailsRequest &request)
{
    return qobject_cast<GetInstanceAccessDetailsResponse *>(send(request));
}

/*!
 * Returns the data points for the specified Amazon Lightsail instance metric, given an instance
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceMetricDataResponse * LightsailClient::getInstanceMetricData(const GetInstanceMetricDataRequest &request)
{
    return qobject_cast<GetInstanceMetricDataResponse *>(send(request));
}

/*!
 * Returns the port states for a specific virtual private server, or
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstancePortStatesResponse * LightsailClient::getInstancePortStates(const GetInstancePortStatesRequest &request)
{
    return qobject_cast<GetInstancePortStatesResponse *>(send(request));
}

/*!
 * Returns information about a specific instance
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceSnapshotResponse * LightsailClient::getInstanceSnapshot(const GetInstanceSnapshotRequest &request)
{
    return qobject_cast<GetInstanceSnapshotResponse *>(send(request));
}

/*!
 * Returns all instance snapshots for the user's
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceSnapshotsResponse * LightsailClient::getInstanceSnapshots(const GetInstanceSnapshotsRequest &request)
{
    return qobject_cast<GetInstanceSnapshotsResponse *>(send(request));
}

/*!
 * Returns the state of a specific instance. Works on one instance at a
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstanceStateResponse * LightsailClient::getInstanceState(const GetInstanceStateRequest &request)
{
    return qobject_cast<GetInstanceStateResponse *>(send(request));
}

/*!
 * Returns information about all Amazon Lightsail virtual private servers, or
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInstancesResponse * LightsailClient::getInstances(const GetInstancesRequest &request)
{
    return qobject_cast<GetInstancesResponse *>(send(request));
}

/*!
 * Returns information about a specific key
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetKeyPairResponse * LightsailClient::getKeyPair(const GetKeyPairRequest &request)
{
    return qobject_cast<GetKeyPairResponse *>(send(request));
}

/*!
 * Returns information about all key pairs in the user's
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetKeyPairsResponse * LightsailClient::getKeyPairs(const GetKeyPairsRequest &request)
{
    return qobject_cast<GetKeyPairsResponse *>(send(request));
}

/*!
 * Returns information about the specified Lightsail load
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoadBalancerResponse * LightsailClient::getLoadBalancer(const GetLoadBalancerRequest &request)
{
    return qobject_cast<GetLoadBalancerResponse *>(send(request));
}

/*!
 * Returns information about health metrics for your Lightsail load
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoadBalancerMetricDataResponse * LightsailClient::getLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest &request)
{
    return qobject_cast<GetLoadBalancerMetricDataResponse *>(send(request));
}

/*!
 * Returns information about the TLS certificates that are associated with the specified Lightsail load
 *
 * balancer>
 *
 * TLS is just an updated, more secure version of Secure Socket Layer
 *
 * (SSL)>
 *
 * You can have a maximum of 2 certificates associated with a Lightsail load balancer. One is active and the other is
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoadBalancerTlsCertificatesResponse * LightsailClient::getLoadBalancerTlsCertificates(const GetLoadBalancerTlsCertificatesRequest &request)
{
    return qobject_cast<GetLoadBalancerTlsCertificatesResponse *>(send(request));
}

/*!
 * Returns information about all load balancers in an
 *
 * account>
 *
 * If you are describing a long list of load balancers, you can paginate the output to make the list more manageable. You
 * can use the pageToken and nextPageToken values to retrieve the next items in the
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoadBalancersResponse * LightsailClient::getLoadBalancers(const GetLoadBalancersRequest &request)
{
    return qobject_cast<GetLoadBalancersResponse *>(send(request));
}

/*!
 * Returns information about a specific operation. Operations include events such as when you create an instance, allocate
 * a static IP, attach a static IP, and so
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetOperationResponse * LightsailClient::getOperation(const GetOperationRequest &request)
{
    return qobject_cast<GetOperationResponse *>(send(request));
}

/*!
 * Returns information about all
 *
 * operations>
 *
 * Results are returned from oldest to newest, up to a maximum of 200. Results can be paged by making each subsequent call
 * to <code>GetOperations</code> use the maximum (last) <code>statusChangedAt</code> value from the previous
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetOperationsResponse * LightsailClient::getOperations(const GetOperationsRequest &request)
{
    return qobject_cast<GetOperationsResponse *>(send(request));
}

/*!
 * Gets operations for a specific resource (e.g., an instance or a static
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetOperationsForResourceResponse * LightsailClient::getOperationsForResource(const GetOperationsForResourceRequest &request)
{
    return qobject_cast<GetOperationsForResourceResponse *>(send(request));
}

/*!
 * Returns a list of all valid regions for Amazon Lightsail. Use the <code>include availability zones</code> parameter to
 * also return the availability zones in a
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRegionsResponse * LightsailClient::getRegions(const GetRegionsRequest &request)
{
    return qobject_cast<GetRegionsResponse *>(send(request));
}

/*!
 * Returns information about a specific static
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetStaticIpResponse * LightsailClient::getStaticIp(const GetStaticIpRequest &request)
{
    return qobject_cast<GetStaticIpResponse *>(send(request));
}

/*!
 * Returns information about all static IPs in the user's
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetStaticIpsResponse * LightsailClient::getStaticIps(const GetStaticIpsRequest &request)
{
    return qobject_cast<GetStaticIpsResponse *>(send(request));
}

/*!
 * Imports a public SSH key from a specific key
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportKeyPairResponse * LightsailClient::importKeyPair(const ImportKeyPairRequest &request)
{
    return qobject_cast<ImportKeyPairResponse *>(send(request));
}

/*!
 * Returns a Boolean value indicating whether your Lightsail VPC is
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
IsVpcPeeredResponse * LightsailClient::isVpcPeered(const IsVpcPeeredRequest &request)
{
    return qobject_cast<IsVpcPeeredResponse *>(send(request));
}

/*!
 * Adds public ports to an Amazon Lightsail
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
OpenInstancePublicPortsResponse * LightsailClient::openInstancePublicPorts(const OpenInstancePublicPortsRequest &request)
{
    return qobject_cast<OpenInstancePublicPortsResponse *>(send(request));
}

/*!
 * Tries to peer the Lightsail VPC with the user's default
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PeerVpcResponse * LightsailClient::peerVpc(const PeerVpcRequest &request)
{
    return qobject_cast<PeerVpcResponse *>(send(request));
}

/*!
 * Sets the specified open ports for an Amazon Lightsail instance, and closes all ports for every protocol not included in
 * the current
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutInstancePublicPortsResponse * LightsailClient::putInstancePublicPorts(const PutInstancePublicPortsRequest &request)
{
    return qobject_cast<PutInstancePublicPortsResponse *>(send(request));
}

/*!
 * Restarts a specific instance. When your Amazon Lightsail instance is finished rebooting, Lightsail assigns a new public
 * IP address. To use the same IP address after restarting, create a static IP address and attach it to the
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootInstanceResponse * LightsailClient::rebootInstance(const RebootInstanceRequest &request)
{
    return qobject_cast<RebootInstanceResponse *>(send(request));
}

/*!
 * Deletes a specific static IP from your
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReleaseStaticIpResponse * LightsailClient::releaseStaticIp(const ReleaseStaticIpRequest &request)
{
    return qobject_cast<ReleaseStaticIpResponse *>(send(request));
}

/*!
 * Starts a specific Amazon Lightsail instance from a stopped state. To restart an instance, use the reboot instance
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartInstanceResponse * LightsailClient::startInstance(const StartInstanceRequest &request)
{
    return qobject_cast<StartInstanceResponse *>(send(request));
}

/*!
 * Stops a specific Amazon Lightsail instance that is currently
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopInstanceResponse * LightsailClient::stopInstance(const StopInstanceRequest &request)
{
    return qobject_cast<StopInstanceResponse *>(send(request));
}

/*!
 * Attempts to unpeer the Lightsail VPC from the user's default
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UnpeerVpcResponse * LightsailClient::unpeerVpc(const UnpeerVpcRequest &request)
{
    return qobject_cast<UnpeerVpcResponse *>(send(request));
}

/*!
 * Updates a domain recordset after it is
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDomainEntryResponse * LightsailClient::updateDomainEntry(const UpdateDomainEntryRequest &request)
{
    return qobject_cast<UpdateDomainEntryResponse *>(send(request));
}

/*!
 * Updates the specified attribute for a load balancer. You can only update one attribute at a
 *
 * @param  request Request to send to Amazon Lightsail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateLoadBalancerAttributeResponse * LightsailClient::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request)
{
    return qobject_cast<UpdateLoadBalancerAttributeResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  LightsailClientPrivate
 *
 * @brief  Private implementation for LightsailClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new LightsailClientPrivate object.
 *
 * @param  q  Pointer to this object's public LightsailClient instance.
 */
LightsailClientPrivate::LightsailClientPrivate(LightsailClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Lightsail
} // namespace QtAws
