// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
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
