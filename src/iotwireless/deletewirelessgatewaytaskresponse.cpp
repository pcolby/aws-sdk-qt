// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewirelessgatewaytaskresponse.h"
#include "deletewirelessgatewaytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskResponse
 * \brief The DeleteWirelessGatewayTaskResponse class provides an interace for IoTWireless DeleteWirelessGatewayTask responses.
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
 * \sa IoTWirelessClient::deleteWirelessGatewayTask
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessGatewayTaskResponse::DeleteWirelessGatewayTaskResponse(
        const DeleteWirelessGatewayTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessGatewayTaskResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessGatewayTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessGatewayTaskRequest * DeleteWirelessGatewayTaskResponse::request() const
{
    Q_D(const DeleteWirelessGatewayTaskResponse);
    return static_cast<const DeleteWirelessGatewayTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessGatewayTask \a response.
 */
void DeleteWirelessGatewayTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessGatewayTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskResponsePrivate
 * \brief The DeleteWirelessGatewayTaskResponsePrivate class provides private implementation for DeleteWirelessGatewayTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskResponsePrivate object with public implementation \a q.
 */
DeleteWirelessGatewayTaskResponsePrivate::DeleteWirelessGatewayTaskResponsePrivate(
    DeleteWirelessGatewayTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessGatewayTask response element from \a xml.
 */
void DeleteWirelessGatewayTaskResponsePrivate::parseDeleteWirelessGatewayTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessGatewayTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
