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

#include "deregisterimagerequest.h"
#include "deregisterimagerequest_p.h"
#include "deregisterimageresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeregisterImageRequest
 *
 * @brief  Implements EC2 DeregisterImage requests.
 *
 * @see    EC2Client::deregisterImage
 */

/**
 * @brief  Constructs a new DeregisterImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterImageRequest::DeregisterImageRequest(const DeregisterImageRequest &other)
    : EC2Request(new DeregisterImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterImageRequest object.
 */
DeregisterImageRequest::DeregisterImageRequest()
    : EC2Request(new DeregisterImageRequestPrivate(EC2Request::DeregisterImageAction, this))
{

}

bool DeregisterImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeregisterImageRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterImageRequestPrivate
 *
 * @brief  Private implementation for DeregisterImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeregisterImageRequest instance.
 */
DeregisterImageRequestPrivate::DeregisterImageRequestPrivate(
    const EC2Request::Action action, DeregisterImageRequest * const q)
    : DeregisterImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterImageRequest instance.
 */
DeregisterImageRequestPrivate::DeregisterImageRequestPrivate(
    const DeregisterImageRequestPrivate &other, DeregisterImageRequest * const q)
    : DeregisterImagePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
