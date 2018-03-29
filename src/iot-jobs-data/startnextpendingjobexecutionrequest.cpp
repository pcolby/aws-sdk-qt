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

#include "startnextpendingjobexecutionrequest.h"
#include "startnextpendingjobexecutionrequest_p.h"
#include "startnextpendingjobexecutionresponse.h"
#include "iotjobsdataplanerequest_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

/**
 * @class  StartNextPendingJobExecutionRequest
 *
 * @brief  Implements IoTJobsDataPlane StartNextPendingJobExecution requests.
 *
 * @see    IoTJobsDataPlaneClient::startNextPendingJobExecution
 */

/**
 * @brief  Constructs a new StartNextPendingJobExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest(const StartNextPendingJobExecutionRequest &other)
    : IoTJobsDataPlaneRequest(new StartNextPendingJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartNextPendingJobExecutionRequest object.
 */
StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest()
    : IoTJobsDataPlaneRequest(new StartNextPendingJobExecutionRequestPrivate(IoTJobsDataPlaneRequest::StartNextPendingJobExecutionAction, this))
{

}

bool StartNextPendingJobExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartNextPendingJobExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartNextPendingJobExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTJobsDataPlaneClient::send
 */
AwsAbstractResponse * StartNextPendingJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartNextPendingJobExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartNextPendingJobExecutionRequestPrivate
 *
 * @brief  Private implementation for StartNextPendingJobExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartNextPendingJobExecutionRequestPrivate object.
 *
 * @param  action  IoTJobsDataPlane action being performed.
 * @param  q       Pointer to this object's public StartNextPendingJobExecutionRequest instance.
 */
StartNextPendingJobExecutionRequestPrivate::StartNextPendingJobExecutionRequestPrivate(
    const IoTJobsDataPlaneRequest::Action action, StartNextPendingJobExecutionRequest * const q)
    : StartNextPendingJobExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartNextPendingJobExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartNextPendingJobExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartNextPendingJobExecutionRequest instance.
 */
StartNextPendingJobExecutionRequestPrivate::StartNextPendingJobExecutionRequestPrivate(
    const StartNextPendingJobExecutionRequestPrivate &other, StartNextPendingJobExecutionRequest * const q)
    : StartNextPendingJobExecutionPrivate(other, q)
{

}

} // namespace IoTJobsDataPlane
} // namespace QtAws
