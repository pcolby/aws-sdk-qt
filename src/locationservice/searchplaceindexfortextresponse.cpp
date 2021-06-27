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

#include "searchplaceindexfortextresponse.h"
#include "searchplaceindexfortextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForTextResponse
 * \brief The SearchPlaceIndexForTextResponse class provides an interace for LocationService SearchPlaceIndexForText responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::searchPlaceIndexForText
 */

/*!
 * Constructs a SearchPlaceIndexForTextResponse object for \a reply to \a request, with parent \a parent.
 */
SearchPlaceIndexForTextResponse::SearchPlaceIndexForTextResponse(
        const SearchPlaceIndexForTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new SearchPlaceIndexForTextResponsePrivate(this), parent)
{
    setRequest(new SearchPlaceIndexForTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchPlaceIndexForTextRequest * SearchPlaceIndexForTextResponse::request() const
{
    return static_cast<const SearchPlaceIndexForTextRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService SearchPlaceIndexForText \a response.
 */
void SearchPlaceIndexForTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchPlaceIndexForTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForTextResponsePrivate
 * \brief The SearchPlaceIndexForTextResponsePrivate class provides private implementation for SearchPlaceIndexForTextResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a SearchPlaceIndexForTextResponsePrivate object with public implementation \a q.
 */
SearchPlaceIndexForTextResponsePrivate::SearchPlaceIndexForTextResponsePrivate(
    SearchPlaceIndexForTextResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService SearchPlaceIndexForText response element from \a xml.
 */
void SearchPlaceIndexForTextResponsePrivate::parseSearchPlaceIndexForTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchPlaceIndexForTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
