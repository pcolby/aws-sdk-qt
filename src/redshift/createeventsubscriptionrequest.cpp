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

#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionrequest_p.h"
#include "createeventsubscriptionresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  CreateEventSubscriptionRequest
 *
 * @brief  Implements Redshift CreateEventSubscription requests.
 *
 * @see    RedshiftClient::createEventSubscription
 */

/**
 * @brief  Constructs a new CreateEventSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest(const CreateEventSubscriptionRequest &other)
    : RedshiftRequest(new CreateEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateEventSubscriptionRequest object.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest()
    : RedshiftRequest(new CreateEventSubscriptionRequestPrivate(RedshiftRequest::CreateEventSubscriptionAction, this))
{

}

bool CreateEventSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateEventSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEventSubscriptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateEventSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateEventSubscriptionRequestPrivate
 *
 * @brief  Private implementation for CreateEventSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEventSubscriptionRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateEventSubscriptionRequest instance.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const RedshiftRequest::Action action, CreateEventSubscriptionRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateEventSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEventSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEventSubscriptionRequest instance.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const CreateEventSubscriptionRequestPrivate &other, CreateEventSubscriptionRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
