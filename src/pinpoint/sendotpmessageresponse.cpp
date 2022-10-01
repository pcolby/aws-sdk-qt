// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendotpmessageresponse.h"
#include "sendotpmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendOTPMessageResponse
 * \brief The SendOTPMessageResponse class provides an interace for Pinpoint SendOTPMessage responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::sendOTPMessage
 */

/*!
 * Constructs a SendOTPMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendOTPMessageResponse::SendOTPMessageResponse(
        const SendOTPMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new SendOTPMessageResponsePrivate(this), parent)
{
    setRequest(new SendOTPMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendOTPMessageRequest * SendOTPMessageResponse::request() const
{
    Q_D(const SendOTPMessageResponse);
    return static_cast<const SendOTPMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint SendOTPMessage \a response.
 */
void SendOTPMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendOTPMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::SendOTPMessageResponsePrivate
 * \brief The SendOTPMessageResponsePrivate class provides private implementation for SendOTPMessageResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendOTPMessageResponsePrivate object with public implementation \a q.
 */
SendOTPMessageResponsePrivate::SendOTPMessageResponsePrivate(
    SendOTPMessageResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint SendOTPMessage response element from \a xml.
 */
void SendOTPMessageResponsePrivate::parseSendOTPMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendOTPMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
