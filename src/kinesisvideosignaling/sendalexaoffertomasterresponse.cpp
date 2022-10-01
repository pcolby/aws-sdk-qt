// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendalexaoffertomasterresponse.h"
#include "sendalexaoffertomasterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoSignaling {

/*!
 * \class QtAws::KinesisVideoSignaling::SendAlexaOfferToMasterResponse
 * \brief The SendAlexaOfferToMasterResponse class provides an interace for KinesisVideoSignaling SendAlexaOfferToMaster responses.
 *
 * \inmodule QtAwsKinesisVideoSignaling
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 *
 * \sa KinesisVideoSignalingClient::sendAlexaOfferToMaster
 */

/*!
 * Constructs a SendAlexaOfferToMasterResponse object for \a reply to \a request, with parent \a parent.
 */
SendAlexaOfferToMasterResponse::SendAlexaOfferToMasterResponse(
        const SendAlexaOfferToMasterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoSignalingResponse(new SendAlexaOfferToMasterResponsePrivate(this), parent)
{
    setRequest(new SendAlexaOfferToMasterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendAlexaOfferToMasterRequest * SendAlexaOfferToMasterResponse::request() const
{
    Q_D(const SendAlexaOfferToMasterResponse);
    return static_cast<const SendAlexaOfferToMasterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoSignaling SendAlexaOfferToMaster \a response.
 */
void SendAlexaOfferToMasterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendAlexaOfferToMasterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoSignaling::SendAlexaOfferToMasterResponsePrivate
 * \brief The SendAlexaOfferToMasterResponsePrivate class provides private implementation for SendAlexaOfferToMasterResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a SendAlexaOfferToMasterResponsePrivate object with public implementation \a q.
 */
SendAlexaOfferToMasterResponsePrivate::SendAlexaOfferToMasterResponsePrivate(
    SendAlexaOfferToMasterResponse * const q) : KinesisVideoSignalingResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoSignaling SendAlexaOfferToMaster response element from \a xml.
 */
void SendAlexaOfferToMasterResponsePrivate::parseSendAlexaOfferToMasterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendAlexaOfferToMasterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoSignaling
} // namespace QtAws
