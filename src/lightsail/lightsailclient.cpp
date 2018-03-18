/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "lightsailclient.h"
#include "lightsailclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Lightsail {

/**
 * @class  LightsailClient
 *
 * @brief  Client for Amazon Lightsail
 *
 * Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 * Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 * transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 * Lightsail console or by using the API or command-line interface
 *
 * (CLI)>
 *
 * For more information about Lightsail concepts and tasks, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 *
 * Guide</a>>
 *
 * To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 * keys. For details about how to set this up, see the <a
 * href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 * Dev
 */

/**
 * @brief  Constructs a new LightsailClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
LightsailClient::LightsailClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LightsailClientPrivate(this), parent)
{
    Q_D(LightsailClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new LightsailClient object.
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
LightsailClient::LightsailClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LightsailClientPrivate(this), parent)
{
    Q_D(LightsailClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Allocates a static IP
 */
AllocateStaticIpResponse * LightsailClient::allocateStaticIp(const AllocateStaticIpRequest &request)
{

}

/**
 * Attaches a block storage disk to a running or stopped Lightsail instance and exposes it to the instance with the
 * specified disk
 */
AttachDiskResponse * LightsailClient::attachDisk(const AttachDiskRequest &request)
{

}

/**
 * Attaches one or more Lightsail instances to a load
 *
 * balancer>
 *
 * After some time, the instances are attached to the load balancer and the health check status is
 */
AttachInstancesToLoadBalancerResponse * LightsailClient::attachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest &request)
{

}

/**
 * Attaches a Transport Layer Security (TLS) certificate to your load balancer. TLS is just an updated, more secure version
 * of Secure Socket Layer
 *
 * (SSL)>
 *
 * Once you create and validate your certificate, you can attach it to your load balancer. You can also use this API to
 * rotate the certificates on your account. Use the <code>AttachLoadBalancerTlsCertificate</code> operation with the
 * non-attached certificate, and it will replace the existing one and become the attached
 */
AttachLoadBalancerTlsCertificateResponse * LightsailClient::attachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest &request)
{

}

/**
 * Attaches a static IP address to a specific Amazon Lightsail
 */
AttachStaticIpResponse * LightsailClient::attachStaticIp(const AttachStaticIpRequest &request)
{

}

/**
 * Closes the public ports on a specific Amazon Lightsail
 */
CloseInstancePublicPortsResponse * LightsailClient::closeInstancePublicPorts(const CloseInstancePublicPortsRequest &request)
{

}

/**
 * Creates a block storage disk that can be attached to a Lightsail instance in the same Availability Zone (e.g.,
 * <code>us-east-2a</code>). The disk is created in the regional endpoint that you send the HTTP request to. For more
 * information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
 * and Availability Zones in
 */
CreateDiskResponse * LightsailClient::createDisk(const CreateDiskRequest &request)
{

}

/**
 * Creates a block storage disk from a disk snapshot that can be attached to a Lightsail instance in the same Availability
 * Zone (e.g., <code>us-east-2a</code>). The disk is created in the regional endpoint that you send the HTTP request to.
 * For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
 * and Availability Zones in
 */
CreateDiskFromSnapshotResponse * LightsailClient::createDiskFromSnapshot(const CreateDiskFromSnapshotRequest &request)
{

}

/**
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
 */
CreateDiskSnapshotResponse * LightsailClient::createDiskSnapshot(const CreateDiskSnapshotRequest &request)
{

}

/**
 * Creates a domain resource for the specified domain (e.g.,
 */
CreateDomainResponse * LightsailClient::createDomain(const CreateDomainRequest &request)
{

}

/**
 * Creates one of the following entry records associated with the domain: A record, CNAME record, TXT record, or MX
 */
CreateDomainEntryResponse * LightsailClient::createDomainEntry(const CreateDomainEntryRequest &request)
{

}

/**
 * Creates a snapshot of a specific virtual private server, or <i>instance</i>. You can use a snapshot to create a new
 * instance that is based on that
 */
CreateInstanceSnapshotResponse * LightsailClient::createInstanceSnapshot(const CreateInstanceSnapshotRequest &request)
{

}

/**
 * Creates one or more Amazon Lightsail virtual private servers, or
 */
CreateInstancesResponse * LightsailClient::createInstances(const CreateInstancesRequest &request)
{

}

/**
 * Uses a specific snapshot as a blueprint for creating one or more new instances that are based on that identical
 */
CreateInstancesFromSnapshotResponse * LightsailClient::createInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest &request)
{

}

/**
 * Creates sn SSH key
 */
