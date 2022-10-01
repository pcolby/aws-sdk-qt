// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatewirelessdevicewithfuotataskresponse.h"
#include "associatewirelessdevicewithfuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithFuotaTaskResponse
 * \brief The AssociateWirelessDeviceWithFuotaTaskResponse class provides an interace for IoTWireless AssociateWirelessDeviceWithFuotaTask responses.
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
 * \sa IoTWirelessClient::associateWirelessDeviceWithFuotaTask
 */

/*!
 * Constructs a AssociateWirelessDeviceWithFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWirelessDeviceWithFuotaTaskResponse::AssociateWirelessDeviceWithFuotaTaskResponse(
        const AssociateWirelessDeviceWithFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new AssociateWirelessDeviceWithFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new AssociateWirelessDeviceWithFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWirelessDeviceWithFuotaTaskRequest * AssociateWirelessDeviceWithFuotaTaskResponse::request() const
{
    Q_D(const AssociateWirelessDeviceWithFuotaTaskResponse);
    return static_cast<const AssociateWirelessDeviceWithFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless AssociateWirelessDeviceWithFuotaTask \a response.
 */
void AssociateWirelessDeviceWithFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWirelessDeviceWithFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithFuotaTaskResponsePrivate
 * \brief The AssociateWirelessDeviceWithFuotaTaskResponsePrivate class provides private implementation for AssociateWirelessDeviceWithFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessDeviceWithFuotaTaskResponsePrivate object with public implementation \a q.
 */
AssociateWirelessDeviceWithFuotaTaskResponsePrivate::AssociateWirelessDeviceWithFuotaTaskResponsePrivate(
    AssociateWirelessDeviceWithFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless AssociateWirelessDeviceWithFuotaTask response element from \a xml.
 */
void AssociateWirelessDeviceWithFuotaTaskResponsePrivate::parseAssociateWirelessDeviceWithFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWirelessDeviceWithFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
