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

#include "getsubscriptionattributesrequest.h"
#include "getsubscriptionattributesrequest_p.h"
#include "getsubscriptionattributesresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  GetSubscriptionAttributesRequest
 *
 * @brief  Implements SNS GetSubscriptionAttributes requests.
 *
 * @see    SNSClient::getSubscriptionAttributes
 */

/**
 * @brief  Constructs a new GetSubscriptionAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSubscriptionAttributesRequest::GetSubscriptionAttributesRequest(const GetSubscriptionAttributesRequest &other)
    : SNSRequest(new GetSubscriptionAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSubscriptionAttributesRequest object.
 */
GetSubscriptionAttributesRequest::GetSubscriptionAttributesRequest()
    : SNSRequest(new GetSubscriptionAttributesRequestPrivate(SNSRequest::GetSubscriptionAttributesAction, this))
{

}

bool GetSubscriptionAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSubscriptionAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSubscriptionAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * GetSubscriptionAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSubscriptionAttributesRequestPrivate
 *
 * @brief  Private implementation for GetSubscriptionAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public GetSubscriptionAttributesRequest instance.
 */
GetSubscriptionAttributesRequestPrivate::GetSubscriptionAttributesRequestPrivate(
    const SNSRequest::Action action, GetSubscriptionAttributesRequest * const q)
    : GetSubscriptionAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSubscriptionAttributesRequest instance.
 */
GetSubscriptionAttributesRequestPrivate::GetSubscriptionAttributesRequestPrivate(
    const GetSubscriptionAttributesRequestPrivate &other, GetSubscriptionAttributesRequest * const q)
    : GetSubscriptionAttributesPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
