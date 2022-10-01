// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pinpointsmsvoicev2client.h"
#include "pinpointsmsvoicev2client_p.h"

#include "core/awssignaturev4.h"
#include "associateoriginationidentityrequest.h"
#include "associateoriginationidentityresponse.h"
#include "createconfigurationsetrequest.h"
#include "createconfigurationsetresponse.h"
#include "createeventdestinationrequest.h"
#include "createeventdestinationresponse.h"
#include "createoptoutlistrequest.h"
#include "createoptoutlistresponse.h"
#include "createpoolrequest.h"
#include "createpoolresponse.h"
#include "deleteconfigurationsetrequest.h"
#include "deleteconfigurationsetresponse.h"
#include "deletedefaultmessagetyperequest.h"
#include "deletedefaultmessagetyperesponse.h"
#include "deletedefaultsenderidrequest.h"
#include "deletedefaultsenderidresponse.h"
#include "deleteeventdestinationrequest.h"
#include "deleteeventdestinationresponse.h"
#include "deletekeywordrequest.h"
#include "deletekeywordresponse.h"
#include "deleteoptoutlistrequest.h"
#include "deleteoptoutlistresponse.h"
#include "deleteoptedoutnumberrequest.h"
#include "deleteoptedoutnumberresponse.h"
#include "deletepoolrequest.h"
#include "deletepoolresponse.h"
#include "deletetextmessagespendlimitoverriderequest.h"
#include "deletetextmessagespendlimitoverrideresponse.h"
#include "deletevoicemessagespendlimitoverriderequest.h"
#include "deletevoicemessagespendlimitoverrideresponse.h"
#include "describeaccountattributesrequest.h"
#include "describeaccountattributesresponse.h"
#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsresponse.h"
#include "describeconfigurationsetsrequest.h"
#include "describeconfigurationsetsresponse.h"
#include "describekeywordsrequest.h"
#include "describekeywordsresponse.h"
#include "describeoptoutlistsrequest.h"
#include "describeoptoutlistsresponse.h"
#include "describeoptedoutnumbersrequest.h"
#include "describeoptedoutnumbersresponse.h"
#include "describephonenumbersrequest.h"
#include "describephonenumbersresponse.h"
#include "describepoolsrequest.h"
#include "describepoolsresponse.h"
#include "describesenderidsrequest.h"
#include "describesenderidsresponse.h"
#include "describespendlimitsrequest.h"
#include "describespendlimitsresponse.h"
#include "disassociateoriginationidentityrequest.h"
#include "disassociateoriginationidentityresponse.h"
#include "listpooloriginationidentitiesrequest.h"
#include "listpooloriginationidentitiesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putkeywordrequest.h"
#include "putkeywordresponse.h"
#include "putoptedoutnumberrequest.h"
#include "putoptedoutnumberresponse.h"
#include "releasephonenumberrequest.h"
#include "releasephonenumberresponse.h"
#include "requestphonenumberrequest.h"
#include "requestphonenumberresponse.h"
#include "sendtextmessagerequest.h"
#include "sendtextmessageresponse.h"
#include "sendvoicemessagerequest.h"
#include "sendvoicemessageresponse.h"
#include "setdefaultmessagetyperequest.h"
#include "setdefaultmessagetyperesponse.h"
#include "setdefaultsenderidrequest.h"
#include "setdefaultsenderidresponse.h"
#include "settextmessagespendlimitoverriderequest.h"
#include "settextmessagespendlimitoverrideresponse.h"
#include "setvoicemessagespendlimitoverriderequest.h"
#include "setvoicemessagespendlimitoverrideresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateeventdestinationrequest.h"
#include "updateeventdestinationresponse.h"
#include "updatephonenumberrequest.h"
#include "updatephonenumberresponse.h"
#include "updatepoolrequest.h"
#include "updatepoolresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::PinpointSmsVoiceV2
 * \brief Contains classess for accessing Amazon Pinpoint SMS Voice V2.
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::PinpointSmsVoiceV2Client
 * \brief The PinpointSmsVoiceV2Client class provides access to the Amazon Pinpoint SMS Voice V2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpointSmsVoiceV2
 *
 *  Welcome to the <i>Amazon Pinpoint SMS and Voice, version 2 API Reference</i>. This guide provides information about
 *  Amazon Pinpoint SMS and Voice, version 2 API resources, including supported HTTP methods, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Pinpoint is an Amazon Web Services service that you can use to engage with your recipients across multiple
 *  messaging channels. The Amazon Pinpoint SMS and Voice, version 2 API provides programmatic access to options that are
 *  unique to the SMS and voice channels and supplements the resources provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, it's also helpful to review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html"> Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides key information, such as Amazon Pinpoint integration with other Amazon
 *  Web Services services, and the quotas that apply to use of the
 */

