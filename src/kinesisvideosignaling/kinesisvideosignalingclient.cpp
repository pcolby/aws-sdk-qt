// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisvideosignalingclient.h"
#include "kinesisvideosignalingclient_p.h"

#include "core/awssignaturev4.h"
#include "geticeserverconfigrequest.h"
#include "geticeserverconfigresponse.h"
#include "sendalexaoffertomasterrequest.h"
#include "sendalexaoffertomasterresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KinesisVideoSignaling
 * \brief Contains classess for accessing Amazon Kinesis Video Signaling Channels.
 *
 * \inmodule QtAwsKinesisVideoSignaling
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KinesisVideoSignaling {

/*!
 * \class QtAws::KinesisVideoSignaling::KinesisVideoSignalingClient
 * \brief The KinesisVideoSignalingClient class provides access to the Amazon Kinesis Video Signaling Channels service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoSignaling
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 */

/*!
 * \brief Constructs a KinesisVideoSignalingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KinesisVideoSignalingClient::KinesisVideoSignalingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoSignalingClientPrivate(this), parent)
{
    Q_D(KinesisVideoSignalingClient);
    d->apiVersion = QStringLiteral("2019-12-04");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Signaling Channels");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * \overload KinesisVideoSignalingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KinesisVideoSignalingClient::KinesisVideoSignalingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoSignalingClientPrivate(this), parent)
{
    Q_D(KinesisVideoSignalingClient);
    d->apiVersion = QStringLiteral("2019-12-04");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Signaling Channels");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/*!
 * Sends \a request to the KinesisVideoSignalingClient service, and returns a pointer to an
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
GetIceServerConfigResponse * KinesisVideoSignalingClient::getIceServerConfig(const GetIceServerConfigRequest &request)
{
    return qobject_cast<GetIceServerConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the KinesisVideoSignalingClient service, and returns a pointer to an
 * SendAlexaOfferToMasterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API allows you to connect WebRTC-enabled devices with Alexa display devices. When invoked, it sends the Alexa
 * Session Description Protocol (SDP) offer to the master peer. The offer is delivered as soon as the master is connected
 * to the specified signaling channel. This API returns the SDP answer from the connected master. If the master is not
 * connected to the signaling channel, redelivery requests are made until the message
 */
SendAlexaOfferToMasterResponse * KinesisVideoSignalingClient::sendAlexaOfferToMaster(const SendAlexaOfferToMasterRequest &request)
{
    return qobject_cast<SendAlexaOfferToMasterResponse *>(send(request));
}

/*!
 * \class QtAws::KinesisVideoSignaling::KinesisVideoSignalingClientPrivate
 * \brief The KinesisVideoSignalingClientPrivate class provides private implementation for KinesisVideoSignalingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a KinesisVideoSignalingClientPrivate object with public implementation \a q.
 */
KinesisVideoSignalingClientPrivate::KinesisVideoSignalingClientPrivate(KinesisVideoSignalingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisVideoSignaling
} // namespace QtAws
