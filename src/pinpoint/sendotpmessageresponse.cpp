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
