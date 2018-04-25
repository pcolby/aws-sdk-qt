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

#include "disassociatedevicefromroomresponse.h"
#include "disassociatedevicefromroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateDeviceFromRoomResponse
 * \brief The DisassociateDeviceFromRoomResponse class provides an interace for AlexaForBusiness DisassociateDeviceFromRoom responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::disassociateDeviceFromRoom
 */

/*!
 * Constructs a DisassociateDeviceFromRoomResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateDeviceFromRoomResponse::DisassociateDeviceFromRoomResponse(
        const DisassociateDeviceFromRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateDeviceFromRoomResponsePrivate(this), parent)
{
    setRequest(new DisassociateDeviceFromRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateDeviceFromRoomRequest * DisassociateDeviceFromRoomResponse::request() const
{
    Q_D(const DisassociateDeviceFromRoomResponse);
    return static_cast<const DisassociateDeviceFromRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DisassociateDeviceFromRoom \a response.
 */
void DisassociateDeviceFromRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateDeviceFromRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateDeviceFromRoomResponsePrivate
 * \brief The DisassociateDeviceFromRoomResponsePrivate class provides private implementation for DisassociateDeviceFromRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateDeviceFromRoomResponsePrivate object with public implementation \a q.
 */
DisassociateDeviceFromRoomResponsePrivate::DisassociateDeviceFromRoomResponsePrivate(
    DisassociateDeviceFromRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DisassociateDeviceFromRoom response element from \a xml.
 */
void DisassociateDeviceFromRoomResponsePrivate::parseDisassociateDeviceFromRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDeviceFromRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
