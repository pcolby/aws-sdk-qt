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

#include "changepasswordrequest.h"
#include "changepasswordrequest_p.h"
#include "changepasswordresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  ChangePasswordRequest
 *
 * @brief  Implements IAM ChangePassword requests.
 *
 * @see    IAMClient::changePassword
 */

/**
 * @brief  Constructs a new ChangePasswordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ChangePasswordRequest::ChangePasswordRequest(const ChangePasswordRequest &other)
    : IAMRequest(new ChangePasswordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ChangePasswordRequest object.
 */
ChangePasswordRequest::ChangePasswordRequest()
    : IAMRequest(new ChangePasswordRequestPrivate(IAMRequest::ChangePasswordAction, this))
{

}

bool ChangePasswordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ChangePasswordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ChangePasswordResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangePasswordRequest::response(QNetworkReply * const reply) const
{
    return new ChangePasswordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ChangePasswordRequestPrivate
 *
 * @brief  Private implementation for ChangePasswordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangePasswordRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ChangePasswordRequest instance.
 */
ChangePasswordRequestPrivate::ChangePasswordRequestPrivate(
    const IAMRequest::Action action, ChangePasswordRequest * const q)
    : ChangePasswordPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ChangePasswordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ChangePasswordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ChangePasswordRequest instance.
 */
ChangePasswordRequestPrivate::ChangePasswordRequestPrivate(
    const ChangePasswordRequestPrivate &other, ChangePasswordRequest * const q)
    : ChangePasswordPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
