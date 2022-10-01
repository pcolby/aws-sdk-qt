// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopeventsdetectionjobrequest.h"
#include "stopeventsdetectionjobrequest_p.h"
#include "stopeventsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobRequest
 * \brief The StopEventsDetectionJobRequest class provides an interface for Comprehend StopEventsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopEventsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopEventsDetectionJobRequest::StopEventsDetectionJobRequest(const StopEventsDetectionJobRequest &other)
    : ComprehendRequest(new StopEventsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEventsDetectionJobRequest object.
 */
StopEventsDetectionJobRequest::StopEventsDetectionJobRequest()
    : ComprehendRequest(new StopEventsDetectionJobRequestPrivate(ComprehendRequest::StopEventsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopEventsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEventsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEventsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopEventsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobRequestPrivate
 * \brief The StopEventsDetectionJobRequestPrivate class provides private implementation for StopEventsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopEventsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopEventsDetectionJobRequestPrivate::StopEventsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEventsDetectionJobRequest
 * class' copy constructor.
 */
StopEventsDetectionJobRequestPrivate::StopEventsDetectionJobRequestPrivate(
    const StopEventsDetectionJobRequestPrivate &other, StopEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
