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

#include "snsclient.h"
#include "snsclient_p.h"

#include "core/awssignaturev4.h"
#include "addpermissionrequest.h"
#include "addpermissionresponse.h"
#include "checkifphonenumberisoptedoutrequest.h"
#include "checkifphonenumberisoptedoutresponse.h"
#include "confirmsubscriptionrequest.h"
#include "confirmsubscriptionresponse.h"
#include "createplatformapplicationrequest.h"
#include "createplatformapplicationresponse.h"
#include "createplatformendpointrequest.h"
#include "createplatformendpointresponse.h"
#include "createsmssandboxphonenumberrequest.h"
#include "createsmssandboxphonenumberresponse.h"
#include "createtopicrequest.h"
#include "createtopicresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "deleteplatformapplicationrequest.h"
#include "deleteplatformapplicationresponse.h"
#include "deletesmssandboxphonenumberrequest.h"
#include "deletesmssandboxphonenumberresponse.h"
#include "deletetopicrequest.h"
#include "deletetopicresponse.h"
#include "getendpointattributesrequest.h"
#include "getendpointattributesresponse.h"
#include "getplatformapplicationattributesrequest.h"
#include "getplatformapplicationattributesresponse.h"
#include "getsmsattributesrequest.h"
#include "getsmsattributesresponse.h"
#include "getsmssandboxaccountstatusrequest.h"
#include "getsmssandboxaccountstatusresponse.h"
#include "getsubscriptionattributesrequest.h"
#include "getsubscriptionattributesresponse.h"
#include "gettopicattributesrequest.h"
#include "gettopicattributesresponse.h"
#include "listendpointsbyplatformapplicationrequest.h"
#include "listendpointsbyplatformapplicationresponse.h"
#include "listoriginationnumbersrequest.h"
#include "listoriginationnumbersresponse.h"
#include "listphonenumbersoptedoutrequest.h"
#include "listphonenumbersoptedoutresponse.h"
#include "listplatformapplicationsrequest.h"
#include "listplatformapplicationsresponse.h"
#include "listsmssandboxphonenumbersrequest.h"
#include "listsmssandboxphonenumbersresponse.h"
#include "listsubscriptionsrequest.h"
#include "listsubscriptionsresponse.h"
#include "listsubscriptionsbytopicrequest.h"
#include "listsubscriptionsbytopicresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtopicsrequest.h"
#include "listtopicsresponse.h"
#include "optinphonenumberrequest.h"
#include "optinphonenumberresponse.h"
#include "publishrequest.h"
#include "publishresponse.h"
#include "removepermissionrequest.h"
#include "removepermissionresponse.h"
#include "setendpointattributesrequest.h"
#include "setendpointattributesresponse.h"
#include "setplatformapplicationattributesrequest.h"
#include "setplatformapplicationattributesresponse.h"
#include "setsmsattributesrequest.h"
#include "setsmsattributesresponse.h"
#include "setsubscriptionattributesrequest.h"
#include "setsubscriptionattributesresponse.h"
#include "settopicattributesrequest.h"
#include "settopicattributesresponse.h"
#include "subscriberequest.h"
#include "subscriberesponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "unsubscriberequest.h"
#include "unsubscriberesponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "verifysmssandboxphonenumberrequest.h"
#include "verifysmssandboxphonenumberresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SNS
 * \brief Contains classess for accessing Amazon Simple Notification Service ( SNS).
 *
 * \inmodule QtAwsSns
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SnsClient
 * \brief The SnsClient class provides access to the Amazon Simple Notification Service ( SNS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see the <a
 *  href="http://aws.amazon.com/sns/">Amazon SNS product page</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/sns/latest/dg/sns-authentication-and-access-control.html">Identity and access
 *  management in Amazon SNS</a> in the <i>Amazon SNS Developer Guide.</i>
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 */

/*!
 * \brief Constructs a SnsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SnsClient::SnsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2010-03-31"),
    QStringLiteral("sns"),
    QStringLiteral("Amazon Simple Notification Service"),
    QStringLiteral("sns"),
    parent), d_ptr(new SnsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload SnsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SnsClient::SnsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2010-03-31"),
    QStringLiteral("sns"),
    QStringLiteral("Amazon Simple Notification Service"),
    QStringLiteral("sns"),
    parent), d_ptr(new SnsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * AddPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified
 */
AddPermissionResponse * SnsClient::addPermission(const AddPermissionRequest &request)
{
    return qobject_cast<AddPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * CheckIfPhoneNumberIsOptedOutResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a phone number and indicates whether the phone holder has opted out of receiving SMS messages from your account.
 * You cannot send SMS messages to a number that is opted
 *
 * out>
 *
 * To resume sending messages, you can opt in the number by using the <code>OptInPhoneNumber</code>
 */
CheckIfPhoneNumberIsOptedOutResponse * SnsClient::checkIfPhoneNumberIsOptedOut(const CheckIfPhoneNumberIsOptedOutRequest &request)
{
    return qobject_cast<CheckIfPhoneNumberIsOptedOutResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ConfirmSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier
 * <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon
 * Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is
 * set to
 */
ConfirmSubscriptionResponse * SnsClient::confirmSubscription(const ConfirmSubscriptionRequest &request)
{
    return qobject_cast<ConfirmSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * CreatePlatformApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a platform application object for one of the supported push notification services, such as APNS and GCM
 * (Firebase Cloud Messaging), to which devices and mobile apps may register. You must specify
 * <code>PlatformPrincipal</code> and <code>PlatformCredential</code> attributes when using the
 * <code>CreatePlatformApplication</code>
 *
 * action>
 *
 * <code>PlatformPrincipal</code> and <code>PlatformCredential</code> are received from the notification
 *
 * service> <ul> <li>
 *
 * For <code>ADM</code>, <code>PlatformPrincipal</code> is <code>client id</code> and <code>PlatformCredential</code> is
 * <code>client
 *
 * secret</code>> </li> <li>
 *
 * For <code>Baidu</code>, <code>PlatformPrincipal</code> is <code>API key</code> and <code>PlatformCredential</code> is
 * <code>secret
 *
 * key</code>> </li> <li>
 *
 * For <code>APNS</code> and <code>APNS_SANDBOX</code>, <code>PlatformPrincipal</code> is <code>SSL certificate</code> and
 * <code>PlatformCredential</code> is <code>private
 *
 * key</code>> </li> <li>
 *
 * For <code>GCM</code> (Firebase Cloud Messaging), there is no <code>PlatformPrincipal</code> and the
 * <code>PlatformCredential</code> is <code>API
 *
 * key</code>> </li> <li>
 *
 * For <code>MPNS</code>, <code>PlatformPrincipal</code> is <code>TLS certificate</code> and
 * <code>PlatformCredential</code> is <code>private
 *
 * key</code>> </li> <li>
 *
 * For <code>WNS</code>, <code>PlatformPrincipal</code> is <code>Package Security Identifier</code> and
 * <code>PlatformCredential</code> is <code>secret
 *
 * key</code>> </li> </ul>
 *
 * You can use the returned <code>PlatformApplicationArn</code> as an attribute for the <code>CreatePlatformEndpoint</code>
 */
CreatePlatformApplicationResponse * SnsClient::createPlatformApplication(const CreatePlatformApplicationRequest &request)
{
    return qobject_cast<CreatePlatformApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * CreatePlatformEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM
 * (Firebase Cloud Messaging) and APNS. <code>CreatePlatformEndpoint</code> requires the
 * <code>PlatformApplicationArn</code> that is returned from <code>CreatePlatformApplication</code>. You can use the
 * returned <code>EndpointArn</code> to send a message to a mobile app or by the <code>Subscribe</code> action for
 * subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester already owns
 * an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a new endpoint.
 * For more information, see <a href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile
 * Push Notifications</a>.
 *
 * </p
 *
 * When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The
 * token field must also contain the ChannelId. For more information, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for
 * Baidu</a>.
 */
CreatePlatformEndpointResponse * SnsClient::createPlatformEndpoint(const CreatePlatformEndpointRequest &request)
{
    return qobject_cast<CreatePlatformEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * CreateSMSSandboxPhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a destination phone number to an AWS account in the SMS sandbox and sends a one-time password (OTP) to that phone
 *
 * number>
 *
 * When you start using Amazon SNS to send SMS messages, your AWS account is in the <i>SMS sandbox</i>. The SMS sandbox
 * provides a safe environment for you to try Amazon SNS features without risking your reputation as an SMS sender. While
 * your account is in the SMS sandbox, you can use all of the features of Amazon SNS. However, you can send SMS messages
 * only to verified destination phone numbers. For more information, including how to move out of the sandbox to send
 * messages without restrictions, see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
 * sandbox</a> in the <i>Amazon SNS Developer
 */
CreateSMSSandboxPhoneNumberResponse * SnsClient::createSMSSandboxPhoneNumber(const CreateSMSSandboxPhoneNumberRequest &request)
{
    return qobject_cast<CreateSMSSandboxPhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * CreateTopicResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a topic to which notifications can be published. Users can create at most 100,000 standard topics (at most 1,000
 * FIFO topics). For more information, see <a href="http://aws.amazon.com/sns/">https://aws.amazon.com/sns</a>. This action
 * is idempotent, so if the requester already owns a topic with the specified name, that topic's ARN is returned without
 * creating a new
 */
CreateTopicResponse * SnsClient::createTopic(const CreateTopicRequest &request)
{
    return qobject_cast<CreateTopicResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the endpoint for a device and mobile app from Amazon SNS. This action is idempotent. For more information, see
 * <a href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>.
 *
 * </p
 *
 * When you delete an endpoint that is also subscribed to a topic, then you must also unsubscribe the endpoint from the
 */
DeleteEndpointResponse * SnsClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * DeletePlatformApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a platform application object for one of the supported push notification services, such as APNS and GCM
 * (Firebase Cloud Messaging). For more information, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>.
 */
DeletePlatformApplicationResponse * SnsClient::deletePlatformApplication(const DeletePlatformApplicationRequest &request)
{
    return qobject_cast<DeletePlatformApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * DeleteSMSSandboxPhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS account's verified or pending phone number from the SMS
 *
 * sandbox>
 *
 * When you start using Amazon SNS to send SMS messages, your AWS account is in the <i>SMS sandbox</i>. The SMS sandbox
 * provides a safe environment for you to try Amazon SNS features without risking your reputation as an SMS sender. While
 * your account is in the SMS sandbox, you can use all of the features of Amazon SNS. However, you can send SMS messages
 * only to verified destination phone numbers. For more information, including how to move out of the sandbox to send
 * messages without restrictions, see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
 * sandbox</a> in the <i>Amazon SNS Developer
 */
DeleteSMSSandboxPhoneNumberResponse * SnsClient::deleteSMSSandboxPhoneNumber(const DeleteSMSSandboxPhoneNumberRequest &request)
{
    return qobject_cast<DeleteSMSSandboxPhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * DeleteTopicResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic
 * from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result
 * in an
 */
DeleteTopicResponse * SnsClient::deleteTopic(const DeleteTopicRequest &request)
{
    return qobject_cast<DeleteTopicResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * GetEndpointAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM (Firebase
 * Cloud Messaging) and APNS. For more information, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>.
 */
GetEndpointAttributesResponse * SnsClient::getEndpointAttributes(const GetEndpointAttributesRequest &request)
{
    return qobject_cast<GetEndpointAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * GetPlatformApplicationAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the attributes of the platform application object for the supported push notification services, such as APNS
 * and GCM (Firebase Cloud Messaging). For more information, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>.
 */
GetPlatformApplicationAttributesResponse * SnsClient::getPlatformApplicationAttributes(const GetPlatformApplicationAttributesRequest &request)
{
    return qobject_cast<GetPlatformApplicationAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * GetSMSAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the settings for sending SMS messages from your
 *
 * account>
 *
 * These settings are set with the <code>SetSMSAttributes</code>
 */
GetSMSAttributesResponse * SnsClient::getSMSAttributes(const GetSMSAttributesRequest &request)
{
    return qobject_cast<GetSMSAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * GetSMSSandboxAccountStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the SMS sandbox status for the calling AWS account in the target AWS
 *
 * Region>
 *
 * When you start using Amazon SNS to send SMS messages, your AWS account is in the <i>SMS sandbox</i>. The SMS sandbox
 * provides a safe environment for you to try Amazon SNS features without risking your reputation as an SMS sender. While
 * your account is in the SMS sandbox, you can use all of the features of Amazon SNS. However, you can send SMS messages
 * only to verified destination phone numbers. For more information, including how to move out of the sandbox to send
 * messages without restrictions, see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
 * sandbox</a> in the <i>Amazon SNS Developer
 */
GetSMSSandboxAccountStatusResponse * SnsClient::getSMSSandboxAccountStatus(const GetSMSSandboxAccountStatusRequest &request)
{
    return qobject_cast<GetSMSSandboxAccountStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * GetSubscriptionAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all of the properties of a
 */
GetSubscriptionAttributesResponse * SnsClient::getSubscriptionAttributes(const GetSubscriptionAttributesRequest &request)
{
    return qobject_cast<GetSubscriptionAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * GetTopicAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the
 */
GetTopicAttributesResponse * SnsClient::getTopicAttributes(const GetTopicAttributesRequest &request)
{
    return qobject_cast<GetTopicAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListEndpointsByPlatformApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM (Firebase
 * Cloud Messaging) and APNS. The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a
 * limited list of endpoints, up to 100. If additional records are available after the first page results, then a NextToken
 * string will be returned. To receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using
 * the NextToken string received from the previous call. When there are no more records to return, NextToken will be null.
 * For more information, see <a href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile
 * Push Notifications</a>.
 *
 * </p
 *
 * This action is throttled at 30 transactions per second
 */
ListEndpointsByPlatformApplicationResponse * SnsClient::listEndpointsByPlatformApplication(const ListEndpointsByPlatformApplicationRequest &request)
{
    return qobject_cast<ListEndpointsByPlatformApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListOriginationNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the calling AWS account's dedicated origination numbers and their metadata. For more information about origination
 * numbers, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/channels-sms-originating-identities-origination-numbers.html">Origination
 * numbers</a> in the <i>Amazon SNS Developer
 */
ListOriginationNumbersResponse * SnsClient::listOriginationNumbers(const ListOriginationNumbersRequest &request)
{
    return qobject_cast<ListOriginationNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListPhoneNumbersOptedOutResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of phone numbers that are opted out, meaning you cannot send SMS messages to
 *
 * them>
 *
 * The results for <code>ListPhoneNumbersOptedOut</code> are paginated, and each page returns up to 100 phone numbers. If
 * additional phone numbers are available after the first page of results, then a <code>NextToken</code> string will be
 * returned. To receive the next page, you call <code>ListPhoneNumbersOptedOut</code> again using the
 * <code>NextToken</code> string received from the previous call. When there are no more records to return,
 * <code>NextToken</code> will be
 */
ListPhoneNumbersOptedOutResponse * SnsClient::listPhoneNumbersOptedOut(const ListPhoneNumbersOptedOutRequest &request)
{
    return qobject_cast<ListPhoneNumbersOptedOutResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListPlatformApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the platform application objects for the supported push notification services, such as APNS and GCM (Firebase
 * Cloud Messaging). The results for <code>ListPlatformApplications</code> are paginated and return a limited list of
 * applications, up to 100. If additional records are available after the first page results, then a NextToken string will
 * be returned. To receive the next page, you call <code>ListPlatformApplications</code> using the NextToken string
 * received from the previous call. When there are no more records to return, <code>NextToken</code> will be null. For more
 * information, see <a href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push
 * Notifications</a>.
 *
 * </p
 *
 * This action is throttled at 15 transactions per second
 */
ListPlatformApplicationsResponse * SnsClient::listPlatformApplications(const ListPlatformApplicationsRequest &request)
{
    return qobject_cast<ListPlatformApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListSMSSandboxPhoneNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the calling AWS account's current verified and pending destination phone numbers in the SMS
 *
 * sandbox>
 *
 * When you start using Amazon SNS to send SMS messages, your AWS account is in the <i>SMS sandbox</i>. The SMS sandbox
 * provides a safe environment for you to try Amazon SNS features without risking your reputation as an SMS sender. While
 * your account is in the SMS sandbox, you can use all of the features of Amazon SNS. However, you can send SMS messages
 * only to verified destination phone numbers. For more information, including how to move out of the sandbox to send
 * messages without restrictions, see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
 * sandbox</a> in the <i>Amazon SNS Developer
 */
ListSMSSandboxPhoneNumbersResponse * SnsClient::listSMSSandboxPhoneNumbers(const ListSMSSandboxPhoneNumbersRequest &request)
{
    return qobject_cast<ListSMSSandboxPhoneNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there
 * are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new
 * <code>ListSubscriptions</code> call to get further
 *
 * results>
 *
 * This action is throttled at 30 transactions per second
 */
ListSubscriptionsResponse * SnsClient::listSubscriptions(const ListSubscriptionsRequest &request)
{
    return qobject_cast<ListSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListSubscriptionsByTopicResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100.
 * If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in
 * a new <code>ListSubscriptionsByTopic</code> call to get further
 *
 * results>
 *
 * This action is throttled at 30 transactions per second
 */
ListSubscriptionsByTopicResponse * SnsClient::listSubscriptionsByTopic(const ListSubscriptionsByTopicRequest &request)
{
    return qobject_cast<ListSubscriptionsByTopicResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tags added to the specified Amazon SNS topic. For an overview, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS Tags</a> in the <i>Amazon Simple Notification
 * Service Developer
 */
ListTagsForResourceResponse * SnsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * ListTopicsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more
 * topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new
 * <code>ListTopics</code> call to get further
 *
 * results>
 *
 * This action is throttled at 30 transactions per second
 */
ListTopicsResponse * SnsClient::listTopics(const ListTopicsRequest &request)
{
    return qobject_cast<ListTopicsResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * OptInPhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this request to opt in a phone number that is opted out, which enables you to resume sending SMS messages to the
 *
 * number>
 *
 * You can opt in a phone number only once every 30
 */
OptInPhoneNumberResponse * SnsClient::optInPhoneNumber(const OptInPhoneNumberRequest &request)
{
    return qobject_cast<OptInPhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * PublishResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a message to an Amazon SNS topic, a text message (SMS message) directly to a phone number, or a message to a
 * mobile platform endpoint (when you specify the
 *
 * <code>TargetArn</code>)>
 *
 * If you send a message to a topic, Amazon SNS delivers the message to each endpoint that is subscribed to the topic. The
 * format of the message depends on the notification protocol for each subscribed
 *
 * endpoint>
 *
 * When a <code>messageId</code> is returned, the message has been saved and Amazon SNS will attempt to deliver it
 *
 * shortly>
 *
 * To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or
 * mobile phone, you must specify the EndpointArn for the TargetArn parameter. The EndpointArn is returned when making a
 * call with the <code>CreatePlatformEndpoint</code> action.
 *
 * </p
 *
 * For more information about formatting messages, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-send-custommessage.html">Send Custom Platform-Specific
 * Payloads in Messages to Mobile Devices</a>.
 *
 * </p <b>
 *
 * You can publish messages only to topics and endpoints in the same AWS
 */
PublishResponse * SnsClient::publish(const PublishRequest &request)
{
    return qobject_cast<PublishResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * RemovePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a statement from a topic's access control
 */
RemovePermissionResponse * SnsClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * SetEndpointAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM
 * (Firebase Cloud Messaging) and APNS. For more information, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>.
 */
SetEndpointAttributesResponse * SnsClient::setEndpointAttributes(const SetEndpointAttributesRequest &request)
{
    return qobject_cast<SetEndpointAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * SetPlatformApplicationAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the attributes of the platform application object for the supported push notification services, such as APNS and
 * GCM (Firebase Cloud Messaging). For more information, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. For
 * information on configuring attributes for message delivery status, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/sns-msg-status.html">Using Amazon SNS Application Attributes for Message
 * Delivery Status</a>.
 */
SetPlatformApplicationAttributesResponse * SnsClient::setPlatformApplicationAttributes(const SetPlatformApplicationAttributesRequest &request)
{
    return qobject_cast<SetPlatformApplicationAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * SetSMSAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this request to set the default settings for sending SMS messages and receiving daily SMS usage
 *
 * reports>
 *
 * You can override some of these settings for a single message when you use the <code>Publish</code> action with the
 * <code>MessageAttributes.entry.N</code> parameter. For more information, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Publishing to a mobile phone</a> in the
 * <i>Amazon SNS Developer
 *
 * Guide</i>> <note>
 *
 * To use this operation, you must grant the Amazon SNS service principal (<code>sns.amazonaws.com</code>) permission to
 * perform the <code>s3:ListBucket</code> action.
 */
SetSMSAttributesResponse * SnsClient::setSMSAttributes(const SetSMSAttributesRequest &request)
{
    return qobject_cast<SetSMSAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * SetSubscriptionAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a subscription owner to set an attribute of the subscription to a new
 */
SetSubscriptionAttributesResponse * SnsClient::setSubscriptionAttributes(const SetSubscriptionAttributesRequest &request)
{
    return qobject_cast<SetSubscriptionAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * SetTopicAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a topic owner to set an attribute of the topic to a new
 */
SetTopicAttributesResponse * SnsClient::setTopicAttributes(const SetTopicAttributesRequest &request)
{
    return qobject_cast<SetTopicAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * SubscribeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Subscribes an endpoint to an Amazon SNS topic. If the endpoint type is HTTP/S or email, or if the endpoint and the topic
 * are not in the same AWS account, the endpoint owner must run the <code>ConfirmSubscription</code> action to confirm the
 *
 * subscription>
 *
 * You call the <code>ConfirmSubscription</code> action with the token from the subscription response. Confirmation tokens
 * are valid for three
 *
 * days>
 *
 * This action is throttled at 100 transactions per second
 */
SubscribeResponse * SnsClient::subscribe(const SubscribeRequest &request)
{
    return qobject_cast<SubscribeResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add tags to the specified Amazon SNS topic. For an overview, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS Tags</a> in the <i>Amazon SNS Developer
 *
 * Guide</i>>
 *
 * When you use topic tags, keep the following guidelines in
 *
 * mind> <ul> <li>
 *
 * Adding more than 50 tags to a topic isn't
 *
 * recommended> </li> <li>
 *
 * Tags don't have any semantic meaning. Amazon SNS interprets tags as character
 *
 * strings> </li> <li>
 *
 * Tags are
 *
 * case-sensitive> </li> <li>
 *
 * A new tag with a key identical to that of an existing tag overwrites the existing
 *
 * tag> </li> <li>
 *
 * Tagging actions are limited to 10 TPS per AWS account, per AWS region. If your application requires a higher throughput,
 * file a <a href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical support
 */
TagResourceResponse * SnsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * UnsubscribeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or
 * the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not
 * require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the
 * endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was
 *
 * unintended>
 *
 * This action is throttled at 100 transactions per second
 */
UnsubscribeResponse * SnsClient::unsubscribe(const UnsubscribeRequest &request)
{
    return qobject_cast<UnsubscribeResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove tags from the specified Amazon SNS topic. For an overview, see <a
 * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS Tags</a> in the <i>Amazon SNS Developer
 */
UntagResourceResponse * SnsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SnsClient service, and returns a pointer to an
 * VerifySMSSandboxPhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Verifies a destination phone number with a one-time password (OTP) for the calling AWS
 *
 * account>
 *
 * When you start using Amazon SNS to send SMS messages, your AWS account is in the <i>SMS sandbox</i>. The SMS sandbox
 * provides a safe environment for you to try Amazon SNS features without risking your reputation as an SMS sender. While
 * your account is in the SMS sandbox, you can use all of the features of Amazon SNS. However, you can send SMS messages
 * only to verified destination phone numbers. For more information, including how to move out of the sandbox to send
 * messages without restrictions, see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
 * sandbox</a> in the <i>Amazon SNS Developer
 */
VerifySMSSandboxPhoneNumberResponse * SnsClient::verifySMSSandboxPhoneNumber(const VerifySMSSandboxPhoneNumberRequest &request)
{
    return qobject_cast<VerifySMSSandboxPhoneNumberResponse *>(send(request));
}

/*!
 * \class QtAws::SNS::SnsClientPrivate
 * \brief The SnsClientPrivate class provides private implementation for SnsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SnsClientPrivate object with public implementation \a q.
 */
SnsClientPrivate::SnsClientPrivate(SnsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace SNS
} // namespace QtAws
