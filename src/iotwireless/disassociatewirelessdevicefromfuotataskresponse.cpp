// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatewirelessdevicefromfuotataskresponse.h"
#include "disassociatewirelessdevicefromfuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromFuotaTaskResponse
 * \brief The DisassociateWirelessDeviceFromFuotaTaskResponse class provides an interace for IoTWireless DisassociateWirelessDeviceFromFuotaTask responses.
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
 * \sa IoTWirelessClient::disassociateWirelessDeviceFromFuotaTask
 */

/*!
 * Constructs a DisassociateWirelessDeviceFromFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateWirelessDeviceFromFuotaTaskResponse::DisassociateWirelessDeviceFromFuotaTaskResponse(
        const DisassociateWirelessDeviceFromFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateWirelessDeviceFromFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new DisassociateWirelessDeviceFromFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateWirelessDeviceFromFuotaTaskRequest * DisassociateWirelessDeviceFromFuotaTaskResponse::request() const
{
    Q_D(const DisassociateWirelessDeviceFromFuotaTaskResponse);
    return static_cast<const DisassociateWirelessDeviceFromFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateWirelessDeviceFromFuotaTask \a response.
 */
void DisassociateWirelessDeviceFromFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateWirelessDeviceFromFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromFuotaTaskResponsePrivate
 * \brief The DisassociateWirelessDeviceFromFuotaTaskResponsePrivate class provides private implementation for DisassociateWirelessDeviceFromFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessDeviceFromFuotaTaskResponsePrivate object with public implementation \a q.
 */
DisassociateWirelessDeviceFromFuotaTaskResponsePrivate::DisassociateWirelessDeviceFromFuotaTaskResponsePrivate(
    DisassociateWirelessDeviceFromFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateWirelessDeviceFromFuotaTask response element from \a xml.
 */
void DisassociateWirelessDeviceFromFuotaTaskResponsePrivate::parseDisassociateWirelessDeviceFromFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateWirelessDeviceFromFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
