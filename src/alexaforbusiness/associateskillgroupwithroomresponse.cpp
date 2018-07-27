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

#include "associateskillgroupwithroomresponse.h"
#include "associateskillgroupwithroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillGroupWithRoomResponse
 * \brief The AssociateSkillGroupWithRoomResponse class provides an interace for AlexaForBusiness AssociateSkillGroupWithRoom responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::associateSkillGroupWithRoom
 */

/*!
 * Constructs a AssociateSkillGroupWithRoomResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateSkillGroupWithRoomResponse::AssociateSkillGroupWithRoomResponse(
        const AssociateSkillGroupWithRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateSkillGroupWithRoomResponsePrivate(this), parent)
{
    setRequest(new AssociateSkillGroupWithRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateSkillGroupWithRoomRequest * AssociateSkillGroupWithRoomResponse::request() const
{
    Q_D(const AssociateSkillGroupWithRoomResponse);
    return static_cast<const AssociateSkillGroupWithRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness AssociateSkillGroupWithRoom \a response.
 */
void AssociateSkillGroupWithRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateSkillGroupWithRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillGroupWithRoomResponsePrivate
 * \brief The AssociateSkillGroupWithRoomResponsePrivate class provides private implementation for AssociateSkillGroupWithRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateSkillGroupWithRoomResponsePrivate object with public implementation \a q.
 */
AssociateSkillGroupWithRoomResponsePrivate::AssociateSkillGroupWithRoomResponsePrivate(
    AssociateSkillGroupWithRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness AssociateSkillGroupWithRoom response element from \a xml.
 */
void AssociateSkillGroupWithRoomResponsePrivate::parseAssociateSkillGroupWithRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSkillGroupWithRoomResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
