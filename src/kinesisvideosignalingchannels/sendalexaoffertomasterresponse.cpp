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

#include "sendalexaoffertomasterresponse.h"
#include "sendalexaoffertomasterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoSignalingChannels {

/*!
 * \class QtAws::KinesisVideoSignalingChannels::SendAlexaOfferToMasterResponse
 * \brief The SendAlexaOfferToMasterResponse class provides an interace for KinesisVideoSignalingChannels SendAlexaOfferToMaster responses.
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 *
 * \sa KinesisVideoSignalingChannelsClient::sendAlexaOfferToMaster
 */

/*!
 * Constructs a SendAlexaOfferToMasterResponse object for \a reply to \a request, with parent \a parent.
 */
SendAlexaOfferToMasterResponse::SendAlexaOfferToMasterResponse(
        const SendAlexaOfferToMasterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoSignalingChannelsResponse(new SendAlexaOfferToMasterResponsePrivate(this), parent)
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
 * Parses a successful KinesisVideoSignalingChannels SendAlexaOfferToMaster \a response.
 */
void SendAlexaOfferToMasterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendAlexaOfferToMasterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoSignalingChannels::SendAlexaOfferToMasterResponsePrivate
 * \brief The SendAlexaOfferToMasterResponsePrivate class provides private implementation for SendAlexaOfferToMasterResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 */

/*!
 * Constructs a SendAlexaOfferToMasterResponsePrivate object with public implementation \a q.
 */
SendAlexaOfferToMasterResponsePrivate::SendAlexaOfferToMasterResponsePrivate(
    SendAlexaOfferToMasterResponse * const q) : KinesisVideoSignalingChannelsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoSignalingChannels SendAlexaOfferToMaster response element from \a xml.
 */
void SendAlexaOfferToMasterResponsePrivate::parseSendAlexaOfferToMasterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendAlexaOfferToMasterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoSignalingChannels
} // namespace QtAws
