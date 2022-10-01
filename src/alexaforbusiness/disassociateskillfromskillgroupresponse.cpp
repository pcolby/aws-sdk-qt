// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateskillfromskillgroupresponse.h"
#include "disassociateskillfromskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromSkillGroupResponse
 * \brief The DisassociateSkillFromSkillGroupResponse class provides an interace for AlexaForBusiness DisassociateSkillFromSkillGroup responses.
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
 * \sa AlexaForBusinessClient::disassociateSkillFromSkillGroup
 */

/*!
 * Constructs a DisassociateSkillFromSkillGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateSkillFromSkillGroupResponse::DisassociateSkillFromSkillGroupResponse(
        const DisassociateSkillFromSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateSkillFromSkillGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateSkillFromSkillGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateSkillFromSkillGroupRequest * DisassociateSkillFromSkillGroupResponse::request() const
{
    Q_D(const DisassociateSkillFromSkillGroupResponse);
    return static_cast<const DisassociateSkillFromSkillGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DisassociateSkillFromSkillGroup \a response.
 */
void DisassociateSkillFromSkillGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateSkillFromSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromSkillGroupResponsePrivate
 * \brief The DisassociateSkillFromSkillGroupResponsePrivate class provides private implementation for DisassociateSkillFromSkillGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateSkillFromSkillGroupResponsePrivate object with public implementation \a q.
 */
DisassociateSkillFromSkillGroupResponsePrivate::DisassociateSkillFromSkillGroupResponsePrivate(
    DisassociateSkillFromSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DisassociateSkillFromSkillGroup response element from \a xml.
 */
void DisassociateSkillFromSkillGroupResponsePrivate::parseDisassociateSkillFromSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateSkillFromSkillGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
