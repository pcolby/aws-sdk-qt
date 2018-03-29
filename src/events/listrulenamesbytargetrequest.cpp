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

#include "listrulenamesbytargetrequest.h"
#include "listrulenamesbytargetrequest_p.h"
#include "listrulenamesbytargetresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  ListRuleNamesByTargetRequest
 *
 * @brief  Implements CloudWatchEvents ListRuleNamesByTarget requests.
 *
 * @see    CloudWatchEventsClient::listRuleNamesByTarget
 */

/**
 * @brief  Constructs a new ListRuleNamesByTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRuleNamesByTargetRequest::ListRuleNamesByTargetRequest(const ListRuleNamesByTargetRequest &other)
    : CloudWatchEventsRequest(new ListRuleNamesByTargetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRuleNamesByTargetRequest object.
 */
ListRuleNamesByTargetRequest::ListRuleNamesByTargetRequest()
    : CloudWatchEventsRequest(new ListRuleNamesByTargetRequestPrivate(CloudWatchEventsRequest::ListRuleNamesByTargetAction, this))
{

}

bool ListRuleNamesByTargetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRuleNamesByTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRuleNamesByTargetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRuleNamesByTargetRequest::response(QNetworkReply * const reply) const
{
    return new ListRuleNamesByTargetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRuleNamesByTargetRequestPrivate
 *
 * @brief  Private implementation for ListRuleNamesByTargetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRuleNamesByTargetRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public ListRuleNamesByTargetRequest instance.
 */
ListRuleNamesByTargetRequestPrivate::ListRuleNamesByTargetRequestPrivate(
    const CloudWatchEventsRequest::Action action, ListRuleNamesByTargetRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRuleNamesByTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRuleNamesByTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRuleNamesByTargetRequest instance.
 */
ListRuleNamesByTargetRequestPrivate::ListRuleNamesByTargetRequestPrivate(
    const ListRuleNamesByTargetRequestPrivate &other, ListRuleNamesByTargetRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
