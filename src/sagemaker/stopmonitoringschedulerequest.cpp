/*
    Copyright 2013-2021 Paul Colby

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

#include "stopmonitoringschedulerequest.h"
#include "stopmonitoringschedulerequest_p.h"
#include "stopmonitoringscheduleresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopMonitoringScheduleRequest
 * \brief The StopMonitoringScheduleRequest class provides an interface for SageMaker StopMonitoringSchedule requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::stopMonitoringSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
StopMonitoringScheduleRequest::StopMonitoringScheduleRequest(const StopMonitoringScheduleRequest &other)
    : SageMakerRequest(new StopMonitoringScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopMonitoringScheduleRequest object.
 */
StopMonitoringScheduleRequest::StopMonitoringScheduleRequest()
    : SageMakerRequest(new StopMonitoringScheduleRequestPrivate(SageMakerRequest::StopMonitoringScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool StopMonitoringScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopMonitoringScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopMonitoringScheduleRequest::response(QNetworkReply * const reply) const
{
    return new StopMonitoringScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopMonitoringScheduleRequestPrivate
 * \brief The StopMonitoringScheduleRequestPrivate class provides private implementation for StopMonitoringScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopMonitoringScheduleRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopMonitoringScheduleRequestPrivate::StopMonitoringScheduleRequestPrivate(
    const SageMakerRequest::Action action, StopMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopMonitoringScheduleRequest
 * class' copy constructor.
 */
StopMonitoringScheduleRequestPrivate::StopMonitoringScheduleRequestPrivate(
    const StopMonitoringScheduleRequestPrivate &other, StopMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
