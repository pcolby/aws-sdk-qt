// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteskillauthorizationresponse.h"
#include "deleteskillauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteSkillAuthorizationResponse
 * \brief The DeleteSkillAuthorizationResponse class provides an interace for AlexaForBusiness DeleteSkillAuthorization responses.
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
 * \sa AlexaForBusinessClient::deleteSkillAuthorization
 */

/*!
 * Constructs a DeleteSkillAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSkillAuthorizationResponse::DeleteSkillAuthorizationResponse(
        const DeleteSkillAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteSkillAuthorizationResponsePrivate(this), parent)
{
    setRequest(new DeleteSkillAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSkillAuthorizationRequest * DeleteSkillAuthorizationResponse::request() const
{
    Q_D(const DeleteSkillAuthorizationResponse);
    return static_cast<const DeleteSkillAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteSkillAuthorization \a response.
 */
void DeleteSkillAuthorizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSkillAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteSkillAuthorizationResponsePrivate
 * \brief The DeleteSkillAuthorizationResponsePrivate class provides private implementation for DeleteSkillAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteSkillAuthorizationResponsePrivate object with public implementation \a q.
 */
DeleteSkillAuthorizationResponsePrivate::DeleteSkillAuthorizationResponsePrivate(
    DeleteSkillAuthorizationResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteSkillAuthorization response element from \a xml.
 */
void DeleteSkillAuthorizationResponsePrivate::parseDeleteSkillAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSkillAuthorizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
