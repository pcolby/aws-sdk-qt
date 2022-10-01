// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourceeventconfigurationresponse.h"
#include "getresourceeventconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetResourceEventConfigurationResponse
 * \brief The GetResourceEventConfigurationResponse class provides an interace for IoTWireless GetResourceEventConfiguration responses.
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
 * \sa IoTWirelessClient::getResourceEventConfiguration
 */

/*!
 * Constructs a GetResourceEventConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceEventConfigurationResponse::GetResourceEventConfigurationResponse(
        const GetResourceEventConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetResourceEventConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetResourceEventConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceEventConfigurationRequest * GetResourceEventConfigurationResponse::request() const
{
    Q_D(const GetResourceEventConfigurationResponse);
    return static_cast<const GetResourceEventConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetResourceEventConfiguration \a response.
 */
void GetResourceEventConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceEventConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetResourceEventConfigurationResponsePrivate
 * \brief The GetResourceEventConfigurationResponsePrivate class provides private implementation for GetResourceEventConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetResourceEventConfigurationResponsePrivate object with public implementation \a q.
 */
GetResourceEventConfigurationResponsePrivate::GetResourceEventConfigurationResponsePrivate(
    GetResourceEventConfigurationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetResourceEventConfiguration response element from \a xml.
 */
void GetResourceEventConfigurationResponsePrivate::parseGetResourceEventConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceEventConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
