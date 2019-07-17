/*
    Copyright 2013-2019 Paul Colby

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

#include "sendvoicemessageresponse.h"
#include "sendvoicemessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::SendVoiceMessageResponse
 * \brief The SendVoiceMessageResponse class provides an interace for PinpointSMSVoice SendVoiceMessage responses.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::sendVoiceMessage
 */

/*!
 * Constructs a SendVoiceMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendVoiceMessageResponse::SendVoiceMessageResponse(
        const SendVoiceMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSMSVoiceResponse(new SendVoiceMessageResponsePrivate(this), parent)
{
    setRequest(new SendVoiceMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendVoiceMessageRequest * SendVoiceMessageResponse::request() const
{
    Q_D(const SendVoiceMessageResponse);
    return static_cast<const SendVoiceMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSMSVoice SendVoiceMessage \a response.
 */
void SendVoiceMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendVoiceMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSMSVoice::SendVoiceMessageResponsePrivate
 * \brief The SendVoiceMessageResponsePrivate class provides private implementation for SendVoiceMessageResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a SendVoiceMessageResponsePrivate object with public implementation \a q.
 */
SendVoiceMessageResponsePrivate::SendVoiceMessageResponsePrivate(
    SendVoiceMessageResponse * const q) : PinpointSMSVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSMSVoice SendVoiceMessage response element from \a xml.
 */
void SendVoiceMessageResponsePrivate::parseSendVoiceMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendVoiceMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSMSVoice
} // namespace QtAws
