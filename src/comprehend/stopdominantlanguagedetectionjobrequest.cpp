// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdominantlanguagedetectionjobrequest.h"
#include "stopdominantlanguagedetectionjobrequest_p.h"
#include "stopdominantlanguagedetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobRequest
 * \brief The StopDominantLanguageDetectionJobRequest class provides an interface for Comprehend StopDominantLanguageDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopDominantLanguageDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopDominantLanguageDetectionJobRequest::StopDominantLanguageDetectionJobRequest(const StopDominantLanguageDetectionJobRequest &other)
    : ComprehendRequest(new StopDominantLanguageDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDominantLanguageDetectionJobRequest object.
 */
StopDominantLanguageDetectionJobRequest::StopDominantLanguageDetectionJobRequest()
    : ComprehendRequest(new StopDominantLanguageDetectionJobRequestPrivate(ComprehendRequest::StopDominantLanguageDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopDominantLanguageDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDominantLanguageDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDominantLanguageDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopDominantLanguageDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobRequestPrivate
 * \brief The StopDominantLanguageDetectionJobRequestPrivate class provides private implementation for StopDominantLanguageDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopDominantLanguageDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopDominantLanguageDetectionJobRequestPrivate::StopDominantLanguageDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDominantLanguageDetectionJobRequest
 * class' copy constructor.
 */
StopDominantLanguageDetectionJobRequestPrivate::StopDominantLanguageDetectionJobRequestPrivate(
    const StopDominantLanguageDetectionJobRequestPrivate &other, StopDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
