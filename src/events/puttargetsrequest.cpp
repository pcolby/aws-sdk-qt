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

#include "puttargetsrequest.h"
#include "puttargetsrequest_p.h"
#include "puttargetsresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  PutTargetsRequest
 *
 * @brief  Implements CloudWatchEvents PutTargets requests.
 *
 * @see    CloudWatchEventsClient::putTargets
 */

/**
 * @brief  Constructs a new PutTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutTargetsRequest::PutTargetsRequest(const PutTargetsRequest &other)
    : CloudWatchEventsRequest(new PutTargetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutTargetsRequest object.
 */
PutTargetsRequest::PutTargetsRequest()
    : CloudWatchEventsRequest(new PutTargetsRequestPrivate(CloudWatchEventsRequest::PutTargetsAction, this))
{

}

bool PutTargetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutTargetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
QtAws::Core::AwsAbstractResponse * PutTargetsRequest::response(QNetworkReply * const reply) const
{
    return new PutTargetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutTargetsRequestPrivate
 *
 * @brief  Private implementation for PutTargetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutTargetsRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public PutTargetsRequest instance.
 */
PutTargetsRequestPrivate::PutTargetsRequestPrivate(
    const CloudWatchEventsRequest::Action action, PutTargetsRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutTargetsRequest instance.
 */
PutTargetsRequestPrivate::PutTargetsRequestPrivate(
    const PutTargetsRequestPrivate &other, PutTargetsRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
