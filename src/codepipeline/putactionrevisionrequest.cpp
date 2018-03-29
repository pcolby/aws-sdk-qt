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

#include "putactionrevisionrequest.h"
#include "putactionrevisionrequest_p.h"
#include "putactionrevisionresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutActionRevisionRequest
 *
 * @brief  Implements CodePipeline PutActionRevision requests.
 *
 * @see    CodePipelineClient::putActionRevision
 */

/**
 * @brief  Constructs a new PutActionRevisionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutActionRevisionRequest::PutActionRevisionRequest(const PutActionRevisionRequest &other)
    : CodePipelineRequest(new PutActionRevisionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutActionRevisionRequest object.
 */
PutActionRevisionRequest::PutActionRevisionRequest()
    : CodePipelineRequest(new PutActionRevisionRequestPrivate(CodePipelineRequest::PutActionRevisionAction, this))
{

}

bool PutActionRevisionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutActionRevisionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutActionRevisionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * PutActionRevisionRequest::response(QNetworkReply * const reply) const
{
    return new PutActionRevisionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutActionRevisionRequestPrivate
 *
 * @brief  Private implementation for PutActionRevisionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutActionRevisionRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PutActionRevisionRequest instance.
 */
PutActionRevisionRequestPrivate::PutActionRevisionRequestPrivate(
    const CodePipelineRequest::Action action, PutActionRevisionRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutActionRevisionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutActionRevisionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutActionRevisionRequest instance.
 */
PutActionRevisionRequestPrivate::PutActionRevisionRequestPrivate(
    const PutActionRevisionRequestPrivate &other, PutActionRevisionRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws
