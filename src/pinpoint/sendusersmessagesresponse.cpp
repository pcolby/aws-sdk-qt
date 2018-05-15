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

#include "sendusersmessagesresponse.h"
#include "sendusersmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesResponse
 * \brief The SendUsersMessagesResponse class provides an interace for Pinpoint SendUsersMessages responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::sendUsersMessages
 */

/*!
 * Constructs a SendUsersMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
SendUsersMessagesResponse::SendUsersMessagesResponse(
        const SendUsersMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new SendUsersMessagesResponsePrivate(this), parent)
{
    setRequest(new SendUsersMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendUsersMessagesRequest * SendUsersMessagesResponse::request() const
{
    Q_D(const SendUsersMessagesResponse);
    return static_cast<const SendUsersMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint SendUsersMessages \a response.
 */
void SendUsersMessagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendUsersMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesResponsePrivate
 * \brief The SendUsersMessagesResponsePrivate class provides private implementation for SendUsersMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendUsersMessagesResponsePrivate object with public implementation \a q.
 */
SendUsersMessagesResponsePrivate::SendUsersMessagesResponsePrivate(
    SendUsersMessagesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint SendUsersMessages response element from \a xml.
 */
void SendUsersMessagesResponsePrivate::parseSendUsersMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendUsersMessagesResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
