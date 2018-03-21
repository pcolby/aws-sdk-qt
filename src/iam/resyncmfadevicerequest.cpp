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

#include "resyncmfadevicerequest.h"
#include "resyncmfadevicerequest_p.h"
#include "resyncmfadeviceresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ResyncMFADeviceRequest
 *
 * @brief  Implements IAM ResyncMFADevice requests.
 *
 * @see    IAMClient::resyncMFADevice
 */

/**
 * @brief  Constructs a new ResyncMFADeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResyncMFADeviceResponse::ResyncMFADeviceResponse(

/**
 * @brief  Constructs a new ResyncMFADeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResyncMFADeviceRequest::ResyncMFADeviceRequest(const ResyncMFADeviceRequest &other)
    : IAMRequest(new ResyncMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResyncMFADeviceRequest object.
 */
ResyncMFADeviceRequest::ResyncMFADeviceRequest()
    : IAMRequest(new ResyncMFADeviceRequestPrivate(IAMRequest::ResyncMFADeviceAction, this))
{

}

bool ResyncMFADeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResyncMFADeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResyncMFADeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ResyncMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new ResyncMFADeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResyncMFADeviceRequestPrivate
 *
 * @brief  Private implementation for ResyncMFADeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResyncMFADeviceRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ResyncMFADeviceRequest instance.
 */
ResyncMFADeviceRequestPrivate::ResyncMFADeviceRequestPrivate(
    const IAMRequest::Action action, ResyncMFADeviceRequest * const q)
    : ResyncMFADevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResyncMFADeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResyncMFADeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResyncMFADeviceRequest instance.
 */
ResyncMFADeviceRequestPrivate::ResyncMFADeviceRequestPrivate(
    const ResyncMFADeviceRequestPrivate &other, ResyncMFADeviceRequest * const q)
    : ResyncMFADevicePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
