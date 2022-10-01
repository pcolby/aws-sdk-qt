// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startkeyphrasesdetectionjobrequest.h"
#include "startkeyphrasesdetectionjobrequest_p.h"
#include "startkeyphrasesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartKeyPhrasesDetectionJobRequest
 * \brief The StartKeyPhrasesDetectionJobRequest class provides an interface for Comprehend StartKeyPhrasesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startKeyPhrasesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartKeyPhrasesDetectionJobRequest::StartKeyPhrasesDetectionJobRequest(const StartKeyPhrasesDetectionJobRequest &other)
    : ComprehendRequest(new StartKeyPhrasesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartKeyPhrasesDetectionJobRequest object.
 */
StartKeyPhrasesDetectionJobRequest::StartKeyPhrasesDetectionJobRequest()
    : ComprehendRequest(new StartKeyPhrasesDetectionJobRequestPrivate(ComprehendRequest::StartKeyPhrasesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartKeyPhrasesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartKeyPhrasesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartKeyPhrasesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartKeyPhrasesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartKeyPhrasesDetectionJobRequestPrivate
 * \brief The StartKeyPhrasesDetectionJobRequestPrivate class provides private implementation for StartKeyPhrasesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartKeyPhrasesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartKeyPhrasesDetectionJobRequestPrivate::StartKeyPhrasesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartKeyPhrasesDetectionJobRequest
 * class' copy constructor.
 */
StartKeyPhrasesDetectionJobRequestPrivate::StartKeyPhrasesDetectionJobRequestPrivate(
    const StartKeyPhrasesDetectionJobRequestPrivate &other, StartKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
