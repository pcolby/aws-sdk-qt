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

#include "addsourceidentifiertosubscriptionrequest.h"
#include "addsourceidentifiertosubscriptionrequest_p.h"
#include "addsourceidentifiertosubscriptionresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  AddSourceIdentifierToSubscriptionRequest
 *
 * @brief  Implements RDS AddSourceIdentifierToSubscription requests.
 *
 * @see    RDSClient::addSourceIdentifierToSubscription
 */

/**
 * @brief  Constructs a new AddSourceIdentifierToSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest(const AddSourceIdentifierToSubscriptionRequest &other)
    : RDSRequest(new AddSourceIdentifierToSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddSourceIdentifierToSubscriptionRequest object.
 */
AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest()
    : RDSRequest(new AddSourceIdentifierToSubscriptionRequestPrivate(RDSRequest::AddSourceIdentifierToSubscriptionAction, this))
{

}

bool AddSourceIdentifierToSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddSourceIdentifierToSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddSourceIdentifierToSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * AddSourceIdentifierToSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new AddSourceIdentifierToSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddSourceIdentifierToSubscriptionRequestPrivate
 *
 * @brief  Private implementation for AddSourceIdentifierToSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddSourceIdentifierToSubscriptionRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public AddSourceIdentifierToSubscriptionRequest instance.
 */
AddSourceIdentifierToSubscriptionRequestPrivate::AddSourceIdentifierToSubscriptionRequestPrivate(
    const RDSRequest::Action action, AddSourceIdentifierToSubscriptionRequest * const q)
    : AddSourceIdentifierToSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddSourceIdentifierToSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddSourceIdentifierToSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddSourceIdentifierToSubscriptionRequest instance.
 */
AddSourceIdentifierToSubscriptionRequestPrivate::AddSourceIdentifierToSubscriptionRequestPrivate(
    const AddSourceIdentifierToSubscriptionRequestPrivate &other, AddSourceIdentifierToSubscriptionRequest * const q)
    : AddSourceIdentifierToSubscriptionPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
