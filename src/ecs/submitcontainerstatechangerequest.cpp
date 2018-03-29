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

#include "submitcontainerstatechangerequest.h"
#include "submitcontainerstatechangerequest_p.h"
#include "submitcontainerstatechangeresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  SubmitContainerStateChangeRequest
 *
 * @brief  Implements ECS SubmitContainerStateChange requests.
 *
 * @see    ECSClient::submitContainerStateChange
 */

/**
 * @brief  Constructs a new SubmitContainerStateChangeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SubmitContainerStateChangeRequest::SubmitContainerStateChangeRequest(const SubmitContainerStateChangeRequest &other)
    : ECSRequest(new SubmitContainerStateChangeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SubmitContainerStateChangeRequest object.
 */
SubmitContainerStateChangeRequest::SubmitContainerStateChangeRequest()
    : ECSRequest(new SubmitContainerStateChangeRequestPrivate(ECSRequest::SubmitContainerStateChangeAction, this))
{

}

bool SubmitContainerStateChangeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SubmitContainerStateChangeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SubmitContainerStateChangeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * SubmitContainerStateChangeRequest::response(QNetworkReply * const reply) const
{
    return new SubmitContainerStateChangeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SubmitContainerStateChangeRequestPrivate
 *
 * @brief  Private implementation for SubmitContainerStateChangeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubmitContainerStateChangeRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public SubmitContainerStateChangeRequest instance.
 */
SubmitContainerStateChangeRequestPrivate::SubmitContainerStateChangeRequestPrivate(
    const ECSRequest::Action action, SubmitContainerStateChangeRequest * const q)
    : SubmitContainerStateChangePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SubmitContainerStateChangeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SubmitContainerStateChangeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SubmitContainerStateChangeRequest instance.
 */
SubmitContainerStateChangeRequestPrivate::SubmitContainerStateChangeRequestPrivate(
    const SubmitContainerStateChangeRequestPrivate &other, SubmitContainerStateChangeRequest * const q)
    : SubmitContainerStateChangePrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
