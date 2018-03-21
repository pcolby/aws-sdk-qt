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

#include "createvirtualmfadevicerequest.h"
#include "createvirtualmfadevicerequest_p.h"
#include "createvirtualmfadeviceresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  CreateVirtualMFADeviceRequest
 *
 * @brief  Implements IAM CreateVirtualMFADevice requests.
 *
 * @see    IAMClient::createVirtualMFADevice
 */

/**
 * @brief  Constructs a new CreateVirtualMFADeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVirtualMFADeviceRequest::CreateVirtualMFADeviceRequest(const CreateVirtualMFADeviceRequest &other)
    : IAMRequest(new CreateVirtualMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVirtualMFADeviceRequest object.
 */
CreateVirtualMFADeviceRequest::CreateVirtualMFADeviceRequest()
    : IAMRequest(new CreateVirtualMFADeviceRequestPrivate(IAMRequest::CreateVirtualMFADeviceAction, this))
{

}

bool CreateVirtualMFADeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVirtualMFADeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVirtualMFADeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateVirtualMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new CreateVirtualMFADeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVirtualMFADeviceRequestPrivate
 *
 * @brief  Private implementation for CreateVirtualMFADeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVirtualMFADeviceRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateVirtualMFADeviceRequest instance.
 */
CreateVirtualMFADeviceRequestPrivate::CreateVirtualMFADeviceRequestPrivate(
    const IAMRequest::Action action, CreateVirtualMFADeviceRequest * const q)
    : CreateVirtualMFADevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVirtualMFADeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVirtualMFADeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVirtualMFADeviceRequest instance.
 */
CreateVirtualMFADeviceRequestPrivate::CreateVirtualMFADeviceRequestPrivate(
    const CreateVirtualMFADeviceRequestPrivate &other, CreateVirtualMFADeviceRequest * const q)
    : CreateVirtualMFADevicePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
