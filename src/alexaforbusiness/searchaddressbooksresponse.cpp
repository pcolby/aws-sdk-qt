// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchaddressbooksresponse.h"
#include "searchaddressbooksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchAddressBooksResponse
 * \brief The SearchAddressBooksResponse class provides an interace for AlexaForBusiness SearchAddressBooks responses.
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
 * \sa AlexaForBusinessClient::searchAddressBooks
 */

/*!
 * Constructs a SearchAddressBooksResponse object for \a reply to \a request, with parent \a parent.
 */
SearchAddressBooksResponse::SearchAddressBooksResponse(
        const SearchAddressBooksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchAddressBooksResponsePrivate(this), parent)
{
    setRequest(new SearchAddressBooksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchAddressBooksRequest * SearchAddressBooksResponse::request() const
{
    Q_D(const SearchAddressBooksResponse);
    return static_cast<const SearchAddressBooksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SearchAddressBooks \a response.
 */
void SearchAddressBooksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchAddressBooksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SearchAddressBooksResponsePrivate
 * \brief The SearchAddressBooksResponsePrivate class provides private implementation for SearchAddressBooksResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchAddressBooksResponsePrivate object with public implementation \a q.
 */
SearchAddressBooksResponsePrivate::SearchAddressBooksResponsePrivate(
    SearchAddressBooksResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SearchAddressBooks response element from \a xml.
 */
void SearchAddressBooksResponsePrivate::parseSearchAddressBooksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchAddressBooksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
