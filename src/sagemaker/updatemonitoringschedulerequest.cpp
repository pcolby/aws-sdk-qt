// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemonitoringschedulerequest.h"
#include "updatemonitoringschedulerequest_p.h"
#include "updatemonitoringscheduleresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateMonitoringScheduleRequest
 * \brief The UpdateMonitoringScheduleRequest class provides an interface for SageMaker UpdateMonitoringSchedule requests.
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
 * \sa SageMakerClient::updateMonitoringSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMonitoringScheduleRequest::UpdateMonitoringScheduleRequest(const UpdateMonitoringScheduleRequest &other)
    : SageMakerRequest(new UpdateMonitoringScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMonitoringScheduleRequest object.
 */
UpdateMonitoringScheduleRequest::UpdateMonitoringScheduleRequest()
    : SageMakerRequest(new UpdateMonitoringScheduleRequestPrivate(SageMakerRequest::UpdateMonitoringScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMonitoringScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMonitoringScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMonitoringScheduleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMonitoringScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateMonitoringScheduleRequestPrivate
 * \brief The UpdateMonitoringScheduleRequestPrivate class provides private implementation for UpdateMonitoringScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateMonitoringScheduleRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateMonitoringScheduleRequestPrivate::UpdateMonitoringScheduleRequestPrivate(
    const SageMakerRequest::Action action, UpdateMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMonitoringScheduleRequest
 * class' copy constructor.
 */
UpdateMonitoringScheduleRequestPrivate::UpdateMonitoringScheduleRequestPrivate(
    const UpdateMonitoringScheduleRequestPrivate &other, UpdateMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
