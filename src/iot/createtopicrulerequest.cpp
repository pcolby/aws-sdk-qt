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

#include "createtopicrulerequest.h"
#include "createtopicrulerequest_p.h"
#include "createtopicruleresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  CreateTopicRuleRequest
 *
 * @brief  Implements IoT CreateTopicRule requests.
 *
 * @see    IoTClient::createTopicRule
 */

/**
 * @brief  Constructs a new CreateTopicRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTopicRuleRequest::CreateTopicRuleRequest(const CreateTopicRuleRequest &other)
    : IoTRequest(new CreateTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTopicRuleRequest object.
 */
CreateTopicRuleRequest::CreateTopicRuleRequest()
    : IoTRequest(new CreateTopicRuleRequestPrivate(IoTRequest::CreateTopicRuleAction, this))
{

}

bool CreateTopicRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTopicRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTopicRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CreateTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateTopicRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTopicRuleRequestPrivate
 *
 * @brief  Private implementation for CreateTopicRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTopicRuleRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateTopicRuleRequest instance.
 */
CreateTopicRuleRequestPrivate::CreateTopicRuleRequestPrivate(
    const IoTRequest::Action action, CreateTopicRuleRequest * const q)
    : CreateTopicRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTopicRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTopicRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTopicRuleRequest instance.
 */
CreateTopicRuleRequestPrivate::CreateTopicRuleRequestPrivate(
    const CreateTopicRuleRequestPrivate &other, CreateTopicRuleRequest * const q)
    : CreateTopicRulePrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
