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

#include "getsegmentrequest.h"
#include "getsegmentrequest_p.h"
#include "getsegmentresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentRequest
 *
 * @brief  Implements Pinpoint GetSegment requests.
 *
 * @see    PinpointClient::getSegment
 */

/**
 * @brief  Constructs a new GetSegmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSegmentRequest::GetSegmentRequest(const GetSegmentRequest &other)
    : PinpointRequest(new GetSegmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSegmentRequest object.
 */
GetSegmentRequest::GetSegmentRequest()
    : PinpointRequest(new GetSegmentRequestPrivate(PinpointRequest::GetSegmentAction, this))
{

}

bool GetSegmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSegmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSegmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetSegmentRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSegmentRequestPrivate
 *
 * @brief  Private implementation for GetSegmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSegmentRequest instance.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const PinpointRequest::Action action, GetSegmentRequest * const q)
    : GetSegmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSegmentRequest instance.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const GetSegmentRequestPrivate &other, GetSegmentRequest * const q)
    : GetSegmentPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
