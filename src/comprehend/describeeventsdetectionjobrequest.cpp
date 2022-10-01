// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsdetectionjobrequest.h"
#include "describeeventsdetectionjobrequest_p.h"
#include "describeeventsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEventsDetectionJobRequest
 * \brief The DescribeEventsDetectionJobRequest class provides an interface for Comprehend DescribeEventsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEventsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventsDetectionJobRequest::DescribeEventsDetectionJobRequest(const DescribeEventsDetectionJobRequest &other)
    : ComprehendRequest(new DescribeEventsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventsDetectionJobRequest object.
 */
DescribeEventsDetectionJobRequest::DescribeEventsDetectionJobRequest()
    : ComprehendRequest(new DescribeEventsDetectionJobRequestPrivate(ComprehendRequest::DescribeEventsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeEventsDetectionJobRequestPrivate
 * \brief The DescribeEventsDetectionJobRequestPrivate class provides private implementation for DescribeEventsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEventsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeEventsDetectionJobRequestPrivate::DescribeEventsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventsDetectionJobRequest
 * class' copy constructor.
 */
DescribeEventsDetectionJobRequestPrivate::DescribeEventsDetectionJobRequestPrivate(
    const DescribeEventsDetectionJobRequestPrivate &other, DescribeEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