CreateKeyPairResponse * LightsailClient::createKeyPair(const CreateKeyPairRequest &request)
{

}

/**
 * Creates a Lightsail load balancer. To learn more about deciding whether to load balance your application, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/how-to/article/configure-lightsail-instances-for-load-balancing">Configure
 * your Lightsail instances for load balancing</a>. You can create up to 5 load balancers per AWS Region in your
 *
 * account>
 *
 * When you create a load balancer, you can specify a unique name and port settings. To change additional load balancer
 * settings, use the <code>UpdateLoadBalancerAttribute</code>
 */
CreateLoadBalancerResponse * LightsailClient::createLoadBalancer(const CreateLoadBalancerRequest &request)
{

}

/**
 * Creates a Lightsail load balancer TLS
 *
 * certificate>
 *
 * TLS is just an updated, more secure version of Secure Socket Layer
 */
CreateLoadBalancerTlsCertificateResponse * LightsailClient::createLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest &request)
{

}

/**
 * Deletes the specified block storage disk. The disk must be in the <code>available</code> state (not attached to a
 * Lightsail
 *
 * instance)> <note>
 *
 * The disk may remain in the <code>deleting</code> state for several
 */
DeleteDiskResponse * LightsailClient::deleteDisk(const DeleteDiskRequest &request)
{

}

/**
 * Deletes the specified disk
 *
 * snapshot>
 *
 * When you make periodic snapshots of a disk, the snapshots are incremental, and only the blocks on the device that have
 * changed since your last snapshot are saved in the new snapshot. When you delete a snapshot, only the data not needed for
 * any other snapshot is removed. So regardless of which prior snapshots have been deleted, all active snapshots will have
 * access to all the information needed to restore the
 */
DeleteDiskSnapshotResponse * LightsailClient::deleteDiskSnapshot(const DeleteDiskSnapshotRequest &request)
{

}

/**
 * Deletes the specified domain recordset and all of its domain
 */
DeleteDomainResponse * LightsailClient::deleteDomain(const DeleteDomainRequest &request)
{

}

/**
 * Deletes a specific domain
 */
DeleteDomainEntryResponse * LightsailClient::deleteDomainEntry(const DeleteDomainEntryRequest &request)
{

}

/**
 * Deletes a specific Amazon Lightsail virtual private server, or
 */
DeleteInstanceResponse * LightsailClient::deleteInstance(const DeleteInstanceRequest &request)
{

}

/**
 * Deletes a specific snapshot of a virtual private server (or
 */
DeleteInstanceSnapshotResponse * LightsailClient::deleteInstanceSnapshot(const DeleteInstanceSnapshotRequest &request)
{

}

/**
 * Deletes a specific SSH key
 */
DeleteKeyPairResponse * LightsailClient::deleteKeyPair(const DeleteKeyPairRequest &request)
{

}

/**
 * Deletes a Lightsail load balancer and all its associated SSL/TLS certificates. Once the load balancer is deleted, you
 * will need to create a new load balancer, create a new certificate, and verify domain ownership
 */
DeleteLoadBalancerResponse * LightsailClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{

}

/**
 * Deletes an SSL/TLS certificate associated with a Lightsail load
 */
DeleteLoadBalancerTlsCertificateResponse * LightsailClient::deleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest &request)
{

}

/**
 * Detaches a stopped block storage disk from a Lightsail instance. Make sure to unmount any file systems on the device
 * within your operating system before stopping the instance and detaching the
 */
DetachDiskResponse * LightsailClient::detachDisk(const DetachDiskRequest &request)
{

}

/**
 * Detaches the specified instances from a Lightsail load
 *
 * balancer>
 *
 * This operation waits until the instances are no longer needed before they are detached from the load
 */
DetachInstancesFromLoadBalancerResponse * LightsailClient::detachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest &request)
{

}

/**
 * Detaches a static IP from the Amazon Lightsail instance to which it is
 */
DetachStaticIpResponse * LightsailClient::detachStaticIp(const DetachStaticIpRequest &request)
{

}

/**
 * Downloads the default SSH key pair from the user's
 */
DownloadDefaultKeyPairResponse * LightsailClient::downloadDefaultKeyPair(const DownloadDefaultKeyPairRequest &request)
{

}

/**
 * Returns the names of all active (not deleted)
 */
GetActiveNamesResponse * LightsailClient::getActiveNames(const GetActiveNamesRequest &request)
{

}

/**
 * Returns the list of available instance images, or <i>blueprints</i>. You can use a blueprint to create a new virtual
 * private server already running a specific operating system, as well as a preinstalled app or development stack. The
 * software each instance is running depends on the blueprint image you
 */
