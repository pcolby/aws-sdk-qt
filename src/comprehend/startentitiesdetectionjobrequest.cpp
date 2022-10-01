// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startentitiesdetectionjobrequest.h"
#include "startentitiesdetectionjobrequest_p.h"
#include "startentitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartEntitiesDetectionJobRequest
 * \brief The StartEntitiesDetectionJobRequest class provides an interface for Comprehend StartEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartEntitiesDetectionJobRequest::StartEntitiesDetectionJobRequest(const StartEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new StartEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEntitiesDetectionJobRequest object.
 */
StartEntitiesDetectionJobRequest::StartEntitiesDetectionJobRequest()
    : ComprehendRequest(new StartEntitiesDetectionJobRequestPrivate(ComprehendRequest::StartEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartEntitiesDetectionJobRequestPrivate
 * \brief The StartEntitiesDetectionJobRequestPrivate class provides private implementation for StartEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartEntitiesDetectionJobRequestPrivate::StartEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEntitiesDetectionJobRequest
 * class' copy constructor.
 */
StartEntitiesDetectionJobRequestPrivate::StartEntitiesDetectionJobRequestPrivate(
    const StartEntitiesDetectionJobRequestPrivate &other, StartEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
