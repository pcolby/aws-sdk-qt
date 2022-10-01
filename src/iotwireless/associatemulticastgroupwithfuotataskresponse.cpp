// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatemulticastgroupwithfuotataskresponse.h"
#include "associatemulticastgroupwithfuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateMulticastGroupWithFuotaTaskResponse
 * \brief The AssociateMulticastGroupWithFuotaTaskResponse class provides an interace for IoTWireless AssociateMulticastGroupWithFuotaTask responses.
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
 * \sa IoTWirelessClient::associateMulticastGroupWithFuotaTask
 */

/*!
 * Constructs a AssociateMulticastGroupWithFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateMulticastGroupWithFuotaTaskResponse::AssociateMulticastGroupWithFuotaTaskResponse(
        const AssociateMulticastGroupWithFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new AssociateMulticastGroupWithFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new AssociateMulticastGroupWithFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateMulticastGroupWithFuotaTaskRequest * AssociateMulticastGroupWithFuotaTaskResponse::request() const
{
    Q_D(const AssociateMulticastGroupWithFuotaTaskResponse);
    return static_cast<const AssociateMulticastGroupWithFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless AssociateMulticastGroupWithFuotaTask \a response.
 */
void AssociateMulticastGroupWithFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateMulticastGroupWithFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::AssociateMulticastGroupWithFuotaTaskResponsePrivate
 * \brief The AssociateMulticastGroupWithFuotaTaskResponsePrivate class provides private implementation for AssociateMulticastGroupWithFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateMulticastGroupWithFuotaTaskResponsePrivate object with public implementation \a q.
 */
AssociateMulticastGroupWithFuotaTaskResponsePrivate::AssociateMulticastGroupWithFuotaTaskResponsePrivate(
    AssociateMulticastGroupWithFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless AssociateMulticastGroupWithFuotaTask response element from \a xml.
 */
void AssociateMulticastGroupWithFuotaTaskResponsePrivate::parseAssociateMulticastGroupWithFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateMulticastGroupWithFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