GetBlueprintsResponse * LightsailClient::getBlueprints(const GetBlueprintsRequest &request)
{

}

/**
 * Returns the list of bundles that are available for purchase. A bundle describes the specs for your virtual private
 * server (or
 */
GetBundlesResponse * LightsailClient::getBundles(const GetBundlesRequest &request)
{

}

/**
 * Returns information about a specific block storage
 */
GetDiskResponse * LightsailClient::getDisk(const GetDiskRequest &request)
{

}

/**
 * Returns information about a specific block storage disk
 */
GetDiskSnapshotResponse * LightsailClient::getDiskSnapshot(const GetDiskSnapshotRequest &request)
{

}

/**
 * Returns information about all block storage disk snapshots in your AWS account and
 *
 * region>
 *
 * If you are describing a long list of disk snapshots, you can paginate the output to make the list more manageable. You
 * can use the pageToken and nextPageToken values to retrieve the next items in the
 */
GetDiskSnapshotsResponse * LightsailClient::getDiskSnapshots(const GetDiskSnapshotsRequest &request)
{

}

/**
 * Returns information about all block storage disks in your AWS account and
 *
 * region>
 *
 * If you are describing a long list of disks, you can paginate the output to make the list more manageable. You can use
 * the pageToken and nextPageToken values to retrieve the next items in the
 */
GetDisksResponse * LightsailClient::getDisks(const GetDisksRequest &request)
{

}

/**
 * Returns information about a specific domain
 */
GetDomainResponse * LightsailClient::getDomain(const GetDomainRequest &request)
{

}

/**
 * Returns a list of all domains in the user's
 */
GetDomainsResponse * LightsailClient::getDomains(const GetDomainsRequest &request)
{

}

/**
 * Returns information about a specific Amazon Lightsail instance, which is a virtual private
 */
GetInstanceResponse * LightsailClient::getInstance(const GetInstanceRequest &request)
{

}

/**
 * Returns temporary SSH keys you can use to connect to a specific virtual private server, or
 */
GetInstanceAccessDetailsResponse * LightsailClient::getInstanceAccessDetails(const GetInstanceAccessDetailsRequest &request)
{

}

/**
 * Returns the data points for the specified Amazon Lightsail instance metric, given an instance
 */
GetInstanceMetricDataResponse * LightsailClient::getInstanceMetricData(const GetInstanceMetricDataRequest &request)
{

}

/**
 * Returns the port states for a specific virtual private server, or
 */
GetInstancePortStatesResponse * LightsailClient::getInstancePortStates(const GetInstancePortStatesRequest &request)
{

}

/**
 * Returns information about a specific instance
 */
GetInstanceSnapshotResponse * LightsailClient::getInstanceSnapshot(const GetInstanceSnapshotRequest &request)
{

}

/**
 * Returns all instance snapshots for the user's
 */
GetInstanceSnapshotsResponse * LightsailClient::getInstanceSnapshots(const GetInstanceSnapshotsRequest &request)
{

}

/**
 * Returns the state of a specific instance. Works on one instance at a
 */
GetInstanceStateResponse * LightsailClient::getInstanceState(const GetInstanceStateRequest &request)
{

}

/**
 * Returns information about all Amazon Lightsail virtual private servers, or
 */
GetInstancesResponse * LightsailClient::getInstances(const GetInstancesRequest &request)
{

}

/**
 * Returns information about a specific key
 */
GetKeyPairResponse * LightsailClient::getKeyPair(const GetKeyPairRequest &request)
{

}

/**
 * Returns information about all key pairs in the user's
 */
GetKeyPairsResponse * LightsailClient::getKeyPairs(const GetKeyPairsRequest &request)
{

}

/**
 * Returns information about the specified Lightsail load
 */
GetLoadBalancerResponse * LightsailClient::getLoadBalancer(const GetLoadBalancerRequest &request)
{

}

/**
 * Returns information about health metrics for your Lightsail load
 */
GetLoadBalancerMetricDataResponse * LightsailClient::getLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest &request)
{

}

/**
 * Returns information about the TLS certificates that are associated with the specified Lightsail load
 *
 * balancer>
 *
 * TLS is just an updated, more secure version of Secure Socket Layer
 *
 * (SSL)>
 *
 * You can have a maximum of 2 certificates associated with a Lightsail load balancer. One is active and the other is
 */
GetLoadBalancerTlsCertificatesResponse * LightsailClient::getLoadBalancerTlsCertificates(const GetLoadBalancerTlsCertificatesRequest &request)
{

}

