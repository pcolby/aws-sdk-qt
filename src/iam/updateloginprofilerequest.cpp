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

#include "updateloginprofilerequest.h"
#include "updateloginprofilerequest_p.h"
#include "updateloginprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateLoginProfileRequest
 *
 * @brief  Implements IAM UpdateLoginProfile requests.
 *
 * @see    IAMClient::updateLoginProfile
 */

/**
 * @brief  Constructs a new UpdateLoginProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateLoginProfileRequest::UpdateLoginProfileRequest(const UpdateLoginProfileRequest &other)
    : IAMRequest(new UpdateLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateLoginProfileRequest object.
 */
UpdateLoginProfileRequest::UpdateLoginProfileRequest()
    : IAMRequest(new UpdateLoginProfileRequestPrivate(IAMRequest::UpdateLoginProfileAction, this))
{

}

bool UpdateLoginProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateLoginProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateLoginProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLoginProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateLoginProfileRequestPrivate
 *
 * @brief  Private implementation for UpdateLoginProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLoginProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateLoginProfileRequest instance.
 */
UpdateLoginProfileRequestPrivate::UpdateLoginProfileRequestPrivate(
    const IAMRequest::Action action, UpdateLoginProfileRequest * const q)
    : UpdateLoginProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLoginProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateLoginProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateLoginProfileRequest instance.
 */
UpdateLoginProfileRequestPrivate::UpdateLoginProfileRequestPrivate(
    const UpdateLoginProfileRequestPrivate &other, UpdateLoginProfileRequest * const q)
    : UpdateLoginProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
