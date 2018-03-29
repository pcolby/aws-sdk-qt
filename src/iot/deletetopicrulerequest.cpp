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

#include "deletetopicrulerequest.h"
#include "deletetopicrulerequest_p.h"
#include "deletetopicruleresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteTopicRuleRequest
 *
 * @brief  Implements IoT DeleteTopicRule requests.
 *
 * @see    IoTClient::deleteTopicRule
 */

/**
 * @brief  Constructs a new DeleteTopicRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTopicRuleRequest::DeleteTopicRuleRequest(const DeleteTopicRuleRequest &other)
    : IoTRequest(new DeleteTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTopicRuleRequest object.
 */
DeleteTopicRuleRequest::DeleteTopicRuleRequest()
    : IoTRequest(new DeleteTopicRuleRequestPrivate(IoTRequest::DeleteTopicRuleAction, this))
{

}

bool DeleteTopicRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTopicRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTopicRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTopicRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTopicRuleRequestPrivate
 *
 * @brief  Private implementation for DeleteTopicRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTopicRuleRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteTopicRuleRequest instance.
 */
DeleteTopicRuleRequestPrivate::DeleteTopicRuleRequestPrivate(
    const IoTRequest::Action action, DeleteTopicRuleRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTopicRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTopicRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTopicRuleRequest instance.
 */
DeleteTopicRuleRequestPrivate::DeleteTopicRuleRequestPrivate(
    const DeleteTopicRuleRequestPrivate &other, DeleteTopicRuleRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
