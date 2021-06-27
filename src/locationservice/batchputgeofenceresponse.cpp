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

#include "batchputgeofenceresponse.h"
#include "batchputgeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchPutGeofenceResponse
 * \brief The BatchPutGeofenceResponse class provides an interace for LocationService BatchPutGeofence responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchPutGeofence
 */

/*!
 * Constructs a BatchPutGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutGeofenceResponse::BatchPutGeofenceResponse(
        const BatchPutGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new BatchPutGeofenceResponsePrivate(this), parent)
{
    setRequest(new BatchPutGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutGeofenceRequest * BatchPutGeofenceResponse::request() const
{
    return static_cast<const BatchPutGeofenceRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService BatchPutGeofence \a response.
 */
void BatchPutGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::BatchPutGeofenceResponsePrivate
 * \brief The BatchPutGeofenceResponsePrivate class provides private implementation for BatchPutGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchPutGeofenceResponsePrivate object with public implementation \a q.
 */
BatchPutGeofenceResponsePrivate::BatchPutGeofenceResponsePrivate(
    BatchPutGeofenceResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService BatchPutGeofence response element from \a xml.
 */
void BatchPutGeofenceResponsePrivate::parseBatchPutGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
