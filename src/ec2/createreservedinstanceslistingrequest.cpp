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

#include "createreservedinstanceslistingrequest.h"
#include "createreservedinstanceslistingrequest_p.h"
#include "createreservedinstanceslistingresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateReservedInstancesListingRequest
 *
 * @brief  Implements EC2 CreateReservedInstancesListing requests.
 *
 * @see    EC2Client::createReservedInstancesListing
 */

/**
 * @brief  Constructs a new CreateReservedInstancesListingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReservedInstancesListingRequest::CreateReservedInstancesListingRequest(const CreateReservedInstancesListingRequest &other)
    : EC2Request(new CreateReservedInstancesListingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReservedInstancesListingRequest object.
 */
CreateReservedInstancesListingRequest::CreateReservedInstancesListingRequest()
    : EC2Request(new CreateReservedInstancesListingRequestPrivate(EC2Request::CreateReservedInstancesListingAction, this))
{

}

bool CreateReservedInstancesListingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReservedInstancesListingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReservedInstancesListingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateReservedInstancesListingRequest::response(QNetworkReply * const reply) const
{
    return new CreateReservedInstancesListingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReservedInstancesListingRequestPrivate
 *
 * @brief  Private implementation for CreateReservedInstancesListingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReservedInstancesListingRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateReservedInstancesListingRequest instance.
 */
CreateReservedInstancesListingRequestPrivate::CreateReservedInstancesListingRequestPrivate(
    const EC2Request::Action action, CreateReservedInstancesListingRequest * const q)
    : CreateReservedInstancesListingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReservedInstancesListingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReservedInstancesListingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReservedInstancesListingRequest instance.
 */
CreateReservedInstancesListingRequestPrivate::CreateReservedInstancesListingRequestPrivate(
    const CreateReservedInstancesListingRequestPrivate &other, CreateReservedInstancesListingRequest * const q)
    : CreateReservedInstancesListingPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
