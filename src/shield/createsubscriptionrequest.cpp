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

#include "createsubscriptionrequest.h"
#include "createsubscriptionrequest_p.h"
#include "createsubscriptionresponse.h"
#include "shieldrequest_p.h"

namespace AWS {
namespace Shield {

/**
 * @class  CreateSubscriptionRequest
 *
 * @brief  Implements Shield CreateSubscription requests.
 *
 * @see    ShieldClient::createSubscription
 */

/**
 * @brief  Constructs a new CreateSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSubscriptionRequest::CreateSubscriptionRequest(const CreateSubscriptionRequest &other)
    : ShieldRequest(new CreateSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSubscriptionRequest object.
 */
CreateSubscriptionRequest::CreateSubscriptionRequest()
    : ShieldRequest(new CreateSubscriptionRequestPrivate(ShieldRequest::CreateSubscriptionAction, this))
{

}

bool CreateSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ShieldClient::send
 */
AwsAbstractResponse * CreateSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSubscriptionRequestPrivate
 *
 * @brief  Private implementation for CreateSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public CreateSubscriptionRequest instance.
 */
CreateSubscriptionRequestPrivate::CreateSubscriptionRequestPrivate(
    const ShieldRequest::Action action, CreateSubscriptionRequest * const q)
    : CreateSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSubscriptionRequest instance.
 */
CreateSubscriptionRequestPrivate::CreateSubscriptionRequestPrivate(
    const CreateSubscriptionRequestPrivate &other, CreateSubscriptionRequest * const q)
    : CreateSubscriptionPrivate(other, q)
{

}

} // namespace Shield
} // namespace AWS
