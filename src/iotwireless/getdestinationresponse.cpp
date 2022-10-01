// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdestinationresponse.h"
#include "getdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetDestinationResponse
 * \brief The GetDestinationResponse class provides an interace for IoTWireless GetDestination responses.
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
 * \sa IoTWirelessClient::getDestination
 */

/*!
 * Constructs a GetDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDestinationResponse::GetDestinationResponse(
        const GetDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetDestinationResponsePrivate(this), parent)
{
    setRequest(new GetDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDestinationRequest * GetDestinationResponse::request() const
{
    Q_D(const GetDestinationResponse);
    return static_cast<const GetDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetDestination \a response.
 */
void GetDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetDestinationResponsePrivate
 * \brief The GetDestinationResponsePrivate class provides private implementation for GetDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetDestinationResponsePrivate object with public implementation \a q.
 */
GetDestinationResponsePrivate::GetDestinationResponsePrivate(
    GetDestinationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetDestination response element from \a xml.
 */
void GetDestinationResponsePrivate::parseGetDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
