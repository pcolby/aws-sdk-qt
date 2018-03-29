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

#include "respondactivitytaskcompletedrequest.h"
#include "respondactivitytaskcompletedrequest_p.h"
#include "respondactivitytaskcompletedresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  RespondActivityTaskCompletedRequest
 *
 * @brief  Implements SWF RespondActivityTaskCompleted requests.
 *
 * @see    SWFClient::respondActivityTaskCompleted
 */

/**
 * @brief  Constructs a new RespondActivityTaskCompletedRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RespondActivityTaskCompletedRequest::RespondActivityTaskCompletedRequest(const RespondActivityTaskCompletedRequest &other)
    : SWFRequest(new RespondActivityTaskCompletedRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RespondActivityTaskCompletedRequest object.
 */
RespondActivityTaskCompletedRequest::RespondActivityTaskCompletedRequest()
    : SWFRequest(new RespondActivityTaskCompletedRequestPrivate(SWFRequest::RespondActivityTaskCompletedAction, this))
{

}

bool RespondActivityTaskCompletedRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RespondActivityTaskCompletedResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RespondActivityTaskCompletedResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * RespondActivityTaskCompletedRequest::response(QNetworkReply * const reply) const
{
    return new RespondActivityTaskCompletedResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RespondActivityTaskCompletedRequestPrivate
 *
 * @brief  Private implementation for RespondActivityTaskCompletedRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskCompletedRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RespondActivityTaskCompletedRequest instance.
 */
RespondActivityTaskCompletedRequestPrivate::RespondActivityTaskCompletedRequestPrivate(
    const SWFRequest::Action action, RespondActivityTaskCompletedRequest * const q)
    : RespondActivityTaskCompletedPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskCompletedRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RespondActivityTaskCompletedRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RespondActivityTaskCompletedRequest instance.
 */
RespondActivityTaskCompletedRequestPrivate::RespondActivityTaskCompletedRequestPrivate(
    const RespondActivityTaskCompletedRequestPrivate &other, RespondActivityTaskCompletedRequest * const q)
    : RespondActivityTaskCompletedPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
