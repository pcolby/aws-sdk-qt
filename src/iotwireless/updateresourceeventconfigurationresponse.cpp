// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourceeventconfigurationresponse.h"
#include "updateresourceeventconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateResourceEventConfigurationResponse
 * \brief The UpdateResourceEventConfigurationResponse class provides an interace for IoTWireless UpdateResourceEventConfiguration responses.
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
 * \sa IoTWirelessClient::updateResourceEventConfiguration
 */

/*!
 * Constructs a UpdateResourceEventConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceEventConfigurationResponse::UpdateResourceEventConfigurationResponse(
        const UpdateResourceEventConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateResourceEventConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceEventConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceEventConfigurationRequest * UpdateResourceEventConfigurationResponse::request() const
{
    Q_D(const UpdateResourceEventConfigurationResponse);
    return static_cast<const UpdateResourceEventConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateResourceEventConfiguration \a response.
 */
void UpdateResourceEventConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceEventConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateResourceEventConfigurationResponsePrivate
 * \brief The UpdateResourceEventConfigurationResponsePrivate class provides private implementation for UpdateResourceEventConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateResourceEventConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateResourceEventConfigurationResponsePrivate::UpdateResourceEventConfigurationResponsePrivate(
    UpdateResourceEventConfigurationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateResourceEventConfiguration response element from \a xml.
 */
void UpdateResourceEventConfigurationResponsePrivate::parseUpdateResourceEventConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceEventConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
