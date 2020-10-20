/*
    Copyright 2013-2020 Paul Colby

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

#include "purchaseofferingrequest.h"
#include "purchaseofferingrequest_p.h"
#include "purchaseofferingresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::PurchaseOfferingRequest
 * \brief The PurchaseOfferingRequest class provides an interface for DeviceFarm PurchaseOffering requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::purchaseOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest(const PurchaseOfferingRequest &other)
    : DeviceFarmRequest(new PurchaseOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseOfferingRequest object.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest()
    : DeviceFarmRequest(new PurchaseOfferingRequestPrivate(DeviceFarmRequest::PurchaseOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PurchaseOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::PurchaseOfferingRequestPrivate
 * \brief The PurchaseOfferingRequestPrivate class provides private implementation for PurchaseOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a PurchaseOfferingRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const DeviceFarmRequest::Action action, PurchaseOfferingRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PurchaseOfferingRequest
 * class' copy constructor.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const PurchaseOfferingRequestPrivate &other, PurchaseOfferingRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
