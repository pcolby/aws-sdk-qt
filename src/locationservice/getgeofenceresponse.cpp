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

#include "getgeofenceresponse.h"
#include "getgeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetGeofenceResponse
 * \brief The GetGeofenceResponse class provides an interace for LocationService GetGeofence responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getGeofence
 */

/*!
 * Constructs a GetGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
GetGeofenceResponse::GetGeofenceResponse(
        const GetGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new GetGeofenceResponsePrivate(this), parent)
{
    setRequest(new GetGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGeofenceRequest * GetGeofenceResponse::request() const
{
    return static_cast<const GetGeofenceRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService GetGeofence \a response.
 */
void GetGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::GetGeofenceResponsePrivate
 * \brief The GetGeofenceResponsePrivate class provides private implementation for GetGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetGeofenceResponsePrivate object with public implementation \a q.
 */
GetGeofenceResponsePrivate::GetGeofenceResponsePrivate(
    GetGeofenceResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService GetGeofence response element from \a xml.
 */
void GetGeofenceResponsePrivate::parseGetGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
