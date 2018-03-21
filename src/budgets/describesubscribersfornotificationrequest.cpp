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

#include "describesubscribersfornotificationrequest.h"
#include "describesubscribersfornotificationrequest_p.h"
#include "describesubscribersfornotificationresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  DescribeSubscribersForNotificationRequest
 *
 * @brief  Implements Budgets DescribeSubscribersForNotification requests.
 *
 * @see    BudgetsClient::describeSubscribersForNotification
 */

/**
 * @brief  Constructs a new DescribeSubscribersForNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSubscribersForNotificationRequest::DescribeSubscribersForNotificationRequest(const DescribeSubscribersForNotificationRequest &other)
    : BudgetsRequest(new DescribeSubscribersForNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSubscribersForNotificationRequest object.
 */
DescribeSubscribersForNotificationRequest::DescribeSubscribersForNotificationRequest()
    : BudgetsRequest(new DescribeSubscribersForNotificationRequestPrivate(BudgetsRequest::DescribeSubscribersForNotificationAction, this))
{

}

bool DescribeSubscribersForNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSubscribersForNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSubscribersForNotificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * DescribeSubscribersForNotificationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubscribersForNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSubscribersForNotificationRequestPrivate
 *
 * @brief  Private implementation for DescribeSubscribersForNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscribersForNotificationRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DescribeSubscribersForNotificationRequest instance.
 */
DescribeSubscribersForNotificationRequestPrivate::DescribeSubscribersForNotificationRequestPrivate(
    const BudgetsRequest::Action action, DescribeSubscribersForNotificationRequest * const q)
    : DescribeSubscribersForNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscribersForNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubscribersForNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSubscribersForNotificationRequest instance.
 */
DescribeSubscribersForNotificationRequestPrivate::DescribeSubscribersForNotificationRequestPrivate(
    const DescribeSubscribersForNotificationRequestPrivate &other, DescribeSubscribersForNotificationRequest * const q)
    : DescribeSubscribersForNotificationPrivate(other, q)
{

}

} // namespace Budgets
} // namespace AWS
