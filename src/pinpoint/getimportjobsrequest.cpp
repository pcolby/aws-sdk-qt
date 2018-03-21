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

#include "getimportjobsrequest.h"
#include "getimportjobsrequest_p.h"
#include "getimportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetImportJobsRequest
 *
 * @brief  Implements Pinpoint GetImportJobs requests.
 *
 * @see    PinpointClient::getImportJobs
 */

/**
 * @brief  Constructs a new GetImportJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetImportJobsRequest::GetImportJobsRequest(const GetImportJobsRequest &other)
    : PinpointRequest(new GetImportJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetImportJobsRequest object.
 */
GetImportJobsRequest::GetImportJobsRequest()
    : PinpointRequest(new GetImportJobsRequestPrivate(PinpointRequest::GetImportJobsAction, this))
{

}

bool GetImportJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetImportJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetImportJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetImportJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetImportJobsRequestPrivate
 *
 * @brief  Private implementation for GetImportJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetImportJobsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetImportJobsRequest instance.
 */
GetImportJobsRequestPrivate::GetImportJobsRequestPrivate(
    const PinpointRequest::Action action, GetImportJobsRequest * const q)
    : GetImportJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetImportJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetImportJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetImportJobsRequest instance.
 */
GetImportJobsRequestPrivate::GetImportJobsRequestPrivate(
    const GetImportJobsRequestPrivate &other, GetImportJobsRequest * const q)
    : GetImportJobsPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
