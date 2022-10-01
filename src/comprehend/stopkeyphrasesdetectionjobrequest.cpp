// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopkeyphrasesdetectionjobrequest.h"
#include "stopkeyphrasesdetectionjobrequest_p.h"
#include "stopkeyphrasesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopKeyPhrasesDetectionJobRequest
 * \brief The StopKeyPhrasesDetectionJobRequest class provides an interface for Comprehend StopKeyPhrasesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopKeyPhrasesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopKeyPhrasesDetectionJobRequest::StopKeyPhrasesDetectionJobRequest(const StopKeyPhrasesDetectionJobRequest &other)
    : ComprehendRequest(new StopKeyPhrasesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopKeyPhrasesDetectionJobRequest object.
 */
StopKeyPhrasesDetectionJobRequest::StopKeyPhrasesDetectionJobRequest()
    : ComprehendRequest(new StopKeyPhrasesDetectionJobRequestPrivate(ComprehendRequest::StopKeyPhrasesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopKeyPhrasesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopKeyPhrasesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopKeyPhrasesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopKeyPhrasesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopKeyPhrasesDetectionJobRequestPrivate
 * \brief The StopKeyPhrasesDetectionJobRequestPrivate class provides private implementation for StopKeyPhrasesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopKeyPhrasesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopKeyPhrasesDetectionJobRequestPrivate::StopKeyPhrasesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopKeyPhrasesDetectionJobRequest
 * class' copy constructor.
 */
StopKeyPhrasesDetectionJobRequestPrivate::StopKeyPhrasesDetectionJobRequestPrivate(
    const StopKeyPhrasesDetectionJobRequestPrivate &other, StopKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
