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

#include "putrulerequest.h"
#include "putrulerequest_p.h"
#include "putruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  PutRuleRequest
 *
 * @brief  Implements CloudWatchEvents PutRule requests.
 *
 * @see    CloudWatchEventsClient::putRule
 */

/**
 * @brief  Constructs a new PutRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRuleRequest::PutRuleRequest(const PutRuleRequest &other)
    : CloudWatchEventsRequest(new PutRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRuleRequest object.
 */
PutRuleRequest::PutRuleRequest()
    : CloudWatchEventsRequest(new PutRuleRequestPrivate(CloudWatchEventsRequest::PutRuleAction, this))
{

}

bool PutRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * PutRuleRequest::response(QNetworkReply * const reply) const
{
    return new PutRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRuleRequestPrivate
 *
 * @brief  Private implementation for PutRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRuleRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public PutRuleRequest instance.
 */
PutRuleRequestPrivate::PutRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, PutRuleRequest * const q)
    : PutRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRuleRequest instance.
 */
PutRuleRequestPrivate::PutRuleRequestPrivate(
    const PutRuleRequestPrivate &other, PutRuleRequest * const q)
    : PutRulePrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace AWS
