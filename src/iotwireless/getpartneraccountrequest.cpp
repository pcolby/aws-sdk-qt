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

#include "getpartneraccountrequest.h"
#include "getpartneraccountrequest_p.h"
#include "getpartneraccountresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetPartnerAccountRequest
 * \brief The GetPartnerAccountRequest class provides an interface for IoTWireless GetPartnerAccount requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getPartnerAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetPartnerAccountRequest::GetPartnerAccountRequest(const GetPartnerAccountRequest &other)
    : IoTWirelessRequest(new GetPartnerAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPartnerAccountRequest object.
 */
GetPartnerAccountRequest::GetPartnerAccountRequest()
    : IoTWirelessRequest(new GetPartnerAccountRequestPrivate(IoTWirelessRequest::GetPartnerAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetPartnerAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPartnerAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPartnerAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetPartnerAccountResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetPartnerAccountRequestPrivate
 * \brief The GetPartnerAccountRequestPrivate class provides private implementation for GetPartnerAccountRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetPartnerAccountRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetPartnerAccountRequestPrivate::GetPartnerAccountRequestPrivate(
    const IoTWirelessRequest::Action action, GetPartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPartnerAccountRequest
 * class' copy constructor.
 */
GetPartnerAccountRequestPrivate::GetPartnerAccountRequestPrivate(
    const GetPartnerAccountRequestPrivate &other, GetPartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
