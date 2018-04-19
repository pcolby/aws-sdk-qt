/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "purchasereservedinstancesofferingrequest.h"
#include "purchasereservedinstancesofferingrequest_p.h"
#include "purchasereservedinstancesofferingresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::PurchaseReservedInstancesOfferingRequest
 * \brief The PurchaseReservedInstancesOfferingRequest class provides an interface for EC2 PurchaseReservedInstancesOffering requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::purchaseReservedInstancesOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest(const PurchaseReservedInstancesOfferingRequest &other)
    : EC2Request(new PurchaseReservedInstancesOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseReservedInstancesOfferingRequest object.
 */
PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest()
    : EC2Request(new PurchaseReservedInstancesOfferingRequestPrivate(EC2Request::PurchaseReservedInstancesOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseReservedInstancesOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PurchaseReservedInstancesOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseReservedInstancesOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedInstancesOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::PurchaseReservedInstancesOfferingRequestPrivate
 * \brief The PurchaseReservedInstancesOfferingRequestPrivate class provides private implementation for PurchaseReservedInstancesOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a PurchaseReservedInstancesOfferingRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
PurchaseReservedInstancesOfferingRequestPrivate::PurchaseReservedInstancesOfferingRequestPrivate(
    const EC2Request::Action action, PurchaseReservedInstancesOfferingRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedInstancesOfferingRequest
 * class' copy constructor.
 */
PurchaseReservedInstancesOfferingRequestPrivate::PurchaseReservedInstancesOfferingRequestPrivate(
    const PurchaseReservedInstancesOfferingRequestPrivate &other, PurchaseReservedInstancesOfferingRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
