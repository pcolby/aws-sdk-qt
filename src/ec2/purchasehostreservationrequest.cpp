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

#include "purchasehostreservationrequest.h"
#include "purchasehostreservationrequest_p.h"
#include "purchasehostreservationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::PurchaseHostReservationRequest
 *
 * \brief The PurchaseHostReservationRequest class encapsulates EC2 PurchaseHostReservation requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::purchaseHostReservation
 */

/*!
 * @brief  Constructs a new PurchaseHostReservationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurchaseHostReservationRequest::PurchaseHostReservationRequest(const PurchaseHostReservationRequest &other)
    : EC2Request(new PurchaseHostReservationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PurchaseHostReservationRequest object.
 */
PurchaseHostReservationRequest::PurchaseHostReservationRequest()
    : EC2Request(new PurchaseHostReservationRequestPrivate(EC2Request::PurchaseHostReservationAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseHostReservationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PurchaseHostReservationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurchaseHostReservationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseHostReservationRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseHostReservationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PurchaseHostReservationRequestPrivate
 *
 * @brief  Private implementation for PurchaseHostReservationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PurchaseHostReservationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public PurchaseHostReservationRequest instance.
 */
PurchaseHostReservationRequestPrivate::PurchaseHostReservationRequestPrivate(
    const EC2Request::Action action, PurchaseHostReservationRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PurchaseHostReservationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurchaseHostReservationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurchaseHostReservationRequest instance.
 */
PurchaseHostReservationRequestPrivate::PurchaseHostReservationRequestPrivate(
    const PurchaseHostReservationRequestPrivate &other, PurchaseHostReservationRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
