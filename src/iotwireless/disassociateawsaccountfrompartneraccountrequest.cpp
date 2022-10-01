// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateawsaccountfrompartneraccountrequest.h"
#include "disassociateawsaccountfrompartneraccountrequest_p.h"
#include "disassociateawsaccountfrompartneraccountresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateAwsAccountFromPartnerAccountRequest
 * \brief The DisassociateAwsAccountFromPartnerAccountRequest class provides an interface for IoTWireless DisassociateAwsAccountFromPartnerAccount requests.
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
 * \sa IoTWirelessClient::disassociateAwsAccountFromPartnerAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateAwsAccountFromPartnerAccountRequest::DisassociateAwsAccountFromPartnerAccountRequest(const DisassociateAwsAccountFromPartnerAccountRequest &other)
    : IoTWirelessRequest(new DisassociateAwsAccountFromPartnerAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateAwsAccountFromPartnerAccountRequest object.
 */
DisassociateAwsAccountFromPartnerAccountRequest::DisassociateAwsAccountFromPartnerAccountRequest()
    : IoTWirelessRequest(new DisassociateAwsAccountFromPartnerAccountRequestPrivate(IoTWirelessRequest::DisassociateAwsAccountFromPartnerAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateAwsAccountFromPartnerAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateAwsAccountFromPartnerAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateAwsAccountFromPartnerAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateAwsAccountFromPartnerAccountResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DisassociateAwsAccountFromPartnerAccountRequestPrivate
 * \brief The DisassociateAwsAccountFromPartnerAccountRequestPrivate class provides private implementation for DisassociateAwsAccountFromPartnerAccountRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateAwsAccountFromPartnerAccountRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DisassociateAwsAccountFromPartnerAccountRequestPrivate::DisassociateAwsAccountFromPartnerAccountRequestPrivate(
    const IoTWirelessRequest::Action action, DisassociateAwsAccountFromPartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateAwsAccountFromPartnerAccountRequest
 * class' copy constructor.
 */
DisassociateAwsAccountFromPartnerAccountRequestPrivate::DisassociateAwsAccountFromPartnerAccountRequestPrivate(
    const DisassociateAwsAccountFromPartnerAccountRequestPrivate &other, DisassociateAwsAccountFromPartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
