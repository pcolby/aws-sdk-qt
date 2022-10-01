// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdominantlanguagedetectionjobrequest.h"
#include "startdominantlanguagedetectionjobrequest_p.h"
#include "startdominantlanguagedetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobRequest
 * \brief The StartDominantLanguageDetectionJobRequest class provides an interface for Comprehend StartDominantLanguageDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startDominantLanguageDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartDominantLanguageDetectionJobRequest::StartDominantLanguageDetectionJobRequest(const StartDominantLanguageDetectionJobRequest &other)
    : ComprehendRequest(new StartDominantLanguageDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDominantLanguageDetectionJobRequest object.
 */
StartDominantLanguageDetectionJobRequest::StartDominantLanguageDetectionJobRequest()
    : ComprehendRequest(new StartDominantLanguageDetectionJobRequestPrivate(ComprehendRequest::StartDominantLanguageDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartDominantLanguageDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDominantLanguageDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDominantLanguageDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartDominantLanguageDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobRequestPrivate
 * \brief The StartDominantLanguageDetectionJobRequestPrivate class provides private implementation for StartDominantLanguageDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartDominantLanguageDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartDominantLanguageDetectionJobRequestPrivate::StartDominantLanguageDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDominantLanguageDetectionJobRequest
 * class' copy constructor.
 */
StartDominantLanguageDetectionJobRequestPrivate::StartDominantLanguageDetectionJobRequestPrivate(
    const StartDominantLanguageDetectionJobRequestPrivate &other, StartDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
