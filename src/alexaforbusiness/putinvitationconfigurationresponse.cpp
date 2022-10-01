// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putinvitationconfigurationresponse.h"
#include "putinvitationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutInvitationConfigurationResponse
 * \brief The PutInvitationConfigurationResponse class provides an interace for AlexaForBusiness PutInvitationConfiguration responses.
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
 * \sa AlexaForBusinessClient::putInvitationConfiguration
 */

/*!
 * Constructs a PutInvitationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutInvitationConfigurationResponse::PutInvitationConfigurationResponse(
        const PutInvitationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new PutInvitationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutInvitationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutInvitationConfigurationRequest * PutInvitationConfigurationResponse::request() const
{
    Q_D(const PutInvitationConfigurationResponse);
    return static_cast<const PutInvitationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness PutInvitationConfiguration \a response.
 */
void PutInvitationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutInvitationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::PutInvitationConfigurationResponsePrivate
 * \brief The PutInvitationConfigurationResponsePrivate class provides private implementation for PutInvitationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutInvitationConfigurationResponsePrivate object with public implementation \a q.
 */
PutInvitationConfigurationResponsePrivate::PutInvitationConfigurationResponsePrivate(
    PutInvitationConfigurationResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness PutInvitationConfiguration response element from \a xml.
 */
void PutInvitationConfigurationResponsePrivate::parsePutInvitationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutInvitationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
