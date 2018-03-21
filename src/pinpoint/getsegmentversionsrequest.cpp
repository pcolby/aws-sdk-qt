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

#include "getsegmentversionsrequest.h"
#include "getsegmentversionsrequest_p.h"
#include "getsegmentversionsresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentVersionsRequest
 *
 * @brief  Implements Pinpoint GetSegmentVersions requests.
 *
 * @see    PinpointClient::getSegmentVersions
 */

/**
 * @brief  Constructs a new GetSegmentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentVersionsResponse::GetSegmentVersionsResponse(

/**
 * @brief  Constructs a new GetSegmentVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSegmentVersionsRequest::GetSegmentVersionsRequest(const GetSegmentVersionsRequest &other)
    : PinpointRequest(new GetSegmentVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSegmentVersionsRequest object.
 */
GetSegmentVersionsRequest::GetSegmentVersionsRequest()
    : PinpointRequest(new GetSegmentVersionsRequestPrivate(PinpointRequest::GetSegmentVersionsAction, this))
{

}

bool GetSegmentVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSegmentVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSegmentVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetSegmentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSegmentVersionsRequestPrivate
 *
 * @brief  Private implementation for GetSegmentVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentVersionsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSegmentVersionsRequest instance.
 */
GetSegmentVersionsRequestPrivate::GetSegmentVersionsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentVersionsRequest * const q)
    : GetSegmentVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSegmentVersionsRequest instance.
 */
GetSegmentVersionsRequestPrivate::GetSegmentVersionsRequestPrivate(
    const GetSegmentVersionsRequestPrivate &other, GetSegmentVersionsRequest * const q)
    : GetSegmentVersionsPrivate(other, q)
{

}
