// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ivschatclient.h"
#include "ivschatclient_p.h"

#include "core/awssignaturev4.h"
#include "createchattokenrequest.h"
#include "createchattokenresponse.h"
#include "createroomrequest.h"
#include "createroomresponse.h"
#include "deletemessagerequest.h"
#include "deletemessageresponse.h"
#include "deleteroomrequest.h"
#include "deleteroomresponse.h"
#include "disconnectuserrequest.h"
#include "disconnectuserresponse.h"
#include "getroomrequest.h"
#include "getroomresponse.h"
#include "listroomsrequest.h"
#include "listroomsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "sendeventrequest.h"
#include "sendeventresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateroomrequest.h"
#include "updateroomresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IvsChat
 * \brief Contains classess for accessing Amazon Interactive Video Service Chat.
 *
 * \inmodule QtAwsIvsChat
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IvsChat {

/*!
 * \class QtAws::IvsChat::IvsChatClient
 * \brief The IvsChatClient class provides access to the Amazon Interactive Video Service Chat service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIvsChat
 *
 *  <b>Introduction</b>
 * 
 *  </p
 * 
 *  The Amazon IVS Chat control-plane API enables you to create and manage Amazon IVS Chat resources. You also need to
 *  integrate with the <a href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/chat-messaging-api.html"> Amazon
 *  IVS Chat Messaging API</a>, to enable users to interact with chat rooms in real
 * 
 *  time>
 * 
 *  The API is an AWS regional service. For a list of supported regions and Amazon IVS Chat HTTPS service endpoints, see the
 *  Amazon IVS Chat information on the <a href="https://docs.aws.amazon.com/general/latest/gr/ivs.html">Amazon IVS page</a>
 *  in the <i>AWS General Reference</i>.
 * 
 *  </p
 * 
 *  <b>Notes on terminology:</b>
 * 
 *  </p <ul> <li>
 * 
 *  You create service applications using the Amazon IVS Chat API. We refer to these as
 * 
 *  <i>applications</i>> </li> <li>
 * 
 *  You create front-end client applications (browser and Android/iOS apps) using the Amazon IVS Chat Messaging API. We
 *  refer to these as <i>clients</i>.
 * 
 *  </p </li> </ul>
 * 
 *  <b>Resources</b>
 * 
 *  </p
 * 
 *  The following resource is part of Amazon IVS
 * 
 *  Chat> <ul> <li>
 * 
 *  <b>Room</b> — The central Amazon IVS Chat resource through which clients connect to and exchange chat messages. See the
 *  Room endpoints for more
 * 
 *  information> </li> </ul>
 * 
 *  <b>Tagging</b>
 * 
 *  </p
 * 
 *  A <i>tag</i> is a metadata label that you assign to an AWS resource. A tag comprises a <i>key</i> and a <i>value</i>,
 *  both set by you. For example, you might set a tag as <code>topic:nature</code> to label a particular video category. See
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging AWS Resources</a> for more information,
 *  including restrictions that apply to tags and "Tag naming limits and requirements"; Amazon IVS Chat has no
 *  service-specific constraints beyond what is documented
 * 
 *  there>
 * 
 *  Tags can help you identify and organize your AWS resources. For example, you can use the same tag for different
 *  resources to indicate that they are related. You can also use tags to manage access (see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Access
 * 
 *  Tags</a>)>
 * 
 *  The Amazon IVS Chat API has these tag-related endpoints: <a>TagResource</a>, <a>UntagResource</a>, and
 *  <a>ListTagsForResource</a>. The following resource supports tagging:
 * 
 *  Room>
 * 
 *  At most 50 tags can be applied to a
 * 
 *  resource>
 * 
 *  <b>API Access Security</b>
 * 
 *  </p
 * 
 *  Your Amazon IVS Chat applications (service applications and clients) must be authenticated and authorized to access
 *  Amazon IVS Chat resources. Note the differences between these
 * 
 *  concepts> <ul> <li>
 * 
 *  <i>Authentication</i> is about verifying identity. Requests to the Amazon IVS Chat API must be signed to verify your
 * 
 *  identity> </li> <li>
 * 
 *  <i>Authorization</i> is about granting permissions. Your IAM roles need to have permissions for Amazon IVS Chat API
 * 
 *  requests> </li> </ul>
 * 
 *  Users (viewers) connect to a room using secure access tokens that you create using the <a>CreateChatToken</a> endpoint
 *  through the AWS SDK. You call CreateChatToken for every user’s chat session, passing identity and authorization
 *  information about the
 * 
 *  user>
 * 
 *  <b>Signing API Requests</b>
 * 
 *  </p
 * 
 *  HTTP API requests must be signed with an AWS SigV4 signature using your AWS security credentials. The AWS Command Line
 *  Interface (CLI) and the AWS SDKs take care of signing the underlying API calls for you. However, if your application
 *  calls the Amazon IVS Chat HTTP API directly, it’s your responsibility to sign the
 * 
 *  requests>
 * 
 *  You generate a signature using valid AWS credentials for an IAM role that has permission to perform the requested
 *  action. For example, DeleteMessage requests must be made using an IAM role that has the
 *  <code>ivschat:DeleteMessage</code>
 * 
 *  permission>
 * 
 *  For more
 * 
 *  information> <ul> <li>
 * 
 *  Authentication and generating signatures — See <a
 *  href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating Requests
 *  (Amazon Web Services Signature Version 4)</a> in the <i>Amazon Web Services General
 * 
 *  Reference</i>> </li> <li>
 * 
 *  Managing Amazon IVS permissions — See <a
 *  href="https://docs.aws.amazon.com/ivs/latest/userguide/security-iam.html">Identity and Access Management</a> on the
 *  Security page of the <i>Amazon IVS User
 * 
 *  Guide</i>> </li> </ul>
 * 
 *  <b>Amazon Resource Names (ARNs)</b>
 * 
 *  </p
 * 
 *  ARNs uniquely identify AWS resources. An ARN is required when you need to specify a resource unambiguously across all of
 *  AWS, such as in IAM policies and API calls. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names</a> in the
 *  <i>AWS General
 * 
 *  Reference</i>>
 * 
 *  <b>Messaging Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>DeleteMessage</a> — Sends an event to a specific room which directs clients to delete a specific message; that is,
 *  unrender it from view and delete it from the client’s chat history. This event’s <code>EventName</code> is
 *  <code>aws:DELETE_MESSAGE</code>. This replicates the <a
 *  href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-deletemessage-publish.html"> DeleteMessage</a>
 *  WebSocket operation in the Amazon IVS Chat Messaging
 * 
 *  API> </li> <li>
 * 
 *  <a>DisconnectUser</a> — Disconnects all connections using a specified user ID from a room. This replicates the <a
 *  href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-disconnectuser-publish.html">
 *  DisconnectUser</a> WebSocket operation in the Amazon IVS Chat Messaging
 * 
 *  API> </li> <li>
 * 
 *  <a>SendEvent</a> — Sends an event to a room. Use this within your application’s business logic to send events to clients
 *  of a room; e.g., to notify clients to change the way the chat UI is
 * 
 *  rendered> </li> </ul>
 * 
 *  <b>Chat Token Endpoint</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateChatToken</a> — Creates an encrypted token that is used to establish an individual WebSocket connection to a
 *  room. The token is valid for one minute, and a connection (session) established with the token is valid for the
 *  specified
 * 
 *  duration> </li> </ul>
 * 
 *  <b>Room Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateRoom</a> — Creates a room that allows clients to connect and pass
 * 
 *  messages> </li> <li>
 * 
 *  <a>DeleteRoom</a> — Deletes the specified
 * 
 *  room> </li> <li>
 * 
 *  <a>GetRoom</a> — Gets the specified
 * 
 *  room> </li> <li>
 * 
 *  <a>ListRooms</a> — Gets summary information about all your rooms in the AWS region where the API request is processed.
 * 
 *  </p </li> <li>
 * 
 *  <a>UpdateRoom</a> — Updates a room’s
 * 
 *  configuration> </li> </ul>
 * 
 *  <b>Tags Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListTagsForResource</a> — Gets information about AWS tags for the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>TagResource</a> — Adds or updates tags for the AWS resource with the specified
 * 
 *  ARN> </li> <li>
 * 
 *  <a>UntagResource</a> — Removes tags from the resource with the specified
 * 
 *  ARN> </li> </ul>
 * 
 *  All the above are HTTP operations. There is a separate <i>messaging</i> API for managing Chat resources; see the <a
 *  href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/chat-messaging-api.html"> Amazon IVS Chat Messaging API
 */

/*!
 * \brief Constructs a IvsChatClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IvsChatClient::IvsChatClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IvsChatClientPrivate(this), parent)
{
    Q_D(IvsChatClient);
    d->apiVersion = QStringLiteral("2020-07-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Interactive Video Service Chat");
    d->serviceName = QStringLiteral("ivschat");
}

/*!
 * \overload IvsChatClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IvsChatClient::IvsChatClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IvsChatClientPrivate(this), parent)
{
    Q_D(IvsChatClient);
    d->apiVersion = QStringLiteral("2020-07-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Interactive Video Service Chat");
    d->serviceName = QStringLiteral("ivschat");
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * CreateChatTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an encrypted token that is used to establish an individual WebSocket connection to a room. The token is valid
 * for one minute, and a connection (session) established with the token is valid for the specified
 *
 * duration>
 *
 * Encryption keys are owned by Amazon IVS Chat and never used directly by your
 */
CreateChatTokenResponse * IvsChatClient::createChatToken(const CreateChatTokenRequest &request)
{
    return qobject_cast<CreateChatTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * CreateRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a room that allows clients to connect and pass
 */
CreateRoomResponse * IvsChatClient::createRoom(const CreateRoomRequest &request)
{
    return qobject_cast<CreateRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * DeleteMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an event to a specific room which directs clients to delete a specific message; that is, unrender it from view and
 * delete it from the client’s chat history. This event’s <code>EventName</code> is <code>aws:DELETE_MESSAGE</code>. This
 * replicates the <a href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-deletemessage-publish.html">
 * DeleteMessage</a> WebSocket operation in the Amazon IVS Chat Messaging
 */
DeleteMessageResponse * IvsChatClient::deleteMessage(const DeleteMessageRequest &request)
{
    return qobject_cast<DeleteMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * DeleteRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteRoomResponse * IvsChatClient::deleteRoom(const DeleteRoomRequest &request)
{
    return qobject_cast<DeleteRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * DisconnectUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects all connections using a specified user ID from a room. This replicates the <a
 * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-disconnectuser-publish.html">
 * DisconnectUser</a> WebSocket operation in the Amazon IVS Chat Messaging
 */
DisconnectUserResponse * IvsChatClient::disconnectUser(const DisconnectUserRequest &request)
{
    return qobject_cast<DisconnectUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * GetRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified
 */
GetRoomResponse * IvsChatClient::getRoom(const GetRoomRequest &request)
{
    return qobject_cast<GetRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * ListRoomsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about all your rooms in the AWS region where the API request is processed. Results are sorted
 * in descending order of
 */
ListRoomsResponse * IvsChatClient::listRooms(const ListRoomsRequest &request)
{
    return qobject_cast<ListRoomsResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about AWS tags for the specified
 */
ListTagsForResourceResponse * IvsChatClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * SendEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an event to a room. Use this within your application’s business logic to send events to clients of a room; e.g.,
 * to notify clients to change the way the chat UI is
 */
SendEventResponse * IvsChatClient::sendEvent(const SendEventRequest &request)
{
    return qobject_cast<SendEventResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates tags for the AWS resource with the specified
 */
TagResourceResponse * IvsChatClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the resource with the specified
 */
UntagResourceResponse * IvsChatClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IvsChatClient service, and returns a pointer to an
 * UpdateRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a room’s
 */
UpdateRoomResponse * IvsChatClient::updateRoom(const UpdateRoomRequest &request)
{
    return qobject_cast<UpdateRoomResponse *>(send(request));
}

/*!
 * \class QtAws::IvsChat::IvsChatClientPrivate
 * \brief The IvsChatClientPrivate class provides private implementation for IvsChatClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIvsChat
 */

/*!
 * Constructs a IvsChatClientPrivate object with public implementation \a q.
 */
IvsChatClientPrivate::IvsChatClientPrivate(IvsChatClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IvsChat
} // namespace QtAws
