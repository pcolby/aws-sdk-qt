// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelmulticastgroupsessionresponse.h"
#include "cancelmulticastgroupsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CancelMulticastGroupSessionResponse
 * \brief The CancelMulticastGroupSessionResponse class provides an interace for IoTWireless CancelMulticastGroupSession responses.
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
 * \sa IoTWirelessClient::cancelMulticastGroupSession
 */

/*!
 * Constructs a CancelMulticastGroupSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CancelMulticastGroupSessionResponse::CancelMulticastGroupSessionResponse(
        const CancelMulticastGroupSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CancelMulticastGroupSessionResponsePrivate(this), parent)
{
    setRequest(new CancelMulticastGroupSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelMulticastGroupSessionRequest * CancelMulticastGroupSessionResponse::request() const
{
    Q_D(const CancelMulticastGroupSessionResponse);
    return static_cast<const CancelMulticastGroupSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CancelMulticastGroupSession \a response.
 */
void CancelMulticastGroupSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelMulticastGroupSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CancelMulticastGroupSessionResponsePrivate
 * \brief The CancelMulticastGroupSessionResponsePrivate class provides private implementation for CancelMulticastGroupSessionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CancelMulticastGroupSessionResponsePrivate object with public implementation \a q.
 */
CancelMulticastGroupSessionResponsePrivate::CancelMulticastGroupSessionResponsePrivate(
    CancelMulticastGroupSessionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CancelMulticastGroupSession response element from \a xml.
 */
void CancelMulticastGroupSessionResponsePrivate::parseCancelMulticastGroupSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelMulticastGroupSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
