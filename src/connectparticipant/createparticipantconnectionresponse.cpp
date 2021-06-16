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

#include "createparticipantconnectionresponse.h"
#include "createparticipantconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::CreateParticipantConnectionResponse
 * \brief The CreateParticipantConnectionResponse class provides an interace for ConnectParticipant CreateParticipantConnection responses.
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
 * \sa ConnectParticipantClient::createParticipantConnection
 */

/*!
 * Constructs a CreateParticipantConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateParticipantConnectionResponse::CreateParticipantConnectionResponse(
        const CreateParticipantConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new CreateParticipantConnectionResponsePrivate(this), parent)
{
    setRequest(new CreateParticipantConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateParticipantConnectionRequest * CreateParticipantConnectionResponse::request() const
{
    Q_D(const CreateParticipantConnectionResponse);
    return static_cast<const CreateParticipantConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant CreateParticipantConnection \a response.
 */
void CreateParticipantConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateParticipantConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::CreateParticipantConnectionResponsePrivate
 * \brief The CreateParticipantConnectionResponsePrivate class provides private implementation for CreateParticipantConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a CreateParticipantConnectionResponsePrivate object with public implementation \a q.
 */
CreateParticipantConnectionResponsePrivate::CreateParticipantConnectionResponsePrivate(
    CreateParticipantConnectionResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant CreateParticipantConnection response element from \a xml.
 */
void CreateParticipantConnectionResponsePrivate::parseCreateParticipantConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParticipantConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
