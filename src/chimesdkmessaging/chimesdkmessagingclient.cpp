// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimesdkmessagingclient.h"
#include "chimesdkmessagingclient_p.h"

#include "core/awssignaturev4.h"
#include "associatechannelflowrequest.h"
#include "associatechannelflowresponse.h"
#include "batchcreatechannelmembershiprequest.h"
#include "batchcreatechannelmembershipresponse.h"
#include "channelflowcallbackrequest.h"
#include "channelflowcallbackresponse.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createchannelbanrequest.h"
#include "createchannelbanresponse.h"
#include "createchannelflowrequest.h"
#include "createchannelflowresponse.h"
#include "createchannelmembershiprequest.h"
#include "createchannelmembershipresponse.h"
#include "createchannelmoderatorrequest.h"
#include "createchannelmoderatorresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deletechannelbanrequest.h"
#include "deletechannelbanresponse.h"
#include "deletechannelflowrequest.h"
#include "deletechannelflowresponse.h"
#include "deletechannelmembershiprequest.h"
#include "deletechannelmembershipresponse.h"
#include "deletechannelmessagerequest.h"
#include "deletechannelmessageresponse.h"
#include "deletechannelmoderatorrequest.h"
#include "deletechannelmoderatorresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describechannelbanrequest.h"
#include "describechannelbanresponse.h"
#include "describechannelflowrequest.h"
#include "describechannelflowresponse.h"
#include "describechannelmembershiprequest.h"
#include "describechannelmembershipresponse.h"
#include "describechannelmembershipforappinstanceuserrequest.h"
#include "describechannelmembershipforappinstanceuserresponse.h"
#include "describechannelmoderatedbyappinstanceuserrequest.h"
#include "describechannelmoderatedbyappinstanceuserresponse.h"
#include "describechannelmoderatorrequest.h"
#include "describechannelmoderatorresponse.h"
#include "disassociatechannelflowrequest.h"
#include "disassociatechannelflowresponse.h"
#include "getchannelmembershippreferencesrequest.h"
#include "getchannelmembershippreferencesresponse.h"
#include "getchannelmessagerequest.h"
#include "getchannelmessageresponse.h"
#include "getchannelmessagestatusrequest.h"
#include "getchannelmessagestatusresponse.h"
#include "getmessagingsessionendpointrequest.h"
#include "getmessagingsessionendpointresponse.h"
#include "listchannelbansrequest.h"
#include "listchannelbansresponse.h"
#include "listchannelflowsrequest.h"
#include "listchannelflowsresponse.h"
#include "listchannelmembershipsrequest.h"
#include "listchannelmembershipsresponse.h"
#include "listchannelmembershipsforappinstanceuserrequest.h"
#include "listchannelmembershipsforappinstanceuserresponse.h"
#include "listchannelmessagesrequest.h"
#include "listchannelmessagesresponse.h"
#include "listchannelmoderatorsrequest.h"
#include "listchannelmoderatorsresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listchannelsassociatedwithchannelflowrequest.h"
#include "listchannelsassociatedwithchannelflowresponse.h"
#include "listchannelsmoderatedbyappinstanceuserrequest.h"
#include "listchannelsmoderatedbyappinstanceuserresponse.h"
#include "listsubchannelsrequest.h"
#include "listsubchannelsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putchannelmembershippreferencesrequest.h"
#include "putchannelmembershippreferencesresponse.h"
#include "redactchannelmessagerequest.h"
#include "redactchannelmessageresponse.h"
#include "searchchannelsrequest.h"
#include "searchchannelsresponse.h"
#include "sendchannelmessagerequest.h"
#include "sendchannelmessageresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updatechannelflowrequest.h"
#include "updatechannelflowresponse.h"
#include "updatechannelmessagerequest.h"
#include "updatechannelmessageresponse.h"
#include "updatechannelreadmarkerrequest.h"
#include "updatechannelreadmarkerresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ChimeSdkMessaging
 * \brief Contains classess for accessing Amazon Chime SDK Messaging.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingClient
 * \brief The ChimeSdkMessagingClient class provides access to the Amazon Chime SDK Messaging service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 */

