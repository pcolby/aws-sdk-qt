// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateskillfromusersresponse.h"
#include "disassociateskillfromusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromUsersResponse
 * \brief The DisassociateSkillFromUsersResponse class provides an interace for AlexaForBusiness DisassociateSkillFromUsers responses.
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
 * \sa AlexaForBusinessClient::disassociateSkillFromUsers
 */

/*!
 * Constructs a DisassociateSkillFromUsersResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateSkillFromUsersResponse::DisassociateSkillFromUsersResponse(
        const DisassociateSkillFromUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateSkillFromUsersResponsePrivate(this), parent)
{
    setRequest(new DisassociateSkillFromUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateSkillFromUsersRequest * DisassociateSkillFromUsersResponse::request() const
{
    Q_D(const DisassociateSkillFromUsersResponse);
    return static_cast<const DisassociateSkillFromUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DisassociateSkillFromUsers \a response.
 */
void DisassociateSkillFromUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateSkillFromUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromUsersResponsePrivate
 * \brief The DisassociateSkillFromUsersResponsePrivate class provides private implementation for DisassociateSkillFromUsersResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateSkillFromUsersResponsePrivate object with public implementation \a q.
 */
DisassociateSkillFromUsersResponsePrivate::DisassociateSkillFromUsersResponsePrivate(
    DisassociateSkillFromUsersResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DisassociateSkillFromUsers response element from \a xml.
 */
void DisassociateSkillFromUsersResponsePrivate::parseDisassociateSkillFromUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateSkillFromUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
