// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatewirelessgatewayfromcertificateresponse.h"
#include "disassociatewirelessgatewayfromcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromCertificateResponse
 * \brief The DisassociateWirelessGatewayFromCertificateResponse class provides an interace for IoTWireless DisassociateWirelessGatewayFromCertificate responses.
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
 * \sa IoTWirelessClient::disassociateWirelessGatewayFromCertificate
 */

/*!
 * Constructs a DisassociateWirelessGatewayFromCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateWirelessGatewayFromCertificateResponse::DisassociateWirelessGatewayFromCertificateResponse(
        const DisassociateWirelessGatewayFromCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateWirelessGatewayFromCertificateResponsePrivate(this), parent)
{
    setRequest(new DisassociateWirelessGatewayFromCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateWirelessGatewayFromCertificateRequest * DisassociateWirelessGatewayFromCertificateResponse::request() const
{
    Q_D(const DisassociateWirelessGatewayFromCertificateResponse);
    return static_cast<const DisassociateWirelessGatewayFromCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateWirelessGatewayFromCertificate \a response.
 */
void DisassociateWirelessGatewayFromCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateWirelessGatewayFromCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromCertificateResponsePrivate
 * \brief The DisassociateWirelessGatewayFromCertificateResponsePrivate class provides private implementation for DisassociateWirelessGatewayFromCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessGatewayFromCertificateResponsePrivate object with public implementation \a q.
 */
DisassociateWirelessGatewayFromCertificateResponsePrivate::DisassociateWirelessGatewayFromCertificateResponsePrivate(
    DisassociateWirelessGatewayFromCertificateResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateWirelessGatewayFromCertificate response element from \a xml.
 */
void DisassociateWirelessGatewayFromCertificateResponsePrivate::parseDisassociateWirelessGatewayFromCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateWirelessGatewayFromCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
