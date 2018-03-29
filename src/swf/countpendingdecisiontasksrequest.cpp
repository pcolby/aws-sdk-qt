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

#include "countpendingdecisiontasksrequest.h"
#include "countpendingdecisiontasksrequest_p.h"
#include "countpendingdecisiontasksresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  CountPendingDecisionTasksRequest
 *
 * @brief  Implements SWF CountPendingDecisionTasks requests.
 *
 * @see    SWFClient::countPendingDecisionTasks
 */

/**
 * @brief  Constructs a new CountPendingDecisionTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CountPendingDecisionTasksRequest::CountPendingDecisionTasksRequest(const CountPendingDecisionTasksRequest &other)
    : SWFRequest(new CountPendingDecisionTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CountPendingDecisionTasksRequest object.
 */
CountPendingDecisionTasksRequest::CountPendingDecisionTasksRequest()
    : SWFRequest(new CountPendingDecisionTasksRequestPrivate(SWFRequest::CountPendingDecisionTasksAction, this))
{

}

bool CountPendingDecisionTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CountPendingDecisionTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CountPendingDecisionTasksResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * CountPendingDecisionTasksRequest::response(QNetworkReply * const reply) const
{
    return new CountPendingDecisionTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CountPendingDecisionTasksRequestPrivate
 *
 * @brief  Private implementation for CountPendingDecisionTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CountPendingDecisionTasksRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public CountPendingDecisionTasksRequest instance.
 */
CountPendingDecisionTasksRequestPrivate::CountPendingDecisionTasksRequestPrivate(
    const SWFRequest::Action action, CountPendingDecisionTasksRequest * const q)
    : CountPendingDecisionTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CountPendingDecisionTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CountPendingDecisionTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CountPendingDecisionTasksRequest instance.
 */
CountPendingDecisionTasksRequestPrivate::CountPendingDecisionTasksRequestPrivate(
    const CountPendingDecisionTasksRequestPrivate &other, CountPendingDecisionTasksRequest * const q)
    : CountPendingDecisionTasksPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