/**
 * Returns information about all load balancers in an
 *
 * account>
 *
 * If you are describing a long list of load balancers, you can paginate the output to make the list more manageable. You
 * can use the pageToken and nextPageToken values to retrieve the next items in the
 */
GetLoadBalancersResponse * LightsailClient::getLoadBalancers(const GetLoadBalancersRequest &request)
{

}

/**
 * Returns information about a specific operation. Operations include events such as when you create an instance, allocate
 * a static IP, attach a static IP, and so
 */
GetOperationResponse * LightsailClient::getOperation(const GetOperationRequest &request)
{

}

/**
 * Returns information about all
 *
 * operations>
 *
 * Results are returned from oldest to newest, up to a maximum of 200. Results can be paged by making each subsequent call
 * to <code>GetOperations</code> use the maximum (last) <code>statusChangedAt</code> value from the previous
 */
GetOperationsResponse * LightsailClient::getOperations(const GetOperationsRequest &request)
{

}

/**
 * Gets operations for a specific resource (e.g., an instance or a static
 */
GetOperationsForResourceResponse * LightsailClient::getOperationsForResource(const GetOperationsForResourceRequest &request)
{

}

/**
 * Returns a list of all valid regions for Amazon Lightsail. Use the <code>include availability zones</code> parameter to
 * also return the availability zones in a
 */
GetRegionsResponse * LightsailClient::getRegions(const GetRegionsRequest &request)
{

}

/**
 * Returns information about a specific static
 */
GetStaticIpResponse * LightsailClient::getStaticIp(const GetStaticIpRequest &request)
{

}

/**
 * Returns information about all static IPs in the user's
 */
GetStaticIpsResponse * LightsailClient::getStaticIps(const GetStaticIpsRequest &request)
{

}

/**
 * Imports a public SSH key from a specific key
 */
ImportKeyPairResponse * LightsailClient::importKeyPair(const ImportKeyPairRequest &request)
{

}

/**
 * Returns a Boolean value indicating whether your Lightsail VPC is
 */
IsVpcPeeredResponse * LightsailClient::isVpcPeered(const IsVpcPeeredRequest &request)
{

}

/**
 * Adds public ports to an Amazon Lightsail
 */
OpenInstancePublicPortsResponse * LightsailClient::openInstancePublicPorts(const OpenInstancePublicPortsRequest &request)
{

}

/**
 * Tries to peer the Lightsail VPC with the user's default
 */
PeerVpcResponse * LightsailClient::peerVpc(const PeerVpcRequest &request)
{

}

/**
 * Sets the specified open ports for an Amazon Lightsail instance, and closes all ports for every protocol not included in
 * the current
 */
PutInstancePublicPortsResponse * LightsailClient::putInstancePublicPorts(const PutInstancePublicPortsRequest &request)
{

}

/**
 * Restarts a specific instance. When your Amazon Lightsail instance is finished rebooting, Lightsail assigns a new public
 * IP address. To use the same IP address after restarting, create a static IP address and attach it to the
 */
RebootInstanceResponse * LightsailClient::rebootInstance(const RebootInstanceRequest &request)
{

}

/**
 * Deletes a specific static IP from your
 */
ReleaseStaticIpResponse * LightsailClient::releaseStaticIp(const ReleaseStaticIpRequest &request)
{

}

/**
 * Starts a specific Amazon Lightsail instance from a stopped state. To restart an instance, use the reboot instance
 */
StartInstanceResponse * LightsailClient::startInstance(const StartInstanceRequest &request)
{

}

/**
 * Stops a specific Amazon Lightsail instance that is currently
 */
StopInstanceResponse * LightsailClient::stopInstance(const StopInstanceRequest &request)
{

}

/**
 * Attempts to unpeer the Lightsail VPC from the user's default
 */
UnpeerVpcResponse * LightsailClient::unpeerVpc(const UnpeerVpcRequest &request)
{

}

/**
 * Updates a domain recordset after it is
 */
UpdateDomainEntryResponse * LightsailClient::updateDomainEntry(const UpdateDomainEntryRequest &request)
{

}

/**
 * Updates the specified attribute for a load balancer. You can only update one attribute at a
 */
UpdateLoadBalancerAttributeResponse * LightsailClient::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request)
{

}

/**
 * @internal
 *
 * @class  LightsailClientPrivate
 *
 * @brief  Private implementation for LightsailClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LightsailClientPrivate object.
 *
 * @param  q  Pointer to this object's public LightsailClient instance.
 */
LightsailClientPrivate::LightsailClientPrivate(LightsailClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Lightsail
} // namespace AWS
