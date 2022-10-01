// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "approveskillresponse.h"
#include "approveskillresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ApproveSkillResponse
 * \brief The ApproveSkillResponse class provides an interace for AlexaForBusiness ApproveSkill responses.
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
 * \sa AlexaForBusinessClient::approveSkill
 */

/*!
 * Constructs a ApproveSkillResponse object for \a reply to \a request, with parent \a parent.
 */
ApproveSkillResponse::ApproveSkillResponse(
        const ApproveSkillRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ApproveSkillResponsePrivate(this), parent)
{
    setRequest(new ApproveSkillRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ApproveSkillRequest * ApproveSkillResponse::request() const
{
    Q_D(const ApproveSkillResponse);
    return static_cast<const ApproveSkillRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ApproveSkill \a response.
 */
void ApproveSkillResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ApproveSkillResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ApproveSkillResponsePrivate
 * \brief The ApproveSkillResponsePrivate class provides private implementation for ApproveSkillResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ApproveSkillResponsePrivate object with public implementation \a q.
 */
ApproveSkillResponsePrivate::ApproveSkillResponsePrivate(
    ApproveSkillResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ApproveSkill response element from \a xml.
 */
void ApproveSkillResponsePrivate::parseApproveSkillResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApproveSkillResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
