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

#include "replacetopicrulerequest.h"
#include "replacetopicrulerequest_p.h"
#include "replacetopicruleresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ReplaceTopicRuleRequest
 *
 * @brief  Implements IoT ReplaceTopicRule requests.
 *
 * @see    IoTClient::replaceTopicRule
 */

/**
 * @brief  Constructs a new ReplaceTopicRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReplaceTopicRuleRequest::ReplaceTopicRuleRequest(const ReplaceTopicRuleRequest &other)
    : IoTRequest(new ReplaceTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReplaceTopicRuleRequest object.
 */
ReplaceTopicRuleRequest::ReplaceTopicRuleRequest()
    : IoTRequest(new ReplaceTopicRuleRequestPrivate(IoTRequest::ReplaceTopicRuleAction, this))
{

}

bool ReplaceTopicRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReplaceTopicRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReplaceTopicRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ReplaceTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new ReplaceTopicRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReplaceTopicRuleRequestPrivate
 *
 * @brief  Private implementation for ReplaceTopicRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceTopicRuleRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ReplaceTopicRuleRequest instance.
 */
ReplaceTopicRuleRequestPrivate::ReplaceTopicRuleRequestPrivate(
    const IoTRequest::Action action, ReplaceTopicRuleRequest * const q)
    : ReplaceTopicRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceTopicRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReplaceTopicRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReplaceTopicRuleRequest instance.
 */
ReplaceTopicRuleRequestPrivate::ReplaceTopicRuleRequestPrivate(
    const ReplaceTopicRuleRequestPrivate &other, ReplaceTopicRuleRequest * const q)
    : ReplaceTopicRulePrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
