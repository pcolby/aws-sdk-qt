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

#include "snsclient.h"
#include "snsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SNS {

/**
 * @class  SnsClient
 *
 * @brief  Client for Amazon Simple Notification Service ( SNS)
 *
 * <fullname>Amazon Simple Notification Service</fullname>
 *
 * Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 * applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 * over multiple delivery protocols. For more information about this product see <a
 * href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 * their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 *
 * </p
 *
 * We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 * functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 * requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 * for Amazon Web Services</a>.
 */

/**
 * @brief  Constructs a new SnsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SnsClient::SnsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SnsClientPrivate(this), parent)
{
    Q_D(SnsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("sns");
}

/**
 * @brief  Constructs a new SnsClient object.
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
SnsClient::SnsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SnsClientPrivate(this), parent)
{
    Q_D(SnsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("sns");
}

/// @todo override getEndpoint() to use sns.

/**
 * Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddPermissionResponse * SnsClient::addPermission(const AddPermissionRequest &request)
{

}

/**
 * Accepts a phone number and indicates whether the phone holder has opted out of receiving SMS messages from your account.
 * You cannot send SMS messages to a number that is opted
 *
 * out>
 *
 * To resume sending messages, you can opt in the number by using the <code>OptInPhoneNumber</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CheckIfPhoneNumberIsOptedOutResponse * SnsClient::checkIfPhoneNumberIsOptedOut(const CheckIfPhoneNumberIsOptedOutRequest &request)
{

}

/**
 * Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier
 * <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon
 * Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is
 * set to
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfirmSubscriptionResponse * SnsClient::confirmSubscription(const ConfirmSubscriptionRequest &request)
{

}

/**
 * Creates a platform application object for one of the supported push notification services, such as APNS and GCM, to
 * which devices and mobile apps may register. You must specify PlatformPrincipal and PlatformCredential attributes when
 * using the <code>CreatePlatformApplication</code> action. The PlatformPrincipal is received from the notification
 * service. For APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM, PlatformPrincipal is not applicable.
 * For ADM, PlatformPrincipal is "client id". The PlatformCredential is also received from the notification service. For
 * WNS, PlatformPrincipal is "Package Security Identifier". For MPNS, PlatformPrincipal is "TLS certificate". For Baidu,
 * PlatformPrincipal is "API
 *
 * key">
 *
 * For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM, PlatformCredential is "API key". For ADM,
 * PlatformCredential is "client secret". For WNS, PlatformCredential is "secret key". For MPNS, PlatformCredential is
 * "private key". For Baidu, PlatformCredential is "secret key". The PlatformApplicationArn that is returned when using
 * <code>CreatePlatformApplication</code> is then used as an attribute for the <code>CreatePlatformEndpoint</code> action.
 * For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile
 * Push Notifications</a>. For more information about obtaining the PlatformPrincipal and PlatformCredential for each of
 * the supported push notification services, see <a
 * href="http://docs.aws.amazon.com/sns/latest/dg/mobile-push-apns.html">Getting Started with Apple Push Notification
 * Service</a>, <a href="http://docs.aws.amazon.com/sns/latest/dg/mobile-push-adm.html">Getting Started with Amazon Device
 * Messaging</a>, <a href="http://docs.aws.amazon.com/sns/latest/dg/mobile-push-baidu.html">Getting Started with Baidu
 * Cloud Push</a>, <a href="http://docs.aws.amazon.com/sns/latest/dg/mobile-push-gcm.html">Getting Started with Google
 * Cloud Messaging for Android</a>, <a href="http://docs.aws.amazon.com/sns/latest/dg/mobile-push-mpns.html">Getting
 * Started with MPNS</a>, or <a href="http://docs.aws.amazon.com/sns/latest/dg/mobile-push-wns.html">Getting Started with
 * WNS</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePlatformApplicationResponse * SnsClient::createPlatformApplication(const CreatePlatformApplicationRequest &request)
{

}

/**
 * Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM and
 * APNS. <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is returned from
 * <code>CreatePlatformApplication</code>. The EndpointArn that is returned when using <code>CreatePlatformEndpoint</code>
 * can then be used by the <code>Publish</code> action to send a message to a mobile app or by the <code>Subscribe</code>
 * action for subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
 * already owns an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a
 * new endpoint. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
 * Amazon SNS Mobile Push Notifications</a>.
 *
 * </p
 *
 * When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The
 * token field must also contain the ChannelId. For more information, see <a
 * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for
 * Baidu</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePlatformEndpointResponse * SnsClient::createPlatformEndpoint(const CreatePlatformEndpointRequest &request)
{

}

/**
 * Creates a topic to which notifications can be published. Users can create at most 100,000 topics. For more information,
 * see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. This action is idempotent, so if the requester
 * already owns a topic with the specified name, that topic's ARN is returned without creating a new
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTopicResponse * SnsClient::createTopic(const CreateTopicRequest &request)
{

}

/**
 * Deletes the endpoint for a device and mobile app from Amazon SNS. This action is idempotent. For more information, see
 * <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>.
 *
 * </p
 *
 * When you delete an endpoint that is also subscribed to a topic, then you must also unsubscribe the endpoint from the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEndpointResponse * SnsClient::deleteEndpoint(const DeleteEndpointRequest &request)
{

}

/**
 * Deletes a platform application object for one of the supported push notification services, such as APNS and GCM. For
 * more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push
 * Notifications</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePlatformApplicationResponse * SnsClient::deletePlatformApplication(const DeletePlatformApplicationRequest &request)
{

}

/**
 * Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic
 * from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result
 * in an
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTopicResponse * SnsClient::deleteTopic(const DeleteTopicRequest &request)
{

}

/**
 * Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM and APNS.
 * For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile
 * Push Notifications</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEndpointAttributesResponse * SnsClient::getEndpointAttributes(const GetEndpointAttributesRequest &request)
{

}

/**
 * Retrieves the attributes of the platform application object for the supported push notification services, such as APNS
 * and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
 * SNS Mobile Push Notifications</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPlatformApplicationAttributesResponse * SnsClient::getPlatformApplicationAttributes(const GetPlatformApplicationAttributesRequest &request)
{

}

/**
 * Returns the settings for sending SMS messages from your
 *
 * account>
 *
 * These settings are set with the <code>SetSMSAttributes</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSMSAttributesResponse * SnsClient::getSMSAttributes(const GetSMSAttributesRequest &request)
{

}

/**
 * Returns all of the properties of a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSubscriptionAttributesResponse * SnsClient::getSubscriptionAttributes(const GetSubscriptionAttributesRequest &request)
{

}

/**
 * Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTopicAttributesResponse * SnsClient::getTopicAttributes(const GetTopicAttributesRequest &request)
{

}

/**
 * Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM and APNS.
 * The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a limited list of endpoints, up
 * to 100. If additional records are available after the first page results, then a NextToken string will be returned. To
 * receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using the NextToken string
 * received from the previous call. When there are no more records to return, NextToken will be null. For more information,
 * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push
 * Notifications</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListEndpointsByPlatformApplicationResponse * SnsClient::listEndpointsByPlatformApplication(const ListEndpointsByPlatformApplicationRequest &request)
{

}

/**
 * Returns a list of phone numbers that are opted out, meaning you cannot send SMS messages to
 *
 * them>
 *
 * The results for <code>ListPhoneNumbersOptedOut</code> are paginated, and each page returns up to 100 phone numbers. If
 * additional phone numbers are available after the first page of results, then a <code>NextToken</code> string will be
 * returned. To receive the next page, you call <code>ListPhoneNumbersOptedOut</code> again using the
 * <code>NextToken</code> string received from the previous call. When there are no more records to return,
 * <code>NextToken</code> will be
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPhoneNumbersOptedOutResponse * SnsClient::listPhoneNumbersOptedOut(const ListPhoneNumbersOptedOutRequest &request)
{

}

/**
 * Lists the platform application objects for the supported push notification services, such as APNS and GCM. The results
 * for <code>ListPlatformApplications</code> are paginated and return a limited list of applications, up to 100. If
 * additional records are available after the first page results, then a NextToken string will be returned. To receive the
 * next page, you call <code>ListPlatformApplications</code> using the NextToken string received from the previous call.
 * When there are no more records to return, NextToken will be null. For more information, see <a
 * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPlatformApplicationsResponse * SnsClient::listPlatformApplications(const ListPlatformApplicationsRequest &request)
{

}

/**
 * Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there
 * are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new
 * <code>ListSubscriptions</code> call to get further
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSubscriptionsResponse * SnsClient::listSubscriptions(const ListSubscriptionsRequest &request)
{

}

/**
 * Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100.
 * If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in
 * a new <code>ListSubscriptionsByTopic</code> call to get further
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSubscriptionsByTopicResponse * SnsClient::listSubscriptionsByTopic(const ListSubscriptionsByTopicRequest &request)
{

}

/**
 * Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more
 * topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new
 * <code>ListTopics</code> call to get further
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTopicsResponse * SnsClient::listTopics(const ListTopicsRequest &request)
{

}

/**
 * Use this request to opt in a phone number that is opted out, which enables you to resume sending SMS messages to the
 *
 * number>
 *
 * You can opt in a phone number only once every 30
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
OptInPhoneNumberResponse * SnsClient::optInPhoneNumber(const OptInPhoneNumberRequest &request)
{

}

/**
 * Sends a message to all of a topic's subscribed endpoints. When a <code>messageId</code> is returned, the message has
 * been saved and Amazon SNS will attempt to deliver it to the topic's subscribers shortly. The format of the outgoing
 * message to each subscribed endpoint depends on the notification
 *
 * protocol>
 *
 * To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or
 * mobile phone, you must specify the EndpointArn for the TargetArn parameter. The EndpointArn is returned when making a
 * call with the <code>CreatePlatformEndpoint</code> action.
 *
 * </p
 *
 * For more information about formatting messages, see <a
 * href="http://docs.aws.amazon.com/sns/latest/dg/mobile-push-send-custommessage.html">Send Custom Platform-Specific
 * Payloads in Messages to Mobile Devices</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PublishResponse * SnsClient::publish(const PublishRequest &request)
{

}

/**
 * Removes a statement from a topic's access control
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemovePermissionResponse * SnsClient::removePermission(const RemovePermissionRequest &request)
{

}

/**
 * Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM and
 * APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS
 * Mobile Push Notifications</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetEndpointAttributesResponse * SnsClient::setEndpointAttributes(const SetEndpointAttributesRequest &request)
{

}

/**
 * Sets the attributes of the platform application object for the supported push notification services, such as APNS and
 * GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS
 * Mobile Push Notifications</a>. For information on configuring attributes for message delivery status, see <a
 * href="http://docs.aws.amazon.com/sns/latest/dg/sns-msg-status.html">Using Amazon SNS Application Attributes for Message
 * Delivery Status</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetPlatformApplicationAttributesResponse * SnsClient::setPlatformApplicationAttributes(const SetPlatformApplicationAttributesRequest &request)
{

}

/**
 * Use this request to set the default settings for sending SMS messages and receiving daily SMS usage
 *
 * reports>
 *
 * You can override some of these settings for a single message when you use the <code>Publish</code> action with the
 * <code>MessageAttributes.entry.N</code> parameter. For more information, see <a
 * href="http://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Sending an SMS Message</a> in the <i>Amazon
 * SNS Developer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetSMSAttributesResponse * SnsClient::setSMSAttributes(const SetSMSAttributesRequest &request)
{

}

/**
 * Allows a subscription owner to set an attribute of the topic to a new
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetSubscriptionAttributesResponse * SnsClient::setSubscriptionAttributes(const SetSubscriptionAttributesRequest &request)
{

}

/**
 * Allows a topic owner to set an attribute of the topic to a new
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetTopicAttributesResponse * SnsClient::setTopicAttributes(const SetTopicAttributesRequest &request)
{

}

/**
 * Prepares to subscribe an endpoint by sending the endpoint a confirmation message. To actually create a subscription, the
 * endpoint owner must call the <code>ConfirmSubscription</code> action with the token from the confirmation message.
 * Confirmation tokens are valid for three
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SubscribeResponse * SnsClient::subscribe(const SubscribeRequest &request)
{

}

/**
 * Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or
 * the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not
 * require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the
 * endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UnsubscribeResponse * SnsClient::unsubscribe(const UnsubscribeRequest &request)
{

}

/**
 * @internal
 *
 * @class  SnsClientPrivate
 *
 * @brief  Private implementation for SnsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SnsClientPrivate object.
 *
 * @param  q  Pointer to this object's public SnsClient instance.
 */
SnsClientPrivate::SnsClientPrivate(SnsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SNS
} // namespace AWS
