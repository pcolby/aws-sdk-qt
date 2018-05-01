/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
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
    Q_D(SendInvitationResponse);
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
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
