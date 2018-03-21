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

#include "updateuserprofilerequest.h"
#include "updateuserprofilerequest_p.h"
#include "updateuserprofileresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  UpdateUserProfileRequest
 *
 * @brief  Implements CodeStar UpdateUserProfile requests.
 *
 * @see    CodeStarClient::updateUserProfile
 */

/**
 * @brief  Constructs a new UpdateUserProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateUserProfileRequest::UpdateUserProfileRequest(const UpdateUserProfileRequest &other)
    : CodeStarRequest(new UpdateUserProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateUserProfileRequest object.
 */
UpdateUserProfileRequest::UpdateUserProfileRequest()
    : CodeStarRequest(new UpdateUserProfileRequestPrivate(CodeStarRequest::UpdateUserProfileAction, this))
{

}

bool UpdateUserProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateUserProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateUserProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * UpdateUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateUserProfileRequestPrivate
 *
 * @brief  Private implementation for UpdateUserProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserProfileRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public UpdateUserProfileRequest instance.
 */
UpdateUserProfileRequestPrivate::UpdateUserProfileRequestPrivate(
    const CodeStarRequest::Action action, UpdateUserProfileRequest * const q)
    : UpdateUserProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateUserProfileRequest instance.
 */
UpdateUserProfileRequestPrivate::UpdateUserProfileRequestPrivate(
    const UpdateUserProfileRequestPrivate &other, UpdateUserProfileRequest * const q)
    : UpdateUserProfilePrivate(other, q)
{

}

} // namespace CodeStar
} // namespace AWS
