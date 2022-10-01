// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopentitiesdetectionjobrequest.h"
#include "stopentitiesdetectionjobrequest_p.h"
#include "stopentitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopEntitiesDetectionJobRequest
 * \brief The StopEntitiesDetectionJobRequest class provides an interface for Comprehend StopEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopEntitiesDetectionJobRequest::StopEntitiesDetectionJobRequest(const StopEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new StopEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEntitiesDetectionJobRequest object.
 */
StopEntitiesDetectionJobRequest::StopEntitiesDetectionJobRequest()
    : ComprehendRequest(new StopEntitiesDetectionJobRequestPrivate(ComprehendRequest::StopEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopEntitiesDetectionJobRequestPrivate
 * \brief The StopEntitiesDetectionJobRequestPrivate class provides private implementation for StopEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopEntitiesDetectionJobRequestPrivate::StopEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEntitiesDetectionJobRequest
 * class' copy constructor.
 */
StopEntitiesDetectionJobRequestPrivate::StopEntitiesDetectionJobRequestPrivate(
    const StopEntitiesDetectionJobRequestPrivate &other, StopEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
