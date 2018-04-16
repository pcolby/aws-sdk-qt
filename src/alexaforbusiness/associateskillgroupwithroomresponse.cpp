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

#include "associateskillgroupwithroomresponse.h"
#include "associateskillgroupwithroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillGroupWithRoomResponse
 *
 * \brief The AssociateSkillGroupWithRoomResponse class encapsulates AlexaForBusiness AssociateSkillGroupWithRoom responses.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::associateSkillGroupWithRoom
 */

/*!
 * @brief  Constructs a new AssociateSkillGroupWithRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const AssociateSkillGroupWithRoomRequest * AssociateSkillGroupWithRoomResponse::request() const
{
    Q_D(const AssociateSkillGroupWithRoomResponse);
    return static_cast<const AssociateSkillGroupWithRoomRequest *>(d->request);
}

/*!
 * @brief  Parse a AlexaForBusiness AssociateSkillGroupWithRoom response.
 *
 * @param  response  Response to parse.
 */
void AssociateSkillGroupWithRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateSkillGroupWithRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AssociateSkillGroupWithRoomResponsePrivate
 *
 * \brief Private implementation for AssociateSkillGroupWithRoomResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateSkillGroupWithRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateSkillGroupWithRoomResponse instance.
 */
AssociateSkillGroupWithRoomResponsePrivate::AssociateSkillGroupWithRoomResponsePrivate(
    AssociateSkillGroupWithRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AlexaForBusiness AssociateSkillGroupWithRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateSkillGroupWithRoomResponsePrivate::parseAssociateSkillGroupWithRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSkillGroupWithRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
