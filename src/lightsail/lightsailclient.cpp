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

#include "lightsailclient.h"
#include "lightsailclient_p.h"

#include "core/awssignaturev4.h"
#include "allocatestaticiprequest.h"
#include "allocatestaticipresponse.h"
#include "attachcertificatetodistributionrequest.h"
#include "attachcertificatetodistributionresponse.h"
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
#include "createbucketrequest.h"
#include "createbucketresponse.h"
#include "createbucketaccesskeyrequest.h"
#include "createbucketaccesskeyresponse.h"
#include "createcertificaterequest.h"
#include "createcertificateresponse.h"
#include "createcloudformationstackrequest.h"
#include "createcloudformationstackresponse.h"
#include "createcontactmethodrequest.h"
#include "createcontactmethodresponse.h"
#include "createcontainerservicerequest.h"
#include "createcontainerserviceresponse.h"
#include "createcontainerservicedeploymentrequest.h"
#include "createcontainerservicedeploymentresponse.h"
#include "createcontainerserviceregistryloginrequest.h"
#include "createcontainerserviceregistryloginresponse.h"
#include "creatediskrequest.h"
#include "creatediskresponse.h"
#include "creatediskfromsnapshotrequest.h"
#include "creatediskfromsnapshotresponse.h"
#include "createdisksnapshotrequest.h"
#include "createdisksnapshotresponse.h"
#include "createdistributionrequest.h"
#include "createdistributionresponse.h"
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
#include "deletealarmrequest.h"
#include "deletealarmresponse.h"
#include "deleteautosnapshotrequest.h"
#include "deleteautosnapshotresponse.h"
#include "deletebucketrequest.h"
#include "deletebucketresponse.h"
#include "deletebucketaccesskeyrequest.h"
#include "deletebucketaccesskeyresponse.h"
#include "deletecertificaterequest.h"
#include "deletecertificateresponse.h"
#include "deletecontactmethodrequest.h"
#include "deletecontactmethodresponse.h"
#include "deletecontainerimagerequest.h"
#include "deletecontainerimageresponse.h"
#include "deletecontainerservicerequest.h"
#include "deletecontainerserviceresponse.h"
#include "deletediskrequest.h"
#include "deletediskresponse.h"
#include "deletedisksnapshotrequest.h"
#include "deletedisksnapshotresponse.h"
#include "deletedistributionrequest.h"
#include "deletedistributionresponse.h"
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
#include "deleteknownhostkeysrequest.h"
#include "deleteknownhostkeysresponse.h"
#include "deleteloadbalancerrequest.h"
#include "deleteloadbalancerresponse.h"
#include "deleteloadbalancertlscertificaterequest.h"
#include "deleteloadbalancertlscertificateresponse.h"
#include "deleterelationaldatabaserequest.h"
#include "deleterelationaldatabaseresponse.h"
#include "deleterelationaldatabasesnapshotrequest.h"
#include "deleterelationaldatabasesnapshotresponse.h"
#include "detachcertificatefromdistributionrequest.h"
#include "detachcertificatefromdistributionresponse.h"
#include "detachdiskrequest.h"
#include "detachdiskresponse.h"
#include "detachinstancesfromloadbalancerrequest.h"
#include "detachinstancesfromloadbalancerresponse.h"
#include "detachstaticiprequest.h"
#include "detachstaticipresponse.h"
#include "disableaddonrequest.h"
#include "disableaddonresponse.h"
#include "downloaddefaultkeypairrequest.h"
#include "downloaddefaultkeypairresponse.h"
#include "enableaddonrequest.h"
#include "enableaddonresponse.h"
#include "exportsnapshotrequest.h"
#include "exportsnapshotresponse.h"
#include "getactivenamesrequest.h"
#include "getactivenamesresponse.h"
#include "getalarmsrequest.h"
#include "getalarmsresponse.h"
#include "getautosnapshotsrequest.h"
#include "getautosnapshotsresponse.h"
#include "getblueprintsrequest.h"
#include "getblueprintsresponse.h"
#include "getbucketaccesskeysrequest.h"
#include "getbucketaccesskeysresponse.h"
#include "getbucketbundlesrequest.h"
#include "getbucketbundlesresponse.h"
#include "getbucketmetricdatarequest.h"
#include "getbucketmetricdataresponse.h"
#include "getbucketsrequest.h"
#include "getbucketsresponse.h"
#include "getbundlesrequest.h"
#include "getbundlesresponse.h"
#include "getcertificatesrequest.h"
#include "getcertificatesresponse.h"
#include "getcloudformationstackrecordsrequest.h"
#include "getcloudformationstackrecordsresponse.h"
#include "getcontactmethodsrequest.h"
#include "getcontactmethodsresponse.h"
#include "getcontainerapimetadatarequest.h"
#include "getcontainerapimetadataresponse.h"
#include "getcontainerimagesrequest.h"
#include "getcontainerimagesresponse.h"
#include "getcontainerlogrequest.h"
#include "getcontainerlogresponse.h"
#include "getcontainerservicedeploymentsrequest.h"
#include "getcontainerservicedeploymentsresponse.h"
#include "getcontainerservicemetricdatarequest.h"
#include "getcontainerservicemetricdataresponse.h"
#include "getcontainerservicepowersrequest.h"
#include "getcontainerservicepowersresponse.h"
#include "getcontainerservicesrequest.h"
#include "getcontainerservicesresponse.h"
#include "getdiskrequest.h"
#include "getdiskresponse.h"
#include "getdisksnapshotrequest.h"
#include "getdisksnapshotresponse.h"
#include "getdisksnapshotsrequest.h"
#include "getdisksnapshotsresponse.h"
#include "getdisksrequest.h"
#include "getdisksresponse.h"
#include "getdistributionbundlesrequest.h"
#include "getdistributionbundlesresponse.h"
#include "getdistributionlatestcacheresetrequest.h"
#include "getdistributionlatestcacheresetresponse.h"
#include "getdistributionmetricdatarequest.h"
#include "getdistributionmetricdataresponse.h"
#include "getdistributionsrequest.h"
#include "getdistributionsresponse.h"
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
#include "getloadbalancertlspoliciesrequest.h"
#include "getloadbalancertlspoliciesresponse.h"
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
#include "putalarmrequest.h"
#include "putalarmresponse.h"
#include "putinstancepublicportsrequest.h"
#include "putinstancepublicportsresponse.h"
#include "rebootinstancerequest.h"
#include "rebootinstanceresponse.h"
#include "rebootrelationaldatabaserequest.h"
#include "rebootrelationaldatabaseresponse.h"
#include "registercontainerimagerequest.h"
#include "registercontainerimageresponse.h"
#include "releasestaticiprequest.h"
#include "releasestaticipresponse.h"
#include "resetdistributioncacherequest.h"
#include "resetdistributioncacheresponse.h"
#include "sendcontactmethodverificationrequest.h"
#include "sendcontactmethodverificationresponse.h"
#include "setipaddresstyperequest.h"
#include "setipaddresstyperesponse.h"
#include "setresourceaccessforbucketrequest.h"
#include "setresourceaccessforbucketresponse.h"
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
#include "testalarmrequest.h"
#include "testalarmresponse.h"
#include "unpeervpcrequest.h"
#include "unpeervpcresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatebucketrequest.h"
#include "updatebucketresponse.h"
#include "updatebucketbundlerequest.h"
#include "updatebucketbundleresponse.h"
#include "updatecontainerservicerequest.h"
#include "updatecontainerserviceresponse.h"
#include "updatedistributionrequest.h"
#include "updatedistributionresponse.h"
#include "updatedistributionbundlerequest.h"
#include "updatedistributionbundleresponse.h"
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
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
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
 * AttachCertificateToDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an SSL/TLS certificate to your Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * After the certificate is attached, your distribution accepts HTTPS traffic for all of the domains that are associated
 * with the
 *
 * certificate>
 *
 * Use the <code>CreateCertificate</code> action to create a certificate that you can attach to your
 *
 * distribution> <b>
 *
 * Only certificates created in the <code>us-east-1</code> Amazon Web Services Region can be attached to Lightsail
 * distributions. Lightsail distributions are global resources that can reference an origin in any Amazon Web Services
 * Region, and distribute its content globally. However, all distributions are located in the <code>us-east-1</code>
 */
