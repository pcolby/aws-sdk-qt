// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconferenceproviderresponse.h"
#include "createconferenceproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateConferenceProviderResponse
 * \brief The CreateConferenceProviderResponse class provides an interace for AlexaForBusiness CreateConferenceProvider responses.
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
 * \sa AlexaForBusinessClient::createConferenceProvider
 */

/*!
 * Constructs a CreateConferenceProviderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConferenceProviderResponse::CreateConferenceProviderResponse(
        const CreateConferenceProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateConferenceProviderResponsePrivate(this), parent)
{
    setRequest(new CreateConferenceProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConferenceProviderRequest * CreateConferenceProviderResponse::request() const
{
    Q_D(const CreateConferenceProviderResponse);
    return static_cast<const CreateConferenceProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateConferenceProvider \a response.
 */
void CreateConferenceProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConferenceProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateConferenceProviderResponsePrivate
 * \brief The CreateConferenceProviderResponsePrivate class provides private implementation for CreateConferenceProviderResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateConferenceProviderResponsePrivate object with public implementation \a q.
 */
CreateConferenceProviderResponsePrivate::CreateConferenceProviderResponsePrivate(
    CreateConferenceProviderResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateConferenceProvider response element from \a xml.
 */
void CreateConferenceProviderResponsePrivate::parseCreateConferenceProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConferenceProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
