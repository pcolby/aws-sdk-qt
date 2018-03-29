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

#include "removetargetsrequest.h"
#include "removetargetsrequest_p.h"
#include "removetargetsresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  RemoveTargetsRequest
 *
 * @brief  Implements CloudWatchEvents RemoveTargets requests.
 *
 * @see    CloudWatchEventsClient::removeTargets
 */

/**
 * @brief  Constructs a new RemoveTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTargetsRequest::RemoveTargetsRequest(const RemoveTargetsRequest &other)
    : CloudWatchEventsRequest(new RemoveTargetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTargetsRequest object.
 */
RemoveTargetsRequest::RemoveTargetsRequest()
    : CloudWatchEventsRequest(new RemoveTargetsRequestPrivate(CloudWatchEventsRequest::RemoveTargetsAction, this))
{

}

bool RemoveTargetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTargetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * RemoveTargetsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTargetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTargetsRequestPrivate
 *
 * @brief  Private implementation for RemoveTargetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTargetsRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public RemoveTargetsRequest instance.
 */
RemoveTargetsRequestPrivate::RemoveTargetsRequestPrivate(
    const CloudWatchEventsRequest::Action action, RemoveTargetsRequest * const q)
    : RemoveTargetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTargetsRequest instance.
 */
RemoveTargetsRequestPrivate::RemoveTargetsRequestPrivate(
    const RemoveTargetsRequestPrivate &other, RemoveTargetsRequest * const q)
    : RemoveTargetsPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
