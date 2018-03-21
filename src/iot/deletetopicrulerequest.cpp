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

#include "deletetopicrulerequest.h"
#include "deletetopicrulerequest_p.h"
#include "deletetopicruleresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DeleteTopicRuleRequest
 *
 * @brief  Implements IoT DeleteTopicRule requests.
 *
 * @see    IoTClient::deleteTopicRule
 */

/**
 * @brief  Constructs a new DeleteTopicRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTopicRuleResponse::DeleteTopicRuleResponse(

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
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeleteTopicRuleRequest::response(QNetworkReply * const reply) const
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
    : DeleteTopicRulePrivate(action, q)
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
    : DeleteTopicRulePrivate(other, q)
{

}
