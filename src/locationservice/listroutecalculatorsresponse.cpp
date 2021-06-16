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

#include "listroutecalculatorsresponse.h"
#include "listroutecalculatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListRouteCalculatorsResponse
 * \brief The ListRouteCalculatorsResponse class provides an interace for LocationService ListRouteCalculators responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listRouteCalculators
 */

/*!
 * Constructs a ListRouteCalculatorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRouteCalculatorsResponse::ListRouteCalculatorsResponse(
        const ListRouteCalculatorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListRouteCalculatorsResponsePrivate(this), parent)
{
    setRequest(new ListRouteCalculatorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRouteCalculatorsRequest * ListRouteCalculatorsResponse::request() const
{
    Q_D(const ListRouteCalculatorsResponse);
    return static_cast<const ListRouteCalculatorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService ListRouteCalculators \a response.
 */
void ListRouteCalculatorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRouteCalculatorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListRouteCalculatorsResponsePrivate
 * \brief The ListRouteCalculatorsResponsePrivate class provides private implementation for ListRouteCalculatorsResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListRouteCalculatorsResponsePrivate object with public implementation \a q.
 */
ListRouteCalculatorsResponsePrivate::ListRouteCalculatorsResponsePrivate(
    ListRouteCalculatorsResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListRouteCalculators response element from \a xml.
 */
void ListRouteCalculatorsResponsePrivate::parseListRouteCalculatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRouteCalculatorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
