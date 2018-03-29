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

#include "disablestagetransitionrequest.h"
#include "disablestagetransitionrequest_p.h"
#include "disablestagetransitionresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  DisableStageTransitionRequest
 *
 * @brief  Implements CodePipeline DisableStageTransition requests.
 *
 * @see    CodePipelineClient::disableStageTransition
 */

/**
 * @brief  Constructs a new DisableStageTransitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableStageTransitionRequest::DisableStageTransitionRequest(const DisableStageTransitionRequest &other)
    : CodePipelineRequest(new DisableStageTransitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableStageTransitionRequest object.
 */
DisableStageTransitionRequest::DisableStageTransitionRequest()
    : CodePipelineRequest(new DisableStageTransitionRequestPrivate(CodePipelineRequest::DisableStageTransitionAction, this))
{

}

bool DisableStageTransitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableStageTransitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableStageTransitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * DisableStageTransitionRequest::response(QNetworkReply * const reply) const
{
    return new DisableStageTransitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableStageTransitionRequestPrivate
 *
 * @brief  Private implementation for DisableStageTransitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableStageTransitionRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public DisableStageTransitionRequest instance.
 */
DisableStageTransitionRequestPrivate::DisableStageTransitionRequestPrivate(
    const CodePipelineRequest::Action action, DisableStageTransitionRequest * const q)
    : DisableStageTransitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableStageTransitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableStageTransitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableStageTransitionRequest instance.
 */
DisableStageTransitionRequestPrivate::DisableStageTransitionRequestPrivate(
    const DisableStageTransitionRequestPrivate &other, DisableStageTransitionRequest * const q)
    : DisableStageTransitionPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
