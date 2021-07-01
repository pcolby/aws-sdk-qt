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

#include "sendeventresponse.h"
#include "sendeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::SendEventResponse
 * \brief The SendEventResponse class provides an interace for ConnectParticipant SendEvent responses.
 *
 * \inmodule QtAwsConnectParticipant
 *
 *  Amazon Connect is a cloud-based contact center solution that makes it easy to set up and manage a customer contact
 *  center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect enables customer contacts through voice or
 * 
 *  chat>
 * 
 *  The APIs described here are used by chat participants, such as agents and
 *
 * \sa ConnectParticipantClient::sendEvent
 */

/*!
 * Constructs a SendEventResponse object for \a reply to \a request, with parent \a parent.
 */
SendEventResponse::SendEventResponse(
        const SendEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new SendEventResponsePrivate(this), parent)
{
    setRequest(new SendEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendEventRequest * SendEventResponse::request() const
{
    Q_D(const SendEventResponse);
    return static_cast<const SendEventRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant SendEvent \a response.
 */
void SendEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::SendEventResponsePrivate
 * \brief The SendEventResponsePrivate class provides private implementation for SendEventResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a SendEventResponsePrivate object with public implementation \a q.
 */
SendEventResponsePrivate::SendEventResponsePrivate(
    SendEventResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant SendEvent response element from \a xml.
 */
void SendEventResponsePrivate::parseSendEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
