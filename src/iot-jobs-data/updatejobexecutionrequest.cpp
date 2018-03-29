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

#include "updatejobexecutionrequest.h"
#include "updatejobexecutionrequest_p.h"
#include "updatejobexecutionresponse.h"
#include "iotjobsdataplanerequest_p.h"

namespace AWS {
namespace IoTJobsDataPlane {

/**
 * @class  UpdateJobExecutionRequest
 *
 * @brief  Implements IoTJobsDataPlane UpdateJobExecution requests.
 *
 * @see    IoTJobsDataPlaneClient::updateJobExecution
 */

/**
 * @brief  Constructs a new UpdateJobExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateJobExecutionRequest::UpdateJobExecutionRequest(const UpdateJobExecutionRequest &other)
    : IoTJobsDataPlaneRequest(new UpdateJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateJobExecutionRequest object.
 */
UpdateJobExecutionRequest::UpdateJobExecutionRequest()
    : IoTJobsDataPlaneRequest(new UpdateJobExecutionRequestPrivate(IoTJobsDataPlaneRequest::UpdateJobExecutionAction, this))
{

}

bool UpdateJobExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateJobExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateJobExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTJobsDataPlaneClient::send
 */
AwsAbstractResponse * UpdateJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateJobExecutionRequestPrivate
 *
 * @brief  Private implementation for UpdateJobExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobExecutionRequestPrivate object.
 *
 * @param  action  IoTJobsDataPlane action being performed.
 * @param  q       Pointer to this object's public UpdateJobExecutionRequest instance.
 */
UpdateJobExecutionRequestPrivate::UpdateJobExecutionRequestPrivate(
    const IoTJobsDataPlaneRequest::Action action, UpdateJobExecutionRequest * const q)
    : UpdateJobExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateJobExecutionRequest instance.
 */
UpdateJobExecutionRequestPrivate::UpdateJobExecutionRequestPrivate(
    const UpdateJobExecutionRequestPrivate &other, UpdateJobExecutionRequest * const q)
    : UpdateJobExecutionPrivate(other, q)
{

}

} // namespace IoTJobsDataPlane
} // namespace AWS
