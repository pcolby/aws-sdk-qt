// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectskillresponse.h"
#include "rejectskillresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::RejectSkillResponse
 * \brief The RejectSkillResponse class provides an interace for AlexaForBusiness RejectSkill responses.
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
 * \sa AlexaForBusinessClient::rejectSkill
 */

/*!
 * Constructs a RejectSkillResponse object for \a reply to \a request, with parent \a parent.
 */
RejectSkillResponse::RejectSkillResponse(
        const RejectSkillRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new RejectSkillResponsePrivate(this), parent)
{
    setRequest(new RejectSkillRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectSkillRequest * RejectSkillResponse::request() const
{
    Q_D(const RejectSkillResponse);
    return static_cast<const RejectSkillRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness RejectSkill \a response.
 */
void RejectSkillResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectSkillResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::RejectSkillResponsePrivate
 * \brief The RejectSkillResponsePrivate class provides private implementation for RejectSkillResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a RejectSkillResponsePrivate object with public implementation \a q.
 */
RejectSkillResponsePrivate::RejectSkillResponsePrivate(
    RejectSkillResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness RejectSkill response element from \a xml.
 */
void RejectSkillResponsePrivate::parseRejectSkillResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectSkillResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
