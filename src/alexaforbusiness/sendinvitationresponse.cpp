// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendinvitationresponse.h"
#include "sendinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SendInvitationResponse
 * \brief The SendInvitationResponse class provides an interace for AlexaForBusiness SendInvitation responses.
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
 * \sa AlexaForBusinessClient::sendInvitation
 */

/*!
 * Constructs a SendInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
SendInvitationResponse::SendInvitationResponse(
        const SendInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SendInvitationResponsePrivate(this), parent)
{
    setRequest(new SendInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendInvitationRequest * SendInvitationResponse::request() const
{
    Q_D(const SendInvitationResponse);
    return static_cast<const SendInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SendInvitation \a response.
 */
void SendInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SendInvitationResponsePrivate
 * \brief The SendInvitationResponsePrivate class provides private implementation for SendInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SendInvitationResponsePrivate object with public implementation \a q.
 */
SendInvitationResponsePrivate::SendInvitationResponsePrivate(
    SendInvitationResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SendInvitation response element from \a xml.
 */
void SendInvitationResponsePrivate::parseSendInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
