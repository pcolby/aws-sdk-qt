// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchplaceindexforsuggestionsresponse.h"
#include "searchplaceindexforsuggestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::SearchPlaceIndexForSuggestionsResponse
 * \brief The SearchPlaceIndexForSuggestionsResponse class provides an interace for Location SearchPlaceIndexForSuggestions responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::searchPlaceIndexForSuggestions
 */

/*!
 * Constructs a SearchPlaceIndexForSuggestionsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchPlaceIndexForSuggestionsResponse::SearchPlaceIndexForSuggestionsResponse(
        const SearchPlaceIndexForSuggestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new SearchPlaceIndexForSuggestionsResponsePrivate(this), parent)
{
    setRequest(new SearchPlaceIndexForSuggestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchPlaceIndexForSuggestionsRequest * SearchPlaceIndexForSuggestionsResponse::request() const
{
    Q_D(const SearchPlaceIndexForSuggestionsResponse);
    return static_cast<const SearchPlaceIndexForSuggestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location SearchPlaceIndexForSuggestions \a response.
 */
void SearchPlaceIndexForSuggestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchPlaceIndexForSuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::SearchPlaceIndexForSuggestionsResponsePrivate
 * \brief The SearchPlaceIndexForSuggestionsResponsePrivate class provides private implementation for SearchPlaceIndexForSuggestionsResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a SearchPlaceIndexForSuggestionsResponsePrivate object with public implementation \a q.
 */
SearchPlaceIndexForSuggestionsResponsePrivate::SearchPlaceIndexForSuggestionsResponsePrivate(
    SearchPlaceIndexForSuggestionsResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location SearchPlaceIndexForSuggestions response element from \a xml.
 */
void SearchPlaceIndexForSuggestionsResponsePrivate::parseSearchPlaceIndexForSuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchPlaceIndexForSuggestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
