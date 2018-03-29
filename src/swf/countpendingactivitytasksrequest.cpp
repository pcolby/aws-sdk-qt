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

#include "countpendingactivitytasksrequest.h"
#include "countpendingactivitytasksrequest_p.h"
#include "countpendingactivitytasksresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  CountPendingActivityTasksRequest
 *
 * @brief  Implements SWF CountPendingActivityTasks requests.
 *
 * @see    SWFClient::countPendingActivityTasks
 */

/**
 * @brief  Constructs a new CountPendingActivityTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CountPendingActivityTasksRequest::CountPendingActivityTasksRequest(const CountPendingActivityTasksRequest &other)
    : SWFRequest(new CountPendingActivityTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CountPendingActivityTasksRequest object.
 */
CountPendingActivityTasksRequest::CountPendingActivityTasksRequest()
    : SWFRequest(new CountPendingActivityTasksRequestPrivate(SWFRequest::CountPendingActivityTasksAction, this))
{

}

bool CountPendingActivityTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CountPendingActivityTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CountPendingActivityTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * CountPendingActivityTasksRequest::response(QNetworkReply * const reply) const
{
    return new CountPendingActivityTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CountPendingActivityTasksRequestPrivate
 *
 * @brief  Private implementation for CountPendingActivityTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CountPendingActivityTasksRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public CountPendingActivityTasksRequest instance.
 */
CountPendingActivityTasksRequestPrivate::CountPendingActivityTasksRequestPrivate(
    const SWFRequest::Action action, CountPendingActivityTasksRequest * const q)
    : CountPendingActivityTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CountPendingActivityTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CountPendingActivityTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CountPendingActivityTasksRequest instance.
 */
CountPendingActivityTasksRequestPrivate::CountPendingActivityTasksRequestPrivate(
    const CountPendingActivityTasksRequestPrivate &other, CountPendingActivityTasksRequest * const q)
    : CountPendingActivityTasksPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
