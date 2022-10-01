// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
