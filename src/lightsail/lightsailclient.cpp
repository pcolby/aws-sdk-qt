/*
    Copyright 2013-2018 Paul Colby

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
#include "copysnapshotrequest.h"
#include "copysnapshotresponse.h"
#include "createcloudformationstackrequest.h"
#include "createcloudformationstackresponse.h"
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
#include "createrelationaldatabaserequest.h"
#include "createrelationaldatabaseresponse.h"
#include "createrelationaldatabasefromsnapshotrequest.h"
#include "createrelationaldatabasefromsnapshotresponse.h"
#include "createrelationaldatabasesnapshotrequest.h"
#include "createrelationaldatabasesnapshotresponse.h"
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
#include "deleterelationaldatabaserequest.h"
#include "deleterelationaldatabaseresponse.h"
#include "deleterelationaldatabasesnapshotrequest.h"
#include "deleterelationaldatabasesnapshotresponse.h"
#include "detachdiskrequest.h"
#include "detachdiskresponse.h"
#include "detachinstancesfromloadbalancerrequest.h"
#include "detachinstancesfromloadbalancerresponse.h"
#include "detachstaticiprequest.h"
#include "detachstaticipresponse.h"
#include "downloaddefaultkeypairrequest.h"
#include "downloaddefaultkeypairresponse.h"
#include "exportsnapshotrequest.h"
#include "exportsnapshotresponse.h"
#include "getactivenamesrequest.h"
#include "getactivenamesresponse.h"
#include "getblueprintsrequest.h"
#include "getblueprintsresponse.h"
#include "getbundlesrequest.h"
#include "getbundlesresponse.h"
#include "getcloudformationstackrecordsrequest.h"
#include "getcloudformationstackrecordsresponse.h"
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
#include "getexportsnapshotrecordsrequest.h"
#include "getexportsnapshotrecordsresponse.h"
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
#include "getrelationaldatabaserequest.h"
#include "getrelationaldatabaseresponse.h"
#include "getrelationaldatabaseblueprintsrequest.h"
#include "getrelationaldatabaseblueprintsresponse.h"
#include "getrelationaldatabasebundlesrequest.h"
#include "getrelationaldatabasebundlesresponse.h"
#include "getrelationaldatabaseeventsrequest.h"
#include "getrelationaldatabaseeventsresponse.h"
#include "getrelationaldatabaselogeventsrequest.h"
#include "getrelationaldatabaselogeventsresponse.h"
#include "getrelationaldatabaselogstreamsrequest.h"
#include "getrelationaldatabaselogstreamsresponse.h"
#include "getrelationaldatabasemasteruserpasswordrequest.h"
#include "getrelationaldatabasemasteruserpasswordresponse.h"
#include "getrelationaldatabasemetricdatarequest.h"
#include "getrelationaldatabasemetricdataresponse.h"
#include "getrelationaldatabaseparametersrequest.h"
#include "getrelationaldatabaseparametersresponse.h"
#include "getrelationaldatabasesnapshotrequest.h"
#include "getrelationaldatabasesnapshotresponse.h"
#include "getrelationaldatabasesnapshotsrequest.h"
#include "getrelationaldatabasesnapshotsresponse.h"
#include "getrelationaldatabasesrequest.h"
#include "getrelationaldatabasesresponse.h"
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
#include "rebootrelationaldatabaserequest.h"
#include "rebootrelationaldatabaseresponse.h"
#include "releasestaticiprequest.h"
#include "releasestaticipresponse.h"
#include "startinstancerequest.h"
#include "startinstanceresponse.h"
#include "startrelationaldatabaserequest.h"
#include "startrelationaldatabaseresponse.h"
#include "stopinstancerequest.h"
#include "stopinstanceresponse.h"
#include "stoprelationaldatabaserequest.h"
#include "stoprelationaldatabaseresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "unpeervpcrequest.h"
#include "unpeervpcresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedomainentryrequest.h"
#include "updatedomainentryresponse.h"
#include "updateloadbalancerattributerequest.h"
#include "updateloadbalancerattributeresponse.h"
#include "updaterelationaldatabaserequest.h"
#include "updaterelationaldatabaseresponse.h"
#include "updaterelationaldatabaseparametersrequest.h"
#include "updaterelationaldatabaseparametersresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Lightsail
 * \brief Contains classess for accessing Amazon Lightsail.
 *
 * \inmodule QtAwsLightsail
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::LightsailClient
 * \brief The LightsailClient class provides access to the Amazon Lightsail service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLightsail
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * AllocateStaticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allocates a static IP
 */
