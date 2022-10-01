// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
