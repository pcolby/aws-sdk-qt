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

#include "confirmsubscriptionrequest.h"
#include "confirmsubscriptionrequest_p.h"
#include "confirmsubscriptionresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  ConfirmSubscriptionRequest
 *
 * @brief  Implements SNS ConfirmSubscription requests.
 *
 * @see    SNSClient::confirmSubscription
 */

/**
 * @brief  Constructs a new ConfirmSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfirmSubscriptionRequest::ConfirmSubscriptionRequest(const ConfirmSubscriptionRequest &other)
    : SNSRequest(new ConfirmSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConfirmSubscriptionRequest object.
 */
ConfirmSubscriptionRequest::ConfirmSubscriptionRequest()
    : SNSRequest(new ConfirmSubscriptionRequestPrivate(SNSRequest::ConfirmSubscriptionAction, this))
{

}

bool ConfirmSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConfirmSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfirmSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * ConfirmSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConfirmSubscriptionRequestPrivate
 *
 * @brief  Private implementation for ConfirmSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmSubscriptionRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ConfirmSubscriptionRequest instance.
 */
ConfirmSubscriptionRequestPrivate::ConfirmSubscriptionRequestPrivate(
    const SNSRequest::Action action, ConfirmSubscriptionRequest * const q)
    : ConfirmSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfirmSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfirmSubscriptionRequest instance.
 */
ConfirmSubscriptionRequestPrivate::ConfirmSubscriptionRequestPrivate(
    const ConfirmSubscriptionRequestPrivate &other, ConfirmSubscriptionRequest * const q)
    : ConfirmSubscriptionPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
