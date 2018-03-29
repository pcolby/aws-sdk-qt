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

#include "deletevirtualmfadevicerequest.h"
#include "deletevirtualmfadevicerequest_p.h"
#include "deletevirtualmfadeviceresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteVirtualMFADeviceRequest
 *
 * @brief  Implements IAM DeleteVirtualMFADevice requests.
 *
 * @see    IAMClient::deleteVirtualMFADevice
 */

/**
 * @brief  Constructs a new DeleteVirtualMFADeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVirtualMFADeviceRequest::DeleteVirtualMFADeviceRequest(const DeleteVirtualMFADeviceRequest &other)
    : IAMRequest(new DeleteVirtualMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVirtualMFADeviceRequest object.
 */
DeleteVirtualMFADeviceRequest::DeleteVirtualMFADeviceRequest()
    : IAMRequest(new DeleteVirtualMFADeviceRequestPrivate(IAMRequest::DeleteVirtualMFADeviceAction, this))
{

}

bool DeleteVirtualMFADeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVirtualMFADeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVirtualMFADeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteVirtualMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVirtualMFADeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVirtualMFADeviceRequestPrivate
 *
 * @brief  Private implementation for DeleteVirtualMFADeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVirtualMFADeviceRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteVirtualMFADeviceRequest instance.
 */
DeleteVirtualMFADeviceRequestPrivate::DeleteVirtualMFADeviceRequestPrivate(
    const IAMRequest::Action action, DeleteVirtualMFADeviceRequest * const q)
    : DeleteVirtualMFADevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVirtualMFADeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVirtualMFADeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVirtualMFADeviceRequest instance.
 */
DeleteVirtualMFADeviceRequestPrivate::DeleteVirtualMFADeviceRequestPrivate(
    const DeleteVirtualMFADeviceRequestPrivate &other, DeleteVirtualMFADeviceRequest * const q)
    : DeleteVirtualMFADevicePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
