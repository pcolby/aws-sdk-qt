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

#include "listplaceindexesresponse.h"
#include "listplaceindexesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListPlaceIndexesResponse
 * \brief The ListPlaceIndexesResponse class provides an interace for LocationService ListPlaceIndexes responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listPlaceIndexes
 */

/*!
 * Constructs a ListPlaceIndexesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPlaceIndexesResponse::ListPlaceIndexesResponse(
        const ListPlaceIndexesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListPlaceIndexesResponsePrivate(this), parent)
{
    setRequest(new ListPlaceIndexesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPlaceIndexesRequest * ListPlaceIndexesResponse::request() const
{
    Q_D(const ListPlaceIndexesResponse);
    return static_cast<const ListPlaceIndexesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService ListPlaceIndexes \a response.
 */
void ListPlaceIndexesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPlaceIndexesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListPlaceIndexesResponsePrivate
 * \brief The ListPlaceIndexesResponsePrivate class provides private implementation for ListPlaceIndexesResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListPlaceIndexesResponsePrivate object with public implementation \a q.
 */
ListPlaceIndexesResponsePrivate::ListPlaceIndexesResponsePrivate(
    ListPlaceIndexesResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListPlaceIndexes response element from \a xml.
 */
void ListPlaceIndexesResponsePrivate::parseListPlaceIndexesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPlaceIndexesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
