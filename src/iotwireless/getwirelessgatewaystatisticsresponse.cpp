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

#include "getwirelessgatewaystatisticsresponse.h"
#include "getwirelessgatewaystatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayStatisticsResponse
 * \brief The GetWirelessGatewayStatisticsResponse class provides an interace for IoTWireless GetWirelessGatewayStatistics responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGatewayStatistics
 */

/*!
 * Constructs a GetWirelessGatewayStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayStatisticsResponse::GetWirelessGatewayStatisticsResponse(
        const GetWirelessGatewayStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayStatisticsRequest * GetWirelessGatewayStatisticsResponse::request() const
{
    return static_cast<const GetWirelessGatewayStatisticsRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayStatistics \a response.
 */
void GetWirelessGatewayStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayStatisticsResponsePrivate
 * \brief The GetWirelessGatewayStatisticsResponsePrivate class provides private implementation for GetWirelessGatewayStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayStatisticsResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayStatisticsResponsePrivate::GetWirelessGatewayStatisticsResponsePrivate(
    GetWirelessGatewayStatisticsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayStatistics response element from \a xml.
 */
void GetWirelessGatewayStatisticsResponsePrivate::parseGetWirelessGatewayStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
