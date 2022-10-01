// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsmarthomeappliancediscoveryresponse.h"
#include "startsmarthomeappliancediscoveryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::StartSmartHomeApplianceDiscoveryResponse
 * \brief The StartSmartHomeApplianceDiscoveryResponse class provides an interace for AlexaForBusiness StartSmartHomeApplianceDiscovery responses.
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
 * \sa AlexaForBusinessClient::startSmartHomeApplianceDiscovery
 */

/*!
 * Constructs a StartSmartHomeApplianceDiscoveryResponse object for \a reply to \a request, with parent \a parent.
 */
StartSmartHomeApplianceDiscoveryResponse::StartSmartHomeApplianceDiscoveryResponse(
        const StartSmartHomeApplianceDiscoveryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new StartSmartHomeApplianceDiscoveryResponsePrivate(this), parent)
{
    setRequest(new StartSmartHomeApplianceDiscoveryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSmartHomeApplianceDiscoveryRequest * StartSmartHomeApplianceDiscoveryResponse::request() const
{
    Q_D(const StartSmartHomeApplianceDiscoveryResponse);
    return static_cast<const StartSmartHomeApplianceDiscoveryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness StartSmartHomeApplianceDiscovery \a response.
 */
void StartSmartHomeApplianceDiscoveryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSmartHomeApplianceDiscoveryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::StartSmartHomeApplianceDiscoveryResponsePrivate
 * \brief The StartSmartHomeApplianceDiscoveryResponsePrivate class provides private implementation for StartSmartHomeApplianceDiscoveryResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a StartSmartHomeApplianceDiscoveryResponsePrivate object with public implementation \a q.
 */
StartSmartHomeApplianceDiscoveryResponsePrivate::StartSmartHomeApplianceDiscoveryResponsePrivate(
    StartSmartHomeApplianceDiscoveryResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness StartSmartHomeApplianceDiscovery response element from \a xml.
 */
void StartSmartHomeApplianceDiscoveryResponsePrivate::parseStartSmartHomeApplianceDiscoveryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSmartHomeApplianceDiscoveryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
