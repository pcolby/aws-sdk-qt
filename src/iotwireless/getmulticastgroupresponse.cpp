// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmulticastgroupresponse.h"
#include "getmulticastgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetMulticastGroupResponse
 * \brief The GetMulticastGroupResponse class provides an interace for IoTWireless GetMulticastGroup responses.
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
 * \sa IoTWirelessClient::getMulticastGroup
 */

/*!
 * Constructs a GetMulticastGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetMulticastGroupResponse::GetMulticastGroupResponse(
        const GetMulticastGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetMulticastGroupResponsePrivate(this), parent)
{
    setRequest(new GetMulticastGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMulticastGroupRequest * GetMulticastGroupResponse::request() const
{
    Q_D(const GetMulticastGroupResponse);
    return static_cast<const GetMulticastGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetMulticastGroup \a response.
 */
void GetMulticastGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMulticastGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetMulticastGroupResponsePrivate
 * \brief The GetMulticastGroupResponsePrivate class provides private implementation for GetMulticastGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetMulticastGroupResponsePrivate object with public implementation \a q.
 */
GetMulticastGroupResponsePrivate::GetMulticastGroupResponsePrivate(
    GetMulticastGroupResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetMulticastGroup response element from \a xml.
 */
void GetMulticastGroupResponsePrivate::parseGetMulticastGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMulticastGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
