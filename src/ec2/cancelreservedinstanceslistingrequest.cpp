/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cancelreservedinstanceslistingrequest.h"
#include "cancelreservedinstanceslistingrequest_p.h"
#include "cancelreservedinstanceslistingresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CancelReservedInstancesListingRequest
 *
 * @brief  Implements EC2 CancelReservedInstancesListing requests.
 *
 * @see    EC2Client::cancelReservedInstancesListing
 */

/**
 * @brief  Constructs a new CancelReservedInstancesListingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelReservedInstancesListingResponse::CancelReservedInstancesListingResponse(

/**
 * @brief  Constructs a new CancelReservedInstancesListingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelReservedInstancesListingRequest::CancelReservedInstancesListingRequest(const CancelReservedInstancesListingRequest &other)
    : EC2Request(new CancelReservedInstancesListingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelReservedInstancesListingRequest object.
 */
CancelReservedInstancesListingRequest::CancelReservedInstancesListingRequest()
    : EC2Request(new CancelReservedInstancesListingRequestPrivate(EC2Request::CancelReservedInstancesListingAction, this))
{

}

bool CancelReservedInstancesListingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelReservedInstancesListingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelReservedInstancesListingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CancelReservedInstancesListingRequest::response(QNetworkReply * const reply) const
{
    return new CancelReservedInstancesListingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelReservedInstancesListingRequestPrivate
 *
 * @brief  Private implementation for CancelReservedInstancesListingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelReservedInstancesListingRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CancelReservedInstancesListingRequest instance.
 */
CancelReservedInstancesListingRequestPrivate::CancelReservedInstancesListingRequestPrivate(
    const EC2Request::Action action, CancelReservedInstancesListingRequest * const q)
    : CancelReservedInstancesListingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelReservedInstancesListingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelReservedInstancesListingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelReservedInstancesListingRequest instance.
 */
CancelReservedInstancesListingRequestPrivate::CancelReservedInstancesListingRequestPrivate(
    const CancelReservedInstancesListingRequestPrivate &other, CancelReservedInstancesListingRequest * const q)
    : CancelReservedInstancesListingPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
