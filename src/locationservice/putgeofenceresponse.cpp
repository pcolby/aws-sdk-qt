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

#include "putgeofenceresponse.h"
#include "putgeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::PutGeofenceResponse
 * \brief The PutGeofenceResponse class provides an interace for LocationService PutGeofence responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::putGeofence
 */

/*!
 * Constructs a PutGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
PutGeofenceResponse::PutGeofenceResponse(
        const PutGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new PutGeofenceResponsePrivate(this), parent)
{
    setRequest(new PutGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutGeofenceRequest * PutGeofenceResponse::request() const
{
    Q_D(const PutGeofenceResponse);
    return static_cast<const PutGeofenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService PutGeofence \a response.
 */
void PutGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::PutGeofenceResponsePrivate
 * \brief The PutGeofenceResponsePrivate class provides private implementation for PutGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a PutGeofenceResponsePrivate object with public implementation \a q.
 */
PutGeofenceResponsePrivate::PutGeofenceResponsePrivate(
    PutGeofenceResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService PutGeofence response element from \a xml.
 */
void PutGeofenceResponsePrivate::parsePutGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
