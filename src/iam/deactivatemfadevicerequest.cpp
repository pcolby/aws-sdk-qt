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

#include "deactivatemfadevicerequest.h"
#include "deactivatemfadevicerequest_p.h"
#include "deactivatemfadeviceresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeactivateMFADeviceRequest
 *
 * @brief  Implements IAM DeactivateMFADevice requests.
 *
 * @see    IAMClient::deactivateMFADevice
 */

/**
 * @brief  Constructs a new DeactivateMFADeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeactivateMFADeviceRequest::DeactivateMFADeviceRequest(const DeactivateMFADeviceRequest &other)
    : IAMRequest(new DeactivateMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeactivateMFADeviceRequest object.
 */
DeactivateMFADeviceRequest::DeactivateMFADeviceRequest()
    : IAMRequest(new DeactivateMFADeviceRequestPrivate(IAMRequest::DeactivateMFADeviceAction, this))
{

}

bool DeactivateMFADeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeactivateMFADeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeactivateMFADeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeactivateMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateMFADeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeactivateMFADeviceRequestPrivate
 *
 * @brief  Private implementation for DeactivateMFADeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeactivateMFADeviceRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeactivateMFADeviceRequest instance.
 */
DeactivateMFADeviceRequestPrivate::DeactivateMFADeviceRequestPrivate(
    const IAMRequest::Action action, DeactivateMFADeviceRequest * const q)
    : DeactivateMFADevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeactivateMFADeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeactivateMFADeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeactivateMFADeviceRequest instance.
 */
DeactivateMFADeviceRequestPrivate::DeactivateMFADeviceRequestPrivate(
    const DeactivateMFADeviceRequestPrivate &other, DeactivateMFADeviceRequest * const q)
    : DeactivateMFADevicePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
