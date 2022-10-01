// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starteventsdetectionjobrequest.h"
#include "starteventsdetectionjobrequest_p.h"
#include "starteventsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobRequest
 * \brief The StartEventsDetectionJobRequest class provides an interface for Comprehend StartEventsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startEventsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartEventsDetectionJobRequest::StartEventsDetectionJobRequest(const StartEventsDetectionJobRequest &other)
    : ComprehendRequest(new StartEventsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEventsDetectionJobRequest object.
 */
StartEventsDetectionJobRequest::StartEventsDetectionJobRequest()
    : ComprehendRequest(new StartEventsDetectionJobRequestPrivate(ComprehendRequest::StartEventsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartEventsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEventsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEventsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartEventsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobRequestPrivate
 * \brief The StartEventsDetectionJobRequestPrivate class provides private implementation for StartEventsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartEventsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartEventsDetectionJobRequestPrivate::StartEventsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEventsDetectionJobRequest
 * class' copy constructor.
 */
StartEventsDetectionJobRequestPrivate::StartEventsDetectionJobRequestPrivate(
    const StartEventsDetectionJobRequestPrivate &other, StartEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
