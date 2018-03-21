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

#include "getsegmentversionrequest.h"
#include "getsegmentversionrequest_p.h"
#include "getsegmentversionresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentVersionRequest
 *
 * @brief  Implements Pinpoint GetSegmentVersion requests.
 *
 * @see    PinpointClient::getSegmentVersion
 */

/**
 * @brief  Constructs a new GetSegmentVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSegmentVersionRequest::GetSegmentVersionRequest(const GetSegmentVersionRequest &other)
    : PinpointRequest(new GetSegmentVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSegmentVersionRequest object.
 */
GetSegmentVersionRequest::GetSegmentVersionRequest()
    : PinpointRequest(new GetSegmentVersionRequestPrivate(PinpointRequest::GetSegmentVersionAction, this))
{

}

bool GetSegmentVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSegmentVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSegmentVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetSegmentVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSegmentVersionRequestPrivate
 *
 * @brief  Private implementation for GetSegmentVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentVersionRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSegmentVersionRequest instance.
 */
GetSegmentVersionRequestPrivate::GetSegmentVersionRequestPrivate(
    const PinpointRequest::Action action, GetSegmentVersionRequest * const q)
    : GetSegmentVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSegmentVersionRequest instance.
 */
GetSegmentVersionRequestPrivate::GetSegmentVersionRequestPrivate(
    const GetSegmentVersionRequestPrivate &other, GetSegmentVersionRequest * const q)
    : GetSegmentVersionPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
