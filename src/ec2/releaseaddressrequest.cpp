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

#include "releaseaddressrequest.h"
#include "releaseaddressrequest_p.h"
#include "releaseaddressresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ReleaseAddressRequest
 *
 * @brief  Implements EC2 ReleaseAddress requests.
 *
 * @see    EC2Client::releaseAddress
 */

/**
 * @brief  Constructs a new ReleaseAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReleaseAddressRequest::ReleaseAddressRequest(const ReleaseAddressRequest &other)
    : EC2Request(new ReleaseAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReleaseAddressRequest object.
 */
ReleaseAddressRequest::ReleaseAddressRequest()
    : EC2Request(new ReleaseAddressRequestPrivate(EC2Request::ReleaseAddressAction, this))
{

}

bool ReleaseAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReleaseAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReleaseAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ReleaseAddressRequest::response(QNetworkReply * const reply) const
{
    return new ReleaseAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReleaseAddressRequestPrivate
 *
 * @brief  Private implementation for ReleaseAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseAddressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReleaseAddressRequest instance.
 */
ReleaseAddressRequestPrivate::ReleaseAddressRequestPrivate(
    const EC2Request::Action action, ReleaseAddressRequest * const q)
    : ReleaseAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReleaseAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReleaseAddressRequest instance.
 */
ReleaseAddressRequestPrivate::ReleaseAddressRequestPrivate(
    const ReleaseAddressRequestPrivate &other, ReleaseAddressRequest * const q)
    : ReleaseAddressPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
