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

#include "associateaddressrequest.h"
#include "associateaddressrequest_p.h"
#include "associateaddressresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AssociateAddressRequest
 *
 * @brief  Implements EC2 AssociateAddress requests.
 *
 * @see    EC2Client::associateAddress
 */

/**
 * @brief  Constructs a new AssociateAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateAddressRequest::AssociateAddressRequest(const AssociateAddressRequest &other)
    : EC2Request(new AssociateAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateAddressRequest object.
 */
AssociateAddressRequest::AssociateAddressRequest()
    : EC2Request(new AssociateAddressRequestPrivate(EC2Request::AssociateAddressAction, this))
{

}

bool AssociateAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AssociateAddressRequest::response(QNetworkReply * const reply) const
{
    return new AssociateAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateAddressRequestPrivate
 *
 * @brief  Private implementation for AssociateAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateAddressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AssociateAddressRequest instance.
 */
AssociateAddressRequestPrivate::AssociateAddressRequestPrivate(
    const EC2Request::Action action, AssociateAddressRequest * const q)
    : AssociateAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateAddressRequest instance.
 */
AssociateAddressRequestPrivate::AssociateAddressRequestPrivate(
    const AssociateAddressRequestPrivate &other, AssociateAddressRequest * const q)
    : AssociateAddressPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
