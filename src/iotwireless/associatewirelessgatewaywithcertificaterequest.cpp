// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatewirelessgatewaywithcertificaterequest.h"
#include "associatewirelessgatewaywithcertificaterequest_p.h"
#include "associatewirelessgatewaywithcertificateresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithCertificateRequest
 * \brief The AssociateWirelessGatewayWithCertificateRequest class provides an interface for IoTWireless AssociateWirelessGatewayWithCertificate requests.
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
 * \sa IoTWirelessClient::associateWirelessGatewayWithCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateWirelessGatewayWithCertificateRequest::AssociateWirelessGatewayWithCertificateRequest(const AssociateWirelessGatewayWithCertificateRequest &other)
    : IoTWirelessRequest(new AssociateWirelessGatewayWithCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateWirelessGatewayWithCertificateRequest object.
 */
AssociateWirelessGatewayWithCertificateRequest::AssociateWirelessGatewayWithCertificateRequest()
    : IoTWirelessRequest(new AssociateWirelessGatewayWithCertificateRequestPrivate(IoTWirelessRequest::AssociateWirelessGatewayWithCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateWirelessGatewayWithCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateWirelessGatewayWithCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateWirelessGatewayWithCertificateRequest::response(QNetworkReply * const reply) const
{
    return new AssociateWirelessGatewayWithCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithCertificateRequestPrivate
 * \brief The AssociateWirelessGatewayWithCertificateRequestPrivate class provides private implementation for AssociateWirelessGatewayWithCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessGatewayWithCertificateRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
AssociateWirelessGatewayWithCertificateRequestPrivate::AssociateWirelessGatewayWithCertificateRequestPrivate(
    const IoTWirelessRequest::Action action, AssociateWirelessGatewayWithCertificateRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateWirelessGatewayWithCertificateRequest
 * class' copy constructor.
 */
AssociateWirelessGatewayWithCertificateRequestPrivate::AssociateWirelessGatewayWithCertificateRequestPrivate(
    const AssociateWirelessGatewayWithCertificateRequestPrivate &other, AssociateWirelessGatewayWithCertificateRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
