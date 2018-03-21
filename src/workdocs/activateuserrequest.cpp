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

#include "activateuserrequest.h"
#include "activateuserrequest_p.h"
#include "activateuserresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  ActivateUserRequest
 *
 * @brief  Implements WorkDocs ActivateUser requests.
 *
 * @see    WorkDocsClient::activateUser
 */

/**
 * @brief  Constructs a new ActivateUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ActivateUserResponse::ActivateUserResponse(

/**
 * @brief  Constructs a new ActivateUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ActivateUserRequest::ActivateUserRequest(const ActivateUserRequest &other)
    : WorkDocsRequest(new ActivateUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ActivateUserRequest object.
 */
ActivateUserRequest::ActivateUserRequest()
    : WorkDocsRequest(new ActivateUserRequestPrivate(WorkDocsRequest::ActivateUserAction, this))
{

}

bool ActivateUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ActivateUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ActivateUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * ActivateUserRequest::response(QNetworkReply * const reply) const
{
    return new ActivateUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ActivateUserRequestPrivate
 *
 * @brief  Private implementation for ActivateUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ActivateUserRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public ActivateUserRequest instance.
 */
ActivateUserRequestPrivate::ActivateUserRequestPrivate(
    const WorkDocsRequest::Action action, ActivateUserRequest * const q)
    : ActivateUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ActivateUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ActivateUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ActivateUserRequest instance.
 */
ActivateUserRequestPrivate::ActivateUserRequestPrivate(
    const ActivateUserRequestPrivate &other, ActivateUserRequest * const q)
    : ActivateUserPrivate(other, q)
{

}
