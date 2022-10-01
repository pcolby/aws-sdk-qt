// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwirelessgatewaytaskresponse.h"
#include "getwirelessgatewaytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskResponse
 * \brief The GetWirelessGatewayTaskResponse class provides an interace for IoTWireless GetWirelessGatewayTask responses.
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
 * \sa IoTWirelessClient::getWirelessGatewayTask
 */

/*!
 * Constructs a GetWirelessGatewayTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayTaskResponse::GetWirelessGatewayTaskResponse(
        const GetWirelessGatewayTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayTaskResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayTaskRequest * GetWirelessGatewayTaskResponse::request() const
{
    Q_D(const GetWirelessGatewayTaskResponse);
    return static_cast<const GetWirelessGatewayTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayTask \a response.
 */
void GetWirelessGatewayTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskResponsePrivate
 * \brief The GetWirelessGatewayTaskResponsePrivate class provides private implementation for GetWirelessGatewayTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayTaskResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayTaskResponsePrivate::GetWirelessGatewayTaskResponsePrivate(
    GetWirelessGatewayTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayTask response element from \a xml.
 */
void GetWirelessGatewayTaskResponsePrivate::parseGetWirelessGatewayTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
