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

#include "deleteroomresponse.h"
#include "deleteroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomResponse
 * \brief The DeleteRoomResponse class provides an interace for AlexaForBusiness DeleteRoom responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::deleteRoom
 */

/*!
 * Constructs a DeleteRoomResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRoomResponse::DeleteRoomResponse(
        const DeleteRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteRoomResponsePrivate(this), parent)
{
    setRequest(new DeleteRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRoomRequest * DeleteRoomResponse::request() const
{
    Q_D(const DeleteRoomResponse);
    return static_cast<const DeleteRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteRoom \a response.
 */
void DeleteRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomResponsePrivate
 * \brief The DeleteRoomResponsePrivate class provides private implementation for DeleteRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteRoomResponsePrivate object with public implementation \a q.
 */
DeleteRoomResponsePrivate::DeleteRoomResponsePrivate(
    DeleteRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteRoom response element from \a xml.
 */
void DeleteRoomResponsePrivate::parseDeleteRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
