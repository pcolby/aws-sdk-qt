// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourceloglevelresponse.h"
#include "getresourceloglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetResourceLogLevelResponse
 * \brief The GetResourceLogLevelResponse class provides an interace for IoTWireless GetResourceLogLevel responses.
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
 * \sa IoTWirelessClient::getResourceLogLevel
 */

/*!
 * Constructs a GetResourceLogLevelResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceLogLevelResponse::GetResourceLogLevelResponse(
        const GetResourceLogLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetResourceLogLevelResponsePrivate(this), parent)
{
    setRequest(new GetResourceLogLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceLogLevelRequest * GetResourceLogLevelResponse::request() const
{
    Q_D(const GetResourceLogLevelResponse);
    return static_cast<const GetResourceLogLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetResourceLogLevel \a response.
 */
void GetResourceLogLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceLogLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetResourceLogLevelResponsePrivate
 * \brief The GetResourceLogLevelResponsePrivate class provides private implementation for GetResourceLogLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetResourceLogLevelResponsePrivate object with public implementation \a q.
 */
GetResourceLogLevelResponsePrivate::GetResourceLogLevelResponsePrivate(
    GetResourceLogLevelResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetResourceLogLevel response element from \a xml.
 */
void GetResourceLogLevelResponsePrivate::parseGetResourceLogLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceLogLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
