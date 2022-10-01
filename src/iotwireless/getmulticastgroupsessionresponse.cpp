// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmulticastgroupsessionresponse.h"
#include "getmulticastgroupsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetMulticastGroupSessionResponse
 * \brief The GetMulticastGroupSessionResponse class provides an interace for IoTWireless GetMulticastGroupSession responses.
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
 * \sa IoTWirelessClient::getMulticastGroupSession
 */

/*!
 * Constructs a GetMulticastGroupSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetMulticastGroupSessionResponse::GetMulticastGroupSessionResponse(
        const GetMulticastGroupSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetMulticastGroupSessionResponsePrivate(this), parent)
{
    setRequest(new GetMulticastGroupSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMulticastGroupSessionRequest * GetMulticastGroupSessionResponse::request() const
{
    Q_D(const GetMulticastGroupSessionResponse);
    return static_cast<const GetMulticastGroupSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetMulticastGroupSession \a response.
 */
void GetMulticastGroupSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMulticastGroupSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetMulticastGroupSessionResponsePrivate
 * \brief The GetMulticastGroupSessionResponsePrivate class provides private implementation for GetMulticastGroupSessionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetMulticastGroupSessionResponsePrivate object with public implementation \a q.
 */
GetMulticastGroupSessionResponsePrivate::GetMulticastGroupSessionResponsePrivate(
    GetMulticastGroupSessionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetMulticastGroupSession response element from \a xml.
 */
void GetMulticastGroupSessionResponsePrivate::parseGetMulticastGroupSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMulticastGroupSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
