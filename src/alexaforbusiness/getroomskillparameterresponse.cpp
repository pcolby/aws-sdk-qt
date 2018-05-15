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

#include "getroomskillparameterresponse.h"
#include "getroomskillparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetRoomSkillParameterResponse
 * \brief The GetRoomSkillParameterResponse class provides an interace for AlexaForBusiness GetRoomSkillParameter responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::getRoomSkillParameter
 */

/*!
 * Constructs a GetRoomSkillParameterResponse object for \a reply to \a request, with parent \a parent.
 */
GetRoomSkillParameterResponse::GetRoomSkillParameterResponse(
        const GetRoomSkillParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetRoomSkillParameterResponsePrivate(this), parent)
{
    setRequest(new GetRoomSkillParameterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRoomSkillParameterRequest * GetRoomSkillParameterResponse::request() const
{
    Q_D(const GetRoomSkillParameterResponse);
    return static_cast<const GetRoomSkillParameterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetRoomSkillParameter \a response.
 */
void GetRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoomSkillParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetRoomSkillParameterResponsePrivate
 * \brief The GetRoomSkillParameterResponsePrivate class provides private implementation for GetRoomSkillParameterResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetRoomSkillParameterResponsePrivate object with public implementation \a q.
 */
GetRoomSkillParameterResponsePrivate::GetRoomSkillParameterResponsePrivate(
    GetRoomSkillParameterResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetRoomSkillParameter response element from \a xml.
 */
void GetRoomSkillParameterResponsePrivate::parseGetRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoomSkillParameterResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
