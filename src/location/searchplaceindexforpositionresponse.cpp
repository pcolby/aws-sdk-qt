// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchplaceindexforpositionresponse.h"
#include "searchplaceindexforpositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::SearchPlaceIndexForPositionResponse
 * \brief The SearchPlaceIndexForPositionResponse class provides an interace for Location SearchPlaceIndexForPosition responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::searchPlaceIndexForPosition
 */

/*!
 * Constructs a SearchPlaceIndexForPositionResponse object for \a reply to \a request, with parent \a parent.
 */
SearchPlaceIndexForPositionResponse::SearchPlaceIndexForPositionResponse(
        const SearchPlaceIndexForPositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new SearchPlaceIndexForPositionResponsePrivate(this), parent)
{
    setRequest(new SearchPlaceIndexForPositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchPlaceIndexForPositionRequest * SearchPlaceIndexForPositionResponse::request() const
{
    Q_D(const SearchPlaceIndexForPositionResponse);
    return static_cast<const SearchPlaceIndexForPositionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location SearchPlaceIndexForPosition \a response.
 */
void SearchPlaceIndexForPositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchPlaceIndexForPositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::SearchPlaceIndexForPositionResponsePrivate
 * \brief The SearchPlaceIndexForPositionResponsePrivate class provides private implementation for SearchPlaceIndexForPositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a SearchPlaceIndexForPositionResponsePrivate object with public implementation \a q.
 */
SearchPlaceIndexForPositionResponsePrivate::SearchPlaceIndexForPositionResponsePrivate(
    SearchPlaceIndexForPositionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location SearchPlaceIndexForPosition response element from \a xml.
 */
void SearchPlaceIndexForPositionResponsePrivate::parseSearchPlaceIndexForPositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchPlaceIndexForPositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
