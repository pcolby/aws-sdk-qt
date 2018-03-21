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

#include "createsubscriberrequest.h"
#include "createsubscriberrequest_p.h"
#include "createsubscriberresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  CreateSubscriberRequest
 *
 * @brief  Implements Budgets CreateSubscriber requests.
 *
 * @see    BudgetsClient::createSubscriber
 */

/**
 * @brief  Constructs a new CreateSubscriberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubscriberResponse::CreateSubscriberResponse(

/**
 * @brief  Constructs a new CreateSubscriberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSubscriberRequest::CreateSubscriberRequest(const CreateSubscriberRequest &other)
    : BudgetsRequest(new CreateSubscriberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSubscriberRequest object.
 */
CreateSubscriberRequest::CreateSubscriberRequest()
    : BudgetsRequest(new CreateSubscriberRequestPrivate(BudgetsRequest::CreateSubscriberAction, this))
{

}

bool CreateSubscriberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSubscriberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSubscriberResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * CreateSubscriberRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubscriberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSubscriberRequestPrivate
 *
 * @brief  Private implementation for CreateSubscriberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriberRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public CreateSubscriberRequest instance.
 */
CreateSubscriberRequestPrivate::CreateSubscriberRequestPrivate(
    const BudgetsRequest::Action action, CreateSubscriberRequest * const q)
    : CreateSubscriberPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubscriberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSubscriberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSubscriberRequest instance.
 */
CreateSubscriberRequestPrivate::CreateSubscriberRequestPrivate(
    const CreateSubscriberRequestPrivate &other, CreateSubscriberRequest * const q)
    : CreateSubscriberPrivate(other, q)
{

}

} // namespace Budgets
} // namespace AWS
