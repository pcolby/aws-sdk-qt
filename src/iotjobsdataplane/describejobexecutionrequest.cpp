/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describejobexecutionrequest.h"
#include "describejobexecutionrequest_p.h"
#include "describejobexecutionresponse.h"
#include "iotjobsdataplanerequest_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::DescribeJobExecutionRequest
 * \brief The DescribeJobExecutionRequest class provides an interface for IoTJobsDataPlane DescribeJobExecution requests.
 *
 * \inmodule QtAwsIoTJobsDataPlane
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
 * \sa IoTJobsDataPlaneClient::describeJobExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobExecutionRequest::DescribeJobExecutionRequest(const DescribeJobExecutionRequest &other)
    : IoTJobsDataPlaneRequest(new DescribeJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobExecutionRequest object.
 */
DescribeJobExecutionRequest::DescribeJobExecutionRequest()
    : IoTJobsDataPlaneRequest(new DescribeJobExecutionRequestPrivate(IoTJobsDataPlaneRequest::DescribeJobExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::IoTJobsDataPlane::DescribeJobExecutionRequestPrivate
 * \brief The DescribeJobExecutionRequestPrivate class provides private implementation for DescribeJobExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a DescribeJobExecutionRequestPrivate object for IoTJobsDataPlane \a action,
 * with public implementation \a q.
 */
DescribeJobExecutionRequestPrivate::DescribeJobExecutionRequestPrivate(
    const IoTJobsDataPlaneRequest::Action action, DescribeJobExecutionRequest * const q)
    : IoTJobsDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobExecutionRequest
 * class' copy constructor.
 */
DescribeJobExecutionRequestPrivate::DescribeJobExecutionRequestPrivate(
    const DescribeJobExecutionRequestPrivate &other, DescribeJobExecutionRequest * const q)
    : IoTJobsDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTJobsDataPlane
} // namespace QtAws
