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

#include "pinpointemailclient.h"
#include "pinpointemailclient_p.h"

#include "core/awssignaturev4.h"
#include "createconfigurationsetrequest.h"
#include "createconfigurationsetresponse.h"
#include "createconfigurationseteventdestinationrequest.h"
#include "createconfigurationseteventdestinationresponse.h"
#include "creatededicatedippoolrequest.h"
#include "creatededicatedippoolresponse.h"
#include "createdeliverabilitytestreportrequest.h"
#include "createdeliverabilitytestreportresponse.h"
#include "createemailidentityrequest.h"
#include "createemailidentityresponse.h"
#include "deleteconfigurationsetrequest.h"
#include "deleteconfigurationsetresponse.h"
#include "deleteconfigurationseteventdestinationrequest.h"
#include "deleteconfigurationseteventdestinationresponse.h"
#include "deletededicatedippoolrequest.h"
#include "deletededicatedippoolresponse.h"
#include "deleteemailidentityrequest.h"
#include "deleteemailidentityresponse.h"
#include "getaccountrequest.h"
#include "getaccountresponse.h"
#include "getblacklistreportsrequest.h"
#include "getblacklistreportsresponse.h"
#include "getconfigurationsetrequest.h"
#include "getconfigurationsetresponse.h"
#include "getconfigurationseteventdestinationsrequest.h"
#include "getconfigurationseteventdestinationsresponse.h"
#include "getdedicatediprequest.h"
#include "getdedicatedipresponse.h"
#include "getdedicatedipsrequest.h"
#include "getdedicatedipsresponse.h"
#include "getdeliverabilitydashboardoptionsrequest.h"
#include "getdeliverabilitydashboardoptionsresponse.h"
#include "getdeliverabilitytestreportrequest.h"
#include "getdeliverabilitytestreportresponse.h"
#include "getdomaindeliverabilitycampaignrequest.h"
#include "getdomaindeliverabilitycampaignresponse.h"
#include "getdomainstatisticsreportrequest.h"
#include "getdomainstatisticsreportresponse.h"
#include "getemailidentityrequest.h"
#include "getemailidentityresponse.h"
#include "listconfigurationsetsrequest.h"
#include "listconfigurationsetsresponse.h"
#include "listdedicatedippoolsrequest.h"
#include "listdedicatedippoolsresponse.h"
#include "listdeliverabilitytestreportsrequest.h"
#include "listdeliverabilitytestreportsresponse.h"
#include "listdomaindeliverabilitycampaignsrequest.h"
#include "listdomaindeliverabilitycampaignsresponse.h"
#include "listemailidentitiesrequest.h"
#include "listemailidentitiesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putaccountdedicatedipwarmupattributesrequest.h"
#include "putaccountdedicatedipwarmupattributesresponse.h"
#include "putaccountsendingattributesrequest.h"
#include "putaccountsendingattributesresponse.h"
#include "putconfigurationsetdeliveryoptionsrequest.h"
#include "putconfigurationsetdeliveryoptionsresponse.h"
#include "putconfigurationsetreputationoptionsrequest.h"
#include "putconfigurationsetreputationoptionsresponse.h"
#include "putconfigurationsetsendingoptionsrequest.h"
#include "putconfigurationsetsendingoptionsresponse.h"
#include "putconfigurationsettrackingoptionsrequest.h"
#include "putconfigurationsettrackingoptionsresponse.h"
#include "putdedicatedipinpoolrequest.h"
#include "putdedicatedipinpoolresponse.h"
#include "putdedicatedipwarmupattributesrequest.h"
#include "putdedicatedipwarmupattributesresponse.h"
#include "putdeliverabilitydashboardoptionrequest.h"
#include "putdeliverabilitydashboardoptionresponse.h"
#include "putemailidentitydkimattributesrequest.h"
#include "putemailidentitydkimattributesresponse.h"
#include "putemailidentityfeedbackattributesrequest.h"
#include "putemailidentityfeedbackattributesresponse.h"
#include "putemailidentitymailfromattributesrequest.h"
#include "putemailidentitymailfromattributesresponse.h"
#include "sendemailrequest.h"
#include "sendemailresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconfigurationseteventdestinationrequest.h"
#include "updateconfigurationseteventdestinationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::PinpointEmail
 * \brief Contains classess for accessing Amazon Pinpoint Email Service.
 *
 * \inmodule QtAwsPinpointEmail
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PinpointEmailClient
 * \brief The PinpointEmailClient class provides access to the Amazon Pinpoint Email Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  Welcome to the <i>Amazon Pinpoint Email API Reference</i>. This guide provides information about the Amazon Pinpoint
 *  Email API (version 1.0), including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> is an AWS service that you can use to engage with your
 *  customers across multiple messaging channels. You can use Amazon Pinpoint to send email, SMS text messages, voice
 *  messages, and push notifications. The Amazon Pinpoint Email API provides programmatic access to options that are unique
 *  to the email channel and supplement the options provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides information about key topics such as Amazon Pinpoint integration with
 *  other AWS services and the limits that apply to using the
 * 
 *  service>
 * 
 *  The Amazon Pinpoint Email API is available in several AWS Regions and it provides an endpoint for each of these Regions.
 *  For a list of all the Regions and endpoints where the API is currently available, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">AWS Service Endpoints</a> in the
 *  <i>Amazon Web Services General Reference</i>. To learn more about AWS Regions, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing AWS Regions</a> in the <i>Amazon Web
 *  Services General
 * 
 *  Reference</i>>
 * 
 *  In each Region, AWS maintains multiple Availability Zones. These Availability Zones are physically isolated from each
 *  other, but are united by private, low-latency, high-throughput, and highly redundant network connections. These
 *  Availability Zones enable us to provide very high levels of availability and redundancy, while also minimizing latency.
 *  To learn more about the number of Availability Zones that are available in each Region, see <a
 *  href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
 */

