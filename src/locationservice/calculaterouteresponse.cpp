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

#include "calculaterouteresponse.h"
#include "calculaterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CalculateRouteResponse
 * \brief The CalculateRouteResponse class provides an interace for LocationService CalculateRoute responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::calculateRoute
 */

/*!
 * Constructs a CalculateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
CalculateRouteResponse::CalculateRouteResponse(
        const CalculateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new CalculateRouteResponsePrivate(this), parent)
{
    setRequest(new CalculateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CalculateRouteRequest * CalculateRouteResponse::request() const
{
    return static_cast<const CalculateRouteRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService CalculateRoute \a response.
 */
void CalculateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CalculateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::CalculateRouteResponsePrivate
 * \brief The CalculateRouteResponsePrivate class provides private implementation for CalculateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CalculateRouteResponsePrivate object with public implementation \a q.
 */
CalculateRouteResponsePrivate::CalculateRouteResponsePrivate(
    CalculateRouteResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService CalculateRoute response element from \a xml.
 */
void CalculateRouteResponsePrivate::parseCalculateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CalculateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
