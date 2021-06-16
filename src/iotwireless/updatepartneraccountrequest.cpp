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

#include "updatepartneraccountrequest.h"
#include "updatepartneraccountrequest_p.h"
#include "updatepartneraccountresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdatePartnerAccountRequest
 * \brief The UpdatePartnerAccountRequest class provides an interface for IoTWireless UpdatePartnerAccount requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::updatePartnerAccount
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePartnerAccountRequest::UpdatePartnerAccountRequest(const UpdatePartnerAccountRequest &other)
    : IoTWirelessRequest(new UpdatePartnerAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePartnerAccountRequest object.
 */
UpdatePartnerAccountRequest::UpdatePartnerAccountRequest()
    : IoTWirelessRequest(new UpdatePartnerAccountRequestPrivate(IoTWirelessRequest::UpdatePartnerAccountAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePartnerAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePartnerAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePartnerAccountRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePartnerAccountResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::UpdatePartnerAccountRequestPrivate
 * \brief The UpdatePartnerAccountRequestPrivate class provides private implementation for UpdatePartnerAccountRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdatePartnerAccountRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
UpdatePartnerAccountRequestPrivate::UpdatePartnerAccountRequestPrivate(
    const IoTWirelessRequest::Action action, UpdatePartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePartnerAccountRequest
 * class' copy constructor.
 */
UpdatePartnerAccountRequestPrivate::UpdatePartnerAccountRequestPrivate(
    const UpdatePartnerAccountRequestPrivate &other, UpdatePartnerAccountRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
