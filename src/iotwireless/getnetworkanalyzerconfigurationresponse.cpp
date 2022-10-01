// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkanalyzerconfigurationresponse.h"
#include "getnetworkanalyzerconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetNetworkAnalyzerConfigurationResponse
 * \brief The GetNetworkAnalyzerConfigurationResponse class provides an interace for IoTWireless GetNetworkAnalyzerConfiguration responses.
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
 * \sa IoTWirelessClient::getNetworkAnalyzerConfiguration
 */

/*!
 * Constructs a GetNetworkAnalyzerConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkAnalyzerConfigurationResponse::GetNetworkAnalyzerConfigurationResponse(
        const GetNetworkAnalyzerConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetNetworkAnalyzerConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetNetworkAnalyzerConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkAnalyzerConfigurationRequest * GetNetworkAnalyzerConfigurationResponse::request() const
{
    Q_D(const GetNetworkAnalyzerConfigurationResponse);
    return static_cast<const GetNetworkAnalyzerConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetNetworkAnalyzerConfiguration \a response.
 */
void GetNetworkAnalyzerConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkAnalyzerConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetNetworkAnalyzerConfigurationResponsePrivate
 * \brief The GetNetworkAnalyzerConfigurationResponsePrivate class provides private implementation for GetNetworkAnalyzerConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetNetworkAnalyzerConfigurationResponsePrivate object with public implementation \a q.
 */
GetNetworkAnalyzerConfigurationResponsePrivate::GetNetworkAnalyzerConfigurationResponsePrivate(
    GetNetworkAnalyzerConfigurationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetNetworkAnalyzerConfiguration response element from \a xml.
 */
void GetNetworkAnalyzerConfigurationResponsePrivate::parseGetNetworkAnalyzerConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkAnalyzerConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
