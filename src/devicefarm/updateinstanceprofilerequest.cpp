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

#include "updateinstanceprofilerequest.h"
#include "updateinstanceprofilerequest_p.h"
#include "updateinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  UpdateInstanceProfileRequest
 *
 * @brief  Implements DeviceFarm UpdateInstanceProfile requests.
 *
 * @see    DeviceFarmClient::updateInstanceProfile
 */

/**
 * @brief  Constructs a new UpdateInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateInstanceProfileRequest::UpdateInstanceProfileRequest(const UpdateInstanceProfileRequest &other)
    : DeviceFarmRequest(new UpdateInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateInstanceProfileRequest object.
 */
UpdateInstanceProfileRequest::UpdateInstanceProfileRequest()
    : DeviceFarmRequest(new UpdateInstanceProfileRequestPrivate(DeviceFarmRequest::UpdateInstanceProfileAction, this))
{

}

bool UpdateInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateInstanceProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for UpdateInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public UpdateInstanceProfileRequest instance.
 */
UpdateInstanceProfileRequestPrivate::UpdateInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateInstanceProfileRequest instance.
 */
UpdateInstanceProfileRequestPrivate::UpdateInstanceProfileRequestPrivate(
    const UpdateInstanceProfileRequestPrivate &other, UpdateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
