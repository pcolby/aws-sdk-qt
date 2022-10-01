// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmulticastgroupsessionresponse.h"
#include "startmulticastgroupsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::StartMulticastGroupSessionResponse
 * \brief The StartMulticastGroupSessionResponse class provides an interace for IoTWireless StartMulticastGroupSession responses.
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
 * \sa IoTWirelessClient::startMulticastGroupSession
 */

/*!
 * Constructs a StartMulticastGroupSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StartMulticastGroupSessionResponse::StartMulticastGroupSessionResponse(
        const StartMulticastGroupSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new StartMulticastGroupSessionResponsePrivate(this), parent)
{
    setRequest(new StartMulticastGroupSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMulticastGroupSessionRequest * StartMulticastGroupSessionResponse::request() const
{
    Q_D(const StartMulticastGroupSessionResponse);
    return static_cast<const StartMulticastGroupSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless StartMulticastGroupSession \a response.
 */
void StartMulticastGroupSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMulticastGroupSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::StartMulticastGroupSessionResponsePrivate
 * \brief The StartMulticastGroupSessionResponsePrivate class provides private implementation for StartMulticastGroupSessionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a StartMulticastGroupSessionResponsePrivate object with public implementation \a q.
 */
StartMulticastGroupSessionResponsePrivate::StartMulticastGroupSessionResponsePrivate(
    StartMulticastGroupSessionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless StartMulticastGroupSession response element from \a xml.
 */
void StartMulticastGroupSessionResponsePrivate::parseStartMulticastGroupSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMulticastGroupSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
