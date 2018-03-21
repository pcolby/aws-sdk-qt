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

#include "getsegmentsrequest.h"
#include "getsegmentsrequest_p.h"
#include "getsegmentsresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentsRequest
 *
 * @brief  Implements Pinpoint GetSegments requests.
 *
 * @see    PinpointClient::getSegments
 */

/**
 * @brief  Constructs a new GetSegmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSegmentsRequest::GetSegmentsRequest(const GetSegmentsRequest &other)
    : PinpointRequest(new GetSegmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSegmentsRequest object.
 */
GetSegmentsRequest::GetSegmentsRequest()
    : PinpointRequest(new GetSegmentsRequestPrivate(PinpointRequest::GetSegmentsAction, this))
{

}

bool GetSegmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSegmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSegmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetSegmentsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSegmentsRequestPrivate
 *
 * @brief  Private implementation for GetSegmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSegmentsRequest instance.
 */
GetSegmentsRequestPrivate::GetSegmentsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentsRequest * const q)
    : GetSegmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSegmentsRequest instance.
 */
GetSegmentsRequestPrivate::GetSegmentsRequestPrivate(
    const GetSegmentsRequestPrivate &other, GetSegmentsRequest * const q)
    : GetSegmentsPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
