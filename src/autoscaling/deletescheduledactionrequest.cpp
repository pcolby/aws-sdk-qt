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

#include "deletescheduledactionrequest.h"
#include "deletescheduledactionrequest_p.h"
#include "deletescheduledactionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DeleteScheduledActionRequest
 *
 * @brief  Implements AutoScaling DeleteScheduledAction requests.
 *
 * @see    AutoScalingClient::deleteScheduledAction
 */

/**
 * @brief  Constructs a new DeleteScheduledActionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteScheduledActionRequest::DeleteScheduledActionRequest(const DeleteScheduledActionRequest &other)
    : AutoScalingRequest(new DeleteScheduledActionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteScheduledActionRequest object.
 */
DeleteScheduledActionRequest::DeleteScheduledActionRequest()
    : AutoScalingRequest(new DeleteScheduledActionRequestPrivate(AutoScalingRequest::DeleteScheduledActionAction, this))
{

}

bool DeleteScheduledActionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteScheduledActionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteScheduledActionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DeleteScheduledActionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScheduledActionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteScheduledActionRequestPrivate
 *
 * @brief  Private implementation for DeleteScheduledActionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScheduledActionRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DeleteScheduledActionRequest instance.
 */
DeleteScheduledActionRequestPrivate::DeleteScheduledActionRequestPrivate(
    const AutoScalingRequest::Action action, DeleteScheduledActionRequest * const q)
    : DeleteScheduledActionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScheduledActionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteScheduledActionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteScheduledActionRequest instance.
 */
DeleteScheduledActionRequestPrivate::DeleteScheduledActionRequestPrivate(
    const DeleteScheduledActionRequestPrivate &other, DeleteScheduledActionRequest * const q)
    : DeleteScheduledActionPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
