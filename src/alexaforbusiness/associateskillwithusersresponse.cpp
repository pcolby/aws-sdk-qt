// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateskillwithusersresponse.h"
#include "associateskillwithusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillWithUsersResponse
 * \brief The AssociateSkillWithUsersResponse class provides an interace for AlexaForBusiness AssociateSkillWithUsers responses.
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
 * \sa AlexaForBusinessClient::associateSkillWithUsers
 */

/*!
 * Constructs a AssociateSkillWithUsersResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateSkillWithUsersResponse::AssociateSkillWithUsersResponse(
        const AssociateSkillWithUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateSkillWithUsersResponsePrivate(this), parent)
{
    setRequest(new AssociateSkillWithUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateSkillWithUsersRequest * AssociateSkillWithUsersResponse::request() const
{
    Q_D(const AssociateSkillWithUsersResponse);
    return static_cast<const AssociateSkillWithUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness AssociateSkillWithUsers \a response.
 */
void AssociateSkillWithUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateSkillWithUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillWithUsersResponsePrivate
 * \brief The AssociateSkillWithUsersResponsePrivate class provides private implementation for AssociateSkillWithUsersResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateSkillWithUsersResponsePrivate object with public implementation \a q.
 */
AssociateSkillWithUsersResponsePrivate::AssociateSkillWithUsersResponsePrivate(
    AssociateSkillWithUsersResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness AssociateSkillWithUsers response element from \a xml.
 */
void AssociateSkillWithUsersResponsePrivate::parseAssociateSkillWithUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSkillWithUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
