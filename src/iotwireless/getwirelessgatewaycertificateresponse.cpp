// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwirelessgatewaycertificateresponse.h"
#include "getwirelessgatewaycertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayCertificateResponse
 * \brief The GetWirelessGatewayCertificateResponse class provides an interace for IoTWireless GetWirelessGatewayCertificate responses.
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
 * \sa IoTWirelessClient::getWirelessGatewayCertificate
 */

/*!
 * Constructs a GetWirelessGatewayCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayCertificateResponse::GetWirelessGatewayCertificateResponse(
        const GetWirelessGatewayCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayCertificateResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayCertificateRequest * GetWirelessGatewayCertificateResponse::request() const
{
    Q_D(const GetWirelessGatewayCertificateResponse);
    return static_cast<const GetWirelessGatewayCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayCertificate \a response.
 */
void GetWirelessGatewayCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayCertificateResponsePrivate
 * \brief The GetWirelessGatewayCertificateResponsePrivate class provides private implementation for GetWirelessGatewayCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayCertificateResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayCertificateResponsePrivate::GetWirelessGatewayCertificateResponsePrivate(
    GetWirelessGatewayCertificateResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayCertificate response element from \a xml.
 */
void GetWirelessGatewayCertificateResponsePrivate::parseGetWirelessGatewayCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
