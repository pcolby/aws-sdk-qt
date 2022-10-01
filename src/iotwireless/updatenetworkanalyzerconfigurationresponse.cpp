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

#include "updatenetworkanalyzerconfigurationresponse.h"
#include "updatenetworkanalyzerconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateNetworkAnalyzerConfigurationResponse
 * \brief The UpdateNetworkAnalyzerConfigurationResponse class provides an interace for IoTWireless UpdateNetworkAnalyzerConfiguration responses.
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
 * \sa IoTWirelessClient::updateNetworkAnalyzerConfiguration
 */

/*!
 * Constructs a UpdateNetworkAnalyzerConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkAnalyzerConfigurationResponse::UpdateNetworkAnalyzerConfigurationResponse(
        const UpdateNetworkAnalyzerConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateNetworkAnalyzerConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkAnalyzerConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkAnalyzerConfigurationRequest * UpdateNetworkAnalyzerConfigurationResponse::request() const
{
    Q_D(const UpdateNetworkAnalyzerConfigurationResponse);
    return static_cast<const UpdateNetworkAnalyzerConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateNetworkAnalyzerConfiguration \a response.
 */
void UpdateNetworkAnalyzerConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkAnalyzerConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateNetworkAnalyzerConfigurationResponsePrivate
 * \brief The UpdateNetworkAnalyzerConfigurationResponsePrivate class provides private implementation for UpdateNetworkAnalyzerConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateNetworkAnalyzerConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateNetworkAnalyzerConfigurationResponsePrivate::UpdateNetworkAnalyzerConfigurationResponsePrivate(
    UpdateNetworkAnalyzerConfigurationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateNetworkAnalyzerConfiguration response element from \a xml.
 */
void UpdateNetworkAnalyzerConfigurationResponsePrivate::parseUpdateNetworkAnalyzerConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkAnalyzerConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
