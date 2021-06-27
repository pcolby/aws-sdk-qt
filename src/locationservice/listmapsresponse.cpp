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

#include "listmapsresponse.h"
#include "listmapsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListMapsResponse
 * \brief The ListMapsResponse class provides an interace for LocationService ListMaps responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listMaps
 */

/*!
 * Constructs a ListMapsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMapsResponse::ListMapsResponse(
        const ListMapsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListMapsResponsePrivate(this), parent)
{
    setRequest(new ListMapsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMapsRequest * ListMapsResponse::request() const
{
    return static_cast<const ListMapsRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService ListMaps \a response.
 */
void ListMapsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMapsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListMapsResponsePrivate
 * \brief The ListMapsResponsePrivate class provides private implementation for ListMapsResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListMapsResponsePrivate object with public implementation \a q.
 */
ListMapsResponsePrivate::ListMapsResponsePrivate(
    ListMapsResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListMaps response element from \a xml.
 */
void ListMapsResponsePrivate::parseListMapsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMapsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
