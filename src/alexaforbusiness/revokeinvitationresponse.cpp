// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokeinvitationresponse.h"
#include "revokeinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::RevokeInvitationResponse
 * \brief The RevokeInvitationResponse class provides an interace for AlexaForBusiness RevokeInvitation responses.
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
 * \sa AlexaForBusinessClient::revokeInvitation
 */

/*!
 * Constructs a RevokeInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeInvitationResponse::RevokeInvitationResponse(
        const RevokeInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new RevokeInvitationResponsePrivate(this), parent)
{
    setRequest(new RevokeInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeInvitationRequest * RevokeInvitationResponse::request() const
{
    Q_D(const RevokeInvitationResponse);
    return static_cast<const RevokeInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness RevokeInvitation \a response.
 */
void RevokeInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::RevokeInvitationResponsePrivate
 * \brief The RevokeInvitationResponsePrivate class provides private implementation for RevokeInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a RevokeInvitationResponsePrivate object with public implementation \a q.
 */
RevokeInvitationResponsePrivate::RevokeInvitationResponsePrivate(
    RevokeInvitationResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness RevokeInvitation response element from \a xml.
 */
void RevokeInvitationResponsePrivate::parseRevokeInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
