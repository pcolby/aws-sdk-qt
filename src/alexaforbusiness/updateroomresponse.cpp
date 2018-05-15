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

#include "updateroomresponse.h"
#include "updateroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateRoomResponse
 * \brief The UpdateRoomResponse class provides an interace for AlexaForBusiness UpdateRoom responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::updateRoom
 */

/*!
 * Constructs a UpdateRoomResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRoomResponse::UpdateRoomResponse(
        const UpdateRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateRoomResponsePrivate(this), parent)
{
    setRequest(new UpdateRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRoomRequest * UpdateRoomResponse::request() const
{
    Q_D(const UpdateRoomResponse);
    return static_cast<const UpdateRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateRoom \a response.
 */
void UpdateRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateRoomResponsePrivate
 * \brief The UpdateRoomResponsePrivate class provides private implementation for UpdateRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateRoomResponsePrivate object with public implementation \a q.
 */
UpdateRoomResponsePrivate::UpdateRoomResponsePrivate(
    UpdateRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateRoom response element from \a xml.
 */
void UpdateRoomResponsePrivate::parseUpdateRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
