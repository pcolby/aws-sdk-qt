// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getskillgroupresponse.h"
#include "getskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetSkillGroupResponse
 * \brief The GetSkillGroupResponse class provides an interace for AlexaForBusiness GetSkillGroup responses.
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
 * \sa AlexaForBusinessClient::getSkillGroup
 */

/*!
 * Constructs a GetSkillGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetSkillGroupResponse::GetSkillGroupResponse(
        const GetSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetSkillGroupResponsePrivate(this), parent)
{
    setRequest(new GetSkillGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSkillGroupRequest * GetSkillGroupResponse::request() const
{
    Q_D(const GetSkillGroupResponse);
    return static_cast<const GetSkillGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetSkillGroup \a response.
 */
void GetSkillGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetSkillGroupResponsePrivate
 * \brief The GetSkillGroupResponsePrivate class provides private implementation for GetSkillGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetSkillGroupResponsePrivate object with public implementation \a q.
 */
GetSkillGroupResponsePrivate::GetSkillGroupResponsePrivate(
    GetSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetSkillGroup response element from \a xml.
 */
void GetSkillGroupResponsePrivate::parseGetSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSkillGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
