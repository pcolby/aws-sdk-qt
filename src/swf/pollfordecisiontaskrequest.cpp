/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pollfordecisiontaskrequest.h"
#include "pollfordecisiontaskrequest_p.h"
#include "pollfordecisiontaskresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  PollForDecisionTaskRequest
 *
 * @brief  Implements SWF PollForDecisionTask requests.
 *
 * @see    SWFClient::pollForDecisionTask
 */

/**
 * @brief  Constructs a new PollForDecisionTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForDecisionTaskResponse::PollForDecisionTaskResponse(

/**
 * @brief  Constructs a new PollForDecisionTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PollForDecisionTaskRequest::PollForDecisionTaskRequest(const PollForDecisionTaskRequest &other)
    : SWFRequest(new PollForDecisionTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PollForDecisionTaskRequest object.
 */
PollForDecisionTaskRequest::PollForDecisionTaskRequest()
    : SWFRequest(new PollForDecisionTaskRequestPrivate(SWFRequest::PollForDecisionTaskAction, this))
{

}

bool PollForDecisionTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PollForDecisionTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PollForDecisionTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * PollForDecisionTaskRequest::response(QNetworkReply * const reply) const
{
    return new PollForDecisionTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PollForDecisionTaskRequestPrivate
 *
 * @brief  Private implementation for PollForDecisionTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForDecisionTaskRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public PollForDecisionTaskRequest instance.
 */
PollForDecisionTaskRequestPrivate::PollForDecisionTaskRequestPrivate(
    const SWFRequest::Action action, PollForDecisionTaskRequest * const q)
    : PollForDecisionTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PollForDecisionTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PollForDecisionTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PollForDecisionTaskRequest instance.
 */
PollForDecisionTaskRequestPrivate::PollForDecisionTaskRequestPrivate(
    const PollForDecisionTaskRequestPrivate &other, PollForDecisionTaskRequest * const q)
    : PollForDecisionTaskPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
