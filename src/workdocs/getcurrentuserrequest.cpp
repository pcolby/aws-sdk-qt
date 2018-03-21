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

#include "getcurrentuserrequest.h"
#include "getcurrentuserrequest_p.h"
#include "getcurrentuserresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  GetCurrentUserRequest
 *
 * @brief  Implements WorkDocs GetCurrentUser requests.
 *
 * @see    WorkDocsClient::getCurrentUser
 */

/**
 * @brief  Constructs a new GetCurrentUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCurrentUserResponse::GetCurrentUserResponse(

/**
 * @brief  Constructs a new GetCurrentUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCurrentUserRequest::GetCurrentUserRequest(const GetCurrentUserRequest &other)
    : WorkDocsRequest(new GetCurrentUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCurrentUserRequest object.
 */
GetCurrentUserRequest::GetCurrentUserRequest()
    : WorkDocsRequest(new GetCurrentUserRequestPrivate(WorkDocsRequest::GetCurrentUserAction, this))
{

}

bool GetCurrentUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCurrentUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCurrentUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * GetCurrentUserRequest::response(QNetworkReply * const reply) const
{
    return new GetCurrentUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCurrentUserRequestPrivate
 *
 * @brief  Private implementation for GetCurrentUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCurrentUserRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public GetCurrentUserRequest instance.
 */
GetCurrentUserRequestPrivate::GetCurrentUserRequestPrivate(
    const WorkDocsRequest::Action action, GetCurrentUserRequest * const q)
    : GetCurrentUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCurrentUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCurrentUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCurrentUserRequest instance.
 */
GetCurrentUserRequestPrivate::GetCurrentUserRequestPrivate(
    const GetCurrentUserRequestPrivate &other, GetCurrentUserRequest * const q)
    : GetCurrentUserPrivate(other, q)
{

}
