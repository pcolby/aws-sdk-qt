// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptargetedsentimentdetectionjobrequest.h"
#include "stoptargetedsentimentdetectionjobrequest_p.h"
#include "stoptargetedsentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopTargetedSentimentDetectionJobRequest
 * \brief The StopTargetedSentimentDetectionJobRequest class provides an interface for Comprehend StopTargetedSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopTargetedSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopTargetedSentimentDetectionJobRequest::StopTargetedSentimentDetectionJobRequest(const StopTargetedSentimentDetectionJobRequest &other)
    : ComprehendRequest(new StopTargetedSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTargetedSentimentDetectionJobRequest object.
 */
StopTargetedSentimentDetectionJobRequest::StopTargetedSentimentDetectionJobRequest()
    : ComprehendRequest(new StopTargetedSentimentDetectionJobRequestPrivate(ComprehendRequest::StopTargetedSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopTargetedSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTargetedSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTargetedSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopTargetedSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopTargetedSentimentDetectionJobRequestPrivate
 * \brief The StopTargetedSentimentDetectionJobRequestPrivate class provides private implementation for StopTargetedSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopTargetedSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopTargetedSentimentDetectionJobRequestPrivate::StopTargetedSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopTargetedSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTargetedSentimentDetectionJobRequest
 * class' copy constructor.
 */
StopTargetedSentimentDetectionJobRequestPrivate::StopTargetedSentimentDetectionJobRequestPrivate(
    const StopTargetedSentimentDetectionJobRequestPrivate &other, StopTargetedSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
