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

#include "deletenotificationrequest.h"
#include "deletenotificationrequest_p.h"
#include "deletenotificationresponse.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/**
 * @class  DeleteNotificationRequest
 *
 * @brief  Implements Budgets DeleteNotification requests.
 *
 * @see    BudgetsClient::deleteNotification
 */

/**
 * @brief  Constructs a new DeleteNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNotificationRequest::DeleteNotificationRequest(const DeleteNotificationRequest &other)
    : BudgetsRequest(new DeleteNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNotificationRequest object.
 */
DeleteNotificationRequest::DeleteNotificationRequest()
    : BudgetsRequest(new DeleteNotificationRequestPrivate(BudgetsRequest::DeleteNotificationAction, this))
{

}

bool DeleteNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNotificationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotificationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNotificationRequestPrivate
 *
 * @brief  Private implementation for DeleteNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DeleteNotificationRequest instance.
 */
DeleteNotificationRequestPrivate::DeleteNotificationRequestPrivate(
    const BudgetsRequest::Action action, DeleteNotificationRequest * const q)
    : DeleteNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNotificationRequest instance.
 */
DeleteNotificationRequestPrivate::DeleteNotificationRequestPrivate(
    const DeleteNotificationRequestPrivate &other, DeleteNotificationRequest * const q)
    : DeleteNotificationPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws
