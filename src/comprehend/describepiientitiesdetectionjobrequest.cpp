// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepiientitiesdetectionjobrequest.h"
#include "describepiientitiesdetectionjobrequest_p.h"
#include "describepiientitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribePiiEntitiesDetectionJobRequest
 * \brief The DescribePiiEntitiesDetectionJobRequest class provides an interface for Comprehend DescribePiiEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describePiiEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePiiEntitiesDetectionJobRequest::DescribePiiEntitiesDetectionJobRequest(const DescribePiiEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new DescribePiiEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePiiEntitiesDetectionJobRequest object.
 */
DescribePiiEntitiesDetectionJobRequest::DescribePiiEntitiesDetectionJobRequest()
    : ComprehendRequest(new DescribePiiEntitiesDetectionJobRequestPrivate(ComprehendRequest::DescribePiiEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePiiEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePiiEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePiiEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribePiiEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribePiiEntitiesDetectionJobRequestPrivate
 * \brief The DescribePiiEntitiesDetectionJobRequestPrivate class provides private implementation for DescribePiiEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribePiiEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribePiiEntitiesDetectionJobRequestPrivate::DescribePiiEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribePiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePiiEntitiesDetectionJobRequest
 * class' copy constructor.
 */
DescribePiiEntitiesDetectionJobRequestPrivate::DescribePiiEntitiesDetectionJobRequestPrivate(
    const DescribePiiEntitiesDetectionJobRequestPrivate &other, DescribePiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
