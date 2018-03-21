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

#include "updatenotificationrequest.h"
#include "updatenotificationrequest_p.h"
#include "updatenotificationresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  UpdateNotificationRequest
 *
 * @brief  Implements Budgets UpdateNotification requests.
 *
 * @see    BudgetsClient::updateNotification
 */

/**
 * @brief  Constructs a new UpdateNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNotificationRequest::UpdateNotificationRequest(const UpdateNotificationRequest &other)
    : BudgetsRequest(new UpdateNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateNotificationRequest object.
 */
UpdateNotificationRequest::UpdateNotificationRequest()
    : BudgetsRequest(new UpdateNotificationRequestPrivate(BudgetsRequest::UpdateNotificationAction, this))
{

}

bool UpdateNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNotificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * UpdateNotificationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateNotificationRequestPrivate
 *
 * @brief  Private implementation for UpdateNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotificationRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public UpdateNotificationRequest instance.
 */
UpdateNotificationRequestPrivate::UpdateNotificationRequestPrivate(
    const BudgetsRequest::Action action, UpdateNotificationRequest * const q)
    : UpdateNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNotificationRequest instance.
 */
UpdateNotificationRequestPrivate::UpdateNotificationRequestPrivate(
    const UpdateNotificationRequestPrivate &other, UpdateNotificationRequest * const q)
    : UpdateNotificationPrivate(other, q)
{

}

} // namespace Budgets
} // namespace AWS