/*!
 * \brief Constructs a PinpointSmsVoiceV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PinpointSmsVoiceV2Client::PinpointSmsVoiceV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointSmsVoiceV2ClientPrivate(this), parent)
{
    Q_D(PinpointSmsVoiceV2Client);
    d->apiVersion = QStringLiteral("2022-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sms-voice");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint SMS Voice V2");
    d->serviceName = QStringLiteral("sms-voice");
}

/*!
 * \overload PinpointSmsVoiceV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PinpointSmsVoiceV2Client::PinpointSmsVoiceV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointSmsVoiceV2ClientPrivate(this), parent)
{
    Q_D(PinpointSmsVoiceV2Client);
    d->apiVersion = QStringLiteral("2022-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sms-voice");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint SMS Voice V2");
    d->serviceName = QStringLiteral("sms-voice");
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * AssociateOriginationIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified origination identity with a
 *
 * pool>
 *
 * If the origination identity is a phone number and is already associated with another pool, an Error is returned. A
 * sender ID can be associated with multiple
 *
 * pools>
 *
 * If the origination identity configuration doesn't match the pool's configuration, an Error is
 */
AssociateOriginationIdentityResponse * PinpointSmsVoiceV2Client::associateOriginationIdentity(const AssociateOriginationIdentityRequest &request)
{
    return qobject_cast<AssociateOriginationIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * CreateConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new configuration set. After you create the configuration set, you can add one or more event destinations to
 *
 * it>
 *
 * A configuration set is a set of rules that you apply to the SMS and voice messages that you
 *
 * send>
 *
 * When you send a message, you can optionally specify a single configuration
 */
CreateConfigurationSetResponse * PinpointSmsVoiceV2Client::createConfigurationSet(const CreateConfigurationSetRequest &request)
{
    return qobject_cast<CreateConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * CreateEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new event destination in a configuration
 *
 * set>
 *
 * An event destination is a location where you send message events. The event options are Amazon CloudWatch, Amazon
 * Kinesis Data Firehose, or Amazon SNS. For example, when a message is delivered successfully, you can send information
 * about that event to an event destination, or send notifications to endpoints that are subscribed to an Amazon SNS
 *
 * topic>
 *
 * Each configuration set can contain between 0 and 5 event destinations. Each event destination can contain a reference to
 * a single destination, such as a CloudWatch or Kinesis Data Firehose
 */
CreateEventDestinationResponse * PinpointSmsVoiceV2Client::createEventDestination(const CreateEventDestinationRequest &request)
{
    return qobject_cast<CreateEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * CreateOptOutListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new opt-out
 *
 * list>
 *
 * If the opt-out list name already exists, an Error is
 *
 * returned>
 *
 * An opt-out list is a list of phone numbers that are opted out, meaning you can't send SMS or voice messages to them. If
 * end user replies with the keyword "STOP," an entry for the phone number is added to the opt-out list. In addition to
 * STOP, your recipients can use any supported opt-out keyword, such as CANCEL or OPTOUT. For a list of supported opt-out
 * keywords, see <a
 * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-manage.html#channels-sms-manage-optout"> SMS
 * opt out </a> in the <i>Amazon Pinpoint User
 */
CreateOptOutListResponse * PinpointSmsVoiceV2Client::createOptOutList(const CreateOptOutListRequest &request)
{
    return qobject_cast<CreateOptOutListResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * CreatePoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new pool and associates the specified origination identity to the pool. A pool can include one or more phone
 * numbers and SenderIds that are associated with your Amazon Web Services
 *
 * account>
 *
 * The new pool inherits its configuration from the specified origination identity. This includes keywords, message type,
 * opt-out list, two-way configuration, and self-managed opt-out configuration. Deletion protection isn't inherited from
 * the origination identity and defaults to
 *
 * false>
 *
 * If the origination identity is a phone number and is already associated with another pool, an Error is returned. A
 * sender ID can be associated with multiple
 */
CreatePoolResponse * PinpointSmsVoiceV2Client::createPool(const CreatePoolRequest &request)
{
    return qobject_cast<CreatePoolResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing configuration
 *
 * set>
 *
 * A configuration set is a set of rules that you apply to voice and SMS messages that you send. In a configuration set,
 * you can specify a destination for specific types of events related to voice and SMS messages.
 */
DeleteConfigurationSetResponse * PinpointSmsVoiceV2Client::deleteConfigurationSet(const DeleteConfigurationSetRequest &request)
{
    return qobject_cast<DeleteConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteDefaultMessageTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing default message type on a configuration
 *
 * set>
 *
 * A message type is a type of messages that you plan to send. If you send account-related messages or time-sensitive
 * messages such as one-time passcodes, choose <b>Transactional</b>. If you plan to send messages that contain marketing
 * material or other promotional content, choose <b>Promotional</b>. This setting applies to your entire Amazon Web
 * Services account.
 */
DeleteDefaultMessageTypeResponse * PinpointSmsVoiceV2Client::deleteDefaultMessageType(const DeleteDefaultMessageTypeRequest &request)
{
    return qobject_cast<DeleteDefaultMessageTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteDefaultSenderIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing default sender ID on a configuration
 *
 * set>
 *
 * A default sender ID is the identity that appears on recipients' devices when they receive SMS messages. Support for
 * sender ID capabilities varies by country or
 */
DeleteDefaultSenderIdResponse * PinpointSmsVoiceV2Client::deleteDefaultSenderId(const DeleteDefaultSenderIdRequest &request)
{
    return qobject_cast<DeleteDefaultSenderIdResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing event
 *
 * destination>
 *
 * An event destination is a location where you send response information about the messages that you send. For example,
 * when a message is delivered successfully, you can send information about that event to an Amazon CloudWatch destination,
 * or send notifications to endpoints that are subscribed to an Amazon SNS
 */
DeleteEventDestinationResponse * PinpointSmsVoiceV2Client::deleteEventDestination(const DeleteEventDestinationRequest &request)
{
    return qobject_cast<DeleteEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteKeywordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing keyword from an origination phone number or
 *
 * pool>
 *
 * A keyword is a word that you can search for on a particular phone number or pool. It is also a specific word or phrase
 * that an end user can send to your number to elicit a response, such as an informational message or a special offer. When
 * your number receives a message that begins with a keyword, Amazon Pinpoint responds with a customizable
 *
 * message>
 *
 * Keywords "HELP" and "STOP" can't be deleted or
 */
DeleteKeywordResponse * PinpointSmsVoiceV2Client::deleteKeyword(const DeleteKeywordRequest &request)
{
    return qobject_cast<DeleteKeywordResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteOptOutListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing opt-out list. All opted out phone numbers in the opt-out list are
 *
 * deleted>
 *
 * If the specified opt-out list name doesn't exist or is in-use by an origination phone number or pool, an Error is
 */
DeleteOptOutListResponse * PinpointSmsVoiceV2Client::deleteOptOutList(const DeleteOptOutListRequest &request)
{
    return qobject_cast<DeleteOptOutListResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteOptedOutNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing opted out destination phone number from the specified opt-out
 *
 * list>
 *
 * Each destination phone number can only be deleted once every 30
 *
 * days>
 *
 * If the specified destination phone number doesn't exist or if the opt-out list doesn't exist, an Error is
 */
DeleteOptedOutNumberResponse * PinpointSmsVoiceV2Client::deleteOptedOutNumber(const DeleteOptedOutNumberRequest &request)
{
    return qobject_cast<DeleteOptedOutNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeletePoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing pool. Deleting a pool disassociates all origination identities from that
 *
 * pool>
 *
 * If the pool status isn't active or if deletion protection is enabled, an Error is
 *
 * returned>
 *
 * A pool is a collection of phone numbers and SenderIds. A pool can include one or more phone numbers and SenderIds that
 * are associated with your Amazon Web Services
 */
DeletePoolResponse * PinpointSmsVoiceV2Client::deletePool(const DeletePoolRequest &request)
{
    return qobject_cast<DeletePoolResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteTextMessageSpendLimitOverrideResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an account-level monthly spending limit override for sending text messages. Deleting a spend limit override will
 * set the <code>EnforcedLimit</code> to equal the <code>MaxLimit</code>, which is controlled by Amazon Web Services. For
 * more information on spend limits (quotas) see <a
 * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon Pinpoint quotas </a> in the
 * <i>Amazon Pinpoint Developer
 */
DeleteTextMessageSpendLimitOverrideResponse * PinpointSmsVoiceV2Client::deleteTextMessageSpendLimitOverride(const DeleteTextMessageSpendLimitOverrideRequest &request)
{
    return qobject_cast<DeleteTextMessageSpendLimitOverrideResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DeleteVoiceMessageSpendLimitOverrideResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an account level monthly spend limit override for sending voice messages. Deleting a spend limit override sets
 * the <code>EnforcedLimit</code> equal to the <code>MaxLimit</code>, which is controlled by Amazon Web Services. For more
 * information on spending limits (quotas) see <a
 * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon Pinpoint quotas</a> in the
 * <i>Amazon Pinpoint Developer
 */
DeleteVoiceMessageSpendLimitOverrideResponse * PinpointSmsVoiceV2Client::deleteVoiceMessageSpendLimitOverride(const DeleteVoiceMessageSpendLimitOverrideRequest &request)
{
    return qobject_cast<DeleteVoiceMessageSpendLimitOverrideResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeAccountAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes attributes of your Amazon Web Services account. The supported account attributes include account tier, which
 * indicates whether your account is in the sandbox or production environment. When you're ready to move your account out
 * of the sandbox, create an Amazon Web Services Support case for a service limit increase
 *
 * request>
 *
 * New Amazon Pinpoint accounts are placed into an SMS or voice sandbox. The sandbox protects both Amazon Web Services end
 * recipients and SMS or voice recipients from fraud and abuse.
 */
DescribeAccountAttributesResponse * PinpointSmsVoiceV2Client::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current Amazon Pinpoint SMS Voice V2 resource quotas for your account. The description for a quota
 * includes the quota name, current usage toward that quota, and the quota's maximum
 *
 * value>
 *
 * When you establish an Amazon Web Services account, the account has initial quotas on the maximum number of configuration
 * sets, opt-out lists, phone numbers, and pools that you can create in a given Region. For more information see <a
 * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html"> Amazon Pinpoint quotas </a> in the
 * <i>Amazon Pinpoint Developer
 */
DescribeAccountLimitsResponse * PinpointSmsVoiceV2Client::describeAccountLimits(const DescribeAccountLimitsRequest &request)
{
    return qobject_cast<DescribeAccountLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeConfigurationSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified configuration sets or all in your
 *
 * account>
 *
 * If you specify configuration set names, the output includes information for only the specified configuration sets. If
 * you specify filters, the output includes information for only those configuration sets that meet the filter criteria. If
 * you don't specify configuration set names or filters, the output includes information for all configuration
 *
 * sets>
 *
 * If you specify a configuration set name that isn't valid, an error is
 */
DescribeConfigurationSetsResponse * PinpointSmsVoiceV2Client::describeConfigurationSets(const DescribeConfigurationSetsRequest &request)
{
    return qobject_cast<DescribeConfigurationSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeKeywordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified keywords or all keywords on your origination phone number or
 *
 * pool>
 *
 * A keyword is a word that you can search for on a particular phone number or pool. It is also a specific word or phrase
 * that an end user can send to your number to elicit a response, such as an informational message or a special offer. When
 * your number receives a message that begins with a keyword, Amazon Pinpoint responds with a customizable
 *
 * message>
 *
 * If you specify a keyword that isn't valid, an Error is
 */
DescribeKeywordsResponse * PinpointSmsVoiceV2Client::describeKeywords(const DescribeKeywordsRequest &request)
{
    return qobject_cast<DescribeKeywordsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeOptOutListsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified opt-out list or all opt-out lists in your
 *
 * account>
 *
 * If you specify opt-out list names, the output includes information for only the specified opt-out lists. Opt-out lists
 * include only those that meet the filter criteria. If you don't specify opt-out list names or filters, the output
 * includes information for all opt-out
 *
 * lists>
 *
 * If you specify an opt-out list name that isn't valid, an Error is
 */
DescribeOptOutListsResponse * PinpointSmsVoiceV2Client::describeOptOutLists(const DescribeOptOutListsRequest &request)
{
    return qobject_cast<DescribeOptOutListsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeOptedOutNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified opted out destination numbers or all opted out destination numbers in an opt-out
 *
 * list>
 *
 * If you specify opted out numbers, the output includes information for only the specified opted out numbers. If you
 * specify filters, the output includes information for only those opted out numbers that meet the filter criteria. If you
 * don't specify opted out numbers or filters, the output includes information for all opted out destination numbers in
 * your opt-out
 *
 * list>
 *
 * If you specify an opted out number that isn't valid, an Error is
 */
DescribeOptedOutNumbersResponse * PinpointSmsVoiceV2Client::describeOptedOutNumbers(const DescribeOptedOutNumbersRequest &request)
{
    return qobject_cast<DescribeOptedOutNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribePhoneNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified origination phone number, or all the phone numbers in your
 *
 * account>
 *
 * If you specify phone number IDs, the output includes information for only the specified phone numbers. If you specify
 * filters, the output includes information for only those phone numbers that meet the filter criteria. If you don't
 * specify phone number IDs or filters, the output includes information for all phone
 *
 * numbers>
 *
 * If you specify a phone number ID that isn't valid, an Error is
 */
DescribePhoneNumbersResponse * PinpointSmsVoiceV2Client::describePhoneNumbers(const DescribePhoneNumbersRequest &request)
{
    return qobject_cast<DescribePhoneNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribePoolsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified pools or all pools associated with your Amazon Web Services
 *
 * account>
 *
 * If you specify pool IDs, the output includes information for only the specified pools. If you specify filters, the
 * output includes information for only those pools that meet the filter criteria. If you don't specify pool IDs or
 * filters, the output includes information for all
 *
 * pools>
 *
 * If you specify a pool ID that isn't valid, an Error is
 *
 * returned>
 *
 * A pool is a collection of phone numbers and SenderIds. A pool can include one or more phone numbers and SenderIds that
 * are associated with your Amazon Web Services
 */
DescribePoolsResponse * PinpointSmsVoiceV2Client::describePools(const DescribePoolsRequest &request)
{
    return qobject_cast<DescribePoolsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeSenderIdsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified SenderIds or all SenderIds associated with your Amazon Web Services
 *
 * account>
 *
 * If you specify SenderIds, the output includes information for only the specified SenderIds. If you specify filters, the
 * output includes information for only those SenderIds that meet the filter criteria. If you don't specify SenderIds or
 * filters, the output includes information for all
 *
 * SenderIds>
 *
 * f you specify a sender ID that isn't valid, an Error is
 */
DescribeSenderIdsResponse * PinpointSmsVoiceV2Client::describeSenderIds(const DescribeSenderIdsRequest &request)
{
    return qobject_cast<DescribeSenderIdsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DescribeSpendLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current Amazon Pinpoint monthly spend limits for sending voice and text
 *
 * messages>
 *
 * When you establish an Amazon Web Services account, the account has initial monthly spend limit in a given Region. For
 * more information on increasing your monthly spend limit, see <a
 * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-awssupport-spend-threshold.html"> Requesting
 * increases to your monthly SMS spending quota for Amazon Pinpoint </a> in the <i>Amazon Pinpoint User
 */
DescribeSpendLimitsResponse * PinpointSmsVoiceV2Client::describeSpendLimits(const DescribeSpendLimitsRequest &request)
{
    return qobject_cast<DescribeSpendLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * DisassociateOriginationIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified origination identity from an existing
 *
 * pool>
 *
 * If the origination identity isn't associated with the specified pool, an Error is
 */
DisassociateOriginationIdentityResponse * PinpointSmsVoiceV2Client::disassociateOriginationIdentity(const DisassociateOriginationIdentityRequest &request)
{
    return qobject_cast<DisassociateOriginationIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * ListPoolOriginationIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all associated origination identities in your
 *
 * pool>
 *
 * If you specify filters, the output includes information for only those origination identities that meet the filter
 */
ListPoolOriginationIdentitiesResponse * PinpointSmsVoiceV2Client::listPoolOriginationIdentities(const ListPoolOriginationIdentitiesRequest &request)
{
    return qobject_cast<ListPoolOriginationIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tags associated with a
 */
ListTagsForResourceResponse * PinpointSmsVoiceV2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * PutKeywordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a keyword configuration on an origination phone number or
 *
 * pool>
 *
 * A keyword is a word that you can search for on a particular phone number or pool. It is also a specific word or phrase
 * that an end user can send to your number to elicit a response, such as an informational message or a special offer. When
 * your number receives a message that begins with a keyword, Amazon Pinpoint responds with a customizable
 *
 * message>
 *
 * If you specify a keyword that isn't valid, an Error is
 */
PutKeywordResponse * PinpointSmsVoiceV2Client::putKeyword(const PutKeywordRequest &request)
{
    return qobject_cast<PutKeywordResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * PutOptedOutNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an opted out destination phone number in the opt-out
 *
 * list>
 *
 * If the destination phone number isn't valid or if the specified opt-out list doesn't exist, an Error is
 */
PutOptedOutNumberResponse * PinpointSmsVoiceV2Client::putOptedOutNumber(const PutOptedOutNumberRequest &request)
{
    return qobject_cast<PutOptedOutNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * ReleasePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Releases an existing origination phone number in your account. Once released, a phone number is no longer available for
 * sending
 *
 * messages>
 *
 * If the origination phone number has deletion protection enabled or is associated with a pool, an Error is
 */
ReleasePhoneNumberResponse * PinpointSmsVoiceV2Client::releasePhoneNumber(const ReleasePhoneNumberRequest &request)
{
    return qobject_cast<ReleasePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * RequestPhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Request an origination phone number for use in your account. For more information on phone number request see <a
 * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-request-number.html"> Requesting a number </a>
 * in the <i>Amazon Pinpoint User
 */
RequestPhoneNumberResponse * PinpointSmsVoiceV2Client::requestPhoneNumber(const RequestPhoneNumberRequest &request)
{
    return qobject_cast<RequestPhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * SendTextMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new text message and sends it to a recipient's phone
 *
 * number>
 *
 * SMS throughput limits are measured in Message Parts per Second (MPS). Your MPS limit depends on the destination country
 * of your messages, as well as the type of phone number (origination number) that you use to send the message. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-limitations-mps.html">Message Parts per Second
 * (MPS) limits</a> in the <i>Amazon Pinpoint User
 */
SendTextMessageResponse * PinpointSmsVoiceV2Client::sendTextMessage(const SendTextMessageRequest &request)
{
    return qobject_cast<SendTextMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * SendVoiceMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to send a request that sends a text message through Amazon Pinpoint. This operation uses <a
 * href="http://aws.amazon.com/polly/">Amazon Polly</a> to convert a text script into a voice
 */
SendVoiceMessageResponse * PinpointSmsVoiceV2Client::sendVoiceMessage(const SendVoiceMessageRequest &request)
{
    return qobject_cast<SendVoiceMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * SetDefaultMessageTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the default message type on a configuration
 *
 * set>
 *
 * Choose the category of SMS messages that you plan to send from this account. If you send account-related messages or
 * time-sensitive messages such as one-time passcodes, choose <b>Transactional</b>. If you plan to send messages that
 * contain marketing material or other promotional content, choose <b>Promotional</b>. This setting applies to your entire
 * Amazon Web Services
 */
SetDefaultMessageTypeResponse * PinpointSmsVoiceV2Client::setDefaultMessageType(const SetDefaultMessageTypeRequest &request)
{
    return qobject_cast<SetDefaultMessageTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * SetDefaultSenderIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets default sender ID on a configuration
 *
 * set>
 *
 * When sending a text message to a destination country that supports sender IDs, the default sender ID on the
 * configuration set specified will be used if no dedicated origination phone numbers or registered sender IDs are
 * available in your
 */
SetDefaultSenderIdResponse * PinpointSmsVoiceV2Client::setDefaultSenderId(const SetDefaultSenderIdRequest &request)
{
    return qobject_cast<SetDefaultSenderIdResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * SetTextMessageSpendLimitOverrideResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets an account level monthly spend limit override for sending text messages. The requested spend limit must be less
 * than or equal to the <code>MaxLimit</code>, which is set by Amazon Web Services.
 */
SetTextMessageSpendLimitOverrideResponse * PinpointSmsVoiceV2Client::setTextMessageSpendLimitOverride(const SetTextMessageSpendLimitOverrideRequest &request)
{
    return qobject_cast<SetTextMessageSpendLimitOverrideResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * SetVoiceMessageSpendLimitOverrideResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets an account level monthly spend limit override for sending voice messages. The requested spend limit must be less
 * than or equal to the <code>MaxLimit</code>, which is set by Amazon Web Services.
 */
SetVoiceMessageSpendLimitOverrideResponse * PinpointSmsVoiceV2Client::setVoiceMessageSpendLimitOverride(const SetVoiceMessageSpendLimitOverrideRequest &request)
{
    return qobject_cast<SetVoiceMessageSpendLimitOverrideResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites only the specified tags for the specified Amazon Pinpoint SMS Voice, version 2 resource. When you
 * specify an existing tag key, the value is overwritten with the new value. Each resource can have a maximum of 50 tags.
 * Each tag consists of a key and an optional value. Tag keys must be unique per resource. For more information about tags,
 * see <a href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html"> Tagging Amazon Pinpoint
 * resources</a> in the <i>Amazon Pinpoint Developer
 */
TagResourceResponse * PinpointSmsVoiceV2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association of the specified tags from an Amazon Pinpoint SMS Voice V2 resource. For more information on
 * tags see <a href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html"> Tagging Amazon
 * Pinpoint resources</a> in the <i>Amazon Pinpoint Developer Guide</i>.
 */
UntagResourceResponse * PinpointSmsVoiceV2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * UpdateEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing event destination in a configuration set. You can update the IAM role ARN for CloudWatch Logs and
 * Kinesis Data Firehose. You can also enable or disable the event
 *
 * destination>
 *
 * You may want to update an event destination to change its matching event types or updating the destination resource ARN.
 * You can't change an event destination's type between CloudWatch Logs, Kinesis Data Firehose, and Amazon
 */
UpdateEventDestinationResponse * PinpointSmsVoiceV2Client::updateEventDestination(const UpdateEventDestinationRequest &request)
{
    return qobject_cast<UpdateEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * UpdatePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an existing origination phone number. You can update the opt-out list, enable or disable
 * two-way messaging, change the TwoWayChannelArn, enable or disable self-managed opt-outs, and enable or disable deletion
 *
 * protection>
 *
 * If the origination phone number is associated with a pool, an Error is
 */
UpdatePhoneNumberResponse * PinpointSmsVoiceV2Client::updatePhoneNumber(const UpdatePhoneNumberRequest &request)
{
    return qobject_cast<UpdatePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceV2Client service, and returns a pointer to an
 * UpdatePoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of an existing pool. You can update the opt-out list, enable or disable two-way messaging,
 * change the <code>TwoWayChannelArn</code>, enable or disable self-managed opt-outs, enable or disable deletion
 * protection, and enable or disable shared
 */
UpdatePoolResponse * PinpointSmsVoiceV2Client::updatePool(const UpdatePoolRequest &request)
{
    return qobject_cast<UpdatePoolResponse *>(send(request));
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::PinpointSmsVoiceV2ClientPrivate
 * \brief The PinpointSmsVoiceV2ClientPrivate class provides private implementation for PinpointSmsVoiceV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a PinpointSmsVoiceV2ClientPrivate object with public implementation \a q.
 */
PinpointSmsVoiceV2ClientPrivate::PinpointSmsVoiceV2ClientPrivate(PinpointSmsVoiceV2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
