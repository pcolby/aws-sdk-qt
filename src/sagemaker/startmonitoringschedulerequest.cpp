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

#include "startmonitoringschedulerequest.h"
#include "startmonitoringschedulerequest_p.h"
#include "startmonitoringscheduleresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartMonitoringScheduleRequest
 * \brief The StartMonitoringScheduleRequest class provides an interface for SageMaker StartMonitoringSchedule requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::startMonitoringSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
StartMonitoringScheduleRequest::StartMonitoringScheduleRequest(const StartMonitoringScheduleRequest &other)
    : SageMakerRequest(new StartMonitoringScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMonitoringScheduleRequest object.
 */
StartMonitoringScheduleRequest::StartMonitoringScheduleRequest()
    : SageMakerRequest(new StartMonitoringScheduleRequestPrivate(SageMakerRequest::StartMonitoringScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool StartMonitoringScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMonitoringScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMonitoringScheduleRequest::response(QNetworkReply * const reply) const
{
    return new StartMonitoringScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StartMonitoringScheduleRequestPrivate
 * \brief The StartMonitoringScheduleRequestPrivate class provides private implementation for StartMonitoringScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartMonitoringScheduleRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StartMonitoringScheduleRequestPrivate::StartMonitoringScheduleRequestPrivate(
    const SageMakerRequest::Action action, StartMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMonitoringScheduleRequest
 * class' copy constructor.
 */
StartMonitoringScheduleRequestPrivate::StartMonitoringScheduleRequestPrivate(
    const StartMonitoringScheduleRequestPrivate &other, StartMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
