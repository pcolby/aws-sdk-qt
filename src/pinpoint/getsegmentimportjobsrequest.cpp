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

#include "getsegmentimportjobsrequest.h"
#include "getsegmentimportjobsrequest_p.h"
#include "getsegmentimportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentImportJobsRequest
 *
 * @brief  Implements Pinpoint GetSegmentImportJobs requests.
 *
 * @see    PinpointClient::getSegmentImportJobs
 */

/**
 * @brief  Constructs a new GetSegmentImportJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentImportJobsResponse::GetSegmentImportJobsResponse(

/**
 * @brief  Constructs a new GetSegmentImportJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSegmentImportJobsRequest::GetSegmentImportJobsRequest(const GetSegmentImportJobsRequest &other)
    : PinpointRequest(new GetSegmentImportJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSegmentImportJobsRequest object.
 */
GetSegmentImportJobsRequest::GetSegmentImportJobsRequest()
    : PinpointRequest(new GetSegmentImportJobsRequestPrivate(PinpointRequest::GetSegmentImportJobsAction, this))
{

}

bool GetSegmentImportJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSegmentImportJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSegmentImportJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetSegmentImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentImportJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSegmentImportJobsRequestPrivate
 *
 * @brief  Private implementation for GetSegmentImportJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentImportJobsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSegmentImportJobsRequest instance.
 */
GetSegmentImportJobsRequestPrivate::GetSegmentImportJobsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentImportJobsRequest * const q)
    : GetSegmentImportJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentImportJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentImportJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSegmentImportJobsRequest instance.
 */
GetSegmentImportJobsRequestPrivate::GetSegmentImportJobsRequestPrivate(
    const GetSegmentImportJobsRequestPrivate &other, GetSegmentImportJobsRequest * const q)
    : GetSegmentImportJobsPrivate(other, q)
{

}
