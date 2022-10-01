// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoppiientitiesdetectionjobrequest.h"
#include "stoppiientitiesdetectionjobrequest_p.h"
#include "stoppiientitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobRequest
 * \brief The StopPiiEntitiesDetectionJobRequest class provides an interface for Comprehend StopPiiEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopPiiEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopPiiEntitiesDetectionJobRequest::StopPiiEntitiesDetectionJobRequest(const StopPiiEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new StopPiiEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopPiiEntitiesDetectionJobRequest object.
 */
StopPiiEntitiesDetectionJobRequest::StopPiiEntitiesDetectionJobRequest()
    : ComprehendRequest(new StopPiiEntitiesDetectionJobRequestPrivate(ComprehendRequest::StopPiiEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopPiiEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopPiiEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopPiiEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopPiiEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobRequestPrivate
 * \brief The StopPiiEntitiesDetectionJobRequestPrivate class provides private implementation for StopPiiEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopPiiEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopPiiEntitiesDetectionJobRequestPrivate::StopPiiEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopPiiEntitiesDetectionJobRequest
 * class' copy constructor.
 */
StopPiiEntitiesDetectionJobRequestPrivate::StopPiiEntitiesDetectionJobRequestPrivate(
    const StopPiiEntitiesDetectionJobRequestPrivate &other, StopPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