AllocateStaticIpResponse * LightsailClient::allocateStaticIp(const AllocateStaticIpRequest &request)
{
    return qobject_cast<AllocateStaticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * AttachDiskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a block storage disk to a running or stopped Lightsail instance and exposes it to the instance with the
 * specified disk
 *
 * name>
 *
 * The <code>attach disk</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by diskName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
AttachDiskResponse * LightsailClient::attachDisk(const AttachDiskRequest &request)
{
    return qobject_cast<AttachDiskResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * AttachInstancesToLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches one or more Lightsail instances to a load
 *
 * balancer>
 *
 * After some time, the instances are attached to the load balancer and the health check status is
 *
 * available>
 *
 * The <code>attach instances to load balancer</code> operation supports tag-based access control via resource tags applied
 * to the resource identified by loadBalancerName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
AttachInstancesToLoadBalancerResponse * LightsailClient::attachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest &request)
{
    return qobject_cast<AttachInstancesToLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * AttachLoadBalancerTlsCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a Transport Layer Security (TLS) certificate to your load balancer. TLS is just an updated, more secure version
 * of Secure Socket Layer
 *
 * (SSL)>
 *
 * Once you create and validate your certificate, you can attach it to your load balancer. You can also use this API to
 * rotate the certificates on your account. Use the <code>AttachLoadBalancerTlsCertificate</code> operation with the
 * non-attached certificate, and it will replace the existing one and become the attached
 *
 * certificate>
 *
 * The <code>attach load balancer tls certificate</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by loadBalancerName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
AttachLoadBalancerTlsCertificateResponse * LightsailClient::attachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest &request)
{
    return qobject_cast<AttachLoadBalancerTlsCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * AttachStaticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a static IP address to a specific Amazon Lightsail
 */
AttachStaticIpResponse * LightsailClient::attachStaticIp(const AttachStaticIpRequest &request)
{
    return qobject_cast<AttachStaticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CloseInstancePublicPortsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Closes the public ports on a specific Amazon Lightsail
 *
 * instance>
 *
 * The <code>close instance public ports</code> operation supports tag-based access control via resource tags applied to
 * the resource identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CloseInstancePublicPortsResponse * LightsailClient::closeInstancePublicPorts(const CloseInstancePublicPortsRequest &request)
{
    return qobject_cast<CloseInstancePublicPortsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CopySnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies an instance or disk snapshot from one AWS Region to another in Amazon
 */
CopySnapshotResponse * LightsailClient::copySnapshot(const CopySnapshotRequest &request)
{
    return qobject_cast<CopySnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateCloudFormationStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS CloudFormation stack, which creates a new Amazon EC2 instance from an exported Amazon Lightsail snapshot.
 * This operation results in a CloudFormation stack record that can be used to track the AWS CloudFormation stack created.
 * Use the <code>get cloud formation stack records</code> operation to get a list of the CloudFormation stacks
 *
 * created> <b>
 *
 * Wait until after your new Amazon EC2 instance is created before running the <code>create cloud formation stack</code>
 * operation again with the same export snapshot
 */
CreateCloudFormationStackResponse * LightsailClient::createCloudFormationStack(const CreateCloudFormationStackRequest &request)
{
    return qobject_cast<CreateCloudFormationStackResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateDiskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a block storage disk that can be attached to a Lightsail instance in the same Availability Zone (e.g.,
 * <code>us-east-2a</code>). The disk is created in the regional endpoint that you send the HTTP request to. For more
 * information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
 * and Availability Zones in
 *
 * Lightsail</a>>
 *
 * The <code>create disk</code> operation supports tag-based access control via request tags. For more information, see the
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
 * Dev
 */
CreateDiskResponse * LightsailClient::createDisk(const CreateDiskRequest &request)
{
    return qobject_cast<CreateDiskResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateDiskFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a block storage disk from a disk snapshot that can be attached to a Lightsail instance in the same Availability
 * Zone (e.g., <code>us-east-2a</code>). The disk is created in the regional endpoint that you send the HTTP request to.
 * For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
 * and Availability Zones in
 *
 * Lightsail</a>>
 *
 * The <code>create disk from snapshot</code> operation supports tag-based access control via request tags and resource
 * tags applied to the resource identified by diskSnapshotName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateDiskFromSnapshotResponse * LightsailClient::createDiskFromSnapshot(const CreateDiskFromSnapshotRequest &request)
{
    return qobject_cast<CreateDiskFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateDiskSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * pending>
 *
 * The <code>create disk snapshot</code> operation supports tag-based access control via request tags. For more
 * information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateDiskSnapshotResponse * LightsailClient::createDiskSnapshot(const CreateDiskSnapshotRequest &request)
{
    return qobject_cast<CreateDiskSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a domain resource for the specified domain (e.g.,
 *
 * example.com)>
 *
 * The <code>create domain</code> operation supports tag-based access control via request tags. For more information, see
 * the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateDomainResponse * LightsailClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateDomainEntryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one of the following entry records associated with the domain: A record, CNAME record, TXT record, or MX
 *
 * record>
 *
 * The <code>create domain entry</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by domainName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateDomainEntryResponse * LightsailClient::createDomainEntry(const CreateDomainEntryRequest &request)
{
    return qobject_cast<CreateDomainEntryResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateInstanceSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of a specific virtual private server, or <i>instance</i>. You can use a snapshot to create a new
 * instance that is based on that
 *
 * snapshot>
 *
 * The <code>create instance snapshot</code> operation supports tag-based access control via request tags. For more
 * information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateInstanceSnapshotResponse * LightsailClient::createInstanceSnapshot(const CreateInstanceSnapshotRequest &request)
{
    return qobject_cast<CreateInstanceSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more Amazon Lightsail virtual private servers, or <i>instances</i>. Create instances using active
 * blueprints. Inactive blueprints are listed to support customers with existing instances but are not necessarily
 * available for launch of new instances. Blueprints are marked inactive when they become outdated due to operating system
 * updates or new application releases. Use the get blueprints operation to return a list of available
 *
 * blueprints>
 *
 * The <code>create instances</code> operation supports tag-based access control via request tags. For more information,
 * see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateInstancesResponse * LightsailClient::createInstances(const CreateInstancesRequest &request)
{
    return qobject_cast<CreateInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateInstancesFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uses a specific snapshot as a blueprint for creating one or more new instances that are based on that identical
 *
 * configuration>
 *
 * The <code>create instances from snapshot</code> operation supports tag-based access control via request tags and
 * resource tags applied to the resource identified by instanceSnapshotName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateInstancesFromSnapshotResponse * LightsailClient::createInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest &request)
{
    return qobject_cast<CreateInstancesFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an SSH key
 *
 * pair>
 *
 * The <code>create key pair</code> operation supports tag-based access control via request tags. For more information, see
 * the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateKeyPairResponse * LightsailClient::createKeyPair(const CreateKeyPairRequest &request)
{
    return qobject_cast<CreateKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Lightsail load balancer. To learn more about deciding whether to load balance your application, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/how-to/article/configure-lightsail-instances-for-load-balancing">Configure
 * your Lightsail instances for load balancing</a>. You can create up to 5 load balancers per AWS Region in your
 *
 * account>
 *
 * When you create a load balancer, you can specify a unique name and port settings. To change additional load balancer
 * settings, use the <code>UpdateLoadBalancerAttribute</code>
 *
 * operation>
 *
 * The <code>create load balancer</code> operation supports tag-based access control via request tags. For more
 * information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateLoadBalancerResponse * LightsailClient::createLoadBalancer(const CreateLoadBalancerRequest &request)
{
    return qobject_cast<CreateLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateLoadBalancerTlsCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Lightsail load balancer TLS
 *
 * certificate>
 *
 * TLS is just an updated, more secure version of Secure Socket Layer
 *
 * (SSL)>
 *
 * The <code>create load balancer tls certificate</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by loadBalancerName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateLoadBalancerTlsCertificateResponse * LightsailClient::createLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest &request)
{
    return qobject_cast<CreateLoadBalancerTlsCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateRelationalDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new database in Amazon
 *
 * Lightsail>
 *
 * The <code>create relational database</code> operation supports tag-based access control via request tags. For more
 * information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateRelationalDatabaseResponse * LightsailClient::createRelationalDatabase(const CreateRelationalDatabaseRequest &request)
{
    return qobject_cast<CreateRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateRelationalDatabaseFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new database from an existing database snapshot in Amazon
 *
 * Lightsail>
 *
 * You can create a new database from a snapshot in if something goes wrong with your original database, or to change it to
 * a different plan, such as a high availability or standard
 *
 * plan>
 *
 * The <code>create relational database from snapshot</code> operation supports tag-based access control via request tags
 * and resource tags applied to the resource identified by relationalDatabaseSnapshotName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateRelationalDatabaseFromSnapshotResponse * LightsailClient::createRelationalDatabaseFromSnapshot(const CreateRelationalDatabaseFromSnapshotRequest &request)
{
    return qobject_cast<CreateRelationalDatabaseFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateRelationalDatabaseSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of your database in Amazon Lightsail. You can use snapshots for backups, to make copies of a
 * database, and to save data before deleting a
 *
 * database>
 *
 * The <code>create relational database snapshot</code> operation supports tag-based access control via request tags. For
 * more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
CreateRelationalDatabaseSnapshotResponse * LightsailClient::createRelationalDatabaseSnapshot(const CreateRelationalDatabaseSnapshotRequest &request)
{
    return qobject_cast<CreateRelationalDatabaseSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteDiskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified block storage disk. The disk must be in the <code>available</code> state (not attached to a
 * Lightsail
 *
 * instance)> <note>
 *
 * The disk may remain in the <code>deleting</code> state for several
 *
 * minutes> </note>
 *
 * The <code>delete disk</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by diskName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteDiskResponse * LightsailClient::deleteDisk(const DeleteDiskRequest &request)
{
    return qobject_cast<DeleteDiskResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteDiskSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified disk
 *
 * snapshot>
 *
 * When you make periodic snapshots of a disk, the snapshots are incremental, and only the blocks on the device that have
 * changed since your last snapshot are saved in the new snapshot. When you delete a snapshot, only the data not needed for
 * any other snapshot is removed. So regardless of which prior snapshots have been deleted, all active snapshots will have
 * access to all the information needed to restore the
 *
 * disk>
 *
 * The <code>delete disk snapshot</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by diskSnapshotName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteDiskSnapshotResponse * LightsailClient::deleteDiskSnapshot(const DeleteDiskSnapshotRequest &request)
{
    return qobject_cast<DeleteDiskSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified domain recordset and all of its domain
 *
 * records>
 *
 * The <code>delete domain</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by domainName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteDomainResponse * LightsailClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteDomainEntryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific domain
 *
 * entry>
 *
 * The <code>delete domain entry</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by domainName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteDomainEntryResponse * LightsailClient::deleteDomainEntry(const DeleteDomainEntryRequest &request)
{
    return qobject_cast<DeleteDomainEntryResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific Amazon Lightsail virtual private server, or
 *
 * <i>instance</i>>
 *
 * The <code>delete instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteInstanceResponse * LightsailClient::deleteInstance(const DeleteInstanceRequest &request)
{
    return qobject_cast<DeleteInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteInstanceSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific snapshot of a virtual private server (or
 *
 * <i>instance</i>)>
 *
 * The <code>delete instance snapshot</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by instanceSnapshotName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteInstanceSnapshotResponse * LightsailClient::deleteInstanceSnapshot(const DeleteInstanceSnapshotRequest &request)
{
    return qobject_cast<DeleteInstanceSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific SSH key
 *
 * pair>
 *
 * The <code>delete key pair</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by keyPairName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteKeyPairResponse * LightsailClient::deleteKeyPair(const DeleteKeyPairRequest &request)
{
    return qobject_cast<DeleteKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Lightsail load balancer and all its associated SSL/TLS certificates. Once the load balancer is deleted, you
 * will need to create a new load balancer, create a new certificate, and verify domain ownership
 *
 * again>
 *
 * The <code>delete load balancer</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by loadBalancerName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteLoadBalancerResponse * LightsailClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    return qobject_cast<DeleteLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteLoadBalancerTlsCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an SSL/TLS certificate associated with a Lightsail load
 *
 * balancer>
 *
 * The <code>delete load balancer tls certificate</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by loadBalancerName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteLoadBalancerTlsCertificateResponse * LightsailClient::deleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest &request)
{
    return qobject_cast<DeleteLoadBalancerTlsCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteRelationalDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a database in Amazon
 *
 * Lightsail>
 *
 * The <code>delete relational database</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteRelationalDatabaseResponse * LightsailClient::deleteRelationalDatabase(const DeleteRelationalDatabaseRequest &request)
{
    return qobject_cast<DeleteRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteRelationalDatabaseSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a database snapshot in Amazon
 *
 * Lightsail>
 *
 * The <code>delete relational database snapshot</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DeleteRelationalDatabaseSnapshotResponse * LightsailClient::deleteRelationalDatabaseSnapshot(const DeleteRelationalDatabaseSnapshotRequest &request)
{
    return qobject_cast<DeleteRelationalDatabaseSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DetachDiskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a stopped block storage disk from a Lightsail instance. Make sure to unmount any file systems on the device
 * within your operating system before stopping the instance and detaching the
 *
 * disk>
 *
 * The <code>detach disk</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by diskName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DetachDiskResponse * LightsailClient::detachDisk(const DetachDiskRequest &request)
{
    return qobject_cast<DetachDiskResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DetachInstancesFromLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches the specified instances from a Lightsail load
 *
 * balancer>
 *
 * This operation waits until the instances are no longer needed before they are detached from the load
 *
 * balancer>
 *
 * The <code>detach instances from load balancer</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by loadBalancerName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
DetachInstancesFromLoadBalancerResponse * LightsailClient::detachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest &request)
{
    return qobject_cast<DetachInstancesFromLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DetachStaticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a static IP from the Amazon Lightsail instance to which it is
 */
DetachStaticIpResponse * LightsailClient::detachStaticIp(const DetachStaticIpRequest &request)
{
    return qobject_cast<DetachStaticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DownloadDefaultKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Downloads the default SSH key pair from the user's
 */
DownloadDefaultKeyPairResponse * LightsailClient::downloadDefaultKeyPair(const DownloadDefaultKeyPairRequest &request)
{
    return qobject_cast<DownloadDefaultKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * ExportSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a Amazon Lightsail instance or block storage disk snapshot to Amazon Elastic Compute Cloud (Amazon EC2). This
 * operation results in an export snapshot record that can be used with the <code>create cloud formation stack</code>
 * operation to create new Amazon EC2
 *
 * instances>
 *
 * Exported instance snapshots appear in Amazon EC2 as Amazon Machine Images (AMIs), and the instance system disk appears
 * as an Amazon Elastic Block Store (Amazon EBS) volume. Exported disk snapshots appear in Amazon EC2 as Amazon EBS
 * volumes. Snapshots are exported to the same Amazon Web Services Region in Amazon EC2 as the source Lightsail
 *
 * snapshot> <p/>
 *
 * The <code>export snapshot</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by sourceSnapshotName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 *
 * Guide</a>> <note>
 *
 * Use the <code>get instance snapshots</code> or <code>get disk snapshots</code> operations to get a list of snapshots
 * that you can export to Amazon
 */
ExportSnapshotResponse * LightsailClient::exportSnapshot(const ExportSnapshotRequest &request)
{
    return qobject_cast<ExportSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetActiveNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the names of all active (not deleted)
 */
GetActiveNamesResponse * LightsailClient::getActiveNames(const GetActiveNamesRequest &request)
{
    return qobject_cast<GetActiveNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBlueprintsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of available instance images, or <i>blueprints</i>. You can use a blueprint to create a new virtual
 * private server already running a specific operating system, as well as a preinstalled app or development stack. The
 * software each instance is running depends on the blueprint image you
 */
GetBlueprintsResponse * LightsailClient::getBlueprints(const GetBlueprintsRequest &request)
{
    return qobject_cast<GetBlueprintsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of bundles that are available for purchase. A bundle describes the specs for your virtual private
 * server (or
 */
GetBundlesResponse * LightsailClient::getBundles(const GetBundlesRequest &request)
{
    return qobject_cast<GetBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetCloudFormationStackRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the CloudFormation stack record created as a result of the <code>create cloud formation stack</code>
 *
 * operation>
 *
 * An AWS CloudFormation stack is used to create a new Amazon EC2 instance from an exported Lightsail
 */
GetCloudFormationStackRecordsResponse * LightsailClient::getCloudFormationStackRecords(const GetCloudFormationStackRecordsRequest &request)
{
    return qobject_cast<GetCloudFormationStackRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDiskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific block storage
 */
GetDiskResponse * LightsailClient::getDisk(const GetDiskRequest &request)
{
    return qobject_cast<GetDiskResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDiskSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific block storage disk
 */
GetDiskSnapshotResponse * LightsailClient::getDiskSnapshot(const GetDiskSnapshotRequest &request)
{
    return qobject_cast<GetDiskSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDiskSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all block storage disk snapshots in your AWS account and
 *
 * region>
 *
 * If you are describing a long list of disk snapshots, you can paginate the output to make the list more manageable. You
 * can use the pageToken and nextPageToken values to retrieve the next items in the
 */
GetDiskSnapshotsResponse * LightsailClient::getDiskSnapshots(const GetDiskSnapshotsRequest &request)
{
    return qobject_cast<GetDiskSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDisksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all block storage disks in your AWS account and
 *
 * region>
 *
 * If you are describing a long list of disks, you can paginate the output to make the list more manageable. You can use
 * the pageToken and nextPageToken values to retrieve the next items in the
 */
GetDisksResponse * LightsailClient::getDisks(const GetDisksRequest &request)
{
    return qobject_cast<GetDisksResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific domain
 */
GetDomainResponse * LightsailClient::getDomain(const GetDomainRequest &request)
{
    return qobject_cast<GetDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all domains in the user's
 */
GetDomainsResponse * LightsailClient::getDomains(const GetDomainsRequest &request)
{
    return qobject_cast<GetDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetExportSnapshotRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the export snapshot record created as a result of the <code>export snapshot</code>
 *
 * operation>
 *
 * An export snapshot record can be used to create a new Amazon EC2 instance and its related resources with the
 * <code>create cloud formation stack</code>
 */
GetExportSnapshotRecordsResponse * LightsailClient::getExportSnapshotRecords(const GetExportSnapshotRecordsRequest &request)
{
    return qobject_cast<GetExportSnapshotRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific Amazon Lightsail instance, which is a virtual private
 */
GetInstanceResponse * LightsailClient::getInstance(const GetInstanceRequest &request)
{
    return qobject_cast<GetInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstanceAccessDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns temporary SSH keys you can use to connect to a specific virtual private server, or
 *
 * <i>instance</i>>
 *
 * The <code>get instance access details</code> operation supports tag-based access control via resource tags applied to
 * the resource identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
GetInstanceAccessDetailsResponse * LightsailClient::getInstanceAccessDetails(const GetInstanceAccessDetailsRequest &request)
{
    return qobject_cast<GetInstanceAccessDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstanceMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data points for the specified Amazon Lightsail instance metric, given an instance
 */
GetInstanceMetricDataResponse * LightsailClient::getInstanceMetricData(const GetInstanceMetricDataRequest &request)
{
    return qobject_cast<GetInstanceMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstancePortStatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the port states for a specific virtual private server, or
 */
GetInstancePortStatesResponse * LightsailClient::getInstancePortStates(const GetInstancePortStatesRequest &request)
{
    return qobject_cast<GetInstancePortStatesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstanceSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific instance
 */
GetInstanceSnapshotResponse * LightsailClient::getInstanceSnapshot(const GetInstanceSnapshotRequest &request)
{
    return qobject_cast<GetInstanceSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstanceSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all instance snapshots for the user's
 */
GetInstanceSnapshotsResponse * LightsailClient::getInstanceSnapshots(const GetInstanceSnapshotsRequest &request)
{
    return qobject_cast<GetInstanceSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstanceStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the state of a specific instance. Works on one instance at a
 */
GetInstanceStateResponse * LightsailClient::getInstanceState(const GetInstanceStateRequest &request)
{
    return qobject_cast<GetInstanceStateResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all Amazon Lightsail virtual private servers, or
 */
GetInstancesResponse * LightsailClient::getInstances(const GetInstancesRequest &request)
{
    return qobject_cast<GetInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific key
 */
GetKeyPairResponse * LightsailClient::getKeyPair(const GetKeyPairRequest &request)
{
    return qobject_cast<GetKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetKeyPairsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all key pairs in the user's
 */
GetKeyPairsResponse * LightsailClient::getKeyPairs(const GetKeyPairsRequest &request)
{
    return qobject_cast<GetKeyPairsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified Lightsail load
 */
GetLoadBalancerResponse * LightsailClient::getLoadBalancer(const GetLoadBalancerRequest &request)
{
    return qobject_cast<GetLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetLoadBalancerMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about health metrics for your Lightsail load
 */
GetLoadBalancerMetricDataResponse * LightsailClient::getLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest &request)
{
    return qobject_cast<GetLoadBalancerMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetLoadBalancerTlsCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<GetLoadBalancerTlsCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all load balancers in an
 *
 * account>
 *
 * If you are describing a long list of load balancers, you can paginate the output to make the list more manageable. You
 * can use the pageToken and nextPageToken values to retrieve the next items in the
 */
GetLoadBalancersResponse * LightsailClient::getLoadBalancers(const GetLoadBalancersRequest &request)
{
    return qobject_cast<GetLoadBalancersResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific operation. Operations include events such as when you create an instance, allocate
 * a static IP, attach a static IP, and so
 */
GetOperationResponse * LightsailClient::getOperation(const GetOperationRequest &request)
{
    return qobject_cast<GetOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all
 *
 * operations>
 *
 * Results are returned from oldest to newest, up to a maximum of 200. Results can be paged by making each subsequent call
 * to <code>GetOperations</code> use the maximum (last) <code>statusChangedAt</code> value from the previous
 */
GetOperationsResponse * LightsailClient::getOperations(const GetOperationsRequest &request)
{
    return qobject_cast<GetOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetOperationsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets operations for a specific resource (e.g., an instance or a static
 */
GetOperationsForResourceResponse * LightsailClient::getOperationsForResource(const GetOperationsForResourceRequest &request)
{
    return qobject_cast<GetOperationsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRegionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all valid regions for Amazon Lightsail. Use the <code>include availability zones</code> parameter to
 * also return the Availability Zones in a
 */
GetRegionsResponse * LightsailClient::getRegions(const GetRegionsRequest &request)
{
    return qobject_cast<GetRegionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific database in Amazon
 */
GetRelationalDatabaseResponse * LightsailClient::getRelationalDatabase(const GetRelationalDatabaseRequest &request)
{
    return qobject_cast<GetRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseBlueprintsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of available database blueprints in Amazon Lightsail. A blueprint describes the major engine version of a
 *
 * database>
 *
 * You can use a blueprint ID to create a new database that runs a specific database
 */
GetRelationalDatabaseBlueprintsResponse * LightsailClient::getRelationalDatabaseBlueprints(const GetRelationalDatabaseBlueprintsRequest &request)
{
    return qobject_cast<GetRelationalDatabaseBlueprintsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of bundles that are available in Amazon Lightsail. A bundle describes the performance specifications
 * for a
 *
 * database>
 *
 * You can use a bundle ID to create a new database with explicit performance
 */
GetRelationalDatabaseBundlesResponse * LightsailClient::getRelationalDatabaseBundles(const GetRelationalDatabaseBundlesRequest &request)
{
    return qobject_cast<GetRelationalDatabaseBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of events for a specific database in Amazon
 */
GetRelationalDatabaseEventsResponse * LightsailClient::getRelationalDatabaseEvents(const GetRelationalDatabaseEventsRequest &request)
{
    return qobject_cast<GetRelationalDatabaseEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseLogEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of log events for a database in Amazon
 */
GetRelationalDatabaseLogEventsResponse * LightsailClient::getRelationalDatabaseLogEvents(const GetRelationalDatabaseLogEventsRequest &request)
{
    return qobject_cast<GetRelationalDatabaseLogEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseLogStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of available log streams for a specific database in Amazon
 */
GetRelationalDatabaseLogStreamsResponse * LightsailClient::getRelationalDatabaseLogStreams(const GetRelationalDatabaseLogStreamsRequest &request)
{
    return qobject_cast<GetRelationalDatabaseLogStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseMasterUserPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current, previous, or pending versions of the master user password for a Lightsail
 *
 * database>
 *
 * The <code>asdf</code> operation GetRelationalDatabaseMasterUserPassword supports tag-based access control via resource
 * tags applied to the resource identified by
 */
GetRelationalDatabaseMasterUserPasswordResponse * LightsailClient::getRelationalDatabaseMasterUserPassword(const GetRelationalDatabaseMasterUserPasswordRequest &request)
{
    return qobject_cast<GetRelationalDatabaseMasterUserPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data points of the specified metric for a database in Amazon
 */
GetRelationalDatabaseMetricDataResponse * LightsailClient::getRelationalDatabaseMetricData(const GetRelationalDatabaseMetricDataRequest &request)
{
    return qobject_cast<GetRelationalDatabaseMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all of the runtime parameters offered by the underlying database software, or engine, for a specific database in
 * Amazon
 *
 * Lightsail>
 *
 * In addition to the parameter names and values, this operation returns other information about each parameter. This
 * information includes whether changes require a reboot, whether the parameter is modifiable, the allowed values, and the
 * data
 */
GetRelationalDatabaseParametersResponse * LightsailClient::getRelationalDatabaseParameters(const GetRelationalDatabaseParametersRequest &request)
{
    return qobject_cast<GetRelationalDatabaseParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific database snapshot in Amazon
 */
GetRelationalDatabaseSnapshotResponse * LightsailClient::getRelationalDatabaseSnapshot(const GetRelationalDatabaseSnapshotRequest &request)
{
    return qobject_cast<GetRelationalDatabaseSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabaseSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all of your database snapshots in Amazon
 */
GetRelationalDatabaseSnapshotsResponse * LightsailClient::getRelationalDatabaseSnapshots(const GetRelationalDatabaseSnapshotsRequest &request)
{
    return qobject_cast<GetRelationalDatabaseSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetRelationalDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all of your databases in Amazon
 */
GetRelationalDatabasesResponse * LightsailClient::getRelationalDatabases(const GetRelationalDatabasesRequest &request)
{
    return qobject_cast<GetRelationalDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetStaticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific static
 */
GetStaticIpResponse * LightsailClient::getStaticIp(const GetStaticIpRequest &request)
{
    return qobject_cast<GetStaticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetStaticIpsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all static IPs in the user's
 */
GetStaticIpsResponse * LightsailClient::getStaticIps(const GetStaticIpsRequest &request)
{
    return qobject_cast<GetStaticIpsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * ImportKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a public SSH key from a specific key
 */
ImportKeyPairResponse * LightsailClient::importKeyPair(const ImportKeyPairRequest &request)
{
    return qobject_cast<ImportKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * IsVpcPeeredResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a Boolean value indicating whether your Lightsail VPC is
 */
IsVpcPeeredResponse * LightsailClient::isVpcPeered(const IsVpcPeeredRequest &request)
{
    return qobject_cast<IsVpcPeeredResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * OpenInstancePublicPortsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds public ports to an Amazon Lightsail
 *
 * instance>
 *
 * The <code>open instance public ports</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
OpenInstancePublicPortsResponse * LightsailClient::openInstancePublicPorts(const OpenInstancePublicPortsRequest &request)
{
    return qobject_cast<OpenInstancePublicPortsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * PeerVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tries to peer the Lightsail VPC with the user's default
 */
PeerVpcResponse * LightsailClient::peerVpc(const PeerVpcRequest &request)
{
    return qobject_cast<PeerVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * PutInstancePublicPortsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the specified open ports for an Amazon Lightsail instance, and closes all ports for every protocol not included in
 * the current
 *
 * request>
 *
 * The <code>put instance public ports</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
PutInstancePublicPortsResponse * LightsailClient::putInstancePublicPorts(const PutInstancePublicPortsRequest &request)
{
    return qobject_cast<PutInstancePublicPortsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * RebootInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restarts a specific instance. When your Amazon Lightsail instance is finished rebooting, Lightsail assigns a new public
 * IP address. To use the same IP address after restarting, create a static IP address and attach it to the
 *
 * instance>
 *
 * The <code>reboot instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
RebootInstanceResponse * LightsailClient::rebootInstance(const RebootInstanceRequest &request)
{
    return qobject_cast<RebootInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * RebootRelationalDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restarts a specific database in Amazon
 *
 * Lightsail>
 *
 * The <code>reboot relational database</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
RebootRelationalDatabaseResponse * LightsailClient::rebootRelationalDatabase(const RebootRelationalDatabaseRequest &request)
{
    return qobject_cast<RebootRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * ReleaseStaticIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific static IP from your
 */
ReleaseStaticIpResponse * LightsailClient::releaseStaticIp(const ReleaseStaticIpRequest &request)
{
    return qobject_cast<ReleaseStaticIpResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * StartInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a specific Amazon Lightsail instance from a stopped state. To restart an instance, use the reboot instance
 *
 * operation>
 *
 * The <code>start instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
StartInstanceResponse * LightsailClient::startInstance(const StartInstanceRequest &request)
{
    return qobject_cast<StartInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * StartRelationalDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a specific database from a stopped state in Amazon Lightsail. To restart a database, use the <code>reboot
 * relational database</code>
 *
 * operation>
 *
 * The <code>start relational database</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
StartRelationalDatabaseResponse * LightsailClient::startRelationalDatabase(const StartRelationalDatabaseRequest &request)
{
    return qobject_cast<StartRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * StopInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a specific Amazon Lightsail instance that is currently
 *
 * running>
 *
 * The <code>stop instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by instanceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
StopInstanceResponse * LightsailClient::stopInstance(const StopInstanceRequest &request)
{
    return qobject_cast<StopInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * StopRelationalDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a specific database that is currently running in Amazon
 *
 * Lightsail>
 *
 * The <code>stop relational database</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
StopRelationalDatabaseResponse * LightsailClient::stopRelationalDatabase(const StopRelationalDatabaseRequest &request)
{
    return qobject_cast<StopRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to the specified Amazon Lightsail resource. Each resource can have a maximum of 50 tags. Each tag
 * consists of a key and an optional value. Tag keys must be unique per resource. For more information about tags, see the
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail Dev
 *
 * Guide</a>>
 *
 * The <code>tag resource</code> operation supports tag-based access control via request tags and resource tags applied to
 * the resource identified by resourceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
TagResourceResponse * LightsailClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UnpeerVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to unpeer the Lightsail VPC from the user's default
 */
UnpeerVpcResponse * LightsailClient::unpeerVpc(const UnpeerVpcRequest &request)
{
    return qobject_cast<UnpeerVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified set of tag keys and their values from the specified Amazon Lightsail
 *
 * resource>
 *
 * The <code>untag resource</code> operation supports tag-based access control via request tags and resource tags applied
 * to the resource identified by resourceName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
UntagResourceResponse * LightsailClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateDomainEntryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a domain recordset after it is
 *
 * created>
 *
 * The <code>update domain entry</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by domainName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
UpdateDomainEntryResponse * LightsailClient::updateDomainEntry(const UpdateDomainEntryRequest &request)
{
    return qobject_cast<UpdateDomainEntryResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateLoadBalancerAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified attribute for a load balancer. You can only update one attribute at a
 *
 * time>
 *
 * The <code>update load balancer attribute</code> operation supports tag-based access control via resource tags applied to
 * the resource identified by loadBalancerName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
UpdateLoadBalancerAttributeResponse * LightsailClient::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request)
{
    return qobject_cast<UpdateLoadBalancerAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateRelationalDatabaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the update of one or more attributes of a database in Amazon
 *
 * Lightsail>
 *
 * Updates are applied immediately, or in cases where the updates could result in an outage, are applied during the
 * database's predefined maintenance
 *
 * window>
 *
 * The <code>update relational database</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
UpdateRelationalDatabaseResponse * LightsailClient::updateRelationalDatabase(const UpdateRelationalDatabaseRequest &request)
{
    return qobject_cast<UpdateRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateRelationalDatabaseParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the update of one or more parameters of a database in Amazon
 *
 * Lightsail>
 *
 * Parameter updates don't cause outages; therefore, their application is not subject to the preferred maintenance window.
 * However, there are two ways in which paramater updates are applied: <code>dynamic</code> or <code>pending-reboot</code>.
 * Parameters marked with a <code>dynamic</code> apply type are applied immediately. Parameters marked with a
 * <code>pending-reboot</code> apply type are applied only after the database is rebooted using the <code>reboot relational
 * database</code>
 *
 * operation>
 *
 * The <code>update relational database parameters</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail Dev
 */
UpdateRelationalDatabaseParametersResponse * LightsailClient::updateRelationalDatabaseParameters(const UpdateRelationalDatabaseParametersRequest &request)
{
    return qobject_cast<UpdateRelationalDatabaseParametersResponse *>(send(request));
}

/*!
 * \class QtAws::Lightsail::LightsailClientPrivate
 * \brief The LightsailClientPrivate class provides private implementation for LightsailClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a LightsailClientPrivate object with public implementation \a q.
 */
LightsailClientPrivate::LightsailClientPrivate(LightsailClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Lightsail
} // namespace QtAws
