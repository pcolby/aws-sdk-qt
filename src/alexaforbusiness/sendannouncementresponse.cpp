// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendannouncementresponse.h"
#include "sendannouncementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SendAnnouncementResponse
 * \brief The SendAnnouncementResponse class provides an interace for AlexaForBusiness SendAnnouncement responses.
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
 * \sa AlexaForBusinessClient::sendAnnouncement
 */

/*!
 * Constructs a SendAnnouncementResponse object for \a reply to \a request, with parent \a parent.
 */
SendAnnouncementResponse::SendAnnouncementResponse(
        const SendAnnouncementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SendAnnouncementResponsePrivate(this), parent)
{
    setRequest(new SendAnnouncementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendAnnouncementRequest * SendAnnouncementResponse::request() const
{
    Q_D(const SendAnnouncementResponse);
    return static_cast<const SendAnnouncementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SendAnnouncement \a response.
 */
void SendAnnouncementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendAnnouncementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SendAnnouncementResponsePrivate
 * \brief The SendAnnouncementResponsePrivate class provides private implementation for SendAnnouncementResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SendAnnouncementResponsePrivate object with public implementation \a q.
 */
SendAnnouncementResponsePrivate::SendAnnouncementResponsePrivate(
    SendAnnouncementResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SendAnnouncement response element from \a xml.
 */
void SendAnnouncementResponsePrivate::parseSendAnnouncementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendAnnouncementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
