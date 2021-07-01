/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "searchplaceindexforpositionresponse.h"
#include "searchplaceindexforpositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForPositionResponse
 * \brief The SearchPlaceIndexForPositionResponse class provides an interace for LocationService SearchPlaceIndexForPosition responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::searchPlaceIndexForPosition
 */

/*!
 * Constructs a SearchPlaceIndexForPositionResponse object for \a reply to \a request, with parent \a parent.
 */
SearchPlaceIndexForPositionResponse::SearchPlaceIndexForPositionResponse(
        const SearchPlaceIndexForPositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new SearchPlaceIndexForPositionResponsePrivate(this), parent)
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
 * Parses a successful LocationService SearchPlaceIndexForPosition \a response.
 */
void SearchPlaceIndexForPositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchPlaceIndexForPositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForPositionResponsePrivate
 * \brief The SearchPlaceIndexForPositionResponsePrivate class provides private implementation for SearchPlaceIndexForPositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a SearchPlaceIndexForPositionResponsePrivate object with public implementation \a q.
 */
SearchPlaceIndexForPositionResponsePrivate::SearchPlaceIndexForPositionResponsePrivate(
    SearchPlaceIndexForPositionResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService SearchPlaceIndexForPosition response element from \a xml.
 */
void SearchPlaceIndexForPositionResponsePrivate::parseSearchPlaceIndexForPositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchPlaceIndexForPositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
