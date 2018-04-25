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

#include "deleteroomskillparameterresponse.h"
#include "deleteroomskillparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomSkillParameterResponse
 * \brief The DeleteRoomSkillParameterResponse class provides an interace for AlexaForBusiness DeleteRoomSkillParameter responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::deleteRoomSkillParameter
 */

/*!
 * Constructs a DeleteRoomSkillParameterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRoomSkillParameterResponse::DeleteRoomSkillParameterResponse(
        const DeleteRoomSkillParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteRoomSkillParameterResponsePrivate(this), parent)
{
    setRequest(new DeleteRoomSkillParameterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRoomSkillParameterRequest * DeleteRoomSkillParameterResponse::request() const
{
    Q_D(const DeleteRoomSkillParameterResponse);
    return static_cast<const DeleteRoomSkillParameterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteRoomSkillParameter \a response.
 */
void DeleteRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRoomSkillParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomSkillParameterResponsePrivate
 * \brief The DeleteRoomSkillParameterResponsePrivate class provides private implementation for DeleteRoomSkillParameterResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteRoomSkillParameterResponsePrivate object with public implementation \a q.
 */
DeleteRoomSkillParameterResponsePrivate::DeleteRoomSkillParameterResponsePrivate(
    DeleteRoomSkillParameterResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteRoomSkillParameter response element from \a xml.
 */
void DeleteRoomSkillParameterResponsePrivate::parseDeleteRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoomSkillParameterResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
