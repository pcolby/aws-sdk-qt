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

#include "registerdefaultpatchbaselinerequest.h"
#include "registerdefaultpatchbaselinerequest_p.h"
#include "registerdefaultpatchbaselineresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  RegisterDefaultPatchBaselineRequest
 *
 * @brief  Implements SSM RegisterDefaultPatchBaseline requests.
 *
 * @see    SSMClient::registerDefaultPatchBaseline
 */

/**
 * @brief  Constructs a new RegisterDefaultPatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterDefaultPatchBaselineResponse::RegisterDefaultPatchBaselineResponse(

/**
 * @brief  Constructs a new RegisterDefaultPatchBaselineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterDefaultPatchBaselineRequest::RegisterDefaultPatchBaselineRequest(const RegisterDefaultPatchBaselineRequest &other)
    : SSMRequest(new RegisterDefaultPatchBaselineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterDefaultPatchBaselineRequest object.
 */
RegisterDefaultPatchBaselineRequest::RegisterDefaultPatchBaselineRequest()
    : SSMRequest(new RegisterDefaultPatchBaselineRequestPrivate(SSMRequest::RegisterDefaultPatchBaselineAction, this))
{

}

bool RegisterDefaultPatchBaselineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterDefaultPatchBaselineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterDefaultPatchBaselineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * RegisterDefaultPatchBaselineRequest::response(QNetworkReply * const reply) const
{
    return new RegisterDefaultPatchBaselineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterDefaultPatchBaselineRequestPrivate
 *
 * @brief  Private implementation for RegisterDefaultPatchBaselineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDefaultPatchBaselineRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public RegisterDefaultPatchBaselineRequest instance.
 */
RegisterDefaultPatchBaselineRequestPrivate::RegisterDefaultPatchBaselineRequestPrivate(
    const SSMRequest::Action action, RegisterDefaultPatchBaselineRequest * const q)
    : RegisterDefaultPatchBaselinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDefaultPatchBaselineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterDefaultPatchBaselineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterDefaultPatchBaselineRequest instance.
 */
RegisterDefaultPatchBaselineRequestPrivate::RegisterDefaultPatchBaselineRequestPrivate(
    const RegisterDefaultPatchBaselineRequestPrivate &other, RegisterDefaultPatchBaselineRequest * const q)
    : RegisterDefaultPatchBaselinePrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
