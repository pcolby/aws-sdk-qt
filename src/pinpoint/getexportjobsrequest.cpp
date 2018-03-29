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

#include "getexportjobsrequest.h"
#include "getexportjobsrequest_p.h"
#include "getexportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetExportJobsRequest
 *
 * @brief  Implements Pinpoint GetExportJobs requests.
 *
 * @see    PinpointClient::getExportJobs
 */

/**
 * @brief  Constructs a new GetExportJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetExportJobsRequest::GetExportJobsRequest(const GetExportJobsRequest &other)
    : PinpointRequest(new GetExportJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetExportJobsRequest object.
 */
GetExportJobsRequest::GetExportJobsRequest()
    : PinpointRequest(new GetExportJobsRequestPrivate(PinpointRequest::GetExportJobsAction, this))
{

}

bool GetExportJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetExportJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetExportJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetExportJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetExportJobsRequestPrivate
 *
 * @brief  Private implementation for GetExportJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetExportJobsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetExportJobsRequest instance.
 */
GetExportJobsRequestPrivate::GetExportJobsRequestPrivate(
    const PinpointRequest::Action action, GetExportJobsRequest * const q)
    : GetExportJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetExportJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetExportJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetExportJobsRequest instance.
 */
GetExportJobsRequestPrivate::GetExportJobsRequestPrivate(
    const GetExportJobsRequestPrivate &other, GetExportJobsRequest * const q)
    : GetExportJobsPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
