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

#include "updatesubscriberrequest.h"
#include "updatesubscriberrequest_p.h"
#include "updatesubscriberresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  UpdateSubscriberRequest
 *
 * @brief  Implements Budgets UpdateSubscriber requests.
 *
 * @see    BudgetsClient::updateSubscriber
 */

/**
 * @brief  Constructs a new UpdateSubscriberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSubscriberResponse::UpdateSubscriberResponse(

/**
 * @brief  Constructs a new UpdateSubscriberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSubscriberRequest::UpdateSubscriberRequest(const UpdateSubscriberRequest &other)
    : BudgetsRequest(new UpdateSubscriberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSubscriberRequest object.
 */
UpdateSubscriberRequest::UpdateSubscriberRequest()
    : BudgetsRequest(new UpdateSubscriberRequestPrivate(BudgetsRequest::UpdateSubscriberAction, this))
{

}

bool UpdateSubscriberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSubscriberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSubscriberResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * UpdateSubscriberRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSubscriberRequestPrivate
 *
 * @brief  Private implementation for UpdateSubscriberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriberRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public UpdateSubscriberRequest instance.
 */
UpdateSubscriberRequestPrivate::UpdateSubscriberRequestPrivate(
    const BudgetsRequest::Action action, UpdateSubscriberRequest * const q)
    : UpdateSubscriberPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSubscriberRequest instance.
 */
UpdateSubscriberRequestPrivate::UpdateSubscriberRequestPrivate(
    const UpdateSubscriberRequestPrivate &other, UpdateSubscriberRequest * const q)
    : UpdateSubscriberPrivate(other, q)
{

}

} // namespace Budgets
} // namespace AWS
