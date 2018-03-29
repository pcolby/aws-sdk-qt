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

#include "describerulerequest.h"
#include "describerulerequest_p.h"
#include "describeruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  DescribeRuleRequest
 *
 * @brief  Implements CloudWatchEvents DescribeRule requests.
 *
 * @see    CloudWatchEventsClient::describeRule
 */

/**
 * @brief  Constructs a new DescribeRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRuleRequest::DescribeRuleRequest(const DescribeRuleRequest &other)
    : CloudWatchEventsRequest(new DescribeRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRuleRequest object.
 */
DescribeRuleRequest::DescribeRuleRequest()
    : CloudWatchEventsRequest(new DescribeRuleRequestPrivate(CloudWatchEventsRequest::DescribeRuleAction, this))
{

}

bool DescribeRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * DescribeRuleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRuleRequestPrivate
 *
 * @brief  Private implementation for DescribeRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRuleRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public DescribeRuleRequest instance.
 */
DescribeRuleRequestPrivate::DescribeRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, DescribeRuleRequest * const q)
    : DescribeRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRuleRequest instance.
 */
DescribeRuleRequestPrivate::DescribeRuleRequestPrivate(
    const DescribeRuleRequestPrivate &other, DescribeRuleRequest * const q)
    : DescribeRulePrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace AWS
