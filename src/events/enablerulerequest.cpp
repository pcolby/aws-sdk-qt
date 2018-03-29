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

#include "enablerulerequest.h"
#include "enablerulerequest_p.h"
#include "enableruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  EnableRuleRequest
 *
 * @brief  Implements CloudWatchEvents EnableRule requests.
 *
 * @see    CloudWatchEventsClient::enableRule
 */

/**
 * @brief  Constructs a new EnableRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableRuleRequest::EnableRuleRequest(const EnableRuleRequest &other)
    : CloudWatchEventsRequest(new EnableRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableRuleRequest object.
 */
EnableRuleRequest::EnableRuleRequest()
    : CloudWatchEventsRequest(new EnableRuleRequestPrivate(CloudWatchEventsRequest::EnableRuleAction, this))
{

}

bool EnableRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * EnableRuleRequest::response(QNetworkReply * const reply) const
{
    return new EnableRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableRuleRequestPrivate
 *
 * @brief  Private implementation for EnableRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableRuleRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public EnableRuleRequest instance.
 */
EnableRuleRequestPrivate::EnableRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, EnableRuleRequest * const q)
    : EnableRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableRuleRequest instance.
 */
EnableRuleRequestPrivate::EnableRuleRequestPrivate(
    const EnableRuleRequestPrivate &other, EnableRuleRequest * const q)
    : EnableRulePrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace AWS
