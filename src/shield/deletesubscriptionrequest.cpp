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

#include "deletesubscriptionrequest.h"
#include "deletesubscriptionrequest_p.h"
#include "deletesubscriptionresponse.h"
#include "shieldrequest_p.h"

namespace AWS {
namespace Shield {

/**
 * @class  DeleteSubscriptionRequest
 *
 * @brief  Implements Shield DeleteSubscription requests.
 *
 * @see    ShieldClient::deleteSubscription
 */

/**
 * @brief  Constructs a new DeleteSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSubscriptionRequest::DeleteSubscriptionRequest(const DeleteSubscriptionRequest &other)
    : ShieldRequest(new DeleteSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSubscriptionRequest object.
 */
DeleteSubscriptionRequest::DeleteSubscriptionRequest()
    : ShieldRequest(new DeleteSubscriptionRequestPrivate(ShieldRequest::DeleteSubscriptionAction, this))
{

}

bool DeleteSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ShieldClient::send
 */
AwsAbstractResponse * DeleteSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSubscriptionRequestPrivate
 *
 * @brief  Private implementation for DeleteSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public DeleteSubscriptionRequest instance.
 */
DeleteSubscriptionRequestPrivate::DeleteSubscriptionRequestPrivate(
    const ShieldRequest::Action action, DeleteSubscriptionRequest * const q)
    : DeleteSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSubscriptionRequest instance.
 */
DeleteSubscriptionRequestPrivate::DeleteSubscriptionRequestPrivate(
    const DeleteSubscriptionRequestPrivate &other, DeleteSubscriptionRequest * const q)
    : DeleteSubscriptionPrivate(other, q)
{

}

} // namespace Shield
} // namespace AWS
