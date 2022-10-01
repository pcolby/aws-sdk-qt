// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsentimentdetectionjobrequest.h"
#include "stopsentimentdetectionjobrequest_p.h"
#include "stopsentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopSentimentDetectionJobRequest
 * \brief The StopSentimentDetectionJobRequest class provides an interface for Comprehend StopSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopSentimentDetectionJobRequest::StopSentimentDetectionJobRequest(const StopSentimentDetectionJobRequest &other)
    : ComprehendRequest(new StopSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopSentimentDetectionJobRequest object.
 */
StopSentimentDetectionJobRequest::StopSentimentDetectionJobRequest()
    : ComprehendRequest(new StopSentimentDetectionJobRequestPrivate(ComprehendRequest::StopSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopSentimentDetectionJobRequestPrivate
 * \brief The StopSentimentDetectionJobRequestPrivate class provides private implementation for StopSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopSentimentDetectionJobRequestPrivate::StopSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopSentimentDetectionJobRequest
 * class' copy constructor.
 */
StopSentimentDetectionJobRequestPrivate::StopSentimentDetectionJobRequestPrivate(
    const StopSentimentDetectionJobRequestPrivate &other, StopSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
