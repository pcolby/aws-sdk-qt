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

#include "batchdeletedevicepositionhistoryresponse.h"
#include "batchdeletedevicepositionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchDeleteDevicePositionHistoryResponse
 * \brief The BatchDeleteDevicePositionHistoryResponse class provides an interace for LocationService BatchDeleteDevicePositionHistory responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchDeleteDevicePositionHistory
 */

/*!
 * Constructs a BatchDeleteDevicePositionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteDevicePositionHistoryResponse::BatchDeleteDevicePositionHistoryResponse(
        const BatchDeleteDevicePositionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new BatchDeleteDevicePositionHistoryResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteDevicePositionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteDevicePositionHistoryRequest * BatchDeleteDevicePositionHistoryResponse::request() const
{
    return static_cast<const BatchDeleteDevicePositionHistoryRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService BatchDeleteDevicePositionHistory \a response.
 */
void BatchDeleteDevicePositionHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteDevicePositionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::BatchDeleteDevicePositionHistoryResponsePrivate
 * \brief The BatchDeleteDevicePositionHistoryResponsePrivate class provides private implementation for BatchDeleteDevicePositionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchDeleteDevicePositionHistoryResponsePrivate object with public implementation \a q.
 */
BatchDeleteDevicePositionHistoryResponsePrivate::BatchDeleteDevicePositionHistoryResponsePrivate(
    BatchDeleteDevicePositionHistoryResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService BatchDeleteDevicePositionHistory response element from \a xml.
 */
void BatchDeleteDevicePositionHistoryResponsePrivate::parseBatchDeleteDevicePositionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteDevicePositionHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
