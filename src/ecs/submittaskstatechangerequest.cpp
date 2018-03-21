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

#include "submittaskstatechangerequest.h"
#include "submittaskstatechangerequest_p.h"
#include "submittaskstatechangeresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  SubmitTaskStateChangeRequest
 *
 * @brief  Implements ECS SubmitTaskStateChange requests.
 *
 * @see    ECSClient::submitTaskStateChange
 */

/**
 * @brief  Constructs a new SubmitTaskStateChangeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SubmitTaskStateChangeRequest::SubmitTaskStateChangeRequest(const SubmitTaskStateChangeRequest &other)
    : ECSRequest(new SubmitTaskStateChangeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SubmitTaskStateChangeRequest object.
 */
SubmitTaskStateChangeRequest::SubmitTaskStateChangeRequest()
    : ECSRequest(new SubmitTaskStateChangeRequestPrivate(ECSRequest::SubmitTaskStateChangeAction, this))
{

}

bool SubmitTaskStateChangeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SubmitTaskStateChangeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SubmitTaskStateChangeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * SubmitTaskStateChangeRequest::response(QNetworkReply * const reply) const
{
    return new SubmitTaskStateChangeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SubmitTaskStateChangeRequestPrivate
 *
 * @brief  Private implementation for SubmitTaskStateChangeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubmitTaskStateChangeRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public SubmitTaskStateChangeRequest instance.
 */
SubmitTaskStateChangeRequestPrivate::SubmitTaskStateChangeRequestPrivate(
    const ECSRequest::Action action, SubmitTaskStateChangeRequest * const q)
    : SubmitTaskStateChangePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SubmitTaskStateChangeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SubmitTaskStateChangeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SubmitTaskStateChangeRequest instance.
 */
SubmitTaskStateChangeRequestPrivate::SubmitTaskStateChangeRequestPrivate(
    const SubmitTaskStateChangeRequestPrivate &other, SubmitTaskStateChangeRequest * const q)
    : SubmitTaskStateChangePrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
