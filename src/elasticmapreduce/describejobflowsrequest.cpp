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

#include "describejobflowsrequest.h"
#include "describejobflowsrequest_p.h"
#include "describejobflowsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  DescribeJobFlowsRequest
 *
 * @brief  Implements EMR DescribeJobFlows requests.
 *
 * @see    EMRClient::describeJobFlows
 */

/**
 * @brief  Constructs a new DescribeJobFlowsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobFlowsRequest::DescribeJobFlowsRequest(const DescribeJobFlowsRequest &other)
    : EMRRequest(new DescribeJobFlowsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobFlowsRequest object.
 */
DescribeJobFlowsRequest::DescribeJobFlowsRequest()
    : EMRRequest(new DescribeJobFlowsRequestPrivate(EMRRequest::DescribeJobFlowsAction, this))
{

}

bool DescribeJobFlowsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeJobFlowsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobFlowsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobFlowsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobFlowsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeJobFlowsRequestPrivate
 *
 * @brief  Private implementation for DescribeJobFlowsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobFlowsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public DescribeJobFlowsRequest instance.
 */
DescribeJobFlowsRequestPrivate::DescribeJobFlowsRequestPrivate(
    const EMRRequest::Action action, DescribeJobFlowsRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobFlowsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobFlowsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobFlowsRequest instance.
 */
DescribeJobFlowsRequestPrivate::DescribeJobFlowsRequestPrivate(
    const DescribeJobFlowsRequestPrivate &other, DescribeJobFlowsRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
