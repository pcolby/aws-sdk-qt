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

#include "route53client.h"
#include "route53client_p.h"

#include "core/awssignaturev4.h"
#include "activatekeysigningkeyrequest.h"
#include "activatekeysigningkeyresponse.h"
#include "associatevpcwithhostedzonerequest.h"
#include "associatevpcwithhostedzoneresponse.h"
#include "changeresourcerecordsetsrequest.h"
#include "changeresourcerecordsetsresponse.h"
#include "changetagsforresourcerequest.h"
#include "changetagsforresourceresponse.h"
#include "createhealthcheckrequest.h"
#include "createhealthcheckresponse.h"
#include "createhostedzonerequest.h"
#include "createhostedzoneresponse.h"
#include "createkeysigningkeyrequest.h"
#include "createkeysigningkeyresponse.h"
#include "createqueryloggingconfigrequest.h"
#include "createqueryloggingconfigresponse.h"
#include "createreusabledelegationsetrequest.h"
#include "createreusabledelegationsetresponse.h"
#include "createtrafficpolicyrequest.h"
#include "createtrafficpolicyresponse.h"
#include "createtrafficpolicyinstancerequest.h"
#include "createtrafficpolicyinstanceresponse.h"
#include "createtrafficpolicyversionrequest.h"
#include "createtrafficpolicyversionresponse.h"
#include "createvpcassociationauthorizationrequest.h"
#include "createvpcassociationauthorizationresponse.h"
#include "deactivatekeysigningkeyrequest.h"
#include "deactivatekeysigningkeyresponse.h"
#include "deletehealthcheckrequest.h"
#include "deletehealthcheckresponse.h"
#include "deletehostedzonerequest.h"
#include "deletehostedzoneresponse.h"
#include "deletekeysigningkeyrequest.h"
#include "deletekeysigningkeyresponse.h"
#include "deletequeryloggingconfigrequest.h"
#include "deletequeryloggingconfigresponse.h"
#include "deletereusabledelegationsetrequest.h"
#include "deletereusabledelegationsetresponse.h"
#include "deletetrafficpolicyrequest.h"
#include "deletetrafficpolicyresponse.h"
#include "deletetrafficpolicyinstancerequest.h"
#include "deletetrafficpolicyinstanceresponse.h"
#include "deletevpcassociationauthorizationrequest.h"
#include "deletevpcassociationauthorizationresponse.h"
#include "disablehostedzonednssecrequest.h"
#include "disablehostedzonednssecresponse.h"
#include "disassociatevpcfromhostedzonerequest.h"
#include "disassociatevpcfromhostedzoneresponse.h"
#include "enablehostedzonednssecrequest.h"
#include "enablehostedzonednssecresponse.h"
#include "getaccountlimitrequest.h"
#include "getaccountlimitresponse.h"
#include "getchangerequest.h"
#include "getchangeresponse.h"
#include "getcheckeriprangesrequest.h"
#include "getcheckeriprangesresponse.h"
#include "getdnssecrequest.h"
#include "getdnssecresponse.h"
#include "getgeolocationrequest.h"
#include "getgeolocationresponse.h"
#include "gethealthcheckrequest.h"
#include "gethealthcheckresponse.h"
#include "gethealthcheckcountrequest.h"
#include "gethealthcheckcountresponse.h"
#include "gethealthchecklastfailurereasonrequest.h"
#include "gethealthchecklastfailurereasonresponse.h"
#include "gethealthcheckstatusrequest.h"
#include "gethealthcheckstatusresponse.h"
#include "gethostedzonerequest.h"
#include "gethostedzoneresponse.h"
#include "gethostedzonecountrequest.h"
#include "gethostedzonecountresponse.h"
#include "gethostedzonelimitrequest.h"
#include "gethostedzonelimitresponse.h"
#include "getqueryloggingconfigrequest.h"
#include "getqueryloggingconfigresponse.h"
#include "getreusabledelegationsetrequest.h"
#include "getreusabledelegationsetresponse.h"
#include "getreusabledelegationsetlimitrequest.h"
#include "getreusabledelegationsetlimitresponse.h"
#include "gettrafficpolicyrequest.h"
#include "gettrafficpolicyresponse.h"
#include "gettrafficpolicyinstancerequest.h"
#include "gettrafficpolicyinstanceresponse.h"
#include "gettrafficpolicyinstancecountrequest.h"
#include "gettrafficpolicyinstancecountresponse.h"
#include "listgeolocationsrequest.h"
#include "listgeolocationsresponse.h"
#include "listhealthchecksrequest.h"
#include "listhealthchecksresponse.h"
#include "listhostedzonesrequest.h"
#include "listhostedzonesresponse.h"
#include "listhostedzonesbynamerequest.h"
#include "listhostedzonesbynameresponse.h"
#include "listhostedzonesbyvpcrequest.h"
#include "listhostedzonesbyvpcresponse.h"
#include "listqueryloggingconfigsrequest.h"
#include "listqueryloggingconfigsresponse.h"
#include "listresourcerecordsetsrequest.h"
#include "listresourcerecordsetsresponse.h"
#include "listreusabledelegationsetsrequest.h"
#include "listreusabledelegationsetsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtagsforresourcesrequest.h"
#include "listtagsforresourcesresponse.h"
#include "listtrafficpoliciesrequest.h"
#include "listtrafficpoliciesresponse.h"
#include "listtrafficpolicyinstancesrequest.h"
#include "listtrafficpolicyinstancesresponse.h"
#include "listtrafficpolicyinstancesbyhostedzonerequest.h"
#include "listtrafficpolicyinstancesbyhostedzoneresponse.h"
#include "listtrafficpolicyinstancesbypolicyrequest.h"
#include "listtrafficpolicyinstancesbypolicyresponse.h"
#include "listtrafficpolicyversionsrequest.h"
#include "listtrafficpolicyversionsresponse.h"
#include "listvpcassociationauthorizationsrequest.h"
#include "listvpcassociationauthorizationsresponse.h"
#include "testdnsanswerrequest.h"
#include "testdnsanswerresponse.h"
#include "updatehealthcheckrequest.h"
#include "updatehealthcheckresponse.h"
#include "updatehostedzonecommentrequest.h"
#include "updatehostedzonecommentresponse.h"
#include "updatetrafficpolicycommentrequest.h"
#include "updatetrafficpolicycommentresponse.h"
#include "updatetrafficpolicyinstancerequest.h"
#include "updatetrafficpolicyinstanceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Route53
 * \brief Contains classess for accessing Amazon Route 53.
 *
 * \inmodule QtAwsRoute53
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::Route53Client
 * \brief The Route53Client class provides access to the Amazon Route 53 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 */

/*!
 * \brief Constructs a Route53Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Route53Client::Route53Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53ClientPrivate(this), parent)
{
    Q_D(Route53Client);
    d->apiVersion = QStringLiteral("2013-04-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("route53");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Route 53");
    d->serviceName = QStringLiteral("route53");
}

/*!
 * \overload Route53Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Route53Client::Route53Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53ClientPrivate(this), parent)
{
    Q_D(Route53Client);
    d->apiVersion = QStringLiteral("2013-04-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("route53");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Route 53");
    d->serviceName = QStringLiteral("route53");
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ActivateKeySigningKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates a key-signing key (KSK) so that it can be used for signing by DNSSEC. This operation changes the KSK status to
 */
