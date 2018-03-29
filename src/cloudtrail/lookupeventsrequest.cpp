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

#include "lookupeventsrequest.h"
#include "lookupeventsrequest_p.h"
#include "lookupeventsresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  LookupEventsRequest
 *
 * @brief  Implements CloudTrail LookupEvents requests.
 *
 * @see    CloudTrailClient::lookupEvents
 */

/**
 * @brief  Constructs a new LookupEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
LookupEventsRequest::LookupEventsRequest(const LookupEventsRequest &other)
    : CloudTrailRequest(new LookupEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new LookupEventsRequest object.
 */
LookupEventsRequest::LookupEventsRequest()
    : CloudTrailRequest(new LookupEventsRequestPrivate(CloudTrailRequest::LookupEventsAction, this))
{

}

bool LookupEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an LookupEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An LookupEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * LookupEventsRequest::response(QNetworkReply * const reply) const
{
    return new LookupEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  LookupEventsRequestPrivate
 *
 * @brief  Private implementation for LookupEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LookupEventsRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public LookupEventsRequest instance.
 */
LookupEventsRequestPrivate::LookupEventsRequestPrivate(
    const CloudTrailRequest::Action action, LookupEventsRequest * const q)
    : LookupEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new LookupEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the LookupEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public LookupEventsRequest instance.
 */
LookupEventsRequestPrivate::LookupEventsRequestPrivate(
    const LookupEventsRequestPrivate &other, LookupEventsRequest * const q)
    : LookupEventsPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
