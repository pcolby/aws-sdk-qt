// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsmarthomeappliancesresponse.h"
#include "listsmarthomeappliancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSmartHomeAppliancesResponse
 * \brief The ListSmartHomeAppliancesResponse class provides an interace for AlexaForBusiness ListSmartHomeAppliances responses.
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
 * \sa AlexaForBusinessClient::listSmartHomeAppliances
 */

/*!
 * Constructs a ListSmartHomeAppliancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSmartHomeAppliancesResponse::ListSmartHomeAppliancesResponse(
        const ListSmartHomeAppliancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListSmartHomeAppliancesResponsePrivate(this), parent)
{
    setRequest(new ListSmartHomeAppliancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSmartHomeAppliancesRequest * ListSmartHomeAppliancesResponse::request() const
{
    Q_D(const ListSmartHomeAppliancesResponse);
    return static_cast<const ListSmartHomeAppliancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListSmartHomeAppliances \a response.
 */
void ListSmartHomeAppliancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSmartHomeAppliancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListSmartHomeAppliancesResponsePrivate
 * \brief The ListSmartHomeAppliancesResponsePrivate class provides private implementation for ListSmartHomeAppliancesResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSmartHomeAppliancesResponsePrivate object with public implementation \a q.
 */
ListSmartHomeAppliancesResponsePrivate::ListSmartHomeAppliancesResponsePrivate(
    ListSmartHomeAppliancesResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListSmartHomeAppliances response element from \a xml.
 */
void ListSmartHomeAppliancesResponsePrivate::parseListSmartHomeAppliancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSmartHomeAppliancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
