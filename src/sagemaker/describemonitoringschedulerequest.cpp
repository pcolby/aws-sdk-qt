// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemonitoringschedulerequest.h"
#include "describemonitoringschedulerequest_p.h"
#include "describemonitoringscheduleresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeMonitoringScheduleRequest
 * \brief The DescribeMonitoringScheduleRequest class provides an interface for SageMaker DescribeMonitoringSchedule requests.
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
 * \sa SageMakerClient::describeMonitoringSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMonitoringScheduleRequest::DescribeMonitoringScheduleRequest(const DescribeMonitoringScheduleRequest &other)
    : SageMakerRequest(new DescribeMonitoringScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMonitoringScheduleRequest object.
 */
DescribeMonitoringScheduleRequest::DescribeMonitoringScheduleRequest()
    : SageMakerRequest(new DescribeMonitoringScheduleRequestPrivate(SageMakerRequest::DescribeMonitoringScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMonitoringScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMonitoringScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMonitoringScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMonitoringScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeMonitoringScheduleRequestPrivate
 * \brief The DescribeMonitoringScheduleRequestPrivate class provides private implementation for DescribeMonitoringScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeMonitoringScheduleRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeMonitoringScheduleRequestPrivate::DescribeMonitoringScheduleRequestPrivate(
    const SageMakerRequest::Action action, DescribeMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMonitoringScheduleRequest
 * class' copy constructor.
 */
DescribeMonitoringScheduleRequestPrivate::DescribeMonitoringScheduleRequestPrivate(
    const DescribeMonitoringScheduleRequestPrivate &other, DescribeMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
