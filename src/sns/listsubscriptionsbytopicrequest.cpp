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

#include "listsubscriptionsbytopicrequest.h"
#include "listsubscriptionsbytopicrequest_p.h"
#include "listsubscriptionsbytopicresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  ListSubscriptionsByTopicRequest
 *
 * @brief  Implements SNS ListSubscriptionsByTopic requests.
 *
 * @see    SNSClient::listSubscriptionsByTopic
 */

/**
 * @brief  Constructs a new ListSubscriptionsByTopicRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSubscriptionsByTopicRequest::ListSubscriptionsByTopicRequest(const ListSubscriptionsByTopicRequest &other)
    : SNSRequest(new ListSubscriptionsByTopicRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSubscriptionsByTopicRequest object.
 */
ListSubscriptionsByTopicRequest::ListSubscriptionsByTopicRequest()
    : SNSRequest(new ListSubscriptionsByTopicRequestPrivate(SNSRequest::ListSubscriptionsByTopicAction, this))
{

}

bool ListSubscriptionsByTopicRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSubscriptionsByTopicResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSubscriptionsByTopicResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSubscriptionsByTopicRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscriptionsByTopicResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSubscriptionsByTopicRequestPrivate
 *
 * @brief  Private implementation for ListSubscriptionsByTopicRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionsByTopicRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ListSubscriptionsByTopicRequest instance.
 */
ListSubscriptionsByTopicRequestPrivate::ListSubscriptionsByTopicRequestPrivate(
    const SNSRequest::Action action, ListSubscriptionsByTopicRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionsByTopicRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSubscriptionsByTopicRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSubscriptionsByTopicRequest instance.
 */
ListSubscriptionsByTopicRequestPrivate::ListSubscriptionsByTopicRequestPrivate(
    const ListSubscriptionsByTopicRequestPrivate &other, ListSubscriptionsByTopicRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
