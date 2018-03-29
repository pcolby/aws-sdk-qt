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

#include "listtargetsbyrulerequest.h"
#include "listtargetsbyrulerequest_p.h"
#include "listtargetsbyruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  ListTargetsByRuleRequest
 *
 * @brief  Implements CloudWatchEvents ListTargetsByRule requests.
 *
 * @see    CloudWatchEventsClient::listTargetsByRule
 */

/**
 * @brief  Constructs a new ListTargetsByRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTargetsByRuleRequest::ListTargetsByRuleRequest(const ListTargetsByRuleRequest &other)
    : CloudWatchEventsRequest(new ListTargetsByRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTargetsByRuleRequest object.
 */
ListTargetsByRuleRequest::ListTargetsByRuleRequest()
    : CloudWatchEventsRequest(new ListTargetsByRuleRequestPrivate(CloudWatchEventsRequest::ListTargetsByRuleAction, this))
{

}

bool ListTargetsByRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTargetsByRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTargetsByRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * ListTargetsByRuleRequest::response(QNetworkReply * const reply) const
{
    return new ListTargetsByRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTargetsByRuleRequestPrivate
 *
 * @brief  Private implementation for ListTargetsByRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsByRuleRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public ListTargetsByRuleRequest instance.
 */
ListTargetsByRuleRequestPrivate::ListTargetsByRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, ListTargetsByRuleRequest * const q)
    : ListTargetsByRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsByRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTargetsByRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTargetsByRuleRequest instance.
 */
ListTargetsByRuleRequestPrivate::ListTargetsByRuleRequestPrivate(
    const ListTargetsByRuleRequestPrivate &other, ListTargetsByRuleRequest * const q)
    : ListTargetsByRulePrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace AWS
