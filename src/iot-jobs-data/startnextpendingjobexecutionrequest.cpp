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

/*!
 * \class QtAws::IoTJobsDataPlane::StartNextPendingJobExecutionRequest
 *
 * \brief The StartNextPendingJobExecutionRequest class provides an interface for IoTJobsDataPlane StartNextPendingJobExecution requests.
 *
 * \ingroup IoTJobsDataPlane
 *
 *  AWS IoT Jobs is a service that allows you to define a set of jobs — remote operations that are sent to and executed on
 *  one or more devices connected to AWS IoT. For example, you can define a job that instructs a set of devices to download
 *  and install application or firmware updates, reboot, rotate certificates, or perform remote troubleshooting
 * 
 *  operations>
 * 
 *  To create a job, you make a job document which is a description of the remote operations to be performed, and you
 *  specify a list of targets that should perform the operations. The targets can be individual things, thing groups or
 * 
 *  both>
 * 
 *  AWS IoT Jobs sends a message to inform the targets that a job is available. The target starts the execution of the job
 *  by downloading the job document, performing the operations it specifies, and reporting its progress to AWS IoT. The Jobs
 *  service provides commands to track the progress of a job on a specific target and for all the targets of the
 *
 * \sa IoTJobsDataPlaneClient::startNextPendingJobExecution
 */

/*!
 * @brief  Constructs a new StartNextPendingJobExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest(const StartNextPendingJobExecutionRequest &other)
    : IoTJobsDataPlaneRequest(new StartNextPendingJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartNextPendingJobExecutionRequest object.
 */
StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest()
    : IoTJobsDataPlaneRequest(new StartNextPendingJobExecutionRequestPrivate(IoTJobsDataPlaneRequest::StartNextPendingJobExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartNextPendingJobExecutionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartNextPendingJobExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartNextPendingJobExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTJobsDataPlaneClient::send
 */
QtAws::Core::AwsAbstractResponse * StartNextPendingJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartNextPendingJobExecutionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartNextPendingJobExecutionRequestPrivate
 *
 * @brief  Private implementation for StartNextPendingJobExecutionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartNextPendingJobExecutionRequestPrivate object.
 *
 * @param  action  IoTJobsDataPlane action being performed.
 * @param  q       Pointer to this object's public StartNextPendingJobExecutionRequest instance.
 */
StartNextPendingJobExecutionRequestPrivate::StartNextPendingJobExecutionRequestPrivate(
    const IoTJobsDataPlaneRequest::Action action, StartNextPendingJobExecutionRequest * const q)
    : IoTJobsDataPlaneRequestPrivate(action, q)
{

}

/*!
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
    : IoTJobsDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTJobsDataPlane
} // namespace QtAws
