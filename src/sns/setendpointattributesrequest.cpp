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

#include "setendpointattributesrequest.h"
#include "setendpointattributesrequest_p.h"
#include "setendpointattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  SetEndpointAttributesRequest
 *
 * @brief  Implements SNS SetEndpointAttributes requests.
 *
 * @see    SNSClient::setEndpointAttributes
 */

/**
 * @brief  Constructs a new SetEndpointAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetEndpointAttributesRequest::SetEndpointAttributesRequest(const SetEndpointAttributesRequest &other)
    : SNSRequest(new SetEndpointAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetEndpointAttributesRequest object.
 */
SetEndpointAttributesRequest::SetEndpointAttributesRequest()
    : SNSRequest(new SetEndpointAttributesRequestPrivate(SNSRequest::SetEndpointAttributesAction, this))
{

}

bool SetEndpointAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetEndpointAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetEndpointAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * SetEndpointAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetEndpointAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetEndpointAttributesRequestPrivate
 *
 * @brief  Private implementation for SetEndpointAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetEndpointAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public SetEndpointAttributesRequest instance.
 */
SetEndpointAttributesRequestPrivate::SetEndpointAttributesRequestPrivate(
    const SNSRequest::Action action, SetEndpointAttributesRequest * const q)
    : SetEndpointAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetEndpointAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetEndpointAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetEndpointAttributesRequest instance.
 */
SetEndpointAttributesRequestPrivate::SetEndpointAttributesRequestPrivate(
    const SetEndpointAttributesRequestPrivate &other, SetEndpointAttributesRequest * const q)
    : SetEndpointAttributesPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
