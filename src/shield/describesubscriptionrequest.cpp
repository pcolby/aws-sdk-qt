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

#include "describesubscriptionrequest.h"
#include "describesubscriptionrequest_p.h"
#include "describesubscriptionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/**
 * @class  DescribeSubscriptionRequest
 *
 * @brief  Implements Shield DescribeSubscription requests.
 *
 * @see    ShieldClient::describeSubscription
 */

/**
 * @brief  Constructs a new DescribeSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSubscriptionRequest::DescribeSubscriptionRequest(const DescribeSubscriptionRequest &other)
    : ShieldRequest(new DescribeSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSubscriptionRequest object.
 */
DescribeSubscriptionRequest::DescribeSubscriptionRequest()
    : ShieldRequest(new DescribeSubscriptionRequestPrivate(ShieldRequest::DescribeSubscriptionAction, this))
{

}

bool DescribeSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSubscriptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ShieldClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSubscriptionRequestPrivate
 *
 * @brief  Private implementation for DescribeSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscriptionRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public DescribeSubscriptionRequest instance.
 */
DescribeSubscriptionRequestPrivate::DescribeSubscriptionRequestPrivate(
    const ShieldRequest::Action action, DescribeSubscriptionRequest * const q)
    : DescribeSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSubscriptionRequest instance.
 */
DescribeSubscriptionRequestPrivate::DescribeSubscriptionRequestPrivate(
    const DescribeSubscriptionRequestPrivate &other, DescribeSubscriptionRequest * const q)
    : DescribeSubscriptionPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
