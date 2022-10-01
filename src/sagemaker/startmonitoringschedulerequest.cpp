// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