ActivateKeySigningKeyResponse * Route53Client::activateKeySigningKey(const ActivateKeySigningKeyRequest &request)
{
    return qobject_cast<ActivateKeySigningKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * AssociateVPCWithHostedZoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Amazon VPC with a private hosted zone.
 *
 * </p <b>
 *
 * To perform the association, the VPC and the private hosted zone must already exist. You can't convert a public hosted
 * zone into a private hosted
 *
 * zone> </b> <note>
 *
 * If you want to associate a VPC that was created by using one AWS account with a private hosted zone that was created by
 * using a different account, the AWS account that created the private hosted zone must first submit a
 * <code>CreateVPCAssociationAuthorization</code> request. Then the account that created the VPC must submit an
 * <code>AssociateVPCWithHostedZone</code>
 */
AssociateVPCWithHostedZoneResponse * Route53Client::associateVPCWithHostedZone(const AssociateVPCWithHostedZoneRequest &request)
{
    return qobject_cast<AssociateVPCWithHostedZoneResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ChangeResourceRecordSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates, changes, or deletes a resource record set, which contains authoritative DNS information for a specified domain
 * name or subdomain name. For example, you can use <code>ChangeResourceRecordSets</code> to create a resource record set
 * that routes traffic for test.example.com to a web server that has an IP address of
 *
 * 192.0.2.44>
 *
 * <b>Deleting Resource Record Sets</b>
 *
 * </p
 *
 * To delete a resource record set, you must specify all the same values that you specified when you created
 *
 * it>
 *
 * <b>Change Batches and Transactional Changes</b>
 *
 * </p
 *
 * The request body must include a document with a <code>ChangeResourceRecordSetsRequest</code> element. The request body
 * contains a list of change items, known as a change batch. Change batches are considered transactional changes. Route 53
 * validates the changes in the request and then either makes all or none of the changes in the change batch request. This
 * ensures that DNS routing isn't adversely affected by partial changes to the resource record sets in a hosted zone.
 *
 * </p
 *
 * For example, suppose a change batch request contains two changes: it deletes the <code>CNAME</code> resource record set
 * for www.example.com and creates an alias resource record set for www.example.com. If validation for both records
 * succeeds, Route 53 deletes the first resource record set and creates the second resource record set in a single
 * operation. If validation for either the <code>DELETE</code> or the <code>CREATE</code> action fails, then the request is
 * canceled, and the original <code>CNAME</code> record continues to
 *
 * exist> <note>
 *
 * If you try to delete the same resource record set more than once in a single change batch, Route 53 returns an
 * <code>InvalidChangeBatch</code>
 *
 * error> </note>
 *
 * <b>Traffic Flow</b>
 *
 * </p
 *
 * To create resource record sets for complex routing configurations, use either the traffic flow visual editor in the
 * Route 53 console or the API actions for traffic policies and traffic policy instances. Save the configuration as a
 * traffic policy, then associate the traffic policy with one or more domain names (such as example.com) or subdomain names
 * (such as www.example.com), in the same hosted zone or in multiple hosted zones. You can roll back the updates if the new
 * configuration isn't performing as expected. For more information, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/traffic-flow.html">Using Traffic Flow to Route DNS
 * Traffic</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>>
 *
 * <b>Create, Delete, and Upsert</b>
 *
 * </p
 *
 * Use <code>ChangeResourceRecordsSetsRequest</code> to perform the following
 *
 * actions> <ul> <li>
 *
 * <code>CREATE</code>: Creates a resource record set that has the specified
 *
 * values> </li> <li>
 *
 * <code>DELETE</code>: Deletes an existing resource record set that has the specified
 *
 * values> </li> <li>
 *
 * <code>UPSERT</code>: If a resource record set does not already exist, AWS creates it. If a resource set does exist,
 * Route 53 updates it with the values in the request.
 *
 * </p </li> </ul>
 *
 * <b>Syntaxes for Creating, Updating, and Deleting Resource Record Sets</b>
 *
 * </p
 *
 * The syntax for a request depends on the type of resource record set that you want to create, delete, or update, such as
 * weighted, alias, or failover. The XML elements in your request must appear in the order listed in the syntax.
 *
 * </p
 *
 * For an example for each type of resource record set, see
 *
 * "Examples.>
 *
 * Don't refer to the syntax in the "Parameter Syntax" section, which includes all of the elements for every kind of
 * resource record set that you can create, delete, or update by using <code>ChangeResourceRecordSets</code>.
 *
 * </p
 *
 * <b>Change Propagation to Route 53 DNS Servers</b>
 *
 * </p
 *
 * When you submit a <code>ChangeResourceRecordSets</code> request, Route 53 propagates your changes to all of the Route 53
 * authoritative DNS servers. While your changes are propagating, <code>GetChange</code> returns a status of
 * <code>PENDING</code>. When propagation is complete, <code>GetChange</code> returns a status of <code>INSYNC</code>.
 * Changes generally propagate to all Route 53 name servers within 60 seconds. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>>
 *
 * <b>Limits on ChangeResourceRecordSets Requests</b>
 *
 * </p
 *
 * For information about the limits on a <code>ChangeResourceRecordSets</code> request, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a> in the <i>Amazon Route
 * 53 Developer
 */
ChangeResourceRecordSetsResponse * Route53Client::changeResourceRecordSets(const ChangeResourceRecordSetsRequest &request)
{
    return qobject_cast<ChangeResourceRecordSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ChangeTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds, edits, or deletes tags for a health check or a hosted
 *
 * zone>
 *
 * For information about using tags for cost allocation, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
 * in the <i>AWS Billing and Cost Management User
 */
ChangeTagsForResourceResponse * Route53Client::changeTagsForResource(const ChangeTagsForResourceRequest &request)
{
    return qobject_cast<ChangeTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateHealthCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new health
 *
 * check>
 *
 * For information about adding health checks to resource record sets, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResourceRecordSet.html#Route53-Type-ResourceRecordSet-HealthCheckId">HealthCheckId</a>
 * in <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ChangeResourceRecordSets.html">ChangeResourceRecordSets</a>.
 *
 * </p
 *
 * <b>ELB Load Balancers</b>
 *
 * </p
 *
 * If you're registering EC2 instances with an Elastic Load Balancing (ELB) load balancer, do not create Amazon Route 53
 * health checks for the EC2 instances. When you register an EC2 instance with a load balancer, you configure settings for
 * an ELB health check, which performs a similar function to a Route 53 health
 *
 * check>
 *
 * <b>Private Hosted Zones</b>
 *
 * </p
 *
 * You can associate health checks with failover resource record sets in a private hosted zone. Note the
 *
 * following> <ul> <li>
 *
 * Route 53 health checkers are outside the VPC. To check the health of an endpoint within a VPC by IP address, you must
 * assign a public IP address to the instance in the
 *
 * VPC> </li> <li>
 *
 * You can configure a health checker to check the health of an external resource that the instance relies on, such as a
 * database
 *
 * server> </li> <li>
 *
 * You can create a CloudWatch metric, associate an alarm with the metric, and then create a health check that is based on
 * the state of the alarm. For example, you might create a CloudWatch metric that checks the status of the Amazon EC2
 * <code>StatusCheckFailed</code> metric, add an alarm to the metric, and then create a health check that is based on the
 * state of the alarm. For information about creating CloudWatch metrics and alarms by using the CloudWatch console, see
 * the <a href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/WhatIsCloudWatch.html">Amazon CloudWatch
 * User
 */
CreateHealthCheckResponse * Route53Client::createHealthCheck(const CreateHealthCheckRequest &request)
{
    return qobject_cast<CreateHealthCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateHostedZoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new public or private hosted zone. You create records in a public hosted zone to define how you want to route
 * traffic on the internet for a domain, such as example.com, and its subdomains (apex.example.com, acme.example.com). You
 * create records in a private hosted zone to define how you want to route traffic for a domain and its subdomains within
 * one or more Amazon Virtual Private Clouds (Amazon VPCs).
 *
 * </p <b>
 *
 * You can't convert a public hosted zone to a private hosted zone or vice versa. Instead, you must create a new hosted
 * zone with the same name and create new resource record
 *
 * sets> </b>
 *
 * For more information about charges for hosted zones, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route
 * 53
 *
 * Pricing</a>>
 *
 * Note the
 *
 * following> <ul> <li>
 *
 * You can't create a hosted zone for a top-level domain (TLD) such as
 *
 * .com> </li> <li>
 *
 * For public hosted zones, Route 53 automatically creates a default SOA record and four NS records for the zone. For more
 * information about SOA and NS records, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS and SOA Records that Route 53
 * Creates for a Hosted Zone</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>>
 *
 * If you want to use the same name servers for multiple public hosted zones, you can optionally associate a reusable
 * delegation set with the hosted zone. See the <code>DelegationSetId</code>
 *
 * element> </li> <li>
 *
 * If your domain is registered with a registrar other than Route 53, you must update the name servers with your registrar
 * to make Route 53 the DNS service for the domain. For more information, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/MigratingDNS.html">Migrating DNS Service for an Existing
 * Domain to Amazon Route 53</a> in the <i>Amazon Route 53 Developer Guide</i>.
 *
 * </p </li> </ul>
 *
 * When you submit a <code>CreateHostedZone</code> request, the initial status of the hosted zone is <code>PENDING</code>.
 * For public hosted zones, this means that the NS and SOA records are not yet available on all Route 53 DNS servers. When
 * the NS and SOA records are available, the status of the zone changes to
 *
 * <code>INSYNC</code>>
 *
 * The <code>CreateHostedZone</code> request requires the caller to have an <code>ec2:DescribeVpcs</code>
 */
CreateHostedZoneResponse * Route53Client::createHostedZone(const CreateHostedZoneRequest &request)
{
    return qobject_cast<CreateHostedZoneResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateKeySigningKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new key-signing key (KSK) associated with a hosted zone. You can only have two KSKs per hosted
 */
CreateKeySigningKeyResponse * Route53Client::createKeySigningKey(const CreateKeySigningKeyRequest &request)
{
    return qobject_cast<CreateKeySigningKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateQueryLoggingConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a configuration for DNS query logging. After you create a query logging configuration, Amazon Route 53 begins to
 * publish log data to an Amazon CloudWatch Logs log
 *
 * group>
 *
 * DNS query logs contain information about the queries that Route 53 receives for a specified public hosted zone, such as
 * the
 *
 * following> <ul> <li>
 *
 * Route 53 edge location that responded to the DNS
 *
 * quer> </li> <li>
 *
 * Domain or subdomain that was
 *
 * requeste> </li> <li>
 *
 * DNS record type, such as A or
 *
 * AAA> </li> <li>
 *
 * DNS response code, such as <code>NoError</code> or <code>ServFail</code>
 *
 * </p </li> </ul> <dl> <dt>Log Group and Resource Policy</dt> <dd>
 *
 * Before you create a query logging configuration, perform the following
 *
 * operations> <note>
 *
 * If you create a query logging configuration using the Route 53 console, Route 53 performs these operations
 *
 * automatically> </note> <ol> <li>
 *
 * Create a CloudWatch Logs log group, and make note of the ARN, which you specify when you create a query logging
 * configuration. Note the
 *
 * following> <ul> <li>
 *
 * You must create the log group in the us-east-1
 *
 * region> </li> <li>
 *
 * You must use the same AWS account to create the log group and the hosted zone that you want to configure query logging
 *
 * for> </li> <li>
 *
 * When you create log groups for query logging, we recommend that you use a consistent prefix, for
 *
 * example>
 *
 * <code>/aws/route53/<i>hosted zone name</i> </code>
 *
 * </p
 *
 * In the next step, you'll create a resource policy, which controls access to one or more log groups and the associated
 * AWS resources, such as Route 53 hosted zones. There's a limit on the number of resource policies that you can create, so
 * we recommend that you use a consistent prefix so you can use the same resource policy for all the log groups that you
 * create for query
 *
 * logging> </li> </ul> </li> <li>
 *
 * Create a CloudWatch Logs resource policy, and give it the permissions that Route 53 needs to create log streams and to
 * send query logs to log streams. For the value of <code>Resource</code>, specify the ARN for the log group that you
 * created in the previous step. To use the same resource policy for all the CloudWatch Logs log groups that you created
 * for query logging configurations, replace the hosted zone name with <code>*</code>, for
 *
 * example>
 *
 * <code>arn:aws:logs:us-east-1:123412341234:log-group:/aws/route53/*</code>
 *
 * </p <note>
 *
 * You can't use the CloudWatch console to create or edit a resource policy. You must use the CloudWatch API, one of the
 * AWS SDKs, or the AWS
 *
 * CLI> </note> </li> </ol> </dd> <dt>Log Streams and Edge Locations</dt> <dd>
 *
 * When Route 53 finishes creating the configuration for DNS query logging, it does the
 *
 * following> <ul> <li>
 *
 * Creates a log stream for an edge location the first time that the edge location responds to DNS queries for the
 * specified hosted zone. That log stream is used to log all queries that Route 53 responds to for that edge
 *
 * location> </li> <li>
 *
 * Begins to send query logs to the applicable log
 *
 * stream> </li> </ul>
 *
 * The name of each log stream is in the following
 *
 * format>
 *
 * <code> <i>hosted zone ID</i>/<i>edge location code</i> </code>
 *
 * </p
 *
 * The edge location code is a three-letter code and an arbitrarily assigned number, for example, DFW3. The three-letter
 * code typically corresponds with the International Air Transport Association airport code for an airport near the edge
 * location. (These abbreviations might change in the future.) For a list of edge locations, see "The Route 53 Global
 * Network" on the <a href="http://aws.amazon.com/route53/details/">Route 53 Product Details</a>
 *
 * page> </dd> <dt>Queries That Are Logged</dt> <dd>
 *
 * Query logs contain only the queries that DNS resolvers forward to Route 53. If a DNS resolver has already cached the
 * response to a query (such as the IP address for a load balancer for example.com), the resolver will continue to return
 * the cached response. It doesn't forward another query to Route 53 until the TTL for the corresponding resource record
 * set expires. Depending on how many DNS queries are submitted for a resource record set, and depending on the TTL for
 * that resource record set, query logs might contain information about only one query out of every several thousand
 * queries that are submitted to DNS. For more information about how DNS works, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/welcome-dns-service.html">Routing Internet Traffic to
 * Your Website or Web Application</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>> </dd> <dt>Log File Format</dt> <dd>
 *
 * For a list of the values in each query log and the format of each value, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/query-logs.html">Logging DNS Queries</a> in the
 * <i>Amazon Route 53 Developer
 *
 * Guide</i>> </dd> <dt>Pricing</dt> <dd>
 *
 * For information about charges for query logs, see <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
 *
 * Pricing</a>> </dd> <dt>How to Stop Logging</dt> <dd>
 *
 * If you want Route 53 to stop sending query logs to CloudWatch Logs, delete the query logging configuration. For more
 * information, see <a
 *
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeleteQueryLoggingConfig.html">DeleteQueryLoggingConfig</a>>
 */
CreateQueryLoggingConfigResponse * Route53Client::createQueryLoggingConfig(const CreateQueryLoggingConfigRequest &request)
{
    return qobject_cast<CreateQueryLoggingConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateReusableDelegationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a delegation set (a group of four name servers) that can be reused by multiple hosted zones that were created by
 * the same AWS account.
 *
 * </p
 *
 * You can also create a reusable delegation set that uses the four name servers that are associated with an existing
 * hosted zone. Specify the hosted zone ID in the <code>CreateReusableDelegationSet</code>
 *
 * request> <note>
 *
 * You can't associate a reusable delegation set with a private hosted
 *
 * zone> </note>
 *
 * For information about using a reusable delegation set to configure white label name servers, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/white-label-name-servers.html">Configuring White Label
 * Name
 *
 * Servers</a>>
 *
 * The process for migrating existing hosted zones to use a reusable delegation set is comparable to the process for
 * configuring white label name servers. You need to perform the following
 *
 * steps> <ol> <li>
 *
 * Create a reusable delegation
 *
 * set> </li> <li>
 *
 * Recreate hosted zones, and reduce the TTL to 60 seconds or
 *
 * less> </li> <li>
 *
 * Recreate resource record sets in the new hosted
 *
 * zones> </li> <li>
 *
 * Change the registrar's name servers to use the name servers for the new hosted
 *
 * zones> </li> <li>
 *
 * Monitor traffic for the website or
 *
 * application> </li> <li>
 *
 * Change TTLs back to their original
 *
 * values> </li> </ol>
 *
 * If you want to migrate existing hosted zones to use a reusable delegation set, the existing hosted zones can't use any
 * of the name servers that are assigned to the reusable delegation set. If one or more hosted zones do use one or more
 * name servers that are assigned to the reusable delegation set, you can do one of the
 *
 * following> <ul> <li>
 *
 * For small numbers of hosted zones—up to a few hundred—it's relatively easy to create reusable delegation sets until you
 * get one that has four name servers that don't overlap with any of the name servers in your hosted
 *
 * zones> </li> <li>
 *
 * For larger numbers of hosted zones, the easiest solution is to use more than one reusable delegation
 *
 * set> </li> <li>
 *
 * For larger numbers of hosted zones, you can also migrate hosted zones that have overlapping name servers to hosted zones
 * that don't have overlapping name servers, then migrate the hosted zones again to use the reusable delegation
 */
CreateReusableDelegationSetResponse * Route53Client::createReusableDelegationSet(const CreateReusableDelegationSetRequest &request)
{
    return qobject_cast<CreateReusableDelegationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateTrafficPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a traffic policy, which you use to create multiple DNS resource record sets for one domain name (such as
 * example.com) or one subdomain name (such as
 */
CreateTrafficPolicyResponse * Route53Client::createTrafficPolicy(const CreateTrafficPolicyRequest &request)
{
    return qobject_cast<CreateTrafficPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateTrafficPolicyInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates resource record sets in a specified hosted zone based on the settings in a specified traffic policy version. In
 * addition, <code>CreateTrafficPolicyInstance</code> associates the resource record sets with a specified domain name
 * (such as example.com) or subdomain name (such as www.example.com). Amazon Route 53 responds to DNS queries for the
 * domain or subdomain name by using the resource record sets that <code>CreateTrafficPolicyInstance</code>
 */
CreateTrafficPolicyInstanceResponse * Route53Client::createTrafficPolicyInstance(const CreateTrafficPolicyInstanceRequest &request)
{
    return qobject_cast<CreateTrafficPolicyInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateTrafficPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of an existing traffic policy. When you create a new version of a traffic policy, you specify the
 * ID of the traffic policy that you want to update and a JSON-formatted document that describes the new version. You use
 * traffic policies to create multiple DNS resource record sets for one domain name (such as example.com) or one subdomain
 * name (such as www.example.com). You can create a maximum of 1000 versions of a traffic policy. If you reach the limit
 * and need to create another version, you'll need to start a new traffic
 */
CreateTrafficPolicyVersionResponse * Route53Client::createTrafficPolicyVersion(const CreateTrafficPolicyVersionRequest &request)
{
    return qobject_cast<CreateTrafficPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * CreateVPCAssociationAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Authorizes the AWS account that created a specified VPC to submit an <code>AssociateVPCWithHostedZone</code> request to
 * associate the VPC with a specified hosted zone that was created by a different account. To submit a
 * <code>CreateVPCAssociationAuthorization</code> request, you must use the account that created the hosted zone. After you
 * authorize the association, use the account that created the VPC to submit an <code>AssociateVPCWithHostedZone</code>
 *
 * request> <note>
 *
 * If you want to associate multiple VPCs that you created by using one account with a hosted zone that you created by
 * using a different account, you must submit one authorization request for each
 */
CreateVPCAssociationAuthorizationResponse * Route53Client::createVPCAssociationAuthorization(const CreateVPCAssociationAuthorizationRequest &request)
{
    return qobject_cast<CreateVPCAssociationAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeactivateKeySigningKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deactivates a key-signing key (KSK) so that it will not be used for signing by DNSSEC. This operation changes the KSK
 * status to
 */
DeactivateKeySigningKeyResponse * Route53Client::deactivateKeySigningKey(const DeactivateKeySigningKeyRequest &request)
{
    return qobject_cast<DeactivateKeySigningKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteHealthCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a health
 *
 * check> <b>
 *
 * Amazon Route 53 does not prevent you from deleting a health check even if the health check is associated with one or
 * more resource record sets. If you delete a health check and you don't update the associated resource record sets, the
 * future status of the health check can't be predicted and may change. This will affect the routing of DNS queries for
 * your DNS failover configuration. For more information, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html#health-checks-deleting.html">Replacing
 * and Deleting Health Checks</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>> </b>
 *
 * If you're using AWS Cloud Map and you configured Cloud Map to create a Route 53 health check when you register an
 * instance, you can't use the Route 53 <code>DeleteHealthCheck</code> command to delete the health check. The health check
 * is deleted automatically when you deregister the instance; there can be a delay of several hours before the health check
 * is deleted from Route 53.
 */
DeleteHealthCheckResponse * Route53Client::deleteHealthCheck(const DeleteHealthCheckRequest &request)
{
    return qobject_cast<DeleteHealthCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteHostedZoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a hosted
 *
 * zone>
 *
 * If the hosted zone was created by another service, such as AWS Cloud Map, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DeleteHostedZone.html#delete-public-hosted-zone-created-by-another-service">Deleting
 * Public Hosted Zones That Were Created by Another Service</a> in the <i>Amazon Route 53 Developer Guide</i> for
 * information about how to delete it. (The process is the same for public and private hosted zones that were created by
 * another
 *
 * service.>
 *
 * If you want to keep your domain registration but you want to stop routing internet traffic to your website or web
 * application, we recommend that you delete resource record sets in the hosted zone instead of deleting the hosted
 *
 * zone> <b>
 *
 * If you delete a hosted zone, you can't undelete it. You must create a new hosted zone and update the name servers for
 * your domain registration, which can require up to 48 hours to take effect. (If you delegated responsibility for a
 * subdomain to a hosted zone and you delete the child hosted zone, you must update the name servers in the parent hosted
 * zone.) In addition, if you delete a hosted zone, someone could hijack the domain and route traffic to their own
 * resources using your domain
 *
 * name> </b>
 *
 * If you want to avoid the monthly charge for the hosted zone, you can transfer DNS service for the domain to a free DNS
 * service. When you transfer DNS service, you have to update the name servers for the domain registration. If the domain
 * is registered with Route 53, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_UpdateDomainNameservers.html">UpdateDomainNameservers</a>
 * for information about how to replace Route 53 name servers with name servers for the new DNS service. If the domain is
 * registered with another registrar, use the method provided by the registrar to update name servers for the domain
 * registration. For more information, perform an internet search on "free DNS
 *
 * service.>
 *
 * You can delete a hosted zone only if it contains only the default SOA record and NS resource record sets. If the hosted
 * zone contains other resource record sets, you must delete them before you can delete the hosted zone. If you try to
 * delete a hosted zone that contains other resource record sets, the request fails, and Route 53 returns a
 * <code>HostedZoneNotEmpty</code> error. For information about deleting records from your hosted zone, see <a
 *
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ChangeResourceRecordSets.html">ChangeResourceRecordSets</a>>
 *
 * To verify that the hosted zone has been deleted, do one of the
 *
 * following> <ul> <li>
 *
 * Use the <code>GetHostedZone</code> action to request information about the hosted
 *
 * zone> </li> <li>
 *
 * Use the <code>ListHostedZones</code> action to get a list of the hosted zones associated with the current AWS
 */
DeleteHostedZoneResponse * Route53Client::deleteHostedZone(const DeleteHostedZoneRequest &request)
{
    return qobject_cast<DeleteHostedZoneResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteKeySigningKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a key-signing key (KSK). Before you can delete a KSK, you must deactivate it. The KSK must be deactivated before
 * you can delete it regardless of whether the hosted zone is enabled for DNSSEC
 */
DeleteKeySigningKeyResponse * Route53Client::deleteKeySigningKey(const DeleteKeySigningKeyRequest &request)
{
    return qobject_cast<DeleteKeySigningKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteQueryLoggingConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a configuration for DNS query logging. If you delete a configuration, Amazon Route 53 stops sending query logs
 * to CloudWatch Logs. Route 53 doesn't delete any logs that are already in CloudWatch
 *
 * Logs>
 *
 * For more information about DNS query logs, see <a
 */
DeleteQueryLoggingConfigResponse * Route53Client::deleteQueryLoggingConfig(const DeleteQueryLoggingConfigRequest &request)
{
    return qobject_cast<DeleteQueryLoggingConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteReusableDelegationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a reusable delegation
 *
 * set> <b>
 *
 * You can delete a reusable delegation set only if it isn't associated with any hosted
 *
 * zones> </b>
 *
 * To verify that the reusable delegation set is not associated with any hosted zones, submit a <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetReusableDelegationSet.html">GetReusableDelegationSet</a>
 * request and specify the ID of the reusable delegation set that you want to
 */
DeleteReusableDelegationSetResponse * Route53Client::deleteReusableDelegationSet(const DeleteReusableDelegationSetRequest &request)
{
    return qobject_cast<DeleteReusableDelegationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteTrafficPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a traffic
 *
 * policy>
 *
 * When you delete a traffic policy, Route 53 sets a flag on the policy to indicate that it has been deleted. However,
 * Route 53 never fully deletes the traffic policy. Note the
 *
 * following> <ul> <li>
 *
 * Deleted traffic policies aren't listed if you run <a
 *
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListTrafficPolicies.html">ListTrafficPolicies</a>>
 * </li> <li>
 *
 * There's no way to get a list of deleted
 *
 * policies> </li> <li>
 *
 * If you retain the ID of the policy, you can get information about the policy, including the traffic policy document, by
 * running <a
 *
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetTrafficPolicy.html">GetTrafficPolicy</a>> </li>
 */
DeleteTrafficPolicyResponse * Route53Client::deleteTrafficPolicy(const DeleteTrafficPolicyRequest &request)
{
    return qobject_cast<DeleteTrafficPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteTrafficPolicyInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a traffic policy instance and all of the resource record sets that Amazon Route 53 created when you created the
 *
 * instance> <note>
 *
 * In the Route 53 console, traffic policy instances are known as policy
 */
DeleteTrafficPolicyInstanceResponse * Route53Client::deleteTrafficPolicyInstance(const DeleteTrafficPolicyInstanceRequest &request)
{
    return qobject_cast<DeleteTrafficPolicyInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DeleteVPCAssociationAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes authorization to submit an <code>AssociateVPCWithHostedZone</code> request to associate a specified VPC with a
 * hosted zone that was created by a different account. You must use the account that created the hosted zone to submit a
 * <code>DeleteVPCAssociationAuthorization</code>
 *
 * request> <b>
 *
 * Sending this request only prevents the AWS account that created the VPC from associating the VPC with the Amazon Route
 * 53 hosted zone in the future. If the VPC is already associated with the hosted zone,
 * <code>DeleteVPCAssociationAuthorization</code> won't disassociate the VPC from the hosted zone. If you want to delete an
 * existing association, use
 */
DeleteVPCAssociationAuthorizationResponse * Route53Client::deleteVPCAssociationAuthorization(const DeleteVPCAssociationAuthorizationRequest &request)
{
    return qobject_cast<DeleteVPCAssociationAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DisableHostedZoneDNSSECResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables DNSSEC signing in a specific hosted zone. This action does not deactivate any key-signing keys (KSKs) that are
 * active in the hosted
 */
DisableHostedZoneDNSSECResponse * Route53Client::disableHostedZoneDNSSEC(const DisableHostedZoneDNSSECRequest &request)
{
    return qobject_cast<DisableHostedZoneDNSSECResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * DisassociateVPCFromHostedZoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an Amazon Virtual Private Cloud (Amazon VPC) from an Amazon Route 53 private hosted zone. Note the
 *
 * following> <ul> <li>
 *
 * You can't disassociate the last Amazon VPC from a private hosted
 *
 * zone> </li> <li>
 *
 * You can't convert a private hosted zone into a public hosted
 *
 * zone> </li> <li>
 *
 * You can submit a <code>DisassociateVPCFromHostedZone</code> request using either the account that created the hosted
 * zone or the account that created the Amazon
 *
 * VPC> </li> <li>
 *
 * Some services, such as AWS Cloud Map and Amazon Elastic File System (Amazon EFS) automatically create hosted zones and
 * associate VPCs with the hosted zones. A service can create a hosted zone using your account or using its own account.
 * You can disassociate a VPC from a hosted zone only if the service created the hosted zone using your
 *
 * account>
 *
 * When you run <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListHostedZonesByVPC.html">DisassociateVPCFromHostedZone</a>,
 * if the hosted zone has a value for <code>OwningAccount</code>, you can use <code>DisassociateVPCFromHostedZone</code>.
 * If the hosted zone has a value for <code>OwningService</code>, you can't use
 */
DisassociateVPCFromHostedZoneResponse * Route53Client::disassociateVPCFromHostedZone(const DisassociateVPCFromHostedZoneRequest &request)
{
    return qobject_cast<DisassociateVPCFromHostedZoneResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * EnableHostedZoneDNSSECResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables DNSSEC signing in a specific hosted
 */
EnableHostedZoneDNSSECResponse * Route53Client::enableHostedZoneDNSSEC(const EnableHostedZoneDNSSECRequest &request)
{
    return qobject_cast<EnableHostedZoneDNSSECResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetAccountLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified limit for the current account, for example, the maximum number of health checks that you can create
 * using the
 *
 * account>
 *
 * For the default limit, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a> in the <i>Amazon Route
 * 53 Developer Guide</i>. To request a higher limit, <a
 * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-route53">open
 * a
 *
 * case</a>> <note>
 *
 * You can also view account limits in AWS Trusted Advisor. Sign in to the AWS Management Console and open the Trusted
 * Advisor console at <a
 * href="https://console.aws.amazon.com/trustedadvisor">https://console.aws.amazon.com/trustedadvisor/</a>. Then choose
 * <b>Service limits</b> in the navigation
 */
GetAccountLimitResponse * Route53Client::getAccountLimit(const GetAccountLimitRequest &request)
{
    return qobject_cast<GetAccountLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetChangeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current status of a change batch request. The status is one of the following
 *
 * values> <ul> <li>
 *
 * <code>PENDING</code> indicates that the changes in this request have not propagated to all Amazon Route 53 DNS servers.
 * This is the initial status of all change batch
 *
 * requests> </li> <li>
 *
 * <code>INSYNC</code> indicates that the changes have propagated to all Route 53 DNS servers.
 */
GetChangeResponse * Route53Client::getChange(const GetChangeRequest &request)
{
    return qobject_cast<GetChangeResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetCheckerIpRangesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Route 53 does not perform authorization for this API because it retrieves information that is already available to the
 *
 * public> <b>
 *
 * <code>GetCheckerIpRanges</code> still works, but we recommend that you download ip-ranges.json, which includes IP
 * address ranges for all AWS services. For more information, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/route-53-ip-addresses.html">IP Address Ranges of Amazon
 * Route 53 Servers</a> in the <i>Amazon Route 53 Developer
 */
GetCheckerIpRangesResponse * Route53Client::getCheckerIpRanges(const GetCheckerIpRangesRequest &request)
{
    return qobject_cast<GetCheckerIpRangesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetDNSSECResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DNSSEC for a specific hosted zone, including the key-signing keys (KSKs) in the hosted
 */
GetDNSSECResponse * Route53Client::getDNSSEC(const GetDNSSECRequest &request)
{
    return qobject_cast<GetDNSSECResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetGeoLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about whether a specified geographic location is supported for Amazon Route 53 geolocation resource
 * record
 *
 * sets>
 *
 * Route 53 does not perform authorization for this API because it retrieves information that is already available to the
 *
 * public>
 *
 * Use the following syntax to determine whether a continent is supported for
 *
 * geolocation>
 *
 * <code>GET /2013-04-01/geolocation?continentcode=<i>two-letter abbreviation for a continent</i> </code>
 *
 * </p
 *
 * Use the following syntax to determine whether a country is supported for
 *
 * geolocation>
 *
 * <code>GET /2013-04-01/geolocation?countrycode=<i>two-character country code</i> </code>
 *
 * </p
 *
 * Use the following syntax to determine whether a subdivision of a country is supported for
 *
 * geolocation>
 *
 * <code>GET /2013-04-01/geolocation?countrycode=<i>two-character country code</i>&amp;subdivisioncode=<i>subdivision
 * code</i> </code>
 */
GetGeoLocationResponse * Route53Client::getGeoLocation(const GetGeoLocationRequest &request)
{
    return qobject_cast<GetGeoLocationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetHealthCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified health
 */
GetHealthCheckResponse * Route53Client::getHealthCheck(const GetHealthCheckRequest &request)
{
    return qobject_cast<GetHealthCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetHealthCheckCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the number of health checks that are associated with the current AWS
 */
GetHealthCheckCountResponse * Route53Client::getHealthCheckCount(const GetHealthCheckCountRequest &request)
{
    return qobject_cast<GetHealthCheckCountResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetHealthCheckLastFailureReasonResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the reason that a specified health check failed most
 */
GetHealthCheckLastFailureReasonResponse * Route53Client::getHealthCheckLastFailureReason(const GetHealthCheckLastFailureReasonRequest &request)
{
    return qobject_cast<GetHealthCheckLastFailureReasonResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetHealthCheckStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets status of a specified health check.
 */
GetHealthCheckStatusResponse * Route53Client::getHealthCheckStatus(const GetHealthCheckStatusRequest &request)
{
    return qobject_cast<GetHealthCheckStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetHostedZoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified hosted zone including the four name servers assigned to the hosted
 */
GetHostedZoneResponse * Route53Client::getHostedZone(const GetHostedZoneRequest &request)
{
    return qobject_cast<GetHostedZoneResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetHostedZoneCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the number of hosted zones that are associated with the current AWS
 */
GetHostedZoneCountResponse * Route53Client::getHostedZoneCount(const GetHostedZoneCountRequest &request)
{
    return qobject_cast<GetHostedZoneCountResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetHostedZoneLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified limit for a specified hosted zone, for example, the maximum number of records that you can create in
 * the hosted zone.
 *
 * </p
 *
 * For the default limit, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a> in the <i>Amazon Route
 * 53 Developer Guide</i>. To request a higher limit, <a
 * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-route53">open
 * a
 */
GetHostedZoneLimitResponse * Route53Client::getHostedZoneLimit(const GetHostedZoneLimitRequest &request)
{
    return qobject_cast<GetHostedZoneLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetQueryLoggingConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified configuration for DNS query
 *
 * logging>
 *
 * For more information about DNS query logs, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateQueryLoggingConfig.html">CreateQueryLoggingConfig</a>
 * and <a href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/query-logs.html">Logging DNS
 */
GetQueryLoggingConfigResponse * Route53Client::getQueryLoggingConfig(const GetQueryLoggingConfigRequest &request)
{
    return qobject_cast<GetQueryLoggingConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetReusableDelegationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specified reusable delegation set, including the four name servers that are assigned to
 * the delegation
 */
GetReusableDelegationSetResponse * Route53Client::getReusableDelegationSet(const GetReusableDelegationSetRequest &request)
{
    return qobject_cast<GetReusableDelegationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetReusableDelegationSetLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the maximum number of hosted zones that you can associate with the specified reusable delegation
 *
 * set>
 *
 * For the default limit, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a> in the <i>Amazon Route
 * 53 Developer Guide</i>. To request a higher limit, <a
 * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-route53">open
 * a
 */
GetReusableDelegationSetLimitResponse * Route53Client::getReusableDelegationSetLimit(const GetReusableDelegationSetLimitRequest &request)
{
    return qobject_cast<GetReusableDelegationSetLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetTrafficPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specific traffic policy
 *
 * version>
 *
 * For information about how of deleting a traffic policy affects the response from <code>GetTrafficPolicy</code>, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeleteTrafficPolicy.html">DeleteTrafficPolicy</a>.
 */
GetTrafficPolicyResponse * Route53Client::getTrafficPolicy(const GetTrafficPolicyRequest &request)
{
    return qobject_cast<GetTrafficPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetTrafficPolicyInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified traffic policy
 *
 * instance> <note>
 *
 * After you submit a <code>CreateTrafficPolicyInstance</code> or an <code>UpdateTrafficPolicyInstance</code> request,
 * there's a brief delay while Amazon Route 53 creates the resource record sets that are specified in the traffic policy
 * definition. For more information, see the <code>State</code> response
 *
 * element> </note> <note>
 *
 * In the Route 53 console, traffic policy instances are known as policy
 */
GetTrafficPolicyInstanceResponse * Route53Client::getTrafficPolicyInstance(const GetTrafficPolicyInstanceRequest &request)
{
    return qobject_cast<GetTrafficPolicyInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * GetTrafficPolicyInstanceCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the number of traffic policy instances that are associated with the current AWS
 */
GetTrafficPolicyInstanceCountResponse * Route53Client::getTrafficPolicyInstanceCount(const GetTrafficPolicyInstanceCountRequest &request)
{
    return qobject_cast<GetTrafficPolicyInstanceCountResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListGeoLocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of supported geographic
 *
 * locations>
 *
 * Countries are listed first, and continents are listed last. If Amazon Route 53 supports subdivisions for a country (for
 * example, states or provinces), the subdivisions for that country are listed in alphabetical order immediately after the
 * corresponding
 *
 * country>
 *
 * Route 53 does not perform authorization for this API because it retrieves information that is already available to the
 *
 * public>
 *
 * For a list of supported geolocation codes, see the <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GeoLocation.html">GeoLocation</a> data
 */
ListGeoLocationsResponse * Route53Client::listGeoLocations(const ListGeoLocationsRequest &request)
{
    return qobject_cast<ListGeoLocationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListHealthChecksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of the health checks that are associated with the current AWS account.
 */
ListHealthChecksResponse * Route53Client::listHealthChecks(const ListHealthChecksRequest &request)
{
    return qobject_cast<ListHealthChecksResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListHostedZonesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of the public and private hosted zones that are associated with the current AWS account. The response
 * includes a <code>HostedZones</code> child element for each hosted
 *
 * zone>
 *
 * Amazon Route 53 returns a maximum of 100 items in each response. If you have a lot of hosted zones, you can use the
 * <code>maxitems</code> parameter to list them in groups of up to
 */
ListHostedZonesResponse * Route53Client::listHostedZones(const ListHostedZonesRequest &request)
{
    return qobject_cast<ListHostedZonesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListHostedZonesByNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of your hosted zones in lexicographic order. The response includes a <code>HostedZones</code> child
 * element for each hosted zone created by the current AWS account.
 *
 * </p
 *
 * <code>ListHostedZonesByName</code> sorts hosted zones by name with the labels reversed. For
 *
 * example>
 *
 * <code>com.example.www.</code>
 *
 * </p
 *
 * Note the trailing dot, which can change the sort order in some
 *
 * circumstances>
 *
 * If the domain name includes escape characters or Punycode, <code>ListHostedZonesByName</code> alphabetizes the domain
 * name using the escaped or Punycoded value, which is the format that Amazon Route 53 saves in its database. For example,
 * to create a hosted zone for exämple.com, you specify ex\344mple.com for the domain name.
 * <code>ListHostedZonesByName</code> alphabetizes it
 *
 * as>
 *
 * <code>com.ex\344mple.</code>
 *
 * </p
 *
 * The labels are reversed and alphabetized using the escaped value. For more information about valid domain name formats,
 * including internationalized domain names, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DomainNameFormat.html">DNS Domain Name Format</a> in the
 * <i>Amazon Route 53 Developer
 *
 * Guide</i>>
 *
 * Route 53 returns up to 100 items in each response. If you have a lot of hosted zones, use the <code>MaxItems</code>
 * parameter to list them in groups of up to 100. The response includes values that help navigate from one group of
 * <code>MaxItems</code> hosted zones to the
 *
 * next> <ul> <li>
 *
 * The <code>DNSName</code> and <code>HostedZoneId</code> elements in the response contain the values, if any, specified
 * for the <code>dnsname</code> and <code>hostedzoneid</code> parameters in the request that produced the current
 *
 * response> </li> <li>
 *
 * The <code>MaxItems</code> element in the response contains the value, if any, that you specified for the
 * <code>maxitems</code> parameter in the request that produced the current
 *
 * response> </li> <li>
 *
 * If the value of <code>IsTruncated</code> in the response is true, there are more hosted zones associated with the
 * current AWS account.
 *
 * </p
 *
 * If <code>IsTruncated</code> is false, this response includes the last hosted zone that is associated with the current
 * account. The <code>NextDNSName</code> element and <code>NextHostedZoneId</code> elements are omitted from the
 *
 * response> </li> <li>
 *
 * The <code>NextDNSName</code> and <code>NextHostedZoneId</code> elements in the response contain the domain name and the
 * hosted zone ID of the next hosted zone that is associated with the current AWS account. If you want to list more hosted
 * zones, make another call to <code>ListHostedZonesByName</code>, and specify the value of <code>NextDNSName</code> and
 * <code>NextHostedZoneId</code> in the <code>dnsname</code> and <code>hostedzoneid</code> parameters,
 */
ListHostedZonesByNameResponse * Route53Client::listHostedZonesByName(const ListHostedZonesByNameRequest &request)
{
    return qobject_cast<ListHostedZonesByNameResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListHostedZonesByVPCResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the private hosted zones that a specified VPC is associated with, regardless of which AWS account or AWS
 * service owns the hosted zones. The <code>HostedZoneOwner</code> structure in the response contains one of the following
 *
 * values> <ul> <li>
 *
 * An <code>OwningAccount</code> element, which contains the account number of either the current AWS account or another
 * AWS account. Some services, such as AWS Cloud Map, create hosted zones using the current account.
 *
 * </p </li> <li>
 *
 * An <code>OwningService</code> element, which identifies the AWS service that created and owns the hosted zone. For
 * example, if a hosted zone was created by Amazon Elastic File System (Amazon EFS), the value of <code>Owner</code> is
 * <code>efs.amazonaws.com</code>.
 */
ListHostedZonesByVPCResponse * Route53Client::listHostedZonesByVPC(const ListHostedZonesByVPCRequest &request)
{
    return qobject_cast<ListHostedZonesByVPCResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListQueryLoggingConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the configurations for DNS query logging that are associated with the current AWS account or the configuration
 * that is associated with a specified hosted
 *
 * zone>
 *
 * For more information about DNS query logs, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateQueryLoggingConfig.html">CreateQueryLoggingConfig</a>.
 * Additional information, including the format of DNS query logs, appears in <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/query-logs.html">Logging DNS Queries</a> in the
 * <i>Amazon Route 53 Developer
 */
ListQueryLoggingConfigsResponse * Route53Client::listQueryLoggingConfigs(const ListQueryLoggingConfigsRequest &request)
{
    return qobject_cast<ListQueryLoggingConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListResourceRecordSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resource record sets in a specified hosted
 *
 * zone>
 *
 * <code>ListResourceRecordSets</code> returns up to 300 resource record sets at a time in ASCII order, beginning at a
 * position specified by the <code>name</code> and <code>type</code>
 *
 * elements>
 *
 * <b>Sort order</b>
 *
 * </p
 *
 * <code>ListResourceRecordSets</code> sorts results first by DNS name with the labels reversed, for
 *
 * example>
 *
 * <code>com.example.www.</code>
 *
 * </p
 *
 * Note the trailing dot, which can change the sort order when the record name contains characters that appear before
 * <code>.</code> (decimal 46) in the ASCII table. These characters include the following: <code>! " # $ % &amp; ' ( ) * +
 * , -</code>
 *
 * </p
 *
 * When multiple records have the same DNS name, <code>ListResourceRecordSets</code> sorts results by the record
 *
 * type>
 *
 * <b>Specifying where to start listing records</b>
 *
 * </p
 *
 * You can use the name and type elements to specify the resource record set that the list begins
 *
 * with> <dl> <dt>If you do not specify Name or Type</dt> <dd>
 *
 * The results begin with the first resource record set that the hosted zone
 *
 * contains> </dd> <dt>If you specify Name but not Type</dt> <dd>
 *
 * The results begin with the first resource record set in the list whose name is greater than or equal to
 *
 * <code>Name</code>> </dd> <dt>If you specify Type but not Name</dt> <dd>
 *
 * Amazon Route 53 returns the <code>InvalidInput</code>
 *
 * error> </dd> <dt>If you specify both Name and Type</dt> <dd>
 *
 * The results begin with the first resource record set in the list whose name is greater than or equal to
 * <code>Name</code>, and whose type is greater than or equal to
 *
 * <code>Type</code>> </dd> </dl>
 *
 * <b>Resource record sets that are PENDING</b>
 *
 * </p
 *
 * This action returns the most current version of the records. This includes records that are <code>PENDING</code>, and
 * that are not yet available on all Route 53 DNS
 *
 * servers>
 *
 * <b>Changing resource record sets</b>
 *
 * </p
 *
 * To ensure that you get an accurate listing of the resource record sets for a hosted zone at a point in time, do not
 * submit a <code>ChangeResourceRecordSets</code> request while you're paging through the results of a
 * <code>ListResourceRecordSets</code> request. If you do, some pages may display results without the latest changes while
 * other pages display results with the latest
 *
 * changes>
 *
 * <b>Displaying the next page of results</b>
 *
 * </p
 *
 * If a <code>ListResourceRecordSets</code> command returns more than one page of results, the value of
 * <code>IsTruncated</code> is <code>true</code>. To display the next page of results, get the values of
 * <code>NextRecordName</code>, <code>NextRecordType</code>, and <code>NextRecordIdentifier</code> (if any) from the
 * response. Then submit another <code>ListResourceRecordSets</code> request, and specify those values for
 * <code>StartRecordName</code>, <code>StartRecordType</code>, and
 */
ListResourceRecordSetsResponse * Route53Client::listResourceRecordSets(const ListResourceRecordSetsRequest &request)
{
    return qobject_cast<ListResourceRecordSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListReusableDelegationSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of the reusable delegation sets that are associated with the current AWS
 */
ListReusableDelegationSetsResponse * Route53Client::listReusableDelegationSets(const ListReusableDelegationSetsRequest &request)
{
    return qobject_cast<ListReusableDelegationSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags for one health check or hosted zone.
 *
 * </p
 *
 * For information about using tags for cost allocation, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
 * in the <i>AWS Billing and Cost Management User
 */
ListTagsForResourceResponse * Route53Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListTagsForResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags for up to 10 health checks or hosted
 *
 * zones>
 *
 * For information about using tags for cost allocation, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
 * in the <i>AWS Billing and Cost Management User
 */
ListTagsForResourcesResponse * Route53Client::listTagsForResources(const ListTagsForResourcesRequest &request)
{
    return qobject_cast<ListTagsForResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListTrafficPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the latest version for every traffic policy that is associated with the current AWS account.
 * Policies are listed in the order that they were created in.
 *
 * </p
 *
 * For information about how of deleting a traffic policy affects the response from <code>ListTrafficPolicies</code>, see
 * <a href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeleteTrafficPolicy.html">DeleteTrafficPolicy</a>.
 */
ListTrafficPoliciesResponse * Route53Client::listTrafficPolicies(const ListTrafficPoliciesRequest &request)
{
    return qobject_cast<ListTrafficPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListTrafficPolicyInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the traffic policy instances that you created by using the current AWS
 *
 * account> <note>
 *
 * After you submit an <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while Amazon Route 53
 * creates the resource record sets that are specified in the traffic policy definition. For more information, see the
 * <code>State</code> response
 *
 * element> </note>
 *
 * Route 53 returns a maximum of 100 items in each response. If you have a lot of traffic policy instances, you can use the
 * <code>MaxItems</code> parameter to list them in groups of up to
 */
ListTrafficPolicyInstancesResponse * Route53Client::listTrafficPolicyInstances(const ListTrafficPolicyInstancesRequest &request)
{
    return qobject_cast<ListTrafficPolicyInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListTrafficPolicyInstancesByHostedZoneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the traffic policy instances that you created in a specified hosted
 *
 * zone> <note>
 *
 * After you submit a <code>CreateTrafficPolicyInstance</code> or an <code>UpdateTrafficPolicyInstance</code> request,
 * there's a brief delay while Amazon Route 53 creates the resource record sets that are specified in the traffic policy
 * definition. For more information, see the <code>State</code> response
 *
 * element> </note>
 *
 * Route 53 returns a maximum of 100 items in each response. If you have a lot of traffic policy instances, you can use the
 * <code>MaxItems</code> parameter to list them in groups of up to
 */
ListTrafficPolicyInstancesByHostedZoneResponse * Route53Client::listTrafficPolicyInstancesByHostedZone(const ListTrafficPolicyInstancesByHostedZoneRequest &request)
{
    return qobject_cast<ListTrafficPolicyInstancesByHostedZoneResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListTrafficPolicyInstancesByPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the traffic policy instances that you created by using a specify traffic policy
 *
 * version> <note>
 *
 * After you submit a <code>CreateTrafficPolicyInstance</code> or an <code>UpdateTrafficPolicyInstance</code> request,
 * there's a brief delay while Amazon Route 53 creates the resource record sets that are specified in the traffic policy
 * definition. For more information, see the <code>State</code> response
 *
 * element> </note>
 *
 * Route 53 returns a maximum of 100 items in each response. If you have a lot of traffic policy instances, you can use the
 * <code>MaxItems</code> parameter to list them in groups of up to
 */
ListTrafficPolicyInstancesByPolicyResponse * Route53Client::listTrafficPolicyInstancesByPolicy(const ListTrafficPolicyInstancesByPolicyRequest &request)
{
    return qobject_cast<ListTrafficPolicyInstancesByPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListTrafficPolicyVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about all of the versions for a specified traffic
 *
 * policy>
 *
 * Traffic policy versions are listed in numerical order by
 */
ListTrafficPolicyVersionsResponse * Route53Client::listTrafficPolicyVersions(const ListTrafficPolicyVersionsRequest &request)
{
    return qobject_cast<ListTrafficPolicyVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * ListVPCAssociationAuthorizationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the VPCs that were created by other accounts and that can be associated with a specified hosted zone
 * because you've submitted one or more <code>CreateVPCAssociationAuthorization</code> requests.
 *
 * </p
 *
 * The response includes a <code>VPCs</code> element with a <code>VPC</code> child element for each VPC that can be
 * associated with the hosted
 */
ListVPCAssociationAuthorizationsResponse * Route53Client::listVPCAssociationAuthorizations(const ListVPCAssociationAuthorizationsRequest &request)
{
    return qobject_cast<ListVPCAssociationAuthorizationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * TestDNSAnswerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the value that Amazon Route 53 returns in response to a DNS request for a specified record name and type. You can
 * optionally specify the IP address of a DNS resolver, an EDNS0 client subnet IP address, and a subnet mask.
 *
 * </p
 *
 * This call only supports querying public hosted
 */
TestDNSAnswerResponse * Route53Client::testDNSAnswer(const TestDNSAnswerRequest &request)
{
    return qobject_cast<TestDNSAnswerResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * UpdateHealthCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing health check. Note that some values can't be updated.
 *
 * </p
 *
 * For more information about updating health checks, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html">Creating,
 * Updating, and Deleting Health Checks</a> in the <i>Amazon Route 53 Developer
 */
UpdateHealthCheckResponse * Route53Client::updateHealthCheck(const UpdateHealthCheckRequest &request)
{
    return qobject_cast<UpdateHealthCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * UpdateHostedZoneCommentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the comment for a specified hosted
 */
UpdateHostedZoneCommentResponse * Route53Client::updateHostedZoneComment(const UpdateHostedZoneCommentRequest &request)
{
    return qobject_cast<UpdateHostedZoneCommentResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * UpdateTrafficPolicyCommentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the comment for a specified traffic policy
 */
UpdateTrafficPolicyCommentResponse * Route53Client::updateTrafficPolicyComment(const UpdateTrafficPolicyCommentRequest &request)
{
    return qobject_cast<UpdateTrafficPolicyCommentResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53Client service, and returns a pointer to an
 * UpdateTrafficPolicyInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the resource record sets in a specified hosted zone that were created based on the settings in a specified
 * traffic policy
 *
 * version>
 *
 * When you update a traffic policy instance, Amazon Route 53 continues to respond to DNS queries for the root resource
 * record set name (such as example.com) while it replaces one group of resource record sets with another. Route 53
 * performs the following
 *
 * operations> <ol> <li>
 *
 * Route 53 creates a new group of resource record sets based on the specified traffic policy. This is true regardless of
 * how significant the differences are between the existing resource record sets and the new resource record sets.
 *
 * </p </li> <li>
 *
 * When all of the new resource record sets have been created, Route 53 starts to respond to DNS queries for the root
 * resource record set name (such as example.com) by using the new resource record
 *
 * sets> </li> <li>
 *
 * Route 53 deletes the old group of resource record sets that are associated with the root resource record set
 */
UpdateTrafficPolicyInstanceResponse * Route53Client::updateTrafficPolicyInstance(const UpdateTrafficPolicyInstanceRequest &request)
{
    return qobject_cast<UpdateTrafficPolicyInstanceResponse *>(send(request));
}

/*!
 * \class QtAws::Route53::Route53ClientPrivate
 * \brief The Route53ClientPrivate class provides private implementation for Route53Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a Route53ClientPrivate object with public implementation \a q.
 */
Route53ClientPrivate::Route53ClientPrivate(Route53Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Route53
} // namespace QtAws
