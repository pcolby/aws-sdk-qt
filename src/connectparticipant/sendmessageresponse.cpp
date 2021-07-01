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

#include "sendmessageresponse.h"
#include "sendmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::SendMessageResponse
 * \brief The SendMessageResponse class provides an interace for ConnectParticipant SendMessage responses.
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
 * \sa ConnectParticipantClient::sendMessage
 */

/*!
 * Constructs a SendMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendMessageResponse::SendMessageResponse(
        const SendMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new SendMessageResponsePrivate(this), parent)
{
    setRequest(new SendMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendMessageRequest * SendMessageResponse::request() const
{
    Q_D(const SendMessageResponse);
    return static_cast<const SendMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant SendMessage \a response.
 */
void SendMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::SendMessageResponsePrivate
 * \brief The SendMessageResponsePrivate class provides private implementation for SendMessageResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a SendMessageResponsePrivate object with public implementation \a q.
 */
SendMessageResponsePrivate::SendMessageResponsePrivate(
    SendMessageResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant SendMessage response element from \a xml.
 */
void SendMessageResponsePrivate::parseSendMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
