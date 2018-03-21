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

#include "enablevgwroutepropagationrequest.h"
#include "enablevgwroutepropagationrequest_p.h"
#include "enablevgwroutepropagationresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  EnableVgwRoutePropagationRequest
 *
 * @brief  Implements EC2 EnableVgwRoutePropagation requests.
 *
 * @see    EC2Client::enableVgwRoutePropagation
 */

/**
 * @brief  Constructs a new EnableVgwRoutePropagationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableVgwRoutePropagationResponse::EnableVgwRoutePropagationResponse(

/**
 * @brief  Constructs a new EnableVgwRoutePropagationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableVgwRoutePropagationRequest::EnableVgwRoutePropagationRequest(const EnableVgwRoutePropagationRequest &other)
    : EC2Request(new EnableVgwRoutePropagationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableVgwRoutePropagationRequest object.
 */
EnableVgwRoutePropagationRequest::EnableVgwRoutePropagationRequest()
    : EC2Request(new EnableVgwRoutePropagationRequestPrivate(EC2Request::EnableVgwRoutePropagationAction, this))
{

}

bool EnableVgwRoutePropagationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableVgwRoutePropagationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableVgwRoutePropagationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * EnableVgwRoutePropagationRequest::response(QNetworkReply * const reply) const
{
    return new EnableVgwRoutePropagationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableVgwRoutePropagationRequestPrivate
 *
 * @brief  Private implementation for EnableVgwRoutePropagationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableVgwRoutePropagationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public EnableVgwRoutePropagationRequest instance.
 */
EnableVgwRoutePropagationRequestPrivate::EnableVgwRoutePropagationRequestPrivate(
    const EC2Request::Action action, EnableVgwRoutePropagationRequest * const q)
    : EnableVgwRoutePropagationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableVgwRoutePropagationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableVgwRoutePropagationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableVgwRoutePropagationRequest instance.
 */
EnableVgwRoutePropagationRequestPrivate::EnableVgwRoutePropagationRequestPrivate(
    const EnableVgwRoutePropagationRequestPrivate &other, EnableVgwRoutePropagationRequest * const q)
    : EnableVgwRoutePropagationPrivate(other, q)
{

}
