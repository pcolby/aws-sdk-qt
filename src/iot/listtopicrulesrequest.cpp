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

#include "listtopicrulesrequest.h"
#include "listtopicrulesrequest_p.h"
#include "listtopicrulesresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListTopicRulesRequest
 *
 * @brief  Implements IoT ListTopicRules requests.
 *
 * @see    IoTClient::listTopicRules
 */

/**
 * @brief  Constructs a new ListTopicRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTopicRulesResponse::ListTopicRulesResponse(

/**
 * @brief  Constructs a new ListTopicRulesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTopicRulesRequest::ListTopicRulesRequest(const ListTopicRulesRequest &other)
    : IoTRequest(new ListTopicRulesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTopicRulesRequest object.
 */
ListTopicRulesRequest::ListTopicRulesRequest()
    : IoTRequest(new ListTopicRulesRequestPrivate(IoTRequest::ListTopicRulesAction, this))
{

}

bool ListTopicRulesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTopicRulesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTopicRulesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListTopicRulesRequest::response(QNetworkReply * const reply) const
{
    return new ListTopicRulesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTopicRulesRequestPrivate
 *
 * @brief  Private implementation for ListTopicRulesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicRulesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListTopicRulesRequest instance.
 */
ListTopicRulesRequestPrivate::ListTopicRulesRequestPrivate(
    const IoTRequest::Action action, ListTopicRulesRequest * const q)
    : ListTopicRulesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicRulesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTopicRulesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTopicRulesRequest instance.
 */
ListTopicRulesRequestPrivate::ListTopicRulesRequestPrivate(
    const ListTopicRulesRequestPrivate &other, ListTopicRulesRequest * const q)
    : ListTopicRulesPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
