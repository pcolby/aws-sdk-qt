// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworkprofileresponse.h"
#include "updatenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateNetworkProfileResponse
 * \brief The UpdateNetworkProfileResponse class provides an interace for AlexaForBusiness UpdateNetworkProfile responses.
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
 * \sa AlexaForBusinessClient::updateNetworkProfile
 */

/*!
 * Constructs a UpdateNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkProfileResponse::UpdateNetworkProfileResponse(
        const UpdateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkProfileRequest * UpdateNetworkProfileResponse::request() const
{
    Q_D(const UpdateNetworkProfileResponse);
    return static_cast<const UpdateNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateNetworkProfile \a response.
 */
void UpdateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateNetworkProfileResponsePrivate
 * \brief The UpdateNetworkProfileResponsePrivate class provides private implementation for UpdateNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateNetworkProfileResponsePrivate object with public implementation \a q.
 */
UpdateNetworkProfileResponsePrivate::UpdateNetworkProfileResponsePrivate(
    UpdateNetworkProfileResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateNetworkProfile response element from \a xml.
 */
void UpdateNetworkProfileResponsePrivate::parseUpdateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
