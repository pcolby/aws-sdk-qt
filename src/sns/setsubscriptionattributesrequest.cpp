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

#include "setsubscriptionattributesrequest.h"
#include "setsubscriptionattributesrequest_p.h"
#include "setsubscriptionattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  SetSubscriptionAttributesRequest
 *
 * @brief  Implements SNS SetSubscriptionAttributes requests.
 *
 * @see    SNSClient::setSubscriptionAttributes
 */

/**
 * @brief  Constructs a new SetSubscriptionAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetSubscriptionAttributesRequest::SetSubscriptionAttributesRequest(const SetSubscriptionAttributesRequest &other)
    : SNSRequest(new SetSubscriptionAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetSubscriptionAttributesRequest object.
 */
SetSubscriptionAttributesRequest::SetSubscriptionAttributesRequest()
    : SNSRequest(new SetSubscriptionAttributesRequestPrivate(SNSRequest::SetSubscriptionAttributesAction, this))
{

}

bool SetSubscriptionAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetSubscriptionAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetSubscriptionAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * SetSubscriptionAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetSubscriptionAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetSubscriptionAttributesRequestPrivate
 *
 * @brief  Private implementation for SetSubscriptionAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetSubscriptionAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public SetSubscriptionAttributesRequest instance.
 */
SetSubscriptionAttributesRequestPrivate::SetSubscriptionAttributesRequestPrivate(
    const SNSRequest::Action action, SetSubscriptionAttributesRequest * const q)
    : SetSubscriptionAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetSubscriptionAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetSubscriptionAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetSubscriptionAttributesRequest instance.
 */
SetSubscriptionAttributesRequestPrivate::SetSubscriptionAttributesRequestPrivate(
    const SetSubscriptionAttributesRequestPrivate &other, SetSubscriptionAttributesRequest * const q)
    : SetSubscriptionAttributesPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
