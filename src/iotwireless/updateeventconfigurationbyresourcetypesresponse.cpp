// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateeventconfigurationbyresourcetypesresponse.h"
#include "updateeventconfigurationbyresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateEventConfigurationByResourceTypesResponse
 * \brief The UpdateEventConfigurationByResourceTypesResponse class provides an interace for IoTWireless UpdateEventConfigurationByResourceTypes responses.
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
 * \sa IoTWirelessClient::updateEventConfigurationByResourceTypes
 */

/*!
 * Constructs a UpdateEventConfigurationByResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEventConfigurationByResourceTypesResponse::UpdateEventConfigurationByResourceTypesResponse(
        const UpdateEventConfigurationByResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateEventConfigurationByResourceTypesResponsePrivate(this), parent)
{
    setRequest(new UpdateEventConfigurationByResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEventConfigurationByResourceTypesRequest * UpdateEventConfigurationByResourceTypesResponse::request() const
{
    Q_D(const UpdateEventConfigurationByResourceTypesResponse);
    return static_cast<const UpdateEventConfigurationByResourceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateEventConfigurationByResourceTypes \a response.
 */
void UpdateEventConfigurationByResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEventConfigurationByResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateEventConfigurationByResourceTypesResponsePrivate
 * \brief The UpdateEventConfigurationByResourceTypesResponsePrivate class provides private implementation for UpdateEventConfigurationByResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateEventConfigurationByResourceTypesResponsePrivate object with public implementation \a q.
 */
UpdateEventConfigurationByResourceTypesResponsePrivate::UpdateEventConfigurationByResourceTypesResponsePrivate(
    UpdateEventConfigurationByResourceTypesResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateEventConfigurationByResourceTypes response element from \a xml.
 */
void UpdateEventConfigurationByResourceTypesResponsePrivate::parseUpdateEventConfigurationByResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEventConfigurationByResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
