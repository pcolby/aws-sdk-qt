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

#include "getwirelessdevicestatisticsresponse.h"
#include "getwirelessdevicestatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceStatisticsResponse
 * \brief The GetWirelessDeviceStatisticsResponse class provides an interace for IoTWireless GetWirelessDeviceStatistics responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessDeviceStatistics
 */

/*!
 * Constructs a GetWirelessDeviceStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessDeviceStatisticsResponse::GetWirelessDeviceStatisticsResponse(
        const GetWirelessDeviceStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessDeviceStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetWirelessDeviceStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessDeviceStatisticsRequest * GetWirelessDeviceStatisticsResponse::request() const
{
    Q_D(const GetWirelessDeviceStatisticsResponse);
    return static_cast<const GetWirelessDeviceStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessDeviceStatistics \a response.
 */
void GetWirelessDeviceStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessDeviceStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceStatisticsResponsePrivate
 * \brief The GetWirelessDeviceStatisticsResponsePrivate class provides private implementation for GetWirelessDeviceStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessDeviceStatisticsResponsePrivate object with public implementation \a q.
 */
GetWirelessDeviceStatisticsResponsePrivate::GetWirelessDeviceStatisticsResponsePrivate(
    GetWirelessDeviceStatisticsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessDeviceStatistics response element from \a xml.
 */
void GetWirelessDeviceStatisticsResponsePrivate::parseGetWirelessDeviceStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessDeviceStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
