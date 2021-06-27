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

#include "getdevicepositionresponse.h"
#include "getdevicepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetDevicePositionResponse
 * \brief The GetDevicePositionResponse class provides an interace for LocationService GetDevicePosition responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getDevicePosition
 */

/*!
 * Constructs a GetDevicePositionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicePositionResponse::GetDevicePositionResponse(
        const GetDevicePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new GetDevicePositionResponsePrivate(this), parent)
{
    setRequest(new GetDevicePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicePositionRequest * GetDevicePositionResponse::request() const
{
    return static_cast<const GetDevicePositionRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService GetDevicePosition \a response.
 */
void GetDevicePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::GetDevicePositionResponsePrivate
 * \brief The GetDevicePositionResponsePrivate class provides private implementation for GetDevicePositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetDevicePositionResponsePrivate object with public implementation \a q.
 */
GetDevicePositionResponsePrivate::GetDevicePositionResponsePrivate(
    GetDevicePositionResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService GetDevicePosition response element from \a xml.
 */
void GetDevicePositionResponsePrivate::parseGetDevicePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