/*!
 * \brief Constructs a ChimeSdkMessagingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ChimeSdkMessagingClient::ChimeSdkMessagingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkMessagingClientPrivate(this), parent)
{
    Q_D(ChimeSdkMessagingClient);
    d->apiVersion = QStringLiteral("2021-05-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("messaging-chime");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Messaging");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * \overload ChimeSdkMessagingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ChimeSdkMessagingClient::ChimeSdkMessagingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkMessagingClientPrivate(this), parent)
{
    Q_D(ChimeSdkMessagingClient);
    d->apiVersion = QStringLiteral("2021-05-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("messaging-chime");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Messaging");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * AssociateChannelFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a channel flow with a channel. Once associated, all messages to that channel go through channel flow
 * processors. To stop processing, use the <code>DisassociateChannelFlow</code>
 *
 * API> <note>
 *
 * Only administrators or channel moderators can associate a channel flow. The <code>x-amz-chime-bearer</code> request
 * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes the API call as the value in the
 */
AssociateChannelFlowResponse * ChimeSdkMessagingClient::associateChannelFlow(const AssociateChannelFlowRequest &request)
{
    return qobject_cast<AssociateChannelFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * BatchCreateChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a specified number of users to a channel.
 */
BatchCreateChannelMembershipResponse * ChimeSdkMessagingClient::batchCreateChannelMembership(const BatchCreateChannelMembershipRequest &request)
{
    return qobject_cast<BatchCreateChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ChannelFlowCallbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Calls back Chime SDK Messaging with a processing response message. This should be invoked from the processor Lambda.
 * This is a developer
 *
 * API>
 *
 * You can return one of the following processing
 *
 * responses> <ul> <li>
 *
 * Update message content or
 *
 * metadat> </li> <li>
 *
 * Deny a
 *
 * messag> </li> <li>
 *
 * Make no changes to the
 */
ChannelFlowCallbackResponse * ChimeSdkMessagingClient::channelFlowCallback(const ChannelFlowCallbackRequest &request)
{
    return qobject_cast<ChannelFlowCallbackResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a channel to which you can add users and send
 *
 * messages>
 *
 * <b>Restriction</b>: You can't change a channel's
 *
 * privacy> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelResponse * ChimeSdkMessagingClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * CreateChannelBanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently bans a member from a channel. Moderators can't add banned members to a channel. To undo a ban, you first
 * have to <code>DeleteChannelBan</code>, and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
 * delete users or
 *
 * channels>
 *
 * If you ban a user who is already part of a channel, that user is automatically kicked from the
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelBanResponse * ChimeSdkMessagingClient::createChannelBan(const CreateChannelBanRequest &request)
{
    return qobject_cast<CreateChannelBanResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * CreateChannelFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a channel flow, a container for processors. Processors are AWS Lambda functions that perform actions on chat
 * messages, such as stripping out profanity. You can associate channel flows with channels, and the processors in the
 * channel flow then take action on all messages sent to that channel. This is a developer
 *
 * API>
 *
 * Channel flows process the following
 *
 * items> <ol> <li>
 *
 * New and updated
 *
 * message> </li> <li>
 *
 * Persistent and non-persistent
 *
 * message> </li> <li>
 *
 * The Standard message
 *
 * typ> </li> </ol> <note>
 *
 * Channel flows don't process Control or System messages. For more information about the message types provided by Chime
 * SDK Messaging, refer to <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/using-the-messaging-sdk.html#msg-types">Message types</a> in the
 * <i>Amazon Chime developer
 */
CreateChannelFlowResponse * ChimeSdkMessagingClient::createChannelFlow(const CreateChannelFlowRequest &request)
{
    return qobject_cast<CreateChannelFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * CreateChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a user to a channel. The <code>InvitedBy</code> field in <code>ChannelMembership</code> is derived from the request
 * header. A channel member
 *
 * can> <ul> <li>
 *
 * List
 *
 * message> </li> <li>
 *
 * Send
 *
 * message> </li> <li>
 *
 * Receive
 *
 * message> </li> <li>
 *
 * Edit their own
 *
 * message> </li> <li>
 *
 * Leave the
 *
 * channe> </li> </ul>
 *
 * Privacy settings impact this action as
 *
 * follows> <ul> <li>
 *
 * Public Channels: You do not need to be a member to list messages, but you must be a member to send
 *
 * messages> </li> <li>
 *
 * Private Channels: You must be a member to list or send
 *
 * messages> </li> </ul> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelMembershipResponse * ChimeSdkMessagingClient::createChannelMembership(const CreateChannelMembershipRequest &request)
{
    return qobject_cast<CreateChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * CreateChannelModeratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <code>ChannelModerator</code>. A channel moderator
 *
 * can> <ul> <li>
 *
 * Add and remove other members of the
 *
 * channel> </li> <li>
 *
 * Add and remove other moderators of the
 *
 * channel> </li> <li>
 *
 * Add and remove user bans for the
 *
 * channel> </li> <li>
 *
 * Redact messages in the
 *
 * channel> </li> <li>
 *
 * List messages in the
 *
 * channel> </li> </ul> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelModeratorResponse * ChimeSdkMessagingClient::createChannelModerator(const CreateChannelModeratorRequest &request)
{
    return qobject_cast<CreateChannelModeratorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Immediately makes a channel and its memberships inaccessible and marks them for deletion. This is an irreversible
 *
 * process> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelResponse * ChimeSdkMessagingClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DeleteChannelBanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a user from a channel's ban
 *
 * list> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelBanResponse * ChimeSdkMessagingClient::deleteChannelBan(const DeleteChannelBanRequest &request)
{
    return qobject_cast<DeleteChannelBanResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DeleteChannelFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a channel flow, an irreversible process. This is a developer
 *
 * API> <note>
 *
 * This API works only when the channel flow is not associated with any channel. To get a list of all channels that a
 * channel flow is associated with, use the <code>ListChannelsAssociatedWithChannelFlow</code> API. Use the
 * <code>DisassociateChannelFlow</code> API to disassociate a channel flow from all channels.
 */
DeleteChannelFlowResponse * ChimeSdkMessagingClient::deleteChannelFlow(const DeleteChannelFlowRequest &request)
{
    return qobject_cast<DeleteChannelFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DeleteChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a member from a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelMembershipResponse * ChimeSdkMessagingClient::deleteChannelMembership(const DeleteChannelMembershipRequest &request)
{
    return qobject_cast<DeleteChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DeleteChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a channel message. Only admins can perform this action. Deletion makes messages inaccessible immediately. A
 * background process deletes any revisions created by
 *
 * <code>UpdateChannelMessage</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelMessageResponse * ChimeSdkMessagingClient::deleteChannelMessage(const DeleteChannelMessageRequest &request)
{
    return qobject_cast<DeleteChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DeleteChannelModeratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a channel
 *
 * moderator> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelModeratorResponse * ChimeSdkMessagingClient::deleteChannelModerator(const DeleteChannelModeratorRequest &request)
{
    return qobject_cast<DeleteChannelModeratorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DescribeChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a channel in an Amazon Chime
 *
 * <code>AppInstance</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelResponse * ChimeSdkMessagingClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DescribeChannelBanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a channel
 *
 * ban> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelBanResponse * ChimeSdkMessagingClient::describeChannelBan(const DescribeChannelBanRequest &request)
{
    return qobject_cast<DescribeChannelBanResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DescribeChannelFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a channel flow in an Amazon Chime <code>AppInstance</code>. This is a developer
 */
DescribeChannelFlowResponse * ChimeSdkMessagingClient::describeChannelFlow(const DescribeChannelFlowRequest &request)
{
    return qobject_cast<DescribeChannelFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DescribeChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a user's channel
 *
 * membership> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelMembershipResponse * ChimeSdkMessagingClient::describeChannelMembership(const DescribeChannelMembershipRequest &request)
{
    return qobject_cast<DescribeChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DescribeChannelMembershipForAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of a channel based on the membership of the specified
 *
 * <code>AppInstanceUser</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelMembershipForAppInstanceUserResponse * ChimeSdkMessagingClient::describeChannelMembershipForAppInstanceUser(const DescribeChannelMembershipForAppInstanceUserRequest &request)
{
    return qobject_cast<DescribeChannelMembershipForAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DescribeChannelModeratedByAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a channel moderated by the specified
 *
 * <code>AppInstanceUser</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelModeratedByAppInstanceUserResponse * ChimeSdkMessagingClient::describeChannelModeratedByAppInstanceUser(const DescribeChannelModeratedByAppInstanceUserRequest &request)
{
    return qobject_cast<DescribeChannelModeratedByAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DescribeChannelModeratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a single
 *
 * ChannelModerator> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelModeratorResponse * ChimeSdkMessagingClient::describeChannelModerator(const DescribeChannelModeratorRequest &request)
{
    return qobject_cast<DescribeChannelModeratorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * DisassociateChannelFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a channel flow from all its channels. Once disassociated, all messages to that channel stop going through
 * the channel flow
 *
 * processor> <note>
 *
 * Only administrators or channel moderators can disassociate a channel flow. The <code>x-amz-chime-bearer</code> request
 * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes the API call as the value in the
 */
DisassociateChannelFlowResponse * ChimeSdkMessagingClient::disassociateChannelFlow(const DisassociateChannelFlowRequest &request)
{
    return qobject_cast<DisassociateChannelFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * GetChannelMembershipPreferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the membership preferences of an <code>AppInstanceUser</code> for the specified channel. The
 * <code>AppInstanceUser</code> must be a member of the channel. Only the <code>AppInstanceUser</code> who owns the
 * membership can retrieve preferences. Users in the <code>AppInstanceAdmin</code> and channel moderator roles can't
 * retrieve preferences for other users. Banned users can't retrieve membership preferences for the channel from which they
 * are
 */
GetChannelMembershipPreferencesResponse * ChimeSdkMessagingClient::getChannelMembershipPreferences(const GetChannelMembershipPreferencesRequest &request)
{
    return qobject_cast<GetChannelMembershipPreferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * GetChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the full details of a channel
 *
 * message> <note>
 *
 * The x-amz-chime-bearer request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes the
 * API call as the value in the
 */
GetChannelMessageResponse * ChimeSdkMessagingClient::getChannelMessage(const GetChannelMessageRequest &request)
{
    return qobject_cast<GetChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * GetChannelMessageStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets message status for a specified <code>messageId</code>. Use this API to determine the intermediate status of
 * messages going through channel flow processing. The API provides an alternative to retrieving message status if the
 * event was not received because a client wasn't connected to a websocket.
 *
 * </p
 *
 * Messages can have any one of these
 *
 * statuses> <dl> <dt>SENT</dt> <dd>
 *
 * Message processed
 *
 * successfull> </dd> <dt>PENDING</dt> <dd>
 *
 * Ongoing
 *
 * processin> </dd> <dt>FAILED</dt> <dd>
 *
 * Processing
 *
 * faile> </dd> <dt>DENIED</dt> <dd>
 *
 * Messasge denied by the
 *
 * processo> </dd> </dl> <note> <ul> <li>
 *
 * This API does not return statuses for denied messages, because we don't store them once the processor denies them.
 *
 * </p </li> <li>
 *
 * Only the message sender can invoke this
 *
 * API> </li> <li>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
GetChannelMessageStatusResponse * ChimeSdkMessagingClient::getChannelMessageStatus(const GetChannelMessageStatusRequest &request)
{
    return qobject_cast<GetChannelMessageStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * GetMessagingSessionEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The details of the endpoint for the messaging
 */
GetMessagingSessionEndpointResponse * ChimeSdkMessagingClient::getMessagingSessionEndpoint(const GetMessagingSessionEndpointRequest &request)
{
    return qobject_cast<GetMessagingSessionEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelBansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the users banned from a particular
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelBansResponse * ChimeSdkMessagingClient::listChannelBans(const ListChannelBansRequest &request)
{
    return qobject_cast<ListChannelBansResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelFlowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated lists of all the channel flows created under a single Chime. This is a developer
 */
ListChannelFlowsResponse * ChimeSdkMessagingClient::listChannelFlows(const ListChannelFlowsRequest &request)
{
    return qobject_cast<ListChannelFlowsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelMembershipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all channel memberships in a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 *
 * header> </note>
 *
 * If you want to list the channels to which a specific app instance user belongs, see the <a
 * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_messaging-chime_ListChannelMembershipsForAppInstanceUser.html">ListChannelMembershipsForAppInstanceUser</a>
 */
ListChannelMembershipsResponse * ChimeSdkMessagingClient::listChannelMemberships(const ListChannelMembershipsRequest &request)
{
    return qobject_cast<ListChannelMembershipsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelMembershipsForAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all channels that a particular <code>AppInstanceUser</code> is a part of. Only an <code>AppInstanceAdmin</code>
 * can call the API with a user ARN that is not their own.
 *
 * </p <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelMembershipsForAppInstanceUserResponse * ChimeSdkMessagingClient::listChannelMembershipsForAppInstanceUser(const ListChannelMembershipsForAppInstanceUserRequest &request)
{
    return qobject_cast<ListChannelMembershipsForAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all the messages in a channel. Returns a paginated list of <code>ChannelMessages</code>. By default, sorted by
 * creation timestamp in descending
 *
 * order> <note>
 *
 * Redacted messages appear in the results as empty, since they are only redacted, not deleted. Deleted messages do not
 * appear in the results. This action always returns the latest version of an edited
 *
 * message>
 *
 * Also, the x-amz-chime-bearer request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes
 * the API call as the value in the
 */
ListChannelMessagesResponse * ChimeSdkMessagingClient::listChannelMessages(const ListChannelMessagesRequest &request)
{
    return qobject_cast<ListChannelMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelModeratorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the moderators for a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelModeratorsResponse * ChimeSdkMessagingClient::listChannelModerators(const ListChannelModeratorsRequest &request)
{
    return qobject_cast<ListChannelModeratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Channels created under a single Chime App as a paginated list. You can specify filters to narrow
 *
 * results> <p class="title"> <b>Functionality & restrictions</b>
 *
 * </p <ul> <li>
 *
 * Use privacy = <code>PUBLIC</code> to retrieve all public channels in the
 *
 * account> </li> <li>
 *
 * Only an <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the private channels in an
 *
 * account> </li> </ul> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelsResponse * ChimeSdkMessagingClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelsAssociatedWithChannelFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all channels associated with a specified channel flow. You can associate a channel flow with multiple channels,
 * but you can only associate a channel with one channel flow. This is a developer
 */
ListChannelsAssociatedWithChannelFlowResponse * ChimeSdkMessagingClient::listChannelsAssociatedWithChannelFlow(const ListChannelsAssociatedWithChannelFlowRequest &request)
{
    return qobject_cast<ListChannelsAssociatedWithChannelFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListChannelsModeratedByAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of the channels moderated by an
 *
 * <code>AppInstanceUser</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelsModeratedByAppInstanceUserResponse * ChimeSdkMessagingClient::listChannelsModeratedByAppInstanceUser(const ListChannelsModeratedByAppInstanceUserRequest &request)
{
    return qobject_cast<ListChannelsModeratedByAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListSubChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the SubChannels in an elastic channel when given a channel ID. Available only to the app instance admins and
 * channel moderators of elastic
 */
ListSubChannelsResponse * ChimeSdkMessagingClient::listSubChannels(const ListSubChannelsRequest &request)
{
    return qobject_cast<ListSubChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags applied to an Amazon Chime SDK messaging
 */
ListTagsForResourceResponse * ChimeSdkMessagingClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * PutChannelMembershipPreferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the membership preferences of an <code>AppInstanceUser</code> for the specified channel. The
 * <code>AppInstanceUser</code> must be a member of the channel. Only the <code>AppInstanceUser</code> who owns the
 * membership can set preferences. Users in the <code>AppInstanceAdmin</code> and channel moderator roles can't set
 * preferences for other users. Banned users can't set membership preferences for the channel from which they are
 */
PutChannelMembershipPreferencesResponse * ChimeSdkMessagingClient::putChannelMembershipPreferences(const PutChannelMembershipPreferencesRequest &request)
{
    return qobject_cast<PutChannelMembershipPreferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * RedactChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Redacts message content, but not metadata. The message exists in the back end, but the action returns null content, and
 * the state shows as
 *
 * redacted> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
RedactChannelMessageResponse * ChimeSdkMessagingClient::redactChannelMessage(const RedactChannelMessageRequest &request)
{
    return qobject_cast<RedactChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * SearchChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows an <code>AppInstanceUser</code> to search the channels that they belong to. The <code>AppInstanceUser</code> can
 * search by membership or external ID. An <code>AppInstanceAdmin</code> can search across all channels within the
 */
SearchChannelsResponse * ChimeSdkMessagingClient::searchChannels(const SearchChannelsRequest &request)
{
    return qobject_cast<SearchChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * SendChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a message to a particular channel that the member is a part
 *
 * of> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 *
 * header>
 *
 * Also, <code>STANDARD</code> messages can contain 4KB of data and the 1KB of metadata. <code>CONTROL</code> messages can
 * contain 30 bytes of data and no
 */
SendChannelMessageResponse * ChimeSdkMessagingClient::sendChannelMessage(const SendChannelMessageRequest &request)
{
    return qobject_cast<SendChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies the specified tags to the specified Amazon Chime SDK messaging
 */
TagResourceResponse * ChimeSdkMessagingClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified Amazon Chime SDK messaging
 */
UntagResourceResponse * ChimeSdkMessagingClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a channel's
 *
 * attributes>
 *
 * <b>Restriction</b>: You can't change a channel's privacy.
 *
 * </p <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
UpdateChannelResponse * ChimeSdkMessagingClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * UpdateChannelFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates channel flow attributes. This is a developer
 */
UpdateChannelFlowResponse * ChimeSdkMessagingClient::updateChannelFlow(const UpdateChannelFlowRequest &request)
{
    return qobject_cast<UpdateChannelFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * UpdateChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the content of a
 *
 * message> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
UpdateChannelMessageResponse * ChimeSdkMessagingClient::updateChannelMessage(const UpdateChannelMessageRequest &request)
{
    return qobject_cast<UpdateChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMessagingClient service, and returns a pointer to an
 * UpdateChannelReadMarkerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The details of the time when a user last read messages in a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
UpdateChannelReadMarkerResponse * ChimeSdkMessagingClient::updateChannelReadMarker(const UpdateChannelReadMarkerRequest &request)
{
    return qobject_cast<UpdateChannelReadMarkerResponse *>(send(request));
}

/*!
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingClientPrivate
 * \brief The ChimeSdkMessagingClientPrivate class provides private implementation for ChimeSdkMessagingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChimeSdkMessagingClientPrivate object with public implementation \a q.
 */
ChimeSdkMessagingClientPrivate::ChimeSdkMessagingClientPrivate(ChimeSdkMessagingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