AttachCertificateToDistributionResponse * LightsailClient::attachCertificateToDistribution(const AttachCertificateToDistributionRequest &request)
{
    return qobject_cast<AttachCertificateToDistributionResponse *>(send(request));
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
 * identified by <code>disk name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * to the resource identified by <code>load balancer name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
 * Developer
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
 * rotate the certificates on your account. Use the <code>AttachLoadBalancerTlsCertificate</code> action with the
 * non-attached certificate, and it will replace the existing one and become the attached
 *
 * certificate>
 *
 * The <code>AttachLoadBalancerTlsCertificate</code> operation supports tag-based access control via resource tags applied
 * to the resource identified by <code>load balancer name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Closes ports for a specific Amazon Lightsail
 *
 * instance>
 *
 * The <code>CloseInstancePublicPorts</code> action supports tag-based access control via resource tags applied to the
 * resource identified by <code>instanceName</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Copies a manual snapshot of an instance or disk as another manual snapshot, or copies an automatic snapshot of an
 * instance or disk as a manual snapshot. This operation can also be used to copy a manual or automatic snapshot of an
 * instance or a disk from one Amazon Web Services Region to another in Amazon
 *
 * Lightsail>
 *
 * When copying a <i>manual snapshot</i>, be sure to define the <code>source region</code>, <code>source snapshot
 * name</code>, and <code>target snapshot name</code>
 *
 * parameters>
 *
 * When copying an <i>automatic snapshot</i>, be sure to define the <code>source region</code>, <code>source resource
 * name</code>, <code>target snapshot name</code>, and either the <code>restore date</code> or the <code>use latest
 * restorable auto snapshot</code>
 */
CopySnapshotResponse * LightsailClient::copySnapshot(const CopySnapshotRequest &request)
{
    return qobject_cast<CopySnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Lightsail
 *
 * bucket>
 *
 * A bucket is a cloud storage resource available in the Lightsail object storage service. Use buckets to store objects
 * such as data and its descriptive metadata. For more information about buckets, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/buckets-in-amazon-lightsail">Buckets in Amazon
 * Lightsail</a> in the <i>Amazon Lightsail Developer
 */
CreateBucketResponse * LightsailClient::createBucket(const CreateBucketRequest &request)
{
    return qobject_cast<CreateBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateBucketAccessKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new access key for the specified Amazon Lightsail bucket. Access keys consist of an access key ID and
 * corresponding secret access
 *
 * key>
 *
 * Access keys grant full programmatic access to the specified bucket and its objects. You can have a maximum of two access
 * keys per bucket. Use the <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
 * action to get a list of current access keys for a specific bucket. For more information about access keys, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-bucket-access-keys">Creating
 * access keys for a bucket in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
 *
 * Guide</i>> <b>
 *
 * The <code>secretAccessKey</code> value is returned only in response to the <code>CreateBucketAccessKey</code> action.
 * You can get a secret access key only when you first create an access key; you cannot get the secret access key later. If
 * you lose the secret access key, you must create a new access
 */
CreateBucketAccessKeyResponse * LightsailClient::createBucketAccessKey(const CreateBucketAccessKeyRequest &request)
{
    return qobject_cast<CreateBucketAccessKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an SSL/TLS certificate for an Amazon Lightsail content delivery network (CDN) distribution and a container
 *
 * service>
 *
 * After the certificate is valid, use the <code>AttachCertificateToDistribution</code> action to use the certificate and
 * its domains with your distribution. Or use the <code>UpdateContainerService</code> action to use the certificate and its
 * domains with your container
 *
 * service> <b>
 *
 * Only certificates created in the <code>us-east-1</code> Amazon Web Services Region can be attached to Lightsail
 * distributions. Lightsail distributions are global resources that can reference an origin in any Amazon Web Services
 * Region, and distribute its content globally. However, all distributions are located in the <code>us-east-1</code>
 */
CreateCertificateResponse * LightsailClient::createCertificate(const CreateCertificateRequest &request)
{
    return qobject_cast<CreateCertificateResponse *>(send(request));
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
 * CreateContactMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an email or SMS text message contact
 *
 * method>
 *
 * A contact method is used to send you notifications about your Amazon Lightsail resources. You can add one email address
 * and one mobile phone number contact method in each Amazon Web Services Region. However, SMS text messaging is not
 * supported in some Amazon Web Services Regions, and SMS text messages cannot be sent to some countries/regions. For more
 * information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications in Amazon
 */
CreateContactMethodResponse * LightsailClient::createContactMethod(const CreateContactMethodRequest &request)
{
    return qobject_cast<CreateContactMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateContainerServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Lightsail container
 *
 * service>
 *
 * A Lightsail container service is a compute resource to which you can deploy containers. For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-services">Container services in
 * Amazon Lightsail</a> in the <i>Lightsail Dev
 */
CreateContainerServiceResponse * LightsailClient::createContainerService(const CreateContainerServiceRequest &request)
{
    return qobject_cast<CreateContainerServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateContainerServiceDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a deployment for your Amazon Lightsail container
 *
 * service>
 *
 * A deployment specifies the containers that will be launched on the container service and their settings, such as the
 * ports to open, the environment variables to apply, and the launch command to run. It also specifies the container that
 * will serve as the public endpoint of the deployment and its settings, such as the HTTP or HTTPS port to use, and the
 * health check
 *
 * configuration>
 *
 * You can deploy containers to your container service using container images from a public registry such as Amazon ECR
 * Public, or from your local machine. For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-container-images">Creating
 * container images for your Amazon Lightsail container services</a> in the <i>Amazon Lightsail Developer
 */
CreateContainerServiceDeploymentResponse * LightsailClient::createContainerServiceDeployment(const CreateContainerServiceDeploymentRequest &request)
{
    return qobject_cast<CreateContainerServiceDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateContainerServiceRegistryLoginResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a temporary set of log in credentials that you can use to log in to the Docker process on your local machine.
 * After you're logged in, you can use the native Docker commands to push your local container images to the container
 * image registry of your Amazon Lightsail account so that you can use them with your Lightsail container service. The log
 * in credentials expire 12 hours after they are created, at which point you will need to create a new set of log in
 *
 * credentials> <note>
 *
 * You can only push container images to the container service registry of your Lightsail account. You cannot pull
 * container images or perform any other container image management actions on the container service
 *
 * registry> </note>
 *
 * After you push your container images to the container image registry of your Lightsail account, use the
 * <code>RegisterContainerImage</code> action to register the pushed images to a specific Lightsail container
 *
 * service> <note>
 *
 * This action is not required if you install and use the Lightsail Control (lightsailctl) plugin to push container images
 * to your Lightsail container service. For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-pushing-container-images">Pushing and
 * managing container images on your Amazon Lightsail container services</a> in the <i>Amazon Lightsail Developer
 */
CreateContainerServiceRegistryLoginResponse * LightsailClient::createContainerServiceRegistryLogin(const CreateContainerServiceRegistryLoginRequest &request)
{
    return qobject_cast<CreateContainerServiceRegistryLoginResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateDiskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a block storage disk that can be attached to an Amazon Lightsail instance in the same Availability Zone (e.g.,
 *
 * <code>us-east-2a</code>)>
 *
 * The <code>create disk</code> operation supports tag-based access control via request tags. For more information, see the
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Creates a block storage disk from a manual or automatic snapshot of a disk. The resulting disk can be attached to an
 * Amazon Lightsail instance in the same Availability Zone (e.g.,
 *
 * <code>us-east-2a</code>)>
 *
 * The <code>create disk from snapshot</code> operation supports tag-based access control via request tags and resource
 * tags applied to the resource identified by <code>disk snapshot name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * You can also use this operation to create a snapshot of an instance's system volume. You might want to do this, for
 * example, to recover data from the system volume of a botched instance or to create a backup of the system volume like
 * you would for a block storage disk. To create a snapshot of a system volume, just define the <code>instance name</code>
 * parameter when issuing the snapshot command, and a snapshot of the defined instance's system volume will be created.
 * After the snapshot is available, you can create a block storage disk from the snapshot and attach it to a running
 * instance to access the data on the
 *
 * disk>
 *
 * The <code>create disk snapshot</code> operation supports tag-based access control via request tags. For more
 * information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
CreateDiskSnapshotResponse * LightsailClient::createDiskSnapshot(const CreateDiskSnapshotRequest &request)
{
    return qobject_cast<CreateDiskSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * CreateDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * A distribution is a globally distributed network of caching servers that improve the performance of your website or web
 * application hosted on a Lightsail instance. For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-content-delivery-network-distributions">Content
 * delivery networks in Amazon
 */
CreateDistributionResponse * LightsailClient::createDistribution(const CreateDistributionRequest &request)
{
    return qobject_cast<CreateDistributionResponse *>(send(request));
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Creates one of the following domain name system (DNS) records in a domain DNS zone: Address (A), canonical name (CNAME),
 * mail exchanger (MX), name server (NS), start of authority (SOA), service locator (SRV), or text
 *
 * (TXT)>
 *
 * The <code>create domain entry</code> operation supports tag-based access control via resource tags applied to the
 * resource identified by <code>domain name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Creates one or more Amazon Lightsail
 *
 * instances>
 *
 * The <code>create instances</code> operation supports tag-based access control via request tags. For more information,
 * see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
 * Developer
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
 * Creates one or more new instances from a manual or automatic snapshot of an
 *
 * instance>
 *
 * The <code>create instances from snapshot</code> operation supports tag-based access control via request tags and
 * resource tags applied to the resource identified by <code>instance snapshot name</code>. For more information, see the
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Creates a custom SSH key pair that you can use with an Amazon Lightsail
 *
 * instance> <note>
 *
 * Use the <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_DownloadDefaultKeyPair.html">DownloadDefaultKeyPair</a>
 * action to create a Lightsail default key pair in an Amazon Web Services Region where a default key pair does not
 * currently
 *
 * exist> </note>
 *
 * The <code>create key pair</code> operation supports tag-based access control via request tags. For more information, see
 * the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/configure-lightsail-instances-for-load-balancing">Configure
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Creates an SSL/TLS certificate for an Amazon Lightsail load
 *
 * balancer>
 *
 * TLS is just an updated, more secure version of Secure Socket Layer
 *
 * (SSL)>
 *
 * The <code>CreateLoadBalancerTlsCertificate</code> operation supports tag-based access control via resource tags applied
 * to the resource identified by <code>load balancer name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
CreateRelationalDatabaseSnapshotResponse * LightsailClient::createRelationalDatabaseSnapshot(const CreateRelationalDatabaseSnapshotRequest &request)
{
    return qobject_cast<CreateRelationalDatabaseSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteAlarmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 *
 * alarm>
 *
 * An alarm is used to monitor a single metric for one of your resources. When a metric condition is met, the alarm can
 * notify you by email, SMS text message, and a banner displayed on the Amazon Lightsail console. For more information, see
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms in Amazon
 */
DeleteAlarmResponse * LightsailClient::deleteAlarm(const DeleteAlarmRequest &request)
{
    return qobject_cast<DeleteAlarmResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteAutoSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an automatic snapshot of an instance or disk. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
 * Lightsail Developer
 */
DeleteAutoSnapshotResponse * LightsailClient::deleteAutoSnapshot(const DeleteAutoSnapshotRequest &request)
{
    return qobject_cast<DeleteAutoSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Amazon Lightsail
 *
 * bucket> <note>
 *
 * When you delete your bucket, the bucket name is released and can be reused for a new bucket in your account or another
 * Amazon Web Services
 */
DeleteBucketResponse * LightsailClient::deleteBucket(const DeleteBucketRequest &request)
{
    return qobject_cast<DeleteBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteBucketAccessKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an access key for the specified Amazon Lightsail
 *
 * bucket>
 *
 * We recommend that you delete an access key if the secret access key is
 *
 * compromised>
 *
 * For more information about access keys, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-bucket-access-keys">Creating
 * access keys for a bucket in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
 */
DeleteBucketAccessKeyResponse * LightsailClient::deleteBucketAccessKey(const DeleteBucketAccessKeyRequest &request)
{
    return qobject_cast<DeleteBucketAccessKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an SSL/TLS certificate for your Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * Certificates that are currently attached to a distribution cannot be deleted. Use the
 * <code>DetachCertificateFromDistribution</code> action to detach a certificate from a
 */
DeleteCertificateResponse * LightsailClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteContactMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a contact
 *
 * method>
 *
 * A contact method is used to send you notifications about your Amazon Lightsail resources. You can add one email address
 * and one mobile phone number contact method in each Amazon Web Services Region. However, SMS text messaging is not
 * supported in some Amazon Web Services Regions, and SMS text messages cannot be sent to some countries/regions. For more
 * information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications in Amazon
 */
DeleteContactMethodResponse * LightsailClient::deleteContactMethod(const DeleteContactMethodRequest &request)
{
    return qobject_cast<DeleteContactMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteContainerImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a container image that is registered to your Amazon Lightsail container
 */
DeleteContainerImageResponse * LightsailClient::deleteContainerImage(const DeleteContainerImageRequest &request)
{
    return qobject_cast<DeleteContainerImageResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteContainerServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes your Amazon Lightsail container
 */
DeleteContainerServiceResponse * LightsailClient::deleteContainerService(const DeleteContainerServiceRequest &request)
{
    return qobject_cast<DeleteContainerServiceResponse *>(send(request));
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
 * identified by <code>disk name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * resource identified by <code>disk snapshot name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
DeleteDiskSnapshotResponse * LightsailClient::deleteDiskSnapshot(const DeleteDiskSnapshotRequest &request)
{
    return qobject_cast<DeleteDiskSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes your Amazon Lightsail content delivery network (CDN)
 */
DeleteDistributionResponse * LightsailClient::deleteDistribution(const DeleteDistributionRequest &request)
{
    return qobject_cast<DeleteDistributionResponse *>(send(request));
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
 * identified by <code>domain name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * resource identified by <code>domain name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Deletes an Amazon Lightsail
 *
 * instance>
 *
 * The <code>delete instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by <code>instance name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * resource identified by <code>instance snapshot name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Deletes the specified key pair by removing the public key from Amazon
 *
 * Lightsail>
 *
 * You can delete key pairs that were created using the <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_ImportKeyPair.html">ImportKeyPair</a> and <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateKeyPair.html">CreateKeyPair</a> actions,
 * as well as the Lightsail default key pair. A new default key pair will not be created unless you launch an instance
 * without specifying a custom key pair, or you call the <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_DownloadDefaultKeyPair.html">DownloadDefaultKeyPair</a>
 * API.
 *
 * </p
 *
 * The <code>delete key pair</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by <code>key pair name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
DeleteKeyPairResponse * LightsailClient::deleteKeyPair(const DeleteKeyPairRequest &request)
{
    return qobject_cast<DeleteKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DeleteKnownHostKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the known host key or certificate used by the Amazon Lightsail browser-based SSH or RDP clients to authenticate
 * an instance. This operation enables the Lightsail browser-based SSH or RDP clients to connect to the instance after a
 * host key
 *
 * mismatch> <b>
 *
 * Perform this operation only if you were expecting the host key or certificate mismatch or if you are familiar with the
 * new host key or certificate on the instance. For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
 * connection issues when using the Amazon Lightsail browser-based SSH or RDP
 */
DeleteKnownHostKeysResponse * LightsailClient::deleteKnownHostKeys(const DeleteKnownHostKeysRequest &request)
{
    return qobject_cast<DeleteKnownHostKeysResponse *>(send(request));
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
 * resource identified by <code>load balancer name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * The <code>DeleteLoadBalancerTlsCertificate</code> operation supports tag-based access control via resource tags applied
 * to the resource identified by <code>load balancer name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
DeleteRelationalDatabaseSnapshotResponse * LightsailClient::deleteRelationalDatabaseSnapshot(const DeleteRelationalDatabaseSnapshotRequest &request)
{
    return qobject_cast<DeleteRelationalDatabaseSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DetachCertificateFromDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches an SSL/TLS certificate from your Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * After the certificate is detached, your distribution stops accepting traffic for all of the domains that are associated
 * with the
 */
DetachCertificateFromDistributionResponse * LightsailClient::detachCertificateFromDistribution(const DetachCertificateFromDistributionRequest &request)
{
    return qobject_cast<DetachCertificateFromDistributionResponse *>(send(request));
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
 * identified by <code>disk name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * applied to the resource identified by <code>load balancer name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * DisableAddOnResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables an add-on for an Amazon Lightsail resource. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
 * Lightsail Developer
 */
DisableAddOnResponse * LightsailClient::disableAddOn(const DisableAddOnRequest &request)
{
    return qobject_cast<DisableAddOnResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * DownloadDefaultKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Downloads the regional Amazon Lightsail default key
 *
 * pair>
 *
 * This action also creates a Lightsail default key pair if a default key pair does not currently exist in the Amazon Web
 * Services
 */
DownloadDefaultKeyPairResponse * LightsailClient::downloadDefaultKeyPair(const DownloadDefaultKeyPairRequest &request)
{
    return qobject_cast<DownloadDefaultKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * EnableAddOnResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables or modifies an add-on for an Amazon Lightsail resource. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
 * Lightsail Developer
 */
EnableAddOnResponse * LightsailClient::enableAddOn(const EnableAddOnRequest &request)
{
    return qobject_cast<EnableAddOnResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * ExportSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports an Amazon Lightsail instance or block storage disk snapshot to Amazon Elastic Compute Cloud (Amazon EC2). This
 * operation results in an export snapshot record that can be used with the <code>create cloud formation stack</code>
 * operation to create new Amazon EC2
 *
 * instances>
 *
 * Exported instance snapshots appear in Amazon EC2 as Amazon Machine Images (AMIs), and the instance system disk appears
 * as an Amazon Elastic Block Store (Amazon EBS) volume. Exported disk snapshots appear in Amazon EC2 as Amazon EBS
 * volumes. Snapshots are exported to the same Amazon Web Services Region in Amazon EC2 as the source Lightsail
 *
 * snapshot>
 *
 * </p
 *
 * The <code>export snapshot</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by <code>source snapshot name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * GetAlarmsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the configured alarms. Specify an alarm name in your request to return information about a
 * specific alarm, or specify a monitored resource name to return information about all alarms for a specific
 *
 * resource>
 *
 * An alarm is used to monitor a single metric for one of your resources. When a metric condition is met, the alarm can
 * notify you by email, SMS text message, and a banner displayed on the Amazon Lightsail console. For more information, see
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms in Amazon
 */
GetAlarmsResponse * LightsailClient::getAlarms(const GetAlarmsRequest &request)
{
    return qobject_cast<GetAlarmsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetAutoSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the available automatic snapshots for an instance or disk. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
 * Lightsail Developer
 */
GetAutoSnapshotsResponse * LightsailClient::getAutoSnapshots(const GetAutoSnapshotsRequest &request)
{
    return qobject_cast<GetAutoSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBlueprintsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of available instance images, or <i>blueprints</i>. You can use a blueprint to create a new instance
 * already running a specific operating system, as well as a preinstalled app or development stack. The software each
 * instance is running depends on the blueprint image you
 *
 * choose> <note>
 *
 * Use active blueprints when creating new instances. Inactive blueprints are listed to support customers with existing
 * instances and are not necessarily available to create new instances. Blueprints are marked inactive when they become
 * outdated due to operating system updates or new application
 */
GetBlueprintsResponse * LightsailClient::getBlueprints(const GetBlueprintsRequest &request)
{
    return qobject_cast<GetBlueprintsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBucketAccessKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the existing access key IDs for the specified Amazon Lightsail
 *
 * bucket> <b>
 *
 * This action does not return the secret access key value of an access key. You can get a secret access key only when you
 * create it from the response of the <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
 * action. If you lose the secret access key, you must create a new access
 */
GetBucketAccessKeysResponse * LightsailClient::getBucketAccessKeys(const GetBucketAccessKeysRequest &request)
{
    return qobject_cast<GetBucketAccessKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBucketBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the bundles that you can apply to a Amazon Lightsail
 *
 * bucket>
 *
 * The bucket bundle specifies the monthly cost, storage quota, and data transfer quota for a
 *
 * bucket>
 *
 * Use the <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
 * action to update the bundle for a
 */
GetBucketBundlesResponse * LightsailClient::getBucketBundles(const GetBucketBundlesRequest &request)
{
    return qobject_cast<GetBucketBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBucketMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data points of a specific metric for an Amazon Lightsail
 *
 * bucket>
 *
 * Metrics report the utilization of a bucket. View and collect metric data regularly to monitor the number of objects
 * stored in a bucket (including object versions) and the storage space used by those
 */
GetBucketMetricDataResponse * LightsailClient::getBucketMetricData(const GetBucketMetricDataRequest &request)
{
    return qobject_cast<GetBucketMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBucketsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more Amazon Lightsail buckets. The information returned includes the synchronization
 * status of the Amazon Simple Storage Service (Amazon S3) account-level block public access feature for your Lightsail
 *
 * buckets>
 *
 * For more information about buckets, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/buckets-in-amazon-lightsail">Buckets in Amazon
 * Lightsail</a> in the <i>Amazon Lightsail Developer
 */
GetBucketsResponse * LightsailClient::getBuckets(const GetBucketsRequest &request)
{
    return qobject_cast<GetBucketsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the bundles that you can apply to an Amazon Lightsail instance when you create
 *
 * it>
 *
 * A bundle describes the specifications of an instance, such as the monthly cost, amount of memory, the number of vCPUs,
 * amount of storage space, and monthly network data transfer
 *
 * quota> <note>
 *
 * Bundles are referred to as <i>instance plans</i> in the Lightsail
 */
GetBundlesResponse * LightsailClient::getBundles(const GetBundlesRequest &request)
{
    return qobject_cast<GetBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more Amazon Lightsail SSL/TLS
 *
 * certificates> <note>
 *
 * To get a summary of a certificate, ommit <code>includeCertificateDetails</code> from your request. The response will
 * include only the certificate Amazon Resource Name (ARN), certificate name, domain name, and
 */
GetCertificatesResponse * LightsailClient::getCertificates(const GetCertificatesRequest &request)
{
    return qobject_cast<GetCertificatesResponse *>(send(request));
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
 * GetContactMethodsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the configured contact methods. Specify a protocol in your request to return information about
 * a specific contact
 *
 * method>
 *
 * A contact method is used to send you notifications about your Amazon Lightsail resources. You can add one email address
 * and one mobile phone number contact method in each Amazon Web Services Region. However, SMS text messaging is not
 * supported in some Amazon Web Services Regions, and SMS text messages cannot be sent to some countries/regions. For more
 * information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications in Amazon
 */
GetContactMethodsResponse * LightsailClient::getContactMethods(const GetContactMethodsRequest &request)
{
    return qobject_cast<GetContactMethodsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetContainerAPIMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about Amazon Lightsail containers, such as the current version of the Lightsail Control
 * (lightsailctl)
 */
GetContainerAPIMetadataResponse * LightsailClient::getContainerAPIMetadata(const GetContainerAPIMetadataRequest &request)
{
    return qobject_cast<GetContainerAPIMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetContainerImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the container images that are registered to your Amazon Lightsail container
 *
 * service> <note>
 *
 * If you created a deployment on your Lightsail container service that uses container images from a public registry like
 * Docker Hub, those images are not returned as part of this action. Those images are not registered to your Lightsail
 * container
 */
GetContainerImagesResponse * LightsailClient::getContainerImages(const GetContainerImagesRequest &request)
{
    return qobject_cast<GetContainerImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetContainerLogResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the log events of a container of your Amazon Lightsail container
 *
 * service>
 *
 * If your container service has more than one node (i.e., a scale greater than 1), then the log events that are returned
 * for the specified container are merged from all nodes on your container
 *
 * service> <note>
 *
 * Container logs are retained for a certain amount of time. For more information, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail endpoints and quotas</a> in the
 * <i>AWS General
 */
GetContainerLogResponse * LightsailClient::getContainerLog(const GetContainerLogRequest &request)
{
    return qobject_cast<GetContainerLogResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetContainerServiceDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the deployments for your Amazon Lightsail container
 *
 * servic>
 *
 * A deployment specifies the settings, such as the ports and launch command, of containers that are deployed to your
 * container
 *
 * service>
 *
 * The deployments are ordered by version in ascending order. The newest version is listed at the top of the
 *
 * response> <note>
 *
 * A set number of deployments are kept before the oldest one is replaced with the newest one. For more information, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail endpoints and quotas</a> in the
 * <i>AWS General
 */
GetContainerServiceDeploymentsResponse * LightsailClient::getContainerServiceDeployments(const GetContainerServiceDeploymentsRequest &request)
{
    return qobject_cast<GetContainerServiceDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetContainerServiceMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data points of a specific metric of your Amazon Lightsail container
 *
 * service>
 *
 * Metrics report the utilization of your resources. Monitor and collect metric data regularly to maintain the reliability,
 * availability, and performance of your
 */
GetContainerServiceMetricDataResponse * LightsailClient::getContainerServiceMetricData(const GetContainerServiceMetricDataRequest &request)
{
    return qobject_cast<GetContainerServiceMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetContainerServicePowersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of powers that can be specified for your Amazon Lightsail container
 *
 * services>
 *
 * The power specifies the amount of memory, the number of vCPUs, and the base price of the container
 */
GetContainerServicePowersResponse * LightsailClient::getContainerServicePowers(const GetContainerServicePowersRequest &request)
{
    return qobject_cast<GetContainerServicePowersResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetContainerServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more of your Amazon Lightsail container
 */
GetContainerServicesResponse * LightsailClient::getContainerServices(const GetContainerServicesRequest &request)
{
    return qobject_cast<GetContainerServicesResponse *>(send(request));
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
 */
GetDisksResponse * LightsailClient::getDisks(const GetDisksRequest &request)
{
    return qobject_cast<GetDisksResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDistributionBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the bundles that can be applied to your Amazon Lightsail content delivery network (CDN)
 *
 * distributions>
 *
 * A distribution bundle specifies the monthly network transfer quota and monthly cost of your
 */
GetDistributionBundlesResponse * LightsailClient::getDistributionBundles(const GetDistributionBundlesRequest &request)
{
    return qobject_cast<GetDistributionBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDistributionLatestCacheResetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the timestamp and status of the last cache reset of a specific Amazon Lightsail content delivery network (CDN)
 */
GetDistributionLatestCacheResetResponse * LightsailClient::getDistributionLatestCacheReset(const GetDistributionLatestCacheResetRequest &request)
{
    return qobject_cast<GetDistributionLatestCacheResetResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDistributionMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data points of a specific metric for an Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * Metrics report the utilization of your resources, and the error counts generated by them. Monitor and collect metric
 * data regularly to maintain the reliability, availability, and performance of your
 */
GetDistributionMetricDataResponse * LightsailClient::getDistributionMetricData(const GetDistributionMetricDataRequest &request)
{
    return qobject_cast<GetDistributionMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetDistributionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one or more of your Amazon Lightsail content delivery network (CDN)
 */
GetDistributionsResponse * LightsailClient::getDistributions(const GetDistributionsRequest &request)
{
    return qobject_cast<GetDistributionsResponse *>(send(request));
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
 * Returns all export snapshot records created as a result of the <code>export snapshot</code>
 *
 * operation>
 *
 * An export snapshot record can be used to create a new Amazon EC2 instance and its related resources with the <a
 * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateCloudFormationStack.html">CreateCloudFormationStack</a>
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
 * the resource identified by <code>instance name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 *
 * name>
 *
 * Metrics report the utilization of your resources, and the error counts generated by them. Monitor and collect metric
 * data regularly to maintain the reliability, availability, and performance of your
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
 * Returns the firewall port states for a specific Amazon Lightsail instance, the IP addresses allowed to connect to the
 * instance through the ports, and the
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
 *
 * balancer>
 *
 * Metrics report the utilization of your resources, and the error counts generated by them. Monitor and collect metric
 * data regularly to maintain the reliability, availability, and performance of your
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
 * GetLoadBalancerTlsPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of TLS security policies that you can apply to Lightsail load
 *
 * balancers>
 *
 * For more information about load balancer TLS security policies, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
 * TLS security policies on your Amazon Lightsail load balancers</a> in the <i>Amazon Lightsail Developer
 */
GetLoadBalancerTlsPoliciesResponse * LightsailClient::getLoadBalancerTlsPolicies(const GetLoadBalancerTlsPoliciesRequest &request)
{
    return qobject_cast<GetLoadBalancerTlsPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * GetLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all load balancers in an
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
 * The <code>GetRelationalDatabaseMasterUserPassword</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by
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
 *
 * Lightsail>
 *
 * Metrics report the utilization of your resources, and the error counts generated by them. Monitor and collect metric
 * data regularly to maintain the reliability, availability, and performance of your
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
 * Returns information about an Amazon Lightsail static
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
 * Opens ports for a specific Amazon Lightsail instance, and specifies the IP addresses allowed to connect to the instance
 * through the ports, and the
 *
 * protocol>
 *
 * The <code>OpenInstancePublicPorts</code> action supports tag-based access control via resource tags applied to the
 * resource identified by <code>instanceName</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Peers the Lightsail VPC with the user's default
 */
PeerVpcResponse * LightsailClient::peerVpc(const PeerVpcRequest &request)
{
    return qobject_cast<PeerVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * PutAlarmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an alarm, and associates it with the specified
 *
 * metric>
 *
 * An alarm is used to monitor a single metric for one of your resources. When a metric condition is met, the alarm can
 * notify you by email, SMS text message, and a banner displayed on the Amazon Lightsail console. For more information, see
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms in Amazon
 *
 * Lightsail</a>>
 *
 * When this action creates an alarm, the alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is
 * then evaluated and its state is set appropriately. Any actions associated with the new state are then
 *
 * executed>
 *
 * When you update an existing alarm, its state is left unchanged, but the update completely overwrites the previous
 * configuration of the alarm. The alarm is then evaluated with the updated
 */
PutAlarmResponse * LightsailClient::putAlarm(const PutAlarmRequest &request)
{
    return qobject_cast<PutAlarmResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * PutInstancePublicPortsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Opens ports for a specific Amazon Lightsail instance, and specifies the IP addresses allowed to connect to the instance
 * through the ports, and the protocol. This action also closes all currently open ports that are not included in the
 * request. Include all of the ports and the protocols you want to open in your <code>PutInstancePublicPorts</code>request.
 * Or use the <code>OpenInstancePublicPorts</code> action to open ports without closing currently open
 *
 * ports>
 *
 * The <code>PutInstancePublicPorts</code> action supports tag-based access control via resource tags applied to the
 * resource identified by <code>instanceName</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * Restarts a specific
 *
 * instance>
 *
 * The <code>reboot instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by <code>instance name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
RebootRelationalDatabaseResponse * LightsailClient::rebootRelationalDatabase(const RebootRelationalDatabaseRequest &request)
{
    return qobject_cast<RebootRelationalDatabaseResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * RegisterContainerImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a container image to your Amazon Lightsail container
 *
 * service> <note>
 *
 * This action is not required if you install and use the Lightsail Control (lightsailctl) plugin to push container images
 * to your Lightsail container service. For more information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-pushing-container-images">Pushing and
 * managing container images on your Amazon Lightsail container services</a> in the <i>Amazon Lightsail Developer
 */
RegisterContainerImageResponse * LightsailClient::registerContainerImage(const RegisterContainerImageRequest &request)
{
    return qobject_cast<RegisterContainerImageResponse *>(send(request));
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
 * ResetDistributionCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes currently cached content from your Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * After resetting the cache, the next time a content request is made, your distribution pulls, serves, and caches it from
 * the
 */
ResetDistributionCacheResponse * LightsailClient::resetDistributionCache(const ResetDistributionCacheRequest &request)
{
    return qobject_cast<ResetDistributionCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * SendContactMethodVerificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a verification request to an email contact method to ensure it's owned by the requester. SMS contact methods don't
 * need to be
 *
 * verified>
 *
 * A contact method is used to send you notifications about your Amazon Lightsail resources. You can add one email address
 * and one mobile phone number contact method in each Amazon Web Services Region. However, SMS text messaging is not
 * supported in some Amazon Web Services Regions, and SMS text messages cannot be sent to some countries/regions. For more
 * information, see <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications in Amazon
 *
 * Lightsail</a>>
 *
 * A verification request is sent to the contact method when you initially create it. Use this action to send another
 * verification request if a previous verification request was deleted, or has
 *
 * expired> <b>
 *
 * Notifications are not sent to an email contact method until after it is verified, and confirmed as
 */
SendContactMethodVerificationResponse * LightsailClient::sendContactMethodVerification(const SendContactMethodVerificationRequest &request)
{
    return qobject_cast<SendContactMethodVerificationResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * SetIpAddressTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the IP address type for an Amazon Lightsail
 *
 * resource>
 *
 * Use this action to enable dual-stack for a resource, which enables IPv4 and IPv6 for the specified resource.
 * Alternately, you can use this action to disable dual-stack, and enable IPv4
 */
SetIpAddressTypeResponse * LightsailClient::setIpAddressType(const SetIpAddressTypeRequest &request)
{
    return qobject_cast<SetIpAddressTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * SetResourceAccessForBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the Amazon Lightsail resources that can access the specified Lightsail
 *
 * bucket>
 *
 * Lightsail buckets currently support setting access for Lightsail instances in the same Amazon Web Services
 */
SetResourceAccessForBucketResponse * LightsailClient::setResourceAccessForBucket(const SetResourceAccessForBucketRequest &request)
{
    return qobject_cast<SetResourceAccessForBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * StartInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a specific Amazon Lightsail instance from a stopped state. To restart an instance, use the <code>reboot
 * instance</code>
 *
 * operation> <note>
 *
 * When you start a stopped instance, Lightsail assigns a new public IP address to the instance. To use the same IP address
 * after stopping and starting an instance, create a static IP address and attach it to the instance. For more information,
 * see the <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-create-static-ip">Amazon Lightsail
 * Developer
 *
 * Guide</a>> </note>
 *
 * The <code>start instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by <code>instance name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * running> <note>
 *
 * When you start a stopped instance, Lightsail assigns a new public IP address to the instance. To use the same IP address
 * after stopping and starting an instance, create a static IP address and attach it to the instance. For more information,
 * see the <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-create-static-ip">Amazon Lightsail
 * Developer
 *
 * Guide</a>> </note>
 *
 * The <code>stop instance</code> operation supports tag-based access control via resource tags applied to the resource
 * identified by <code>instance name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon Lightsail Developer
 *
 * Guide</a>>
 *
 * The <code>tag resource</code> operation supports tag-based access control via request tags and resource tags applied to
 * the resource identified by <code>resource name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
TagResourceResponse * LightsailClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * TestAlarmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests an alarm by displaying a banner on the Amazon Lightsail console. If a notification trigger is configured for the
 * specified alarm, the test also sends a notification to the notification protocol (<code>Email</code> and/or
 * <code>SMS</code>) configured for the
 *
 * alarm>
 *
 * An alarm is used to monitor a single metric for one of your resources. When a metric condition is met, the alarm can
 * notify you by email, SMS text message, and a banner displayed on the Amazon Lightsail console. For more information, see
 * <a href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms in Amazon
 */
TestAlarmResponse * LightsailClient::testAlarm(const TestAlarmRequest &request)
{
    return qobject_cast<TestAlarmResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UnpeerVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unpeers the Lightsail VPC from the user's default
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
 * to the resource identified by <code>resource name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
 */
UntagResourceResponse * LightsailClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amazon Lightsail
 *
 * bucket>
 *
 * Use this action to update the configuration of an existing bucket, such as versioning, public accessibility, and the
 * Amazon Web Services accounts that can access the
 */
UpdateBucketResponse * LightsailClient::updateBucket(const UpdateBucketRequest &request)
{
    return qobject_cast<UpdateBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateBucketBundleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the bundle, or storage plan, of an existing Amazon Lightsail
 *
 * bucket>
 *
 * A bucket bundle specifies the monthly cost, storage space, and data transfer quota for a bucket. You can update a
 * bucket's bundle only one time within a monthly AWS billing cycle. To determine if you can update a bucket's bundle, use
 * the <a href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBuckets.html">GetBuckets</a> action.
 * The <code>ableToUpdateBundle</code> parameter in the response will indicate whether you can currently update a bucket's
 *
 * bundle>
 *
 * Update a bucket's bundle if it's consistently going over its storage space or data transfer quota, or if a bucket's
 * usage is consistently in the lower range of its storage space or data transfer quota. Due to the unpredictable usage
 * fluctuations that a bucket might experience, we strongly recommend that you update a bucket's bundle only as a long-term
 * strategy, instead of as a short-term, monthly cost-cutting measure. Choose a bucket bundle that will provide the bucket
 * with ample storage space and data transfer for a long time to
 */
UpdateBucketBundleResponse * LightsailClient::updateBucketBundle(const UpdateBucketBundleRequest &request)
{
    return qobject_cast<UpdateBucketBundleResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateContainerServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of your Amazon Lightsail container service, such as its power, scale, and public domain
 */
UpdateContainerServiceResponse * LightsailClient::updateContainerService(const UpdateContainerServiceRequest &request)
{
    return qobject_cast<UpdateContainerServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateDistributionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * Use this action to update the configuration of your existing
 */
UpdateDistributionResponse * LightsailClient::updateDistribution(const UpdateDistributionRequest &request)
{
    return qobject_cast<UpdateDistributionResponse *>(send(request));
}

/*!
 * Sends \a request to the LightsailClient service, and returns a pointer to an
 * UpdateDistributionBundleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the bundle of your Amazon Lightsail content delivery network (CDN)
 *
 * distribution>
 *
 * A distribution bundle specifies the monthly network transfer quota and monthly cost of your
 *
 * distribution>
 *
 * Update your distribution's bundle if your distribution is going over its monthly network transfer quota and is incurring
 * an overage
 *
 * fee>
 *
 * You can update your distribution's bundle only one time within your monthly AWS billing cycle. To determine if you can
 * update your distribution's bundle, use the <code>GetDistributions</code> action. The <code>ableToUpdateBundle</code>
 * parameter in the result will indicate whether you can currently update your distribution's
 */
UpdateDistributionBundleResponse * LightsailClient::updateDistributionBundle(const UpdateDistributionBundleRequest &request)
{
    return qobject_cast<UpdateDistributionBundleResponse *>(send(request));
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
 * resource identified by <code>domain name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * the resource identified by <code>load balancer name</code>. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
 * However, there are two ways in which parameter updates are applied: <code>dynamic</code> or <code>pending-reboot</code>.
 * Parameters marked with a <code>dynamic</code> apply type are applied immediately. Parameters marked with a
 * <code>pending-reboot</code> apply type are applied only after the database is rebooted using the <code>reboot relational
 * database</code>
 *
 * operation>
 *
 * The <code>update relational database parameters</code> operation supports tag-based access control via resource tags
 * applied to the resource identified by relationalDatabaseName. For more information, see the <a
 * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
 * Lightsail Developer
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
