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

#include "createpatchbaselinerequest.h"
#include "createpatchbaselinerequest_p.h"
#include "createpatchbaselineresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  CreatePatchBaselineRequest
 *
 * @brief  Implements SSM CreatePatchBaseline requests.
 *
 * @see    SSMClient::createPatchBaseline
 */

/**
 * @brief  Constructs a new CreatePatchBaselineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePatchBaselineRequest::CreatePatchBaselineRequest(const CreatePatchBaselineRequest &other)
    : SSMRequest(new CreatePatchBaselineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePatchBaselineRequest object.
 */
CreatePatchBaselineRequest::CreatePatchBaselineRequest()
    : SSMRequest(new CreatePatchBaselineRequestPrivate(SSMRequest::CreatePatchBaselineAction, this))
{

}

bool CreatePatchBaselineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePatchBaselineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePatchBaselineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * CreatePatchBaselineRequest::response(QNetworkReply * const reply) const
{
    return new CreatePatchBaselineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePatchBaselineRequestPrivate
 *
 * @brief  Private implementation for CreatePatchBaselineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePatchBaselineRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CreatePatchBaselineRequest instance.
 */
CreatePatchBaselineRequestPrivate::CreatePatchBaselineRequestPrivate(
    const SSMRequest::Action action, CreatePatchBaselineRequest * const q)
    : CreatePatchBaselinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePatchBaselineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePatchBaselineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePatchBaselineRequest instance.
 */
CreatePatchBaselineRequestPrivate::CreatePatchBaselineRequestPrivate(
    const CreatePatchBaselineRequestPrivate &other, CreatePatchBaselineRequest * const q)
    : CreatePatchBaselinePrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
