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

#include "disassociateskillgroupfromroomresponse.h"
#include "disassociateskillgroupfromroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillGroupFromRoomResponse
 * \brief The DisassociateSkillGroupFromRoomResponse class provides an interace for AlexaForBusiness DisassociateSkillGroupFromRoom responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::disassociateSkillGroupFromRoom
 */

/*!
 * Constructs a DisassociateSkillGroupFromRoomResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateSkillGroupFromRoomResponse::DisassociateSkillGroupFromRoomResponse(
        const DisassociateSkillGroupFromRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateSkillGroupFromRoomResponsePrivate(this), parent)
{
    setRequest(new DisassociateSkillGroupFromRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateSkillGroupFromRoomRequest * DisassociateSkillGroupFromRoomResponse::request() const
{
    Q_D(const DisassociateSkillGroupFromRoomResponse);
    return static_cast<const DisassociateSkillGroupFromRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DisassociateSkillGroupFromRoom \a response.
 */
void DisassociateSkillGroupFromRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateSkillGroupFromRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillGroupFromRoomResponsePrivate
 * \brief The DisassociateSkillGroupFromRoomResponsePrivate class provides private implementation for DisassociateSkillGroupFromRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateSkillGroupFromRoomResponsePrivate object with public implementation \a q.
 */
DisassociateSkillGroupFromRoomResponsePrivate::DisassociateSkillGroupFromRoomResponsePrivate(
    DisassociateSkillGroupFromRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DisassociateSkillGroupFromRoom response element from \a xml.
 */
void DisassociateSkillGroupFromRoomResponsePrivate::parseDisassociateSkillGroupFromRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateSkillGroupFromRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
