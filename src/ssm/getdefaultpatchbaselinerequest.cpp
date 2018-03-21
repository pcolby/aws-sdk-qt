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

#include "getdefaultpatchbaselinerequest.h"
#include "getdefaultpatchbaselinerequest_p.h"
#include "getdefaultpatchbaselineresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetDefaultPatchBaselineRequest
 *
 * @brief  Implements SSM GetDefaultPatchBaseline requests.
 *
 * @see    SSMClient::getDefaultPatchBaseline
 */

/**
 * @brief  Constructs a new GetDefaultPatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDefaultPatchBaselineResponse::GetDefaultPatchBaselineResponse(

/**
 * @brief  Constructs a new GetDefaultPatchBaselineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDefaultPatchBaselineRequest::GetDefaultPatchBaselineRequest(const GetDefaultPatchBaselineRequest &other)
    : SSMRequest(new GetDefaultPatchBaselineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDefaultPatchBaselineRequest object.
 */
GetDefaultPatchBaselineRequest::GetDefaultPatchBaselineRequest()
    : SSMRequest(new GetDefaultPatchBaselineRequestPrivate(SSMRequest::GetDefaultPatchBaselineAction, this))
{

}

bool GetDefaultPatchBaselineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDefaultPatchBaselineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDefaultPatchBaselineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetDefaultPatchBaselineRequest::response(QNetworkReply * const reply) const
{
    return new GetDefaultPatchBaselineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDefaultPatchBaselineRequestPrivate
 *
 * @brief  Private implementation for GetDefaultPatchBaselineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDefaultPatchBaselineRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetDefaultPatchBaselineRequest instance.
 */
GetDefaultPatchBaselineRequestPrivate::GetDefaultPatchBaselineRequestPrivate(
    const SSMRequest::Action action, GetDefaultPatchBaselineRequest * const q)
    : GetDefaultPatchBaselinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDefaultPatchBaselineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDefaultPatchBaselineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDefaultPatchBaselineRequest instance.
 */
GetDefaultPatchBaselineRequestPrivate::GetDefaultPatchBaselineRequestPrivate(
    const GetDefaultPatchBaselineRequestPrivate &other, GetDefaultPatchBaselineRequest * const q)
    : GetDefaultPatchBaselinePrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
