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

#include "enablemfadevicerequest.h"
#include "enablemfadevicerequest_p.h"
#include "enablemfadeviceresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  EnableMFADeviceRequest
 *
 * @brief  Implements IAM EnableMFADevice requests.
 *
 * @see    IAMClient::enableMFADevice
 */

/**
 * @brief  Constructs a new EnableMFADeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableMFADeviceRequest::EnableMFADeviceRequest(const EnableMFADeviceRequest &other)
    : IAMRequest(new EnableMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableMFADeviceRequest object.
 */
EnableMFADeviceRequest::EnableMFADeviceRequest()
    : IAMRequest(new EnableMFADeviceRequestPrivate(IAMRequest::EnableMFADeviceAction, this))
{

}

bool EnableMFADeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableMFADeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableMFADeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * EnableMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new EnableMFADeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableMFADeviceRequestPrivate
 *
 * @brief  Private implementation for EnableMFADeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableMFADeviceRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public EnableMFADeviceRequest instance.
 */
EnableMFADeviceRequestPrivate::EnableMFADeviceRequestPrivate(
    const IAMRequest::Action action, EnableMFADeviceRequest * const q)
    : EnableMFADevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableMFADeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableMFADeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableMFADeviceRequest instance.
 */
EnableMFADeviceRequestPrivate::EnableMFADeviceRequestPrivate(
    const EnableMFADeviceRequestPrivate &other, EnableMFADeviceRequest * const q)
    : EnableMFADevicePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
