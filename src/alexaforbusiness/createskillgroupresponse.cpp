// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createskillgroupresponse.h"
#include "createskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateSkillGroupResponse
 * \brief The CreateSkillGroupResponse class provides an interace for AlexaForBusiness CreateSkillGroup responses.
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
 * \sa AlexaForBusinessClient::createSkillGroup
 */

/*!
 * Constructs a CreateSkillGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSkillGroupResponse::CreateSkillGroupResponse(
        const CreateSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateSkillGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSkillGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSkillGroupRequest * CreateSkillGroupResponse::request() const
{
    Q_D(const CreateSkillGroupResponse);
    return static_cast<const CreateSkillGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateSkillGroup \a response.
 */
void CreateSkillGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateSkillGroupResponsePrivate
 * \brief The CreateSkillGroupResponsePrivate class provides private implementation for CreateSkillGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateSkillGroupResponsePrivate object with public implementation \a q.
 */
CreateSkillGroupResponsePrivate::CreateSkillGroupResponsePrivate(
    CreateSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateSkillGroup response element from \a xml.
 */
void CreateSkillGroupResponsePrivate::parseCreateSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSkillGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
