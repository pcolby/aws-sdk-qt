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

#include "getpendingjobexecutionsrequest.h"
#include "getpendingjobexecutionsrequest_p.h"
#include "getpendingjobexecutionsresponse.h"
#include "iotjobsdataplanerequest_p.h"

namespace AWS {
namespace IoTJobsDataPlane {

/**
 * @class  GetPendingJobExecutionsRequest
 *
 * @brief  Implements IoTJobsDataPlane GetPendingJobExecutions requests.
 *
 * @see    IoTJobsDataPlaneClient::getPendingJobExecutions
 */

/**
 * @brief  Constructs a new GetPendingJobExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPendingJobExecutionsRequest::GetPendingJobExecutionsRequest(const GetPendingJobExecutionsRequest &other)
    : IoTJobsDataPlaneRequest(new GetPendingJobExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPendingJobExecutionsRequest object.
 */
GetPendingJobExecutionsRequest::GetPendingJobExecutionsRequest()
    : IoTJobsDataPlaneRequest(new GetPendingJobExecutionsRequestPrivate(IoTJobsDataPlaneRequest::GetPendingJobExecutionsAction, this))
{

}

bool GetPendingJobExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPendingJobExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPendingJobExecutionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTJobsDataPlaneClient::send
 */
AwsAbstractResponse * GetPendingJobExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new GetPendingJobExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPendingJobExecutionsRequestPrivate
 *
 * @brief  Private implementation for GetPendingJobExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPendingJobExecutionsRequestPrivate object.
 *
 * @param  action  IoTJobsDataPlane action being performed.
 * @param  q       Pointer to this object's public GetPendingJobExecutionsRequest instance.
 */
GetPendingJobExecutionsRequestPrivate::GetPendingJobExecutionsRequestPrivate(
    const IoTJobsDataPlaneRequest::Action action, GetPendingJobExecutionsRequest * const q)
    : GetPendingJobExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPendingJobExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPendingJobExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPendingJobExecutionsRequest instance.
 */
GetPendingJobExecutionsRequestPrivate::GetPendingJobExecutionsRequestPrivate(
    const GetPendingJobExecutionsRequestPrivate &other, GetPendingJobExecutionsRequest * const q)
    : GetPendingJobExecutionsPrivate(other, q)
{

}

} // namespace IoTJobsDataPlane
} // namespace AWS
