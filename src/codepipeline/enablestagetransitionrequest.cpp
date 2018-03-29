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

#include "enablestagetransitionrequest.h"
#include "enablestagetransitionrequest_p.h"
#include "enablestagetransitionresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  EnableStageTransitionRequest
 *
 * @brief  Implements CodePipeline EnableStageTransition requests.
 *
 * @see    CodePipelineClient::enableStageTransition
 */

/**
 * @brief  Constructs a new EnableStageTransitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableStageTransitionRequest::EnableStageTransitionRequest(const EnableStageTransitionRequest &other)
    : CodePipelineRequest(new EnableStageTransitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableStageTransitionRequest object.
 */
EnableStageTransitionRequest::EnableStageTransitionRequest()
    : CodePipelineRequest(new EnableStageTransitionRequestPrivate(CodePipelineRequest::EnableStageTransitionAction, this))
{

}

bool EnableStageTransitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableStageTransitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableStageTransitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableStageTransitionRequest::response(QNetworkReply * const reply) const
{
    return new EnableStageTransitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableStageTransitionRequestPrivate
 *
 * @brief  Private implementation for EnableStageTransitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableStageTransitionRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public EnableStageTransitionRequest instance.
 */
EnableStageTransitionRequestPrivate::EnableStageTransitionRequestPrivate(
    const CodePipelineRequest::Action action, EnableStageTransitionRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableStageTransitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableStageTransitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableStageTransitionRequest instance.
 */
EnableStageTransitionRequestPrivate::EnableStageTransitionRequestPrivate(
    const EnableStageTransitionRequestPrivate &other, EnableStageTransitionRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws
