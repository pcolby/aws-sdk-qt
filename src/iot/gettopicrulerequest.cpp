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

#include "gettopicrulerequest.h"
#include "gettopicrulerequest_p.h"
#include "gettopicruleresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  GetTopicRuleRequest
 *
 * @brief  Implements IoT GetTopicRule requests.
 *
 * @see    IoTClient::getTopicRule
 */

/**
 * @brief  Constructs a new GetTopicRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTopicRuleRequest::GetTopicRuleRequest(const GetTopicRuleRequest &other)
    : IoTRequest(new GetTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTopicRuleRequest object.
 */
GetTopicRuleRequest::GetTopicRuleRequest()
    : IoTRequest(new GetTopicRuleRequestPrivate(IoTRequest::GetTopicRuleAction, this))
{

}

bool GetTopicRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTopicRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTopicRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * GetTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new GetTopicRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTopicRuleRequestPrivate
 *
 * @brief  Private implementation for GetTopicRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTopicRuleRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetTopicRuleRequest instance.
 */
GetTopicRuleRequestPrivate::GetTopicRuleRequestPrivate(
    const IoTRequest::Action action, GetTopicRuleRequest * const q)
    : GetTopicRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTopicRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTopicRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTopicRuleRequest instance.
 */
GetTopicRuleRequestPrivate::GetTopicRuleRequestPrivate(
    const GetTopicRuleRequestPrivate &other, GetTopicRuleRequest * const q)
    : GetTopicRulePrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
