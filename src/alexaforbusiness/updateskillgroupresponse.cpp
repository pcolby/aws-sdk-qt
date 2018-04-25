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

#include "updateskillgroupresponse.h"
#include "updateskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateSkillGroupResponse
 * \brief The UpdateSkillGroupResponse class provides an interace for AlexaForBusiness UpdateSkillGroup responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::updateSkillGroup
 */

/*!
 * Constructs a UpdateSkillGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSkillGroupResponse::UpdateSkillGroupResponse(
        const UpdateSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateSkillGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSkillGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSkillGroupRequest * UpdateSkillGroupResponse::request() const
{
    Q_D(const UpdateSkillGroupResponse);
    return static_cast<const UpdateSkillGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateSkillGroup \a response.
 */
void UpdateSkillGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateSkillGroupResponsePrivate
 * \brief The UpdateSkillGroupResponsePrivate class provides private implementation for UpdateSkillGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateSkillGroupResponsePrivate object with public implementation \a q.
 */
UpdateSkillGroupResponsePrivate::UpdateSkillGroupResponsePrivate(
    UpdateSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateSkillGroup response element from \a xml.
 */
void UpdateSkillGroupResponsePrivate::parseUpdateSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSkillGroupResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
