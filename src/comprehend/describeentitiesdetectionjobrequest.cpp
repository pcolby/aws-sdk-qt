/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
