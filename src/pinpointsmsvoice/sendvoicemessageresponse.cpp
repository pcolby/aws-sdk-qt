// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendvoicemessageresponse.h"
#include "sendvoicemessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::SendVoiceMessageResponse
 * \brief The SendVoiceMessageResponse class provides an interace for PinpointSmsVoice SendVoiceMessage responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::sendVoiceMessage
 */

/*!
 * Constructs a SendVoiceMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendVoiceMessageResponse::SendVoiceMessageResponse(
        const SendVoiceMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceResponse(new SendVoiceMessageResponsePrivate(this), parent)
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
 * Parses a successful PinpointSmsVoice SendVoiceMessage \a response.
 */
void SendVoiceMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendVoiceMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoice::SendVoiceMessageResponsePrivate
 * \brief The SendVoiceMessageResponsePrivate class provides private implementation for SendVoiceMessageResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a SendVoiceMessageResponsePrivate object with public implementation \a q.
 */
SendVoiceMessageResponsePrivate::SendVoiceMessageResponsePrivate(
    SendVoiceMessageResponse * const q) : PinpointSmsVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoice SendVoiceMessage response element from \a xml.
 */
void SendVoiceMessageResponsePrivate::parseSendVoiceMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendVoiceMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoice
} // namespace QtAws
