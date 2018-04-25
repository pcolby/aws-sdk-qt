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

#include "createskillgroupresponse.h"
#include "createskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateSkillGroupResponse
 * \brief The CreateSkillGroupResponse class provides an interace for AlexaForBusiness CreateSkillGroup responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::createSkillGroup
 */

/*!
 * Constructs a CreateSkillGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSkillGroupResponse::CreateSkillGroupResponse(
        const CreateSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateSkillGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSkillGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSkillGroupRequest * CreateSkillGroupResponse::request() const
{
    Q_D(const CreateSkillGroupResponse);
    return static_cast<const CreateSkillGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateSkillGroup \a response.
 */
void CreateSkillGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateSkillGroupResponsePrivate
 * \brief The CreateSkillGroupResponsePrivate class provides private implementation for CreateSkillGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateSkillGroupResponsePrivate object with public implementation \a q.
 */
CreateSkillGroupResponsePrivate::CreateSkillGroupResponsePrivate(
    CreateSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateSkillGroup response element from \a xml.
 */
void CreateSkillGroupResponsePrivate::parseCreateSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSkillGroupResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
