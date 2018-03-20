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

#include "sesclient.h"
#include "sesclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SES {

/**
 * @class  SesClient
 *
 * @brief  Client for Amazon Simple Email Service ( SES)
 *
 * <fullname>Amazon Simple Email Service</fullname>
 *
 * This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 * documentation is intended to be used in conjunction with the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * </p <note>
 *
 * For a list of Amazon SES endpoints to use in service requests, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 */

/**
 * @brief  Constructs a new SesClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SesClient::SesClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SesClientPrivate(this), parent)
{
    Q_D(SesClient);
    d->apiVersion = QStringLiteral("2010-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("email");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Email Service");
    d->serviceName = QStringLiteral("ses");
}

/**
 * @brief  Constructs a new SesClient object.
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
SesClient::SesClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SesClientPrivate(this), parent)
{
    Q_D(SesClient);
    d->apiVersion = QStringLiteral("2010-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("email");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Email Service");
    d->serviceName = QStringLiteral("ses");
}

/**
 * Creates a receipt rule set by cloning an existing one. All receipt rules and configurations are copied to the new
 * receipt rule set and are completely independent of the source rule
 *
 * set>
 *
 * For information about setting up rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CloneReceiptRuleSetResponse * SesClient::cloneReceiptRuleSet(const CloneReceiptRuleSetRequest &request)
{
    return qobject_cast<CloneReceiptRuleSetResponse *>(send(request));
}

/**
 * Creates a configuration
 *
 * set>
 *
 * Configuration sets enable you to publish email sending events. For information about using configuration sets, see the
 * <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConfigurationSetResponse * SesClient::createConfigurationSet(const CreateConfigurationSetRequest &request)
{
    return qobject_cast<CreateConfigurationSetResponse *>(send(request));
}

/**
 * Creates a configuration set event
 *
 * destination> <note>
 *
 * When you create or update an event destination, you must provide one, and only one, destination. The destination can be
 * Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple Notification Service (Amazon
 *
 * SNS)> </note>
 *
 * An event destination is the AWS service to which Amazon SES publishes the email sending events associated with a
 * configuration set. For information about using configuration sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConfigurationSetEventDestinationResponse * SesClient::createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<CreateConfigurationSetEventDestinationResponse *>(send(request));
}

/**
 * Creates an association between a configuration set and a custom domain for open and click event tracking.
 *
 * </p
 *
 * By default, images and links used for tracking open and click events are hosted on domains operated by Amazon SES. You
 * can configure a subdomain of your own to handle these events. For information about using configuration sets, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring Custom
 * Domains to Handle Open and Click Tracking</a> in the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConfigurationSetTrackingOptionsResponse * SesClient::createConfigurationSetTrackingOptions(const CreateConfigurationSetTrackingOptionsRequest &request)
{
    return qobject_cast<CreateConfigurationSetTrackingOptionsResponse *>(send(request));
}

/**
 * Creates a new custom verification email
 *
 * template>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using Custom Verification
 * Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCustomVerificationEmailTemplateResponse * SesClient::createCustomVerificationEmailTemplate(const CreateCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<CreateCustomVerificationEmailTemplateResponse *>(send(request));
}

/**
 * Creates a new IP address
 *
 * filter>
 *
 * For information about setting up IP address filters, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReceiptFilterResponse * SesClient::createReceiptFilter(const CreateReceiptFilterRequest &request)
{
    return qobject_cast<CreateReceiptFilterResponse *>(send(request));
}

/**
 * Creates a receipt
 *
 * rule>
 *
 * For information about setting up receipt rules, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReceiptRuleResponse * SesClient::createReceiptRule(const CreateReceiptRuleRequest &request)
{
    return qobject_cast<CreateReceiptRuleResponse *>(send(request));
}

/**
 * Creates an empty receipt rule
 *
 * set>
 *
 * For information about setting up receipt rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReceiptRuleSetResponse * SesClient::createReceiptRuleSet(const CreateReceiptRuleSetRequest &request)
{
    return qobject_cast<CreateReceiptRuleSetResponse *>(send(request));
}

/**
 * Creates an email template. Email templates enable you to send personalized email to one or more destinations in a single
 * API operation. For more information, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTemplateResponse * SesClient::createTemplate(const CreateTemplateRequest &request)
{
    return qobject_cast<CreateTemplateResponse *>(send(request));
}

/**
 * Deletes a configuration set. Configuration sets enable you to publish email sending events. For information about using
 * configuration sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConfigurationSetResponse * SesClient::deleteConfigurationSet(const DeleteConfigurationSetRequest &request)
{
    return qobject_cast<DeleteConfigurationSetResponse *>(send(request));
}

/**
 * Deletes a configuration set event destination. Configuration set event destinations are associated with configuration
 * sets, which enable you to publish email sending events. For information about using configuration sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConfigurationSetEventDestinationResponse * SesClient::deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<DeleteConfigurationSetEventDestinationResponse *>(send(request));
}

/**
 * Deletes an association between a configuration set and a custom domain for open and click event
 *
 * tracking>
 *
 * By default, images and links used for tracking open and click events are hosted on domains operated by Amazon SES. You
 * can configure a subdomain of your own to handle these events. For information about using configuration sets, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring Custom
 * Domains to Handle Open and Click Tracking</a> in the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * Guide</a>> <note>
 *
 * Deleting this kind of association will result in emails sent using the specified configuration set to capture open and
 * click events using the standard, Amazon SES-operated
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConfigurationSetTrackingOptionsResponse * SesClient::deleteConfigurationSetTrackingOptions(const DeleteConfigurationSetTrackingOptionsRequest &request)
{
    return qobject_cast<DeleteConfigurationSetTrackingOptionsResponse *>(send(request));
}

/**
 * Deletes an existing custom verification email template.
 *
 * </p
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using Custom Verification
 * Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCustomVerificationEmailTemplateResponse * SesClient::deleteCustomVerificationEmailTemplate(const DeleteCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<DeleteCustomVerificationEmailTemplateResponse *>(send(request));
}

/**
 * Deletes the specified identity (an email address or a domain) from the list of verified
 *
 * identities>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIdentityResponse * SesClient::deleteIdentity(const DeleteIdentityRequest &request)
{
    return qobject_cast<DeleteIdentityResponse *>(send(request));
}

/**
 * Deletes the specified sending authorization policy for the given identity (an email address or a domain). This API
 * returns successfully even if a policy with the specified name does not
 *
 * exist> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIdentityPolicyResponse * SesClient::deleteIdentityPolicy(const DeleteIdentityPolicyRequest &request)
{
    return qobject_cast<DeleteIdentityPolicyResponse *>(send(request));
}

/**
 * Deletes the specified IP address
 *
 * filter>
 *
 * For information about managing IP address filters, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReceiptFilterResponse * SesClient::deleteReceiptFilter(const DeleteReceiptFilterRequest &request)
{
    return qobject_cast<DeleteReceiptFilterResponse *>(send(request));
}

/**
 * Deletes the specified receipt
 *
 * rule>
 *
 * For information about managing receipt rules, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReceiptRuleResponse * SesClient::deleteReceiptRule(const DeleteReceiptRuleRequest &request)
{
    return qobject_cast<DeleteReceiptRuleResponse *>(send(request));
}

/**
 * Deletes the specified receipt rule set and all of the receipt rules it
 *
 * contains> <note>
 *
 * The currently active rule set cannot be
 *
 * deleted> </note>
 *
 * For information about managing receipt rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReceiptRuleSetResponse * SesClient::deleteReceiptRuleSet(const DeleteReceiptRuleSetRequest &request)
{
    return qobject_cast<DeleteReceiptRuleSetResponse *>(send(request));
}

/**
 * Deletes an email
 *
 * template>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTemplateResponse * SesClient::deleteTemplate(const DeleteTemplateRequest &request)
{
    return qobject_cast<DeleteTemplateResponse *>(send(request));
}

/**
 * Deprecated. Use the <code>DeleteIdentity</code> operation to delete email addresses and
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteVerifiedEmailAddressResponse * SesClient::deleteVerifiedEmailAddress(const DeleteVerifiedEmailAddressRequest &request)
{
    return qobject_cast<DeleteVerifiedEmailAddressResponse *>(send(request));
}

/**
 * Returns the metadata and receipt rules for the receipt rule set that is currently
 *
 * active>
 *
 * For information about setting up receipt rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeActiveReceiptRuleSetResponse * SesClient::describeActiveReceiptRuleSet(const DescribeActiveReceiptRuleSetRequest &request)
{
    return qobject_cast<DescribeActiveReceiptRuleSetResponse *>(send(request));
}

/**
 * Returns the details of the specified configuration set. For information about using configuration sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationSetResponse * SesClient::describeConfigurationSet(const DescribeConfigurationSetRequest &request)
{
    return qobject_cast<DescribeConfigurationSetResponse *>(send(request));
}

/**
 * Returns the details of the specified receipt
 *
 * rule>
 *
 * For information about setting up receipt rules, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReceiptRuleResponse * SesClient::describeReceiptRule(const DescribeReceiptRuleRequest &request)
{
    return qobject_cast<DescribeReceiptRuleResponse *>(send(request));
}

/**
 * Returns the details of the specified receipt rule
 *
 * set>
 *
 * For information about managing receipt rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReceiptRuleSetResponse * SesClient::describeReceiptRuleSet(const DescribeReceiptRuleSetRequest &request)
{
    return qobject_cast<DescribeReceiptRuleSetResponse *>(send(request));
}

/**
 * Returns the email sending status of the Amazon SES
 *
 * account>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccountSendingEnabledResponse * SesClient::getAccountSendingEnabled()
{
    return qobject_cast<GetAccountSendingEnabledResponse *>(send(request));
}

/**
 * Returns the custom email verification template for the template name you
 *
 * specify>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using Custom Verification
 * Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCustomVerificationEmailTemplateResponse * SesClient::getCustomVerificationEmailTemplate(const GetCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<GetCustomVerificationEmailTemplateResponse *>(send(request));
}

/**
 * Returns the current status of Easy DKIM signing for an entity. For domain name identities, this operation also returns
 * the DKIM tokens that are required for Easy DKIM signing, and whether Amazon SES has successfully verified that these
 * tokens have been
 *
 * published>
 *
 * This operation takes a list of identities as input and returns the following information for
 *
 * each> <ul> <li>
 *
 * Whether Easy DKIM signing is enabled or
 *
 * disabled> </li> <li>
 *
 * A set of DKIM tokens that represent the identity. If the identity is an email address, the tokens represent the domain
 * of that
 *
 * address> </li> <li>
 *
 * Whether Amazon SES has successfully verified the DKIM tokens published in the domain's DNS. This information is only
 * returned for domain name identities, not for email
 *
 * addresses> </li> </ul>
 *
 * This operation is throttled at one request per second and can only get DKIM attributes for up to 100 identities at a
 *
 * time>
 *
 * For more information about creating DNS records using DKIM tokens, go to the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIdentityDkimAttributesResponse * SesClient::getIdentityDkimAttributes(const GetIdentityDkimAttributesRequest &request)
{
    return qobject_cast<GetIdentityDkimAttributesResponse *>(send(request));
}

/**
 * Returns the custom MAIL FROM attributes for a list of identities (email addresses :
 *
 * domains)>
 *
 * This operation is throttled at one request per second and can only get custom MAIL FROM attributes for up to 100
 * identities at a
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIdentityMailFromDomainAttributesResponse * SesClient::getIdentityMailFromDomainAttributes(const GetIdentityMailFromDomainAttributesRequest &request)
{
    return qobject_cast<GetIdentityMailFromDomainAttributesResponse *>(send(request));
}

/**
 * Given a list of verified identities (email addresses and/or domains), returns a structure describing identity
 * notification
 *
 * attributes>
 *
 * This operation is throttled at one request per second and can only get notification attributes for up to 100 identities
 * at a
 *
 * time>
 *
 * For more information about using notifications with Amazon SES, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIdentityNotificationAttributesResponse * SesClient::getIdentityNotificationAttributes(const GetIdentityNotificationAttributesRequest &request)
{
    return qobject_cast<GetIdentityNotificationAttributesResponse *>(send(request));
}

/**
 * Returns the requested sending authorization policies for the given identity (an email address or a domain). The policies
 * are returned as a map of policy names to policy contents. You can retrieve a maximum of 20 policies at a
 *
 * time> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIdentityPoliciesResponse * SesClient::getIdentityPolicies(const GetIdentityPoliciesRequest &request)
{
    return qobject_cast<GetIdentityPoliciesResponse *>(send(request));
}

/**
 * Given a list of identities (email addresses and/or domains), returns the verification status and (for domain identities)
 * the verification token for each
 *
 * identity>
 *
 * The verification status of an email address is "Pending" until the email address owner clicks the link within the
 * verification email that Amazon SES sent to that address. If the email address owner clicks the link within 24 hours, the
 * verification status of the email address changes to "Success". If the link is not clicked within 24 hours, the
 * verification status changes to "Failed." In that case, if you still want to verify the email address, you must restart
 * the verification process from the
 *
 * beginning>
 *
 * For domain identities, the domain's verification status is "Pending" as Amazon SES searches for the required TXT record
 * in the DNS settings of the domain. When Amazon SES detects the record, the domain's verification status changes to
 * "Success". If Amazon SES is unable to detect the record within 72 hours, the domain's verification status changes to
 * "Failed." In that case, if you still want to verify the domain, you must restart the verification process from the
 *
 * beginning>
 *
 * This operation is throttled at one request per second and can only get verification attributes for up to 100 identities
 * at a
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIdentityVerificationAttributesResponse * SesClient::getIdentityVerificationAttributes(const GetIdentityVerificationAttributesRequest &request)
{
    return qobject_cast<GetIdentityVerificationAttributesResponse *>(send(request));
}

/**
 * Provides the sending limits for the Amazon SES account.
 *
 * </p
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSendQuotaResponse * SesClient::getSendQuota()
{
    return qobject_cast<GetSendQuotaResponse *>(send(request));
}

/**
 * Provides sending statistics for the Amazon SES account. The result is a list of data points, representing the last two
 * weeks of sending activity. Each data point in the list contains statistics for a 15-minute period of
 *
 * time>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSendStatisticsResponse * SesClient::getSendStatistics()
{
    return qobject_cast<GetSendStatisticsResponse *>(send(request));
}

/**
 * Displays the template object (which includes the Subject line, HTML part and text part) for the template you
 *
 * specify>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTemplateResponse * SesClient::getTemplate(const GetTemplateRequest &request)
{
    return qobject_cast<GetTemplateResponse *>(send(request));
}

/**
 * Provides a list of the configuration sets associated with your Amazon SES account. For information about using
 * configuration sets, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring Your Amazon SES
 * Sending Activity</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p
 *
 * You can execute this operation no more than once per second. This operation will return up to 1,000 configuration sets
 * each time it is run. If your Amazon SES account has more than 1,000 configuration sets, this operation will also return
 * a NextToken element. You can then execute the <code>ListConfigurationSets</code> operation again, passing the
 * <code>NextToken</code> parameter and the value of the NextToken element to retrieve additional
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListConfigurationSetsResponse * SesClient::listConfigurationSets(const ListConfigurationSetsRequest &request)
{
    return qobject_cast<ListConfigurationSetsResponse *>(send(request));
}

/**
 * Lists the existing custom verification email templates for your
 *
 * account>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using Custom Verification
 * Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCustomVerificationEmailTemplatesResponse * SesClient::listCustomVerificationEmailTemplates(const ListCustomVerificationEmailTemplatesRequest &request)
{
    return qobject_cast<ListCustomVerificationEmailTemplatesResponse *>(send(request));
}

/**
 * Returns a list containing all of the identities (email addresses and domains) for your AWS account, regardless of
 * verification
 *
 * status>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIdentitiesResponse * SesClient::listIdentities(const ListIdentitiesRequest &request)
{
    return qobject_cast<ListIdentitiesResponse *>(send(request));
}

/**
 * Returns a list of sending authorization policies that are attached to the given identity (an email address or a domain).
 * This API returns only a list. If you want the actual policy content, you can use
 *
 * <code>GetIdentityPolicies</code>> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIdentityPoliciesResponse * SesClient::listIdentityPolicies(const ListIdentityPoliciesRequest &request)
{
    return qobject_cast<ListIdentityPoliciesResponse *>(send(request));
}

/**
 * Lists the IP address filters associated with your AWS
 *
 * account>
 *
 * For information about managing IP address filters, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListReceiptFiltersResponse * SesClient::listReceiptFilters(const ListReceiptFiltersRequest &request)
{
    return qobject_cast<ListReceiptFiltersResponse *>(send(request));
}

/**
 * Lists the receipt rule sets that exist under your AWS account. If there are additional receipt rule sets to be
 * retrieved, you will receive a <code>NextToken</code> that you can provide to the next call to
 * <code>ListReceiptRuleSets</code> to retrieve the additional
 *
 * entries>
 *
 * For information about managing receipt rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListReceiptRuleSetsResponse * SesClient::listReceiptRuleSets(const ListReceiptRuleSetsRequest &request)
{
    return qobject_cast<ListReceiptRuleSetsResponse *>(send(request));
}

/**
 * Lists the email templates present in your Amazon SES
 *
 * account>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTemplatesResponse * SesClient::listTemplates(const ListTemplatesRequest &request)
{
    return qobject_cast<ListTemplatesResponse *>(send(request));
}

/**
 * Deprecated. Use the <code>ListIdentities</code> operation to list the email addresses and domains associated with your
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListVerifiedEmailAddressesResponse * SesClient::listVerifiedEmailAddresses()
{
    return qobject_cast<ListVerifiedEmailAddressesResponse *>(send(request));
}

/**
 * Adds or updates a sending authorization policy for the specified identity (an email address or a
 *
 * domain)> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutIdentityPolicyResponse * SesClient::putIdentityPolicy(const PutIdentityPolicyRequest &request)
{
    return qobject_cast<PutIdentityPolicyResponse *>(send(request));
}

/**
 * Reorders the receipt rules within a receipt rule
 *
 * set> <note>
 *
 * All of the rules in the rule set must be represented in this request. That is, this API will return an error if the
 * reorder request doesn't explicitly position all of the
 *
 * rules> </note>
 *
 * For information about managing receipt rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReorderReceiptRuleSetResponse * SesClient::reorderReceiptRuleSet(const ReorderReceiptRuleSetRequest &request)
{
    return qobject_cast<ReorderReceiptRuleSetResponse *>(send(request));
}

/**
 * Generates and sends a bounce message to the sender of an email you received through Amazon SES. You can only use this
 * API on an email up to 24 hours after you receive
 *
 * it> <note>
 *
 * You cannot use this API to send generic bounces for mail that was not received by Amazon
 *
 * SES> </note>
 *
 * For information about receiving email through Amazon SES, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendBounceResponse * SesClient::sendBounce(const SendBounceRequest &request)
{
    return qobject_cast<SendBounceResponse *>(send(request));
}

/**
 * Composes an email message to multiple destinations. The message body is created using an email
 *
 * template>
 *
 * In order to send email using the <code>SendBulkTemplatedEmail</code> operation, your call to the API must meet the
 * following
 *
 * requirements> <ul> <li>
 *
 * The call must refer to an existing email template. You can create email templates using the <a>CreateTemplate</a>
 *
 * operation> </li> <li>
 *
 * The message must be sent from a verified email address or
 *
 * domain> </li> <li>
 *
 * If your account is still in the Amazon SES sandbox, you may only send to verified addresses or domains, or to email
 * addresses associated with the Amazon SES Mailbox Simulator. For more information, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying Email Addresses
 * and Domains</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p </li> <li>
 *
 * The total size of the message, including attachments, must be less than 10
 *
 * MB> </li> <li>
 *
 * Each <code>Destination</code> parameter must include at least one recipient email address. The recipient address can be
 * a To: address, a CC: address, or a BCC: address. If a recipient email address is invalid (that is, it is not in the
 * format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message will be rejected, even if the message
 * contains other recipients that are
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendBulkTemplatedEmailResponse * SesClient::sendBulkTemplatedEmail(const SendBulkTemplatedEmailRequest &request)
{
    return qobject_cast<SendBulkTemplatedEmailResponse *>(send(request));
}

/**
 * Adds an email address to the list of identities for your Amazon SES account and attempts to verify it. As a result of
 * executing this operation, a customized verification email is sent to the specified
 *
 * address>
 *
 * To use this operation, you must first create a custom verification email template. For more information about creating
 * and using custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using Custom Verification
 * Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendCustomVerificationEmailResponse * SesClient::sendCustomVerificationEmail(const SendCustomVerificationEmailRequest &request)
{
    return qobject_cast<SendCustomVerificationEmailResponse *>(send(request));
}

/**
 * Composes an email message and immediately queues it for sending. In order to send email using the <code>SendEmail</code>
 * operation, your message must meet the following
 *
 * requirements> <ul> <li>
 *
 * The message must be sent from a verified email address or domain. If you attempt to send email using a non-verified
 * address or domain, the operation will result in an "Email address not verified" error.
 *
 * </p </li> <li>
 *
 * If your account is still in the Amazon SES sandbox, you may only send to verified addresses or domains, or to email
 * addresses associated with the Amazon SES Mailbox Simulator. For more information, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying Email Addresses
 * and Domains</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p </li> <li>
 *
 * The total size of the message, including attachments, must be smaller than 10
 *
 * MB> </li> <li>
 *
 * The message must include at least one recipient email address. The recipient address can be a To: address, a CC:
 * address, or a BCC: address. If a recipient email address is invalid (that is, it is not in the format
 * <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message will be rejected, even if the message contains
 * other recipients that are
 *
 * valid> </li> <li>
 *
 * The message may not include more than 50 recipients, across the To:, CC: and BCC: fields. If you need to send an email
 * message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call the
 * <code>SendEmail</code> operation several times to send the message to each
 *
 * group> </li> </ul> <b>
 *
 * For every message that you send, the total number of recipients (including each recipient in the To:, CC: and BCC:
 * fields) is counted against the maximum number of emails you can send in a 24-hour period (your <i>sending quota</i>).
 * For more information about sending quotas in Amazon SES, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing Your Amazon SES Sending
 * Limits</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendEmailResponse * SesClient::sendEmail(const SendEmailRequest &request)
{
    return qobject_cast<SendEmailResponse *>(send(request));
}

/**
 * Composes an email message and immediately queues it for sending. When calling this operation, you may specify the
 * message headers as well as the content. The <code>SendRawEmail</code> operation is particularly useful for sending
 * multipart MIME emails (such as those that contain both a plain-text and an HTML version).
 *
 * </p
 *
 * In order to send email using the <code>SendRawEmail</code> operation, your message must meet the following
 *
 * requirements> <ul> <li>
 *
 * The message must be sent from a verified email address or domain. If you attempt to send email using a non-verified
 * address or domain, the operation will result in an "Email address not verified" error.
 *
 * </p </li> <li>
 *
 * If your account is still in the Amazon SES sandbox, you may only send to verified addresses or domains, or to email
 * addresses associated with the Amazon SES Mailbox Simulator. For more information, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying Email Addresses
 * and Domains</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p </li> <li>
 *
 * The total size of the message, including attachments, must be smaller than 10
 *
 * MB> </li> <li>
 *
 * The message must include at least one recipient email address. The recipient address can be a To: address, a CC:
 * address, or a BCC: address. If a recipient email address is invalid (that is, it is not in the format
 * <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message will be rejected, even if the message contains
 * other recipients that are
 *
 * valid> </li> <li>
 *
 * The message may not include more than 50 recipients, across the To:, CC: and BCC: fields. If you need to send an email
 * message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call the
 * <code>SendRawEmail</code> operation several times to send the message to each
 *
 * group> </li> </ul> <b>
 *
 * For every message that you send, the total number of recipients (including each recipient in the To:, CC: and BCC:
 * fields) is counted against the maximum number of emails you can send in a 24-hour period (your <i>sending quota</i>).
 * For more information about sending quotas in Amazon SES, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing Your Amazon SES Sending
 * Limits</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p </b>
 *
 * Additionally, keep the following considerations in mind when using the <code>SendRawEmail</code>
 *
 * operation> <ul> <li>
 *
 * Although you can customize the message headers when using the <code>SendRawEmail</code> operation, Amazon SES will
 * automatically apply its own <code>Message-ID</code> and <code>Date</code> headers; if you passed these headers when
 * creating the message, they will be overwritten by the values that Amazon SES
 *
 * provides> </li> <li>
 *
 * If you are using sending authorization to send on behalf of another user, <code>SendRawEmail</code> enables you to
 * specify the cross-account identity for the email's Source, From, and Return-Path parameters in one of two ways: you can
 * pass optional parameters <code>SourceArn</code>, <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or
 * you can include the following X-headers in the header of your raw
 *
 * email> <ul> <li>
 *
 * <code>X-SES-SOURCE-ARN</code>
 *
 * </p </li> <li>
 *
 * <code>X-SES-FROM-ARN</code>
 *
 * </p </li> <li>
 *
 * <code>X-SES-RETURN-PATH-ARN</code>
 *
 * </p </li> </ul> <b>
 *
 * Do not include these X-headers in the DKIM signature; Amazon SES will remove them before sending the
 *
 * email> </b>
 *
 * For most common sending authorization scenarios, we recommend that you specify the <code>SourceIdentityArn</code>
 * parameter and not the <code>FromIdentityArn</code> or <code>ReturnPathIdentityArn</code> parameters. If you only specify
 * the <code>SourceIdentityArn</code> parameter, Amazon SES will set the From and Return Path addresses to the identity
 * specified in <code>SourceIdentityArn</code>. For more information about sending authorization, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Using Sending Authorization with
 * Amazon SES</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendRawEmailResponse * SesClient::sendRawEmail(const SendRawEmailRequest &request)
{
    return qobject_cast<SendRawEmailResponse *>(send(request));
}

/**
 * Composes an email message using an email template and immediately queues it for
 *
 * sending>
 *
 * In order to send email using the <code>SendTemplatedEmail</code> operation, your call to the API must meet the following
 *
 * requirements> <ul> <li>
 *
 * The call must refer to an existing email template. You can create email templates using the <a>CreateTemplate</a>
 *
 * operation> </li> <li>
 *
 * The message must be sent from a verified email address or
 *
 * domain> </li> <li>
 *
 * If your account is still in the Amazon SES sandbox, you may only send to verified addresses or domains, or to email
 * addresses associated with the Amazon SES Mailbox Simulator. For more information, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying Email Addresses
 * and Domains</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p </li> <li>
 *
 * The total size of the message, including attachments, must be less than 10
 *
 * MB> </li> <li>
 *
 * Calls to the <code>SendTemplatedEmail</code> operation may only include one <code>Destination</code> parameter. A
 * destination is a set of recipients who will receive the same version of the email. The <code>Destination</code>
 * parameter can include up to 50 recipients, across the To:, CC: and BCC:
 *
 * fields> </li> <li>
 *
 * The <code>Destination</code> parameter must include at least one recipient email address. The recipient address can be a
 * To: address, a CC: address, or a BCC: address. If a recipient email address is invalid (that is, it is not in the format
 * <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message will be rejected, even if the message contains
 * other recipients that are
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendTemplatedEmailResponse * SesClient::sendTemplatedEmail(const SendTemplatedEmailRequest &request)
{
    return qobject_cast<SendTemplatedEmailResponse *>(send(request));
}

/**
 * Sets the specified receipt rule set as the active receipt rule
 *
 * set> <note>
 *
 * To disable your email-receiving through Amazon SES completely, you can call this API with RuleSetName set to
 *
 * null> </note>
 *
 * For information about managing receipt rule sets, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetActiveReceiptRuleSetResponse * SesClient::setActiveReceiptRuleSet(const SetActiveReceiptRuleSetRequest &request)
{
    return qobject_cast<SetActiveReceiptRuleSetResponse *>(send(request));
}

/**
 * Enables or disables Easy DKIM signing of email sent from an
 *
 * identity> <ul> <li>
 *
 * If Easy DKIM signing is enabled for a domain name identity (such as <code>example.com</code>), then Amazon SES will
 * DKIM-sign all email sent by addresses under that domain name (for example,
 *
 * <code>user@example.com</code>)> </li> <li>
 *
 * If Easy DKIM signing is enabled for an email address, then Amazon SES will DKIM-sign all email sent by that email
 *
 * address> </li> </ul>
 *
 * For email addresses (for example, <code>user@example.com</code>), you can only enable Easy DKIM signing if the
 * corresponding domain (in this case, <code>example.com</code>) has been set up for Easy DKIM using the AWS Console or the
 * <code>VerifyDomainDkim</code>
 *
 * operation>
 *
 * You can execute this operation no more than once per
 *
 * second>
 *
 * For more information about Easy DKIM signing, go to the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetIdentityDkimEnabledResponse * SesClient::setIdentityDkimEnabled(const SetIdentityDkimEnabledRequest &request)
{
    return qobject_cast<SetIdentityDkimEnabledResponse *>(send(request));
}

/**
 * Given an identity (an email address or a domain), enables or disables whether Amazon SES forwards bounce and complaint
 * notifications as email. Feedback forwarding can only be disabled when Amazon Simple Notification Service (Amazon SNS)
 * topics are specified for both bounces and
 *
 * complaints> <note>
 *
 * Feedback forwarding does not apply to delivery notifications. Delivery notifications are only available through Amazon
 *
 * SNS> </note>
 *
 * You can execute this operation no more than once per
 *
 * second>
 *
 * For more information about using notifications with Amazon SES, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetIdentityFeedbackForwardingEnabledResponse * SesClient::setIdentityFeedbackForwardingEnabled(const SetIdentityFeedbackForwardingEnabledRequest &request)
{
    return qobject_cast<SetIdentityFeedbackForwardingEnabledResponse *>(send(request));
}

/**
 * Given an identity (an email address or a domain), sets whether Amazon SES includes the original email headers in the
 * Amazon Simple Notification Service (Amazon SNS) notifications of a specified
 *
 * type>
 *
 * You can execute this operation no more than once per
 *
 * second>
 *
 * For more information about using notifications with Amazon SES, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetIdentityHeadersInNotificationsEnabledResponse * SesClient::setIdentityHeadersInNotificationsEnabled(const SetIdentityHeadersInNotificationsEnabledRequest &request)
{
    return qobject_cast<SetIdentityHeadersInNotificationsEnabledResponse *>(send(request));
}

/**
 * Enables or disables the custom MAIL FROM domain setup for a verified identity (an email address or a
 *
 * domain)> <b>
 *
 * To send emails using the specified MAIL FROM domain, you must add an MX record to your MAIL FROM domain's DNS settings.
 * If you want your emails to pass Sender Policy Framework (SPF) checks, you must also add or update an SPF record. For
 * more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from-set.html">Amazon SES
 * Developer
 *
 * Guide</a>> </b>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetIdentityMailFromDomainResponse * SesClient::setIdentityMailFromDomain(const SetIdentityMailFromDomainRequest &request)
{
    return qobject_cast<SetIdentityMailFromDomainResponse *>(send(request));
}

/**
 * Given an identity (an email address or a domain), sets the Amazon Simple Notification Service (Amazon SNS) topic to
 * which Amazon SES will publish bounce, complaint, and/or delivery notifications for emails sent with that identity as the
 *
 * <code>Source</code>> <note>
 *
 * Unless feedback forwarding is enabled, you must specify Amazon SNS topics for bounce and complaint notifications. For
 * more information, see
 *
 * <code>SetIdentityFeedbackForwardingEnabled</code>> </note>
 *
 * You can execute this operation no more than once per
 *
 * second>
 *
 * For more information about feedback notification, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetIdentityNotificationTopicResponse * SesClient::setIdentityNotificationTopic(const SetIdentityNotificationTopicRequest &request)
{
    return qobject_cast<SetIdentityNotificationTopicResponse *>(send(request));
}

/**
 * Sets the position of the specified receipt rule in the receipt rule
 *
 * set>
 *
 * For information about managing receipt rules, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetReceiptRulePositionResponse * SesClient::setReceiptRulePosition(const SetReceiptRulePositionRequest &request)
{
    return qobject_cast<SetReceiptRulePositionResponse *>(send(request));
}

/**
 * Creates a preview of the MIME content of an email when provided with a template and a set of replacement
 *
 * data>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestRenderTemplateResponse * SesClient::testRenderTemplate(const TestRenderTemplateRequest &request)
{
    return qobject_cast<TestRenderTemplateResponse *>(send(request));
}

/**
 * Enables or disables email sending across your entire Amazon SES account. You can use this operation in conjunction with
 * Amazon CloudWatch alarms to temporarily pause email sending across your Amazon SES account when reputation metrics (such
 * as your bounce on complaint rate) reach certain
 *
 * thresholds>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAccountSendingEnabledResponse * SesClient::updateAccountSendingEnabled(const UpdateAccountSendingEnabledRequest &request)
{
    return qobject_cast<UpdateAccountSendingEnabledResponse *>(send(request));
}

/**
 * Updates the event destination of a configuration set. Event destinations are associated with configuration sets, which
 * enable you to publish email sending events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple Notification
 * Service (Amazon SNS). For information about using configuration sets, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring Your Amazon SES
 * Sending Activity</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p <note>
 *
 * When you create or update an event destination, you must provide one, and only one, destination. The destination can be
 * Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple Notification Service (Amazon
 *
 * SNS)> </note>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConfigurationSetEventDestinationResponse * SesClient::updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<UpdateConfigurationSetEventDestinationResponse *>(send(request));
}

/**
 * Enables or disables the publishing of reputation metrics for emails sent using a specific configuration set. Reputation
 * metrics include bounce and complaint rates. These metrics are published to Amazon CloudWatch. By using Amazon
 * CloudWatch, you can create alarms when bounce or complaint rates exceed a certain
 *
 * threshold>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConfigurationSetReputationMetricsEnabledResponse * SesClient::updateConfigurationSetReputationMetricsEnabled(const UpdateConfigurationSetReputationMetricsEnabledRequest &request)
{
    return qobject_cast<UpdateConfigurationSetReputationMetricsEnabledResponse *>(send(request));
}

/**
 * Enables or disables email sending for messages sent using a specific configuration set. You can use this operation in
 * conjunction with Amazon CloudWatch alarms to temporarily pause email sending for a configuration set when the reputation
 * metrics for that configuration set (such as your bounce on complaint rate) reach certain
 *
 * thresholds>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConfigurationSetSendingEnabledResponse * SesClient::updateConfigurationSetSendingEnabled(const UpdateConfigurationSetSendingEnabledRequest &request)
{
    return qobject_cast<UpdateConfigurationSetSendingEnabledResponse *>(send(request));
}

/**
 * Modifies an association between a configuration set and a custom domain for open and click event tracking.
 *
 * </p
 *
 * By default, images and links used for tracking open and click events are hosted on domains operated by Amazon SES. You
 * can configure a subdomain of your own to handle these events. For information about using configuration sets, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring Custom
 * Domains to Handle Open and Click Tracking</a> in the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConfigurationSetTrackingOptionsResponse * SesClient::updateConfigurationSetTrackingOptions(const UpdateConfigurationSetTrackingOptionsRequest &request)
{
    return qobject_cast<UpdateConfigurationSetTrackingOptionsResponse *>(send(request));
}

/**
 * Updates an existing custom verification email
 *
 * template>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using Custom Verification
 * Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCustomVerificationEmailTemplateResponse * SesClient::updateCustomVerificationEmailTemplate(const UpdateCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<UpdateCustomVerificationEmailTemplateResponse *>(send(request));
}

/**
 * Updates a receipt
 *
 * rule>
 *
 * For information about managing receipt rules, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon SES
 * Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateReceiptRuleResponse * SesClient::updateReceiptRule(const UpdateReceiptRuleRequest &request)
{
    return qobject_cast<UpdateReceiptRuleResponse *>(send(request));
}

/**
 * Updates an email template. Email templates enable you to send personalized email to one or more destinations in a single
 * API operation. For more information, see the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTemplateResponse * SesClient::updateTemplate(const UpdateTemplateRequest &request)
{
    return qobject_cast<UpdateTemplateResponse *>(send(request));
}

/**
 * Returns a set of DKIM tokens for a domain. DKIM <i>tokens</i> are character strings that represent your domain's
 * identity. Using these tokens, you will need to create DNS CNAME records that point to DKIM public keys hosted by Amazon
 * SES. Amazon Web Services will eventually detect that you have updated your DNS records; this detection process may take
 * up to 72 hours. Upon successful detection, Amazon SES will be able to DKIM-sign email originating from that
 *
 * domain>
 *
 * You can execute this operation no more than once per
 *
 * second>
 *
 * To enable or disable Easy DKIM signing for a domain, use the <code>SetIdentityDkimEnabled</code>
 *
 * operation>
 *
 * For more information about creating DNS records using DKIM tokens, go to the <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
VerifyDomainDkimResponse * SesClient::verifyDomainDkim(const VerifyDomainDkimRequest &request)
{
    return qobject_cast<VerifyDomainDkimResponse *>(send(request));
}

/**
 * Adds a domain to the list of identities for your Amazon SES account and attempts to verify it. For more information
 * about verifying domains, see <a
 * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying Email Addresses
 * and Domains</a> in the <i>Amazon SES Developer Guide.</i>
 *
 * </p
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
VerifyDomainIdentityResponse * SesClient::verifyDomainIdentity(const VerifyDomainIdentityRequest &request)
{
    return qobject_cast<VerifyDomainIdentityResponse *>(send(request));
}

/**
 * Deprecated. Use the <code>VerifyEmailIdentity</code> operation to verify a new email
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
VerifyEmailAddressResponse * SesClient::verifyEmailAddress(const VerifyEmailAddressRequest &request)
{
    return qobject_cast<VerifyEmailAddressResponse *>(send(request));
}

/**
 * Adds an email address to the list of identities for your Amazon SES account and attempts to verify it. As a result of
 * executing this operation, a verification email is sent to the specified
 *
 * address>
 *
 * You can execute this operation no more than once per
 *
 * @param  request Request to send to Amazon Simple Email Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
VerifyEmailIdentityResponse * SesClient::verifyEmailIdentity(const VerifyEmailIdentityRequest &request)
{
    return qobject_cast<VerifyEmailIdentityResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  SesClientPrivate
 *
 * @brief  Private implementation for SesClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SesClientPrivate object.
 *
 * @param  q  Pointer to this object's public SesClient instance.
 */
SesClientPrivate::SesClientPrivate(SesClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SES
} // namespace AWS
