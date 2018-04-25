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

#include "associatedevicewithroomresponse.h"
#include "associatedevicewithroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithRoomResponse
 * \brief The AssociateDeviceWithRoomResponse class provides an interace for AlexaForBusiness AssociateDeviceWithRoom responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::associateDeviceWithRoom
 */

/*!
 * Constructs a AssociateDeviceWithRoomResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDeviceWithRoomResponse::AssociateDeviceWithRoomResponse(
        const AssociateDeviceWithRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateDeviceWithRoomResponsePrivate(this), parent)
{
    setRequest(new AssociateDeviceWithRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDeviceWithRoomRequest * AssociateDeviceWithRoomResponse::request() const
{
    Q_D(const AssociateDeviceWithRoomResponse);
    return static_cast<const AssociateDeviceWithRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness AssociateDeviceWithRoom \a response.
 */
void AssociateDeviceWithRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateDeviceWithRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithRoomResponsePrivate
 * \brief The AssociateDeviceWithRoomResponsePrivate class provides private implementation for AssociateDeviceWithRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateDeviceWithRoomResponsePrivate object with public implementation \a q.
 */
AssociateDeviceWithRoomResponsePrivate::AssociateDeviceWithRoomResponsePrivate(
    AssociateDeviceWithRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness AssociateDeviceWithRoom response element from \a xml.
 */
void AssociateDeviceWithRoomResponsePrivate::parseAssociateDeviceWithRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDeviceWithRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
