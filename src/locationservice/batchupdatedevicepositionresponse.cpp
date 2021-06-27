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

#include "batchupdatedevicepositionresponse.h"
#include "batchupdatedevicepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchUpdateDevicePositionResponse
 * \brief The BatchUpdateDevicePositionResponse class provides an interace for LocationService BatchUpdateDevicePosition responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchUpdateDevicePosition
 */

/*!
 * Constructs a BatchUpdateDevicePositionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpdateDevicePositionResponse::BatchUpdateDevicePositionResponse(
        const BatchUpdateDevicePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new BatchUpdateDevicePositionResponsePrivate(this), parent)
{
    setRequest(new BatchUpdateDevicePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpdateDevicePositionRequest * BatchUpdateDevicePositionResponse::request() const
{
    return static_cast<const BatchUpdateDevicePositionRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService BatchUpdateDevicePosition \a response.
 */
void BatchUpdateDevicePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpdateDevicePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::BatchUpdateDevicePositionResponsePrivate
 * \brief The BatchUpdateDevicePositionResponsePrivate class provides private implementation for BatchUpdateDevicePositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchUpdateDevicePositionResponsePrivate object with public implementation \a q.
 */
BatchUpdateDevicePositionResponsePrivate::BatchUpdateDevicePositionResponsePrivate(
    BatchUpdateDevicePositionResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService BatchUpdateDevicePosition response element from \a xml.
 */
void BatchUpdateDevicePositionResponsePrivate::parseBatchUpdateDevicePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpdateDevicePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
