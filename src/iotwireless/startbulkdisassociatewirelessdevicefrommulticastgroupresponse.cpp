// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbulkdisassociatewirelessdevicefrommulticastgroupresponse.h"
#include "startbulkdisassociatewirelessdevicefrommulticastgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse
 * \brief The StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse class provides an interace for IoTWireless StartBulkDisassociateWirelessDeviceFromMulticastGroup responses.
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
 * \sa IoTWirelessClient::startBulkDisassociateWirelessDeviceFromMulticastGroup
 */

/*!
 * Constructs a StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse object for \a reply to \a request, with parent \a parent.
 */
StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse::StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse(
        const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate(this), parent)
{
    setRequest(new StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest * StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse::request() const
{
    Q_D(const StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse);
    return static_cast<const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless StartBulkDisassociateWirelessDeviceFromMulticastGroup \a response.
 */
void StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate
 * \brief The StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate class provides private implementation for StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate object with public implementation \a q.
 */
StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate::StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate(
    StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless StartBulkDisassociateWirelessDeviceFromMulticastGroup response element from \a xml.
 */
void StartBulkDisassociateWirelessDeviceFromMulticastGroupResponsePrivate::parseStartBulkDisassociateWirelessDeviceFromMulticastGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
