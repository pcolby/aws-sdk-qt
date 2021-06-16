/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "associateawsaccountwithpartneraccountrequest.h"
#include "associateawsaccountwithpartneraccountrequest_p.h"
#include "associateawsaccountwithpartneraccountresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateAwsAccountWithPartnerAccountRequest
 * \brief The AssociateAwsAccountWithPartnerAccountRequest class provides an interface for IoTWireless AssociateAwsAccountWithPartnerAccount requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::associateAwsAccountWithPartnerAccount
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateAwsAccountWithPartnerAccountRequest::AssociateAwsAccountWithPartnerAccountRequest(const AssociateAwsAccountWithPartnerAccountRequest &other)
    : IoTWirelessRequest(new AssociateAwsAccountWithPartnerAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateAwsAccountWithPartnerAccountRequest object.
 */
AssociateAwsAccountWithPartnerAccountRequest::AssociateAwsAccountWithPartnerAccountRequest()
    : IoTWirelessRequest(new AssociateAwsAccountWithPartnerAccountRequestPrivate(IoTWirelessRequest::AssociateAwsAccountWithPartnerAccountAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateAwsAccountWithPartnerAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateAwsAccountWithPartnerAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateAwsAccountWithPartnerAccountRequest::response(QNetworkReply * const reply) const
{
    return new AssociateAwsAccountWithPartnerAccountResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::AssociateAwsAccountWithPartnerAccountRequestPrivate
 * \brief The AssociateAwsAccountWithPartnerAccountRequestPrivate class provides private implementation for AssociateAwsAccountWithPartnerAccountRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateAwsAccountWithPartnerAccountRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
AssociateAwsAccountWithPartnerAccountRequestPrivate::AssociateAwsAccountWithPartnerAccountRequestPrivate(
    const IoTWirelessRequest::Action action, AssociateAwsAccountWithPartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateAwsAccountWithPartnerAccountRequest
 * class' copy constructor.
 */
AssociateAwsAccountWithPartnerAccountRequestPrivate::AssociateAwsAccountWithPartnerAccountRequestPrivate(
    const AssociateAwsAccountWithPartnerAccountRequestPrivate &other, AssociateAwsAccountWithPartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
