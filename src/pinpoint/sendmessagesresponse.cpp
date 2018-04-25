/*
    Copyright 2013-2018 Paul Colby

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

#include "sendmessagesresponse.h"
#include "sendmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendMessagesResponse
 * \brief The SendMessagesResponse class provides an interace for Pinpoint SendMessages responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::sendMessages
 */

/*!
 * Constructs a SendMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
SendMessagesResponse::SendMessagesResponse(
        const SendMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new SendMessagesResponsePrivate(this), parent)
{
    setRequest(new SendMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendMessagesRequest * SendMessagesResponse::request() const
{
    Q_D(const SendMessagesResponse);
    return static_cast<const SendMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint SendMessages \a response.
 */
void SendMessagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SendMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::SendMessagesResponsePrivate
 * \brief The SendMessagesResponsePrivate class provides private implementation for SendMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendMessagesResponsePrivate object with public implementation \a q.
 */
SendMessagesResponsePrivate::SendMessagesResponsePrivate(
    SendMessagesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint SendMessages response element from \a xml.
 */
void SendMessagesResponsePrivate::parseSendMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessagesResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
