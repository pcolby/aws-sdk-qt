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

#include "enabletopicrulerequest.h"
#include "enabletopicrulerequest_p.h"
#include "enabletopicruleresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  EnableTopicRuleRequest
 *
 * @brief  Implements IoT EnableTopicRule requests.
 *
 * @see    IoTClient::enableTopicRule
 */

/**
 * @brief  Constructs a new EnableTopicRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableTopicRuleResponse::EnableTopicRuleResponse(

/**
 * @brief  Constructs a new EnableTopicRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableTopicRuleRequest::EnableTopicRuleRequest(const EnableTopicRuleRequest &other)
    : IoTRequest(new EnableTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableTopicRuleRequest object.
 */
EnableTopicRuleRequest::EnableTopicRuleRequest()
    : IoTRequest(new EnableTopicRuleRequestPrivate(IoTRequest::EnableTopicRuleAction, this))
{

}

bool EnableTopicRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableTopicRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableTopicRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * EnableTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new EnableTopicRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableTopicRuleRequestPrivate
 *
 * @brief  Private implementation for EnableTopicRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableTopicRuleRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public EnableTopicRuleRequest instance.
 */
EnableTopicRuleRequestPrivate::EnableTopicRuleRequestPrivate(
    const IoTRequest::Action action, EnableTopicRuleRequest * const q)
    : EnableTopicRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableTopicRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableTopicRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableTopicRuleRequest instance.
 */
EnableTopicRuleRequestPrivate::EnableTopicRuleRequestPrivate(
    const EnableTopicRuleRequestPrivate &other, EnableTopicRuleRequest * const q)
    : EnableTopicRulePrivate(other, q)
{

}
