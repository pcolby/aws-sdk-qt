/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getroomresponse.h"
#include "getroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetRoomResponse
 * \brief The GetRoomResponse class provides an interace for AlexaForBusiness GetRoom responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::getRoom
 */

/*!
 * Constructs a GetRoomResponse object for \a reply to \a request, with parent \a parent.
 */
GetRoomResponse::GetRoomResponse(
        const GetRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetRoomResponsePrivate(this), parent)
{
    setRequest(new GetRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRoomRequest * GetRoomResponse::request() const
{
    Q_D(const GetRoomResponse);
    return static_cast<const GetRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetRoom \a response.
 */
void GetRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetRoomResponsePrivate
 * \brief The GetRoomResponsePrivate class provides private implementation for GetRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetRoomResponsePrivate object with public implementation \a q.
 */
GetRoomResponsePrivate::GetRoomResponsePrivate(
    GetRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetRoom response element from \a xml.
 */
void GetRoomResponsePrivate::parseGetRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