/*!
 * \brief Constructs a PinpointEmailClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PinpointEmailClient::PinpointEmailClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointEmailClientPrivate(this), parent)
{
    Q_D(PinpointEmailClient);
    d->apiVersion = QStringLiteral("2018-07-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("email");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint Email Service");
    d->serviceName = QStringLiteral("ses");
}

/*!
 * \overload PinpointEmailClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PinpointEmailClient::PinpointEmailClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointEmailClientPrivate(this), parent)
{
    Q_D(PinpointEmailClient);
    d->apiVersion = QStringLiteral("2018-07-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("email");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint Email Service");
    d->serviceName = QStringLiteral("ses");
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * CreateConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a configuration set. <i>Configuration sets</i> are groups of rules that you can apply to the emails you send
 * using Amazon Pinpoint. You apply a configuration set to an email by including a reference to the configuration set in
 * the headers of the email. When you apply a configuration set to an email, all of the rules in that configuration set are
 * applied to the email.
 */
CreateConfigurationSetResponse * PinpointEmailClient::createConfigurationSet(const CreateConfigurationSetRequest &request)
{
    return qobject_cast<CreateConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * CreateConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an event destination. In Amazon Pinpoint, <i>events</i> include message sends, deliveries, opens, clicks,
 * bounces, and complaints. <i>Event destinations</i> are places that you can send information about these events to. For
 * example, you can send event data to Amazon SNS to receive notifications when you receive bounces or complaints, or you
 * can use Amazon Kinesis Data Firehose to stream data to Amazon S3 for long-term
 *
 * storage>
 *
 * A single configuration set can include more than one event
 */
CreateConfigurationSetEventDestinationResponse * PinpointEmailClient::createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<CreateConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * CreateDedicatedIpPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new pool of dedicated IP addresses. A pool can include one or more dedicated IP addresses that are associated
 * with your Amazon Pinpoint account. You can associate a pool with a configuration set. When you send an email that uses
 * that configuration set, Amazon Pinpoint sends it using only the IP addresses in the associated
 */
CreateDedicatedIpPoolResponse * PinpointEmailClient::createDedicatedIpPool(const CreateDedicatedIpPoolRequest &request)
{
    return qobject_cast<CreateDedicatedIpPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * CreateDeliverabilityTestReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new predictive inbox placement test. Predictive inbox placement tests can help you predict how your messages
 * will be handled by various email providers around the world. When you perform a predictive inbox placement test, you
 * provide a sample message that contains the content that you plan to send to your customers. Amazon Pinpoint then sends
 * that message to special email addresses spread across several major email providers. After about 24 hours, the test is
 * complete, and you can use the <code>GetDeliverabilityTestReport</code> operation to view the results of the
 */
CreateDeliverabilityTestReportResponse * PinpointEmailClient::createDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest &request)
{
    return qobject_cast<CreateDeliverabilityTestReportResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * CreateEmailIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Verifies an email identity for use with Amazon Pinpoint. In Amazon Pinpoint, an identity is an email address or domain
 * that you use when you send email. Before you can use an identity to send email with Amazon Pinpoint, you first have to
 * verify it. By verifying an address, you demonstrate that you're the owner of the address, and that you've given Amazon
 * Pinpoint permission to send email from the
 *
 * address>
 *
 * When you verify an email address, Amazon Pinpoint sends an email to the address. Your email address is verified as soon
 * as you follow the link in the verification email.
 *
 * </p
 *
 * When you verify a domain, this operation provides a set of DKIM tokens, which you can convert into CNAME tokens. You add
 * these CNAME tokens to the DNS configuration for your domain. Your domain is verified when Amazon Pinpoint detects these
 * records in the DNS configuration for your domain. It usually takes around 72 hours to complete the domain verification
 */
CreateEmailIdentityResponse * PinpointEmailClient::createEmailIdentity(const CreateEmailIdentityRequest &request)
{
    return qobject_cast<CreateEmailIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * DeleteConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an existing configuration
 *
 * set>
 *
 * In Amazon Pinpoint, <i>configuration sets</i> are groups of rules that you can apply to the emails you send. You apply a
 * configuration set to an email by including a reference to the configuration set in the headers of the email. When you
 * apply a configuration set to an email, all of the rules in that configuration set are applied to the
 */
DeleteConfigurationSetResponse * PinpointEmailClient::deleteConfigurationSet(const DeleteConfigurationSetRequest &request)
{
    return qobject_cast<DeleteConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * DeleteConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an event
 *
 * destination>
 *
 * In Amazon Pinpoint, <i>events</i> include message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event
 * destinations</i> are places that you can send information about these events to. For example, you can send event data to
 * Amazon SNS to receive notifications when you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose
 * to stream data to Amazon S3 for long-term
 */
DeleteConfigurationSetEventDestinationResponse * PinpointEmailClient::deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<DeleteConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * DeleteDedicatedIpPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a dedicated IP
 */
DeleteDedicatedIpPoolResponse * PinpointEmailClient::deleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest &request)
{
    return qobject_cast<DeleteDedicatedIpPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * DeleteEmailIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an email identity that you previously verified for use with Amazon Pinpoint. An identity can be either an email
 * address or a domain
 */
DeleteEmailIdentityResponse * PinpointEmailClient::deleteEmailIdentity(const DeleteEmailIdentityRequest &request)
{
    return qobject_cast<DeleteEmailIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtain information about the email-sending status and capabilities of your Amazon Pinpoint account in the current AWS
 */
GetAccountResponse * PinpointEmailClient::getAccount(const GetAccountRequest &request)
{
    return qobject_cast<GetAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetBlacklistReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of the blacklists that your dedicated IP addresses appear
 */
GetBlacklistReportsResponse * PinpointEmailClient::getBlacklistReports(const GetBlacklistReportsRequest &request)
{
    return qobject_cast<GetBlacklistReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about an existing configuration set, including the dedicated IP pool that it's associated with, whether
 * or not it's enabled for sending email, and
 *
 * more>
 *
 * In Amazon Pinpoint, <i>configuration sets</i> are groups of rules that you can apply to the emails you send. You apply a
 * configuration set to an email by including a reference to the configuration set in the headers of the email. When you
 * apply a configuration set to an email, all of the rules in that configuration set are applied to the
 */
GetConfigurationSetResponse * PinpointEmailClient::getConfigurationSet(const GetConfigurationSetRequest &request)
{
    return qobject_cast<GetConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetConfigurationSetEventDestinationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of event destinations that are associated with a configuration
 *
 * set>
 *
 * In Amazon Pinpoint, <i>events</i> include message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event
 * destinations</i> are places that you can send information about these events to. For example, you can send event data to
 * Amazon SNS to receive notifications when you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose
 * to stream data to Amazon S3 for long-term
 */
GetConfigurationSetEventDestinationsResponse * PinpointEmailClient::getConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest &request)
{
    return qobject_cast<GetConfigurationSetEventDestinationsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetDedicatedIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a dedicated IP address, including the name of the dedicated IP pool that it's associated with, as
 * well information about the automatic warm-up process for the
 */
GetDedicatedIpResponse * PinpointEmailClient::getDedicatedIp(const GetDedicatedIpRequest &request)
{
    return qobject_cast<GetDedicatedIpResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetDedicatedIpsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the dedicated IP addresses that are associated with your Amazon Pinpoint
 */
GetDedicatedIpsResponse * PinpointEmailClient::getDedicatedIps(const GetDedicatedIpsRequest &request)
{
    return qobject_cast<GetDedicatedIpsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetDeliverabilityDashboardOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about the status of the Deliverability dashboard for your Amazon Pinpoint account. When the
 * Deliverability dashboard is enabled, you gain access to reputation, deliverability, and other metrics for the domains
 * that you use to send email using Amazon Pinpoint. You also gain the ability to perform predictive inbox placement
 *
 * tests>
 *
 * When you use the Deliverability dashboard, you pay a monthly subscription charge, in addition to any other fees that you
 * accrue by using Amazon Pinpoint. For more information about the features and cost of a Deliverability dashboard
 * subscription, see <a href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
 */
GetDeliverabilityDashboardOptionsResponse * PinpointEmailClient::getDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest &request)
{
    return qobject_cast<GetDeliverabilityDashboardOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetDeliverabilityTestReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve the results of a predictive inbox placement
 */
GetDeliverabilityTestReportResponse * PinpointEmailClient::getDeliverabilityTestReport(const GetDeliverabilityTestReportRequest &request)
{
    return qobject_cast<GetDeliverabilityTestReportResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetDomainDeliverabilityCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve all the deliverability data for a specific campaign. This data is available for a campaign only if the campaign
 * sent email by using a domain that the Deliverability dashboard is enabled for
 * (<code>PutDeliverabilityDashboardOption</code>
 */
GetDomainDeliverabilityCampaignResponse * PinpointEmailClient::getDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest &request)
{
    return qobject_cast<GetDomainDeliverabilityCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetDomainStatisticsReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve inbox placement and engagement rates for the domains that you use to send
 */
GetDomainStatisticsReportResponse * PinpointEmailClient::getDomainStatisticsReport(const GetDomainStatisticsReportRequest &request)
{
    return qobject_cast<GetDomainStatisticsReportResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * GetEmailIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about a specific identity associated with your Amazon Pinpoint account, including the identity's
 * verification status, its DKIM authentication status, and its custom Mail-From
 */
GetEmailIdentityResponse * PinpointEmailClient::getEmailIdentity(const GetEmailIdentityRequest &request)
{
    return qobject_cast<GetEmailIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * ListConfigurationSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all of the configuration sets associated with your Amazon Pinpoint account in the current
 *
 * region>
 *
 * In Amazon Pinpoint, <i>configuration sets</i> are groups of rules that you can apply to the emails you send. You apply a
 * configuration set to an email by including a reference to the configuration set in the headers of the email. When you
 * apply a configuration set to an email, all of the rules in that configuration set are applied to the
 */
ListConfigurationSetsResponse * PinpointEmailClient::listConfigurationSets(const ListConfigurationSetsRequest &request)
{
    return qobject_cast<ListConfigurationSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * ListDedicatedIpPoolsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all of the dedicated IP pools that exist in your Amazon Pinpoint account in the current AWS
 */
ListDedicatedIpPoolsResponse * PinpointEmailClient::listDedicatedIpPools(const ListDedicatedIpPoolsRequest &request)
{
    return qobject_cast<ListDedicatedIpPoolsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * ListDeliverabilityTestReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Show a list of the predictive inbox placement tests that you've performed, regardless of their statuses. For predictive
 * inbox placement tests that are complete, you can use the <code>GetDeliverabilityTestReport</code> operation to view the
 */
ListDeliverabilityTestReportsResponse * PinpointEmailClient::listDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest &request)
{
    return qobject_cast<ListDeliverabilityTestReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * ListDomainDeliverabilityCampaignsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve deliverability data for all the campaigns that used a specific domain to send email during a specified time
 * range. This data is available for a domain only if you enabled the Deliverability dashboard
 * (<code>PutDeliverabilityDashboardOption</code> operation) for the
 */
ListDomainDeliverabilityCampaignsResponse * PinpointEmailClient::listDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest &request)
{
    return qobject_cast<ListDomainDeliverabilityCampaignsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * ListEmailIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all of the email identities that are associated with your Amazon Pinpoint account. An identity can be
 * either an email address or a domain. This operation returns identities that are verified as well as those that
 */
ListEmailIdentitiesResponse * PinpointEmailClient::listEmailIdentities(const ListEmailIdentitiesRequest &request)
{
    return qobject_cast<ListEmailIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of the tags (keys and values) that are associated with a specified resource. A <i>tag</i> is a label
 * that you optionally define and associate with a resource in Amazon Pinpoint. Each tag consists of a required <i>tag
 * key</i> and an optional associated <i>tag value</i>. A tag key is a general label that acts as a category for more
 * specific tag values. A tag value acts as a descriptor within a tag
 */
ListTagsForResourceResponse * PinpointEmailClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutAccountDedicatedIpWarmupAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable the automatic warm-up feature for dedicated IP
 */
PutAccountDedicatedIpWarmupAttributesResponse * PinpointEmailClient::putAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest &request)
{
    return qobject_cast<PutAccountDedicatedIpWarmupAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutAccountSendingAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable the ability of your account to send
 */
PutAccountSendingAttributesResponse * PinpointEmailClient::putAccountSendingAttributes(const PutAccountSendingAttributesRequest &request)
{
    return qobject_cast<PutAccountSendingAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutConfigurationSetDeliveryOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a configuration set with a dedicated IP pool. You can use dedicated IP pools to create groups of dedicated IP
 * addresses for sending specific types of
 */
PutConfigurationSetDeliveryOptionsResponse * PinpointEmailClient::putConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetDeliveryOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutConfigurationSetReputationOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable collection of reputation metrics for emails that you send using a particular configuration set in a
 * specific AWS
 */
PutConfigurationSetReputationOptionsResponse * PinpointEmailClient::putConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetReputationOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutConfigurationSetSendingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable email sending for messages that use a particular configuration set in a specific AWS
 */
PutConfigurationSetSendingOptionsResponse * PinpointEmailClient::putConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetSendingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutConfigurationSetTrackingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specify a custom domain to use for open and click tracking elements in email that you send using Amazon
 */
PutConfigurationSetTrackingOptionsResponse * PinpointEmailClient::putConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetTrackingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutDedicatedIpInPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Move a dedicated IP address to an existing dedicated IP
 *
 * pool> <note>
 *
 * The dedicated IP address that you specify must already exist, and must be associated with your Amazon Pinpoint account.
 *
 * </p
 *
 * The dedicated IP pool you specify must already exist. You can create a new pool by using the
 * <code>CreateDedicatedIpPool</code>
 */
PutDedicatedIpInPoolResponse * PinpointEmailClient::putDedicatedIpInPool(const PutDedicatedIpInPoolRequest &request)
{
    return qobject_cast<PutDedicatedIpInPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutDedicatedIpWarmupAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutDedicatedIpWarmupAttributesResponse * PinpointEmailClient::putDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest &request)
{
    return qobject_cast<PutDedicatedIpWarmupAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutDeliverabilityDashboardOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable the Deliverability dashboard for your Amazon Pinpoint account. When you enable the Deliverability
 * dashboard, you gain access to reputation, deliverability, and other metrics for the domains that you use to send email
 * using Amazon Pinpoint. You also gain the ability to perform predictive inbox placement
 *
 * tests>
 *
 * When you use the Deliverability dashboard, you pay a monthly subscription charge, in addition to any other fees that you
 * accrue by using Amazon Pinpoint. For more information about the features and cost of a Deliverability dashboard
 * subscription, see <a href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
 */
PutDeliverabilityDashboardOptionResponse * PinpointEmailClient::putDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest &request)
{
    return qobject_cast<PutDeliverabilityDashboardOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutEmailIdentityDkimAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to enable or disable DKIM authentication for an email
 */
PutEmailIdentityDkimAttributesResponse * PinpointEmailClient::putEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityDkimAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutEmailIdentityFeedbackAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to enable or disable feedback forwarding for an identity. This setting determines what happens when an identity is
 * used to send an email that results in a bounce or complaint
 *
 * event>
 *
 * When you enable feedback forwarding, Amazon Pinpoint sends you email notifications when bounce or complaint events
 * occur. Amazon Pinpoint sends this notification to the address that you specified in the Return-Path header of the
 * original
 *
 * email>
 *
 * When you disable feedback forwarding, Amazon Pinpoint sends notifications through other mechanisms, such as by notifying
 * an Amazon SNS topic. You're required to have a method of tracking bounces and complaints. If you haven't set up another
 * mechanism for receiving bounce or complaint notifications, Amazon Pinpoint sends an email notification when these events
 * occur (even if this setting is
 */
PutEmailIdentityFeedbackAttributesResponse * PinpointEmailClient::putEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityFeedbackAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * PutEmailIdentityMailFromAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to enable or disable the custom Mail-From domain configuration for an email
 */
PutEmailIdentityMailFromAttributesResponse * PinpointEmailClient::putEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityMailFromAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * SendEmailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an email message. You can use the Amazon Pinpoint Email API to send two types of
 *
 * messages> <ul> <li>
 *
 * <b>Simple</b> – A standard email message. When you create this type of message, you specify the sender, the recipient,
 * and the message body, and Amazon Pinpoint assembles the message for
 *
 * you> </li> <li>
 *
 * <b>Raw</b> – A raw, MIME-formatted email message. When you send this type of email, you have to specify all of the
 * message headers, as well as the message body. You can use this message type to send messages that contain attachments.
 * The message that you specify has to be a valid MIME
 */
SendEmailResponse * PinpointEmailClient::sendEmail(const SendEmailRequest &request)
{
    return qobject_cast<SendEmailResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add one or more tags (keys and values) to a specified resource. A <i>tag</i> is a label that you optionally define and
 * associate with a resource in Amazon Pinpoint. Tags can help you categorize and manage resources in different ways, such
 * as by purpose, owner, environment, or other criteria. A resource can have as many as 50
 *
 * tags>
 *
 * Each tag consists of a required <i>tag key</i> and an associated <i>tag value</i>, both of which you define. A tag key
 * is a general label that acts as a category for more specific tag values. A tag value acts as a descriptor within a tag
 */
TagResourceResponse * PinpointEmailClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one or more tags (keys and values) from a specified
 */
UntagResourceResponse * PinpointEmailClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointEmailClient service, and returns a pointer to an
 * UpdateConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the configuration of an event destination for a configuration
 *
 * set>
 *
 * In Amazon Pinpoint, <i>events</i> include message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event
 * destinations</i> are places that you can send information about these events to. For example, you can send event data to
 * Amazon SNS to receive notifications when you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose
 * to stream data to Amazon S3 for long-term
 */
UpdateConfigurationSetEventDestinationResponse * PinpointEmailClient::updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<UpdateConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * \class QtAws::PinpointEmail::PinpointEmailClientPrivate
 * \brief The PinpointEmailClientPrivate class provides private implementation for PinpointEmailClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PinpointEmailClientPrivate object with public implementation \a q.
 */
PinpointEmailClientPrivate::PinpointEmailClientPrivate(PinpointEmailClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace PinpointEmail
} // namespace QtAws
