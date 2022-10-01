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

#include "describetargetedsentimentdetectionjobrequest.h"
#include "describetargetedsentimentdetectionjobrequest_p.h"
#include "describetargetedsentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeTargetedSentimentDetectionJobRequest
 * \brief The DescribeTargetedSentimentDetectionJobRequest class provides an interface for Comprehend DescribeTargetedSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeTargetedSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTargetedSentimentDetectionJobRequest::DescribeTargetedSentimentDetectionJobRequest(const DescribeTargetedSentimentDetectionJobRequest &other)
    : ComprehendRequest(new DescribeTargetedSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTargetedSentimentDetectionJobRequest object.
 */
DescribeTargetedSentimentDetectionJobRequest::DescribeTargetedSentimentDetectionJobRequest()
    : ComprehendRequest(new DescribeTargetedSentimentDetectionJobRequestPrivate(ComprehendRequest::DescribeTargetedSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTargetedSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTargetedSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTargetedSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTargetedSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeTargetedSentimentDetectionJobRequestPrivate
 * \brief The DescribeTargetedSentimentDetectionJobRequestPrivate class provides private implementation for DescribeTargetedSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeTargetedSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeTargetedSentimentDetectionJobRequestPrivate::DescribeTargetedSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeTargetedSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTargetedSentimentDetectionJobRequest
 * class' copy constructor.
 */
DescribeTargetedSentimentDetectionJobRequestPrivate::DescribeTargetedSentimentDetectionJobRequestPrivate(
    const DescribeTargetedSentimentDetectionJobRequestPrivate &other, DescribeTargetedSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
