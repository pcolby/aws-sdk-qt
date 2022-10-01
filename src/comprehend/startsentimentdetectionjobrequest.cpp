// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsentimentdetectionjobrequest.h"
#include "startsentimentdetectionjobrequest_p.h"
#include "startsentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartSentimentDetectionJobRequest
 * \brief The StartSentimentDetectionJobRequest class provides an interface for Comprehend StartSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartSentimentDetectionJobRequest::StartSentimentDetectionJobRequest(const StartSentimentDetectionJobRequest &other)
    : ComprehendRequest(new StartSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSentimentDetectionJobRequest object.
 */
StartSentimentDetectionJobRequest::StartSentimentDetectionJobRequest()
    : ComprehendRequest(new StartSentimentDetectionJobRequestPrivate(ComprehendRequest::StartSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartSentimentDetectionJobRequestPrivate
 * \brief The StartSentimentDetectionJobRequestPrivate class provides private implementation for StartSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartSentimentDetectionJobRequestPrivate::StartSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSentimentDetectionJobRequest
 * class' copy constructor.
 */
StartSentimentDetectionJobRequestPrivate::StartSentimentDetectionJobRequestPrivate(
    const StartSentimentDetectionJobRequestPrivate &other, StartSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
