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

#include "batchdeletegeofenceresponse.h"
#include "batchdeletegeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchDeleteGeofenceResponse
 * \brief The BatchDeleteGeofenceResponse class provides an interace for LocationService BatchDeleteGeofence responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchDeleteGeofence
 */

/*!
 * Constructs a BatchDeleteGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteGeofenceResponse::BatchDeleteGeofenceResponse(
        const BatchDeleteGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new BatchDeleteGeofenceResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteGeofenceRequest * BatchDeleteGeofenceResponse::request() const
{
    return static_cast<const BatchDeleteGeofenceRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService BatchDeleteGeofence \a response.
 */
void BatchDeleteGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::BatchDeleteGeofenceResponsePrivate
 * \brief The BatchDeleteGeofenceResponsePrivate class provides private implementation for BatchDeleteGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchDeleteGeofenceResponsePrivate object with public implementation \a q.
 */
BatchDeleteGeofenceResponsePrivate::BatchDeleteGeofenceResponsePrivate(
    BatchDeleteGeofenceResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService BatchDeleteGeofence response element from \a xml.
 */
void BatchDeleteGeofenceResponsePrivate::parseBatchDeleteGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
