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

#include "pollforthirdpartyjobsrequest.h"
#include "pollforthirdpartyjobsrequest_p.h"
#include "pollforthirdpartyjobsresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PollForThirdPartyJobsRequest
 *
 * @brief  Implements CodePipeline PollForThirdPartyJobs requests.
 *
 * @see    CodePipelineClient::pollForThirdPartyJobs
 */

/**
 * @brief  Constructs a new PollForThirdPartyJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PollForThirdPartyJobsRequest::PollForThirdPartyJobsRequest(const PollForThirdPartyJobsRequest &other)
    : CodePipelineRequest(new PollForThirdPartyJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PollForThirdPartyJobsRequest object.
 */
PollForThirdPartyJobsRequest::PollForThirdPartyJobsRequest()
    : CodePipelineRequest(new PollForThirdPartyJobsRequestPrivate(CodePipelineRequest::PollForThirdPartyJobsAction, this))
{

}

bool PollForThirdPartyJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PollForThirdPartyJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PollForThirdPartyJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * PollForThirdPartyJobsRequest::response(QNetworkReply * const reply) const
{
    return new PollForThirdPartyJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PollForThirdPartyJobsRequestPrivate
 *
 * @brief  Private implementation for PollForThirdPartyJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForThirdPartyJobsRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PollForThirdPartyJobsRequest instance.
 */
PollForThirdPartyJobsRequestPrivate::PollForThirdPartyJobsRequestPrivate(
    const CodePipelineRequest::Action action, PollForThirdPartyJobsRequest * const q)
    : PollForThirdPartyJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PollForThirdPartyJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PollForThirdPartyJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PollForThirdPartyJobsRequest instance.
 */
PollForThirdPartyJobsRequestPrivate::PollForThirdPartyJobsRequestPrivate(
    const PollForThirdPartyJobsRequestPrivate &other, PollForThirdPartyJobsRequest * const q)
    : PollForThirdPartyJobsPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws
