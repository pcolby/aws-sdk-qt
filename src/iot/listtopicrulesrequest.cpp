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

#include "listtopicrulesrequest.h"
#include "listtopicrulesrequest_p.h"
#include "listtopicrulesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ListTopicRulesRequest
 *
 * @brief  Implements IoT ListTopicRules requests.
 *
 * @see    IoTClient::listTopicRules
 */

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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTopicRulesRequest::response(QNetworkReply * const reply) const
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
    : IoTRequestPrivate(action, q)
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
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
