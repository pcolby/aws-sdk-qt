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

#include "renewofferingrequest.h"
#include "renewofferingrequest_p.h"
#include "renewofferingresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::RenewOfferingRequest
 * \brief The RenewOfferingRequest class provides an interface for DeviceFarm RenewOffering requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::renewOffering
 */

/*!
 * Constructs a copy of \a other.
 */
RenewOfferingRequest::RenewOfferingRequest(const RenewOfferingRequest &other)
    : DeviceFarmRequest(new RenewOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RenewOfferingRequest object.
 */
RenewOfferingRequest::RenewOfferingRequest()
    : DeviceFarmRequest(new RenewOfferingRequestPrivate(DeviceFarmRequest::RenewOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool RenewOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RenewOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RenewOfferingRequest::response(QNetworkReply * const reply) const
{
    return new RenewOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::RenewOfferingRequestPrivate
 * \brief The RenewOfferingRequestPrivate class provides private implementation for RenewOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a RenewOfferingRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
RenewOfferingRequestPrivate::RenewOfferingRequestPrivate(
    const DeviceFarmRequest::Action action, RenewOfferingRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RenewOfferingRequest
 * class' copy constructor.
 */
RenewOfferingRequestPrivate::RenewOfferingRequestPrivate(
    const RenewOfferingRequestPrivate &other, RenewOfferingRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
