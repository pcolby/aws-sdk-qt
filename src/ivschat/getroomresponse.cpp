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

#include "getroomresponse.h"
#include "getroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IvsChat {

/*!
 * \class QtAws::IvsChat::GetRoomResponse
 * \brief The GetRoomResponse class provides an interace for IvsChat GetRoom responses.
 *
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
 *
 * \sa IvsChatClient::getRoom
 */

/*!
 * Constructs a GetRoomResponse object for \a reply to \a request, with parent \a parent.
 */
GetRoomResponse::GetRoomResponse(
        const GetRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IvsChatResponse(new GetRoomResponsePrivate(this), parent)
{
    setRequest(new GetRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRoomRequest * GetRoomResponse::request() const
{
    Q_D(const GetRoomResponse);
    return static_cast<const GetRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IvsChat GetRoom \a response.
 */
void GetRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IvsChat::GetRoomResponsePrivate
 * \brief The GetRoomResponsePrivate class provides private implementation for GetRoomResponse.
 * \internal
 *
 * \inmodule QtAwsIvsChat
 */

/*!
 * Constructs a GetRoomResponsePrivate object with public implementation \a q.
 */
GetRoomResponsePrivate::GetRoomResponsePrivate(
    GetRoomResponse * const q) : IvsChatResponsePrivate(q)
{

}

/*!
 * Parses a IvsChat GetRoom response element from \a xml.
 */
void GetRoomResponsePrivate::parseGetRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoomResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IvsChat
} // namespace QtAws
