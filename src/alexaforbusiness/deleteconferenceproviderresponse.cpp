// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconferenceproviderresponse.h"
#include "deleteconferenceproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteConferenceProviderResponse
 * \brief The DeleteConferenceProviderResponse class provides an interace for AlexaForBusiness DeleteConferenceProvider responses.
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
 * \sa AlexaForBusinessClient::deleteConferenceProvider
 */

/*!
 * Constructs a DeleteConferenceProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConferenceProviderResponse::DeleteConferenceProviderResponse(
        const DeleteConferenceProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteConferenceProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteConferenceProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConferenceProviderRequest * DeleteConferenceProviderResponse::request() const
{
    Q_D(const DeleteConferenceProviderResponse);
    return static_cast<const DeleteConferenceProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteConferenceProvider \a response.
 */
void DeleteConferenceProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConferenceProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteConferenceProviderResponsePrivate
 * \brief The DeleteConferenceProviderResponsePrivate class provides private implementation for DeleteConferenceProviderResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteConferenceProviderResponsePrivate object with public implementation \a q.
 */
DeleteConferenceProviderResponsePrivate::DeleteConferenceProviderResponsePrivate(
    DeleteConferenceProviderResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteConferenceProvider response element from \a xml.
 */
void DeleteConferenceProviderResponsePrivate::parseDeleteConferenceProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConferenceProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
