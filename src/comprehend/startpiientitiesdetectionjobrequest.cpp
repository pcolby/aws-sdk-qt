// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startpiientitiesdetectionjobrequest.h"
#include "startpiientitiesdetectionjobrequest_p.h"
#include "startpiientitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobRequest
 * \brief The StartPiiEntitiesDetectionJobRequest class provides an interface for Comprehend StartPiiEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startPiiEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartPiiEntitiesDetectionJobRequest::StartPiiEntitiesDetectionJobRequest(const StartPiiEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new StartPiiEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartPiiEntitiesDetectionJobRequest object.
 */
StartPiiEntitiesDetectionJobRequest::StartPiiEntitiesDetectionJobRequest()
    : ComprehendRequest(new StartPiiEntitiesDetectionJobRequestPrivate(ComprehendRequest::StartPiiEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartPiiEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartPiiEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartPiiEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartPiiEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobRequestPrivate
 * \brief The StartPiiEntitiesDetectionJobRequestPrivate class provides private implementation for StartPiiEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartPiiEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartPiiEntitiesDetectionJobRequestPrivate::StartPiiEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartPiiEntitiesDetectionJobRequest
 * class' copy constructor.
 */
StartPiiEntitiesDetectionJobRequestPrivate::StartPiiEntitiesDetectionJobRequestPrivate(
    const StartPiiEntitiesDetectionJobRequestPrivate &other, StartPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
