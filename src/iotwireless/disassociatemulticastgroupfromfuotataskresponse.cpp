// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatemulticastgroupfromfuotataskresponse.h"
#include "disassociatemulticastgroupfromfuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateMulticastGroupFromFuotaTaskResponse
 * \brief The DisassociateMulticastGroupFromFuotaTaskResponse class provides an interace for IoTWireless DisassociateMulticastGroupFromFuotaTask responses.
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
 * \sa IoTWirelessClient::disassociateMulticastGroupFromFuotaTask
 */

/*!
 * Constructs a DisassociateMulticastGroupFromFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMulticastGroupFromFuotaTaskResponse::DisassociateMulticastGroupFromFuotaTaskResponse(
        const DisassociateMulticastGroupFromFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateMulticastGroupFromFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new DisassociateMulticastGroupFromFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMulticastGroupFromFuotaTaskRequest * DisassociateMulticastGroupFromFuotaTaskResponse::request() const
{
    Q_D(const DisassociateMulticastGroupFromFuotaTaskResponse);
    return static_cast<const DisassociateMulticastGroupFromFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateMulticastGroupFromFuotaTask \a response.
 */
void DisassociateMulticastGroupFromFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMulticastGroupFromFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateMulticastGroupFromFuotaTaskResponsePrivate
 * \brief The DisassociateMulticastGroupFromFuotaTaskResponsePrivate class provides private implementation for DisassociateMulticastGroupFromFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateMulticastGroupFromFuotaTaskResponsePrivate object with public implementation \a q.
 */
DisassociateMulticastGroupFromFuotaTaskResponsePrivate::DisassociateMulticastGroupFromFuotaTaskResponsePrivate(
    DisassociateMulticastGroupFromFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateMulticastGroupFromFuotaTask response element from \a xml.
 */
void DisassociateMulticastGroupFromFuotaTaskResponsePrivate::parseDisassociateMulticastGroupFromFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMulticastGroupFromFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
