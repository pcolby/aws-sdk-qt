// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeentitiesdetectionjobrequest.h"
#include "describeentitiesdetectionjobrequest_p.h"
#include "describeentitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEntitiesDetectionJobRequest
 * \brief The DescribeEntitiesDetectionJobRequest class provides an interface for Comprehend DescribeEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEntitiesDetectionJobRequest::DescribeEntitiesDetectionJobRequest(const DescribeEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new DescribeEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEntitiesDetectionJobRequest object.
 */
DescribeEntitiesDetectionJobRequest::DescribeEntitiesDetectionJobRequest()
    : ComprehendRequest(new DescribeEntitiesDetectionJobRequestPrivate(ComprehendRequest::DescribeEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeEntitiesDetectionJobRequestPrivate
 * \brief The DescribeEntitiesDetectionJobRequestPrivate class provides private implementation for DescribeEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeEntitiesDetectionJobRequestPrivate::DescribeEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEntitiesDetectionJobRequest
 * class' copy constructor.
 */
DescribeEntitiesDetectionJobRequestPrivate::DescribeEntitiesDetectionJobRequestPrivate(
    const DescribeEntitiesDetectionJobRequestPrivate &other, DescribeEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
