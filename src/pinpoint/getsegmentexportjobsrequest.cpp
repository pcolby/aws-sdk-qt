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

#include "getsegmentexportjobsrequest.h"
#include "getsegmentexportjobsrequest_p.h"
#include "getsegmentexportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentExportJobsRequest
 *
 * @brief  Implements Pinpoint GetSegmentExportJobs requests.
 *
 * @see    PinpointClient::getSegmentExportJobs
 */

/**
 * @brief  Constructs a new GetSegmentExportJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSegmentExportJobsRequest::GetSegmentExportJobsRequest(const GetSegmentExportJobsRequest &other)
    : PinpointRequest(new GetSegmentExportJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSegmentExportJobsRequest object.
 */
GetSegmentExportJobsRequest::GetSegmentExportJobsRequest()
    : PinpointRequest(new GetSegmentExportJobsRequestPrivate(PinpointRequest::GetSegmentExportJobsAction, this))
{

}

bool GetSegmentExportJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSegmentExportJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSegmentExportJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetSegmentExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentExportJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSegmentExportJobsRequestPrivate
 *
 * @brief  Private implementation for GetSegmentExportJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentExportJobsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSegmentExportJobsRequest instance.
 */
GetSegmentExportJobsRequestPrivate::GetSegmentExportJobsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentExportJobsRequest * const q)
    : GetSegmentExportJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentExportJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentExportJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSegmentExportJobsRequest instance.
 */
GetSegmentExportJobsRequestPrivate::GetSegmentExportJobsRequestPrivate(
    const GetSegmentExportJobsRequestPrivate &other, GetSegmentExportJobsRequest * const q)
    : GetSegmentExportJobsPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
