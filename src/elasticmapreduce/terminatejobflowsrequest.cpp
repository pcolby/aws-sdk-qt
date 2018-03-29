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

#include "terminatejobflowsrequest.h"
#include "terminatejobflowsrequest_p.h"
#include "terminatejobflowsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  TerminateJobFlowsRequest
 *
 * @brief  Implements EMR TerminateJobFlows requests.
 *
 * @see    EMRClient::terminateJobFlows
 */

/**
 * @brief  Constructs a new TerminateJobFlowsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateJobFlowsRequest::TerminateJobFlowsRequest(const TerminateJobFlowsRequest &other)
    : EMRRequest(new TerminateJobFlowsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TerminateJobFlowsRequest object.
 */
TerminateJobFlowsRequest::TerminateJobFlowsRequest()
    : EMRRequest(new TerminateJobFlowsRequestPrivate(EMRRequest::TerminateJobFlowsAction, this))
{

}

bool TerminateJobFlowsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TerminateJobFlowsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateJobFlowsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * TerminateJobFlowsRequest::response(QNetworkReply * const reply) const
{
    return new TerminateJobFlowsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TerminateJobFlowsRequestPrivate
 *
 * @brief  Private implementation for TerminateJobFlowsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateJobFlowsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public TerminateJobFlowsRequest instance.
 */
TerminateJobFlowsRequestPrivate::TerminateJobFlowsRequestPrivate(
    const EMRRequest::Action action, TerminateJobFlowsRequest * const q)
    : TerminateJobFlowsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TerminateJobFlowsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateJobFlowsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateJobFlowsRequest instance.
 */
TerminateJobFlowsRequestPrivate::TerminateJobFlowsRequestPrivate(
    const TerminateJobFlowsRequestPrivate &other, TerminateJobFlowsRequest * const q)
    : TerminateJobFlowsPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
