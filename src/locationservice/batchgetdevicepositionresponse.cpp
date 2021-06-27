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

#include "batchgetdevicepositionresponse.h"
#include "batchgetdevicepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchGetDevicePositionResponse
 * \brief The BatchGetDevicePositionResponse class provides an interace for LocationService BatchGetDevicePosition responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchGetDevicePosition
 */

/*!
 * Constructs a BatchGetDevicePositionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetDevicePositionResponse::BatchGetDevicePositionResponse(
        const BatchGetDevicePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new BatchGetDevicePositionResponsePrivate(this), parent)
{
    setRequest(new BatchGetDevicePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetDevicePositionRequest * BatchGetDevicePositionResponse::request() const
{
    return static_cast<const BatchGetDevicePositionRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService BatchGetDevicePosition \a response.
 */
void BatchGetDevicePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetDevicePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::BatchGetDevicePositionResponsePrivate
 * \brief The BatchGetDevicePositionResponsePrivate class provides private implementation for BatchGetDevicePositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchGetDevicePositionResponsePrivate object with public implementation \a q.
 */
BatchGetDevicePositionResponsePrivate::BatchGetDevicePositionResponsePrivate(
    BatchGetDevicePositionResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService BatchGetDevicePosition response element from \a xml.
 */
void BatchGetDevicePositionResponsePrivate::parseBatchGetDevicePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDevicePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
