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

#include "deletesubscriberrequest.h"
#include "deletesubscriberrequest_p.h"
#include "deletesubscriberresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  DeleteSubscriberRequest
 *
 * @brief  Implements Budgets DeleteSubscriber requests.
 *
 * @see    BudgetsClient::deleteSubscriber
 */

/**
 * @brief  Constructs a new DeleteSubscriberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubscriberResponse::DeleteSubscriberResponse(

/**
 * @brief  Constructs a new DeleteSubscriberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSubscriberRequest::DeleteSubscriberRequest(const DeleteSubscriberRequest &other)
    : BudgetsRequest(new DeleteSubscriberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSubscriberRequest object.
 */
DeleteSubscriberRequest::DeleteSubscriberRequest()
    : BudgetsRequest(new DeleteSubscriberRequestPrivate(BudgetsRequest::DeleteSubscriberAction, this))
{

}

bool DeleteSubscriberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSubscriberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSubscriberResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * DeleteSubscriberRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubscriberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSubscriberRequestPrivate
 *
 * @brief  Private implementation for DeleteSubscriberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriberRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DeleteSubscriberRequest instance.
 */
DeleteSubscriberRequestPrivate::DeleteSubscriberRequestPrivate(
    const BudgetsRequest::Action action, DeleteSubscriberRequest * const q)
    : DeleteSubscriberPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubscriberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSubscriberRequest instance.
 */
DeleteSubscriberRequestPrivate::DeleteSubscriberRequestPrivate(
    const DeleteSubscriberRequestPrivate &other, DeleteSubscriberRequest * const q)
    : DeleteSubscriberPrivate(other, q)
{

}
