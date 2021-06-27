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

#include "listdevicepositionsresponse.h"
#include "listdevicepositionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListDevicePositionsResponse
 * \brief The ListDevicePositionsResponse class provides an interace for LocationService ListDevicePositions responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listDevicePositions
 */

/*!
 * Constructs a ListDevicePositionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicePositionsResponse::ListDevicePositionsResponse(
        const ListDevicePositionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListDevicePositionsResponsePrivate(this), parent)
{
    setRequest(new ListDevicePositionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicePositionsRequest * ListDevicePositionsResponse::request() const
{
    return static_cast<const ListDevicePositionsRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService ListDevicePositions \a response.
 */
void ListDevicePositionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicePositionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListDevicePositionsResponsePrivate
 * \brief The ListDevicePositionsResponsePrivate class provides private implementation for ListDevicePositionsResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListDevicePositionsResponsePrivate object with public implementation \a q.
 */
ListDevicePositionsResponsePrivate::ListDevicePositionsResponsePrivate(
    ListDevicePositionsResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListDevicePositions response element from \a xml.
 */
void ListDevicePositionsResponsePrivate::parseListDevicePositionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicePositionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
