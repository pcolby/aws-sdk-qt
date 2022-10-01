// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchdevicesresponse.h"
#include "searchdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchDevicesResponse
 * \brief The SearchDevicesResponse class provides an interace for AlexaForBusiness SearchDevices responses.
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
 * \sa AlexaForBusinessClient::searchDevices
 */

/*!
 * Constructs a SearchDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchDevicesResponse::SearchDevicesResponse(
        const SearchDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchDevicesResponsePrivate(this), parent)
{
    setRequest(new SearchDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchDevicesRequest * SearchDevicesResponse::request() const
{
    Q_D(const SearchDevicesResponse);
    return static_cast<const SearchDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SearchDevices \a response.
 */
void SearchDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SearchDevicesResponsePrivate
 * \brief The SearchDevicesResponsePrivate class provides private implementation for SearchDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchDevicesResponsePrivate object with public implementation \a q.
 */
SearchDevicesResponsePrivate::SearchDevicesResponsePrivate(
    SearchDevicesResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SearchDevices response element from \a xml.
 */
void SearchDevicesResponsePrivate::parseSearchDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
