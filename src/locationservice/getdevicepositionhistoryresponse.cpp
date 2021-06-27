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

#include "getdevicepositionhistoryresponse.h"
#include "getdevicepositionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetDevicePositionHistoryResponse
 * \brief The GetDevicePositionHistoryResponse class provides an interace for LocationService GetDevicePositionHistory responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getDevicePositionHistory
 */

/*!
 * Constructs a GetDevicePositionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicePositionHistoryResponse::GetDevicePositionHistoryResponse(
        const GetDevicePositionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new GetDevicePositionHistoryResponsePrivate(this), parent)
{
    setRequest(new GetDevicePositionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicePositionHistoryRequest * GetDevicePositionHistoryResponse::request() const
{
    return static_cast<const GetDevicePositionHistoryRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService GetDevicePositionHistory \a response.
 */
void GetDevicePositionHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicePositionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::GetDevicePositionHistoryResponsePrivate
 * \brief The GetDevicePositionHistoryResponsePrivate class provides private implementation for GetDevicePositionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetDevicePositionHistoryResponsePrivate object with public implementation \a q.
 */
GetDevicePositionHistoryResponsePrivate::GetDevicePositionHistoryResponsePrivate(
    GetDevicePositionHistoryResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService GetDevicePositionHistory response element from \a xml.
 */
void GetDevicePositionHistoryResponsePrivate::parseGetDevicePositionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePositionHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
