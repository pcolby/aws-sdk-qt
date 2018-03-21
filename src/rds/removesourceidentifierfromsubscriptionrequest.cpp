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

#include "removesourceidentifierfromsubscriptionrequest.h"
#include "removesourceidentifierfromsubscriptionrequest_p.h"
#include "removesourceidentifierfromsubscriptionresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  RemoveSourceIdentifierFromSubscriptionRequest
 *
 * @brief  Implements RDS RemoveSourceIdentifierFromSubscription requests.
 *
 * @see    RDSClient::removeSourceIdentifierFromSubscription
 */

/**
 * @brief  Constructs a new RemoveSourceIdentifierFromSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveSourceIdentifierFromSubscriptionResponse::RemoveSourceIdentifierFromSubscriptionResponse(

/**
 * @brief  Constructs a new RemoveSourceIdentifierFromSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveSourceIdentifierFromSubscriptionRequest::RemoveSourceIdentifierFromSubscriptionRequest(const RemoveSourceIdentifierFromSubscriptionRequest &other)
    : RDSRequest(new RemoveSourceIdentifierFromSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveSourceIdentifierFromSubscriptionRequest object.
 */
RemoveSourceIdentifierFromSubscriptionRequest::RemoveSourceIdentifierFromSubscriptionRequest()
    : RDSRequest(new RemoveSourceIdentifierFromSubscriptionRequestPrivate(RDSRequest::RemoveSourceIdentifierFromSubscriptionAction, this))
{

}

bool RemoveSourceIdentifierFromSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveSourceIdentifierFromSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveSourceIdentifierFromSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * RemoveSourceIdentifierFromSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new RemoveSourceIdentifierFromSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveSourceIdentifierFromSubscriptionRequestPrivate
 *
 * @brief  Private implementation for RemoveSourceIdentifierFromSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveSourceIdentifierFromSubscriptionRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RemoveSourceIdentifierFromSubscriptionRequest instance.
 */
RemoveSourceIdentifierFromSubscriptionRequestPrivate::RemoveSourceIdentifierFromSubscriptionRequestPrivate(
    const RDSRequest::Action action, RemoveSourceIdentifierFromSubscriptionRequest * const q)
    : RemoveSourceIdentifierFromSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveSourceIdentifierFromSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveSourceIdentifierFromSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveSourceIdentifierFromSubscriptionRequest instance.
 */
RemoveSourceIdentifierFromSubscriptionRequestPrivate::RemoveSourceIdentifierFromSubscriptionRequestPrivate(
    const RemoveSourceIdentifierFromSubscriptionRequestPrivate &other, RemoveSourceIdentifierFromSubscriptionRequest * const q)
    : RemoveSourceIdentifierFromSubscriptionPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
