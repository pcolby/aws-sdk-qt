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

#include "pollforjobsrequest.h"
#include "pollforjobsrequest_p.h"
#include "pollforjobsresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  PollForJobsRequest
 *
 * @brief  Implements CodePipeline PollForJobs requests.
 *
 * @see    CodePipelineClient::pollForJobs
 */

/**
 * @brief  Constructs a new PollForJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PollForJobsRequest::PollForJobsRequest(const PollForJobsRequest &other)
    : CodePipelineRequest(new PollForJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PollForJobsRequest object.
 */
PollForJobsRequest::PollForJobsRequest()
    : CodePipelineRequest(new PollForJobsRequestPrivate(CodePipelineRequest::PollForJobsAction, this))
{

}

bool PollForJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PollForJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PollForJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * PollForJobsRequest::response(QNetworkReply * const reply) const
{
    return new PollForJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PollForJobsRequestPrivate
 *
 * @brief  Private implementation for PollForJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForJobsRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PollForJobsRequest instance.
 */
PollForJobsRequestPrivate::PollForJobsRequestPrivate(
    const CodePipelineRequest::Action action, PollForJobsRequest * const q)
    : PollForJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PollForJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PollForJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PollForJobsRequest instance.
 */
PollForJobsRequestPrivate::PollForJobsRequestPrivate(
    const PollForJobsRequestPrivate &other, PollForJobsRequest * const q)
    : PollForJobsPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
