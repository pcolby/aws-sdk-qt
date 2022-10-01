// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AWS IoT Wireless provides bi-directional communication between internet-connected wireless devices and the AWS Cloud. To
 *  onboard both LoRaWAN and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless devices use the Low Power
 *  Wide Area Networking (LPWAN) communication protocol to communicate with AWS
 * 
 *  IoT>
 * 
 *  Using the API, you can perform create, read, update, and delete operations for your wireless devices, gateways,
 *  destinations, and profiles. After onboarding your devices, you can use the API operations to set log levels and monitor
 *  your devices with
 * 
 *  CloudWatch>
 * 
 *  You can also use the API operations to create multicast groups and schedule a multicast session for sending a downlink
 *  message to devices in the group. By using Firmware Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA
 *  task and schedule a session to update the firmware of individual devices or an entire group of devices in a multicast
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
