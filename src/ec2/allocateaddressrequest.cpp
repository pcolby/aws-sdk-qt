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

#include "allocateaddressrequest.h"
#include "allocateaddressrequest_p.h"
#include "allocateaddressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  AllocateAddressRequest
 *
 * @brief  Implements EC2 AllocateAddress requests.
 *
 * @see    EC2Client::allocateAddress
 */

/**
 * @brief  Constructs a new AllocateAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AllocateAddressRequest::AllocateAddressRequest(const AllocateAddressRequest &other)
    : EC2Request(new AllocateAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AllocateAddressRequest object.
 */
AllocateAddressRequest::AllocateAddressRequest()
    : EC2Request(new AllocateAddressRequestPrivate(EC2Request::AllocateAddressAction, this))
{

}

bool AllocateAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AllocateAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AllocateAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AllocateAddressRequest::response(QNetworkReply * const reply) const
{
    return new AllocateAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AllocateAddressRequestPrivate
 *
 * @brief  Private implementation for AllocateAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateAddressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AllocateAddressRequest instance.
 */
AllocateAddressRequestPrivate::AllocateAddressRequestPrivate(
    const EC2Request::Action action, AllocateAddressRequest * const q)
    : AllocateAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AllocateAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AllocateAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AllocateAddressRequest instance.
 */
AllocateAddressRequestPrivate::AllocateAddressRequestPrivate(
    const AllocateAddressRequestPrivate &other, AllocateAddressRequest * const q)
    : AllocateAddressPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
