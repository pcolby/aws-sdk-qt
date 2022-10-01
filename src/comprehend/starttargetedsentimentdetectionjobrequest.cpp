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

#include "starttargetedsentimentdetectionjobrequest.h"
#include "starttargetedsentimentdetectionjobrequest_p.h"
#include "starttargetedsentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartTargetedSentimentDetectionJobRequest
 * \brief The StartTargetedSentimentDetectionJobRequest class provides an interface for Comprehend StartTargetedSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startTargetedSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartTargetedSentimentDetectionJobRequest::StartTargetedSentimentDetectionJobRequest(const StartTargetedSentimentDetectionJobRequest &other)
    : ComprehendRequest(new StartTargetedSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTargetedSentimentDetectionJobRequest object.
 */
StartTargetedSentimentDetectionJobRequest::StartTargetedSentimentDetectionJobRequest()
    : ComprehendRequest(new StartTargetedSentimentDetectionJobRequestPrivate(ComprehendRequest::StartTargetedSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTargetedSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTargetedSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTargetedSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTargetedSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartTargetedSentimentDetectionJobRequestPrivate
 * \brief The StartTargetedSentimentDetectionJobRequestPrivate class provides private implementation for StartTargetedSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartTargetedSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartTargetedSentimentDetectionJobRequestPrivate::StartTargetedSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartTargetedSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTargetedSentimentDetectionJobRequest
 * class' copy constructor.
 */
StartTargetedSentimentDetectionJobRequestPrivate::StartTargetedSentimentDetectionJobRequestPrivate(
    const StartTargetedSentimentDetectionJobRequestPrivate &other, StartTargetedSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
