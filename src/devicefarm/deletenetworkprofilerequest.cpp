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

#include "deletenetworkprofilerequest.h"
#include "deletenetworkprofilerequest_p.h"
#include "deletenetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  DeleteNetworkProfileRequest
 *
 * @brief  Implements DeviceFarm DeleteNetworkProfile requests.
 *
 * @see    DeviceFarmClient::deleteNetworkProfile
 */

/**
 * @brief  Constructs a new DeleteNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNetworkProfileResponse::DeleteNetworkProfileResponse(

/**
 * @brief  Constructs a new DeleteNetworkProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest(const DeleteNetworkProfileRequest &other)
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNetworkProfileRequest object.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest()
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(DeviceFarmRequest::DeleteNetworkProfileAction, this))
{

}

bool DeleteNetworkProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNetworkProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNetworkProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * DeleteNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNetworkProfileRequestPrivate
 *
 * @brief  Private implementation for DeleteNetworkProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteNetworkProfileRequest instance.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteNetworkProfileRequest * const q)
    : DeleteNetworkProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNetworkProfileRequest instance.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeleteNetworkProfileRequestPrivate &other, DeleteNetworkProfileRequest * const q)
    : DeleteNetworkProfilePrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
