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

#include "deactivateuserrequest.h"
#include "deactivateuserrequest_p.h"
#include "deactivateuserresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DeactivateUserRequest
 *
 * @brief  Implements WorkDocs DeactivateUser requests.
 *
 * @see    WorkDocsClient::deactivateUser
 */

/**
 * @brief  Constructs a new DeactivateUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeactivateUserRequest::DeactivateUserRequest(const DeactivateUserRequest &other)
    : WorkDocsRequest(new DeactivateUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeactivateUserRequest object.
 */
DeactivateUserRequest::DeactivateUserRequest()
    : WorkDocsRequest(new DeactivateUserRequestPrivate(WorkDocsRequest::DeactivateUserAction, this))
{

}

bool DeactivateUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeactivateUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeactivateUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DeactivateUserRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeactivateUserRequestPrivate
 *
 * @brief  Private implementation for DeactivateUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeactivateUserRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DeactivateUserRequest instance.
 */
DeactivateUserRequestPrivate::DeactivateUserRequestPrivate(
    const WorkDocsRequest::Action action, DeactivateUserRequest * const q)
    : DeactivateUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeactivateUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeactivateUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeactivateUserRequest instance.
 */
DeactivateUserRequestPrivate::DeactivateUserRequestPrivate(
    const DeactivateUserRequestPrivate &other, DeactivateUserRequest * const q)
    : DeactivateUserPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
