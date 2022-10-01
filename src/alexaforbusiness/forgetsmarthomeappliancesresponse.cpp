// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forgetsmarthomeappliancesresponse.h"
#include "forgetsmarthomeappliancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ForgetSmartHomeAppliancesResponse
 * \brief The ForgetSmartHomeAppliancesResponse class provides an interace for AlexaForBusiness ForgetSmartHomeAppliances responses.
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
 * \sa AlexaForBusinessClient::forgetSmartHomeAppliances
 */

/*!
 * Constructs a ForgetSmartHomeAppliancesResponse object for \a reply to \a request, with parent \a parent.
 */
ForgetSmartHomeAppliancesResponse::ForgetSmartHomeAppliancesResponse(
        const ForgetSmartHomeAppliancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ForgetSmartHomeAppliancesResponsePrivate(this), parent)
{
    setRequest(new ForgetSmartHomeAppliancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ForgetSmartHomeAppliancesRequest * ForgetSmartHomeAppliancesResponse::request() const
{
    Q_D(const ForgetSmartHomeAppliancesResponse);
    return static_cast<const ForgetSmartHomeAppliancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ForgetSmartHomeAppliances \a response.
 */
void ForgetSmartHomeAppliancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ForgetSmartHomeAppliancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ForgetSmartHomeAppliancesResponsePrivate
 * \brief The ForgetSmartHomeAppliancesResponsePrivate class provides private implementation for ForgetSmartHomeAppliancesResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ForgetSmartHomeAppliancesResponsePrivate object with public implementation \a q.
 */
ForgetSmartHomeAppliancesResponsePrivate::ForgetSmartHomeAppliancesResponsePrivate(
    ForgetSmartHomeAppliancesResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ForgetSmartHomeAppliances response element from \a xml.
 */
void ForgetSmartHomeAppliancesResponsePrivate::parseForgetSmartHomeAppliancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ForgetSmartHomeAppliancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
