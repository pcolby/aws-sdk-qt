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

#include "updateuserrequest.h"
#include "updateuserrequest_p.h"
#include "updateuserresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  UpdateUserRequest
 *
 * @brief  Implements IAM UpdateUser requests.
 *
 * @see    IAMClient::updateUser
 */

/**
 * @brief  Constructs a new UpdateUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserResponse::UpdateUserResponse(

/**
 * @brief  Constructs a new UpdateUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateUserRequest::UpdateUserRequest(const UpdateUserRequest &other)
    : IAMRequest(new UpdateUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateUserRequest object.
 */
UpdateUserRequest::UpdateUserRequest()
    : IAMRequest(new UpdateUserRequestPrivate(IAMRequest::UpdateUserAction, this))
{

}

bool UpdateUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateUserRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateUserRequestPrivate
 *
 * @brief  Private implementation for UpdateUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateUserRequest instance.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const IAMRequest::Action action, UpdateUserRequest * const q)
    : UpdateUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateUserRequest instance.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const UpdateUserRequestPrivate &other, UpdateUserRequest * const q)
    : UpdateUserPrivate(other, q)
{

}
