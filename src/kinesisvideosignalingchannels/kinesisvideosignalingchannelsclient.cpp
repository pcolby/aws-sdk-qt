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

#include "kinesisvideosignalingchannelsclient.h"
#include "kinesisvideosignalingchannelsclient_p.h"

#include "core/awssignaturev4.h"
#include "geticeserverconfigrequest.h"
#include "geticeserverconfigresponse.h"
#include "sendalexaoffertomasterrequest.h"
#include "sendalexaoffertomasterresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KinesisVideoSignalingChannels
 * \brief Contains classess for accessing Amazon Kinesis Video Signaling Channels.
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisVideoSignalingChannels {

/*!
 * \class QtAws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClient
 * \brief The KinesisVideoSignalingChannelsClient class provides access to the Amazon Kinesis Video Signaling Channels service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoSignalingChannels
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 */

/*!
 * \brief Constructs a KinesisVideoSignalingChannelsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-04"),
    QStringLiteral("kinesisvideo"),
    QStringLiteral("Amazon Kinesis Video Signaling Channels"),
    QStringLiteral("kinesisvideo"),
    parent), d_ptr(new KinesisVideoSignalingChannelsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload KinesisVideoSignalingChannelsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-04"),
    QStringLiteral("kinesisvideo"),
    QStringLiteral("Amazon Kinesis Video Signaling Channels"),
    QStringLiteral("kinesisvideo"),
    parent), d_ptr(new KinesisVideoSignalingChannelsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the KinesisVideoSignalingChannelsClient service, and returns a pointer to an
 * GetIceServerConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Interactive Connectivity Establishment (ICE) server configuration information, including URIs, username, and
 * password which can be used to configure the WebRTC connection. The ICE component uses this configuration information to
 * setup the WebRTC connection, including authenticating with the Traversal Using Relays around NAT (TURN) relay server.
 *
 * </p
 *
 * TURN is a protocol that is used to improve the connectivity of peer-to-peer applications. By providing a cloud-based
 * relay service, TURN ensures that a connection can be established even when one or more peers are incapable of a direct
 * peer-to-peer connection. For more information, see <a
 * href="https://tools.ietf.org/html/draft-uberti-rtcweb-turn-rest-00">A REST API For Access To TURN
 *
 * Services</a>>
 *
 * You can invoke this API to establish a fallback mechanism in case either of the peers is unable to establish a direct
 * peer-to-peer connection over a signaling channel. You must specify either a signaling channel ARN or the client ID in
 * order to invoke this
 */
GetIceServerConfigResponse * KinesisVideoSignalingChannelsClient::getIceServerConfig(const GetIceServerConfigRequest &request)
{
    return qobject_cast<GetIceServerConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoSignalingChannelsClient service, and returns a pointer to an
 * SendAlexaOfferToMasterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API allows you to connect WebRTC-enabled devices with Alexa display devices. When invoked, it sends the Alexa
 * Session Description Protocol (SDP) offer to the master peer. The offer is delivered as soon as the master is connected
 * to the specified signaling channel. This API returns the SDP answer from the connected master. If the master is not
 * connected to the signaling channel, redelivery requests are made until the message
 */
SendAlexaOfferToMasterResponse * KinesisVideoSignalingChannelsClient::sendAlexaOfferToMaster(const SendAlexaOfferToMasterRequest &request)
{
    return qobject_cast<SendAlexaOfferToMasterResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientPrivate
 * \brief The KinesisVideoSignalingChannelsClientPrivate class provides private implementation for KinesisVideoSignalingChannelsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoSignalingChannels
 */

/*!
 * Constructs a KinesisVideoSignalingChannelsClientPrivate object with public implementation \a q.
 */
KinesisVideoSignalingChannelsClientPrivate::KinesisVideoSignalingChannelsClientPrivate(KinesisVideoSignalingChannelsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace KinesisVideoSignalingChannels
} // namespace QtAws
