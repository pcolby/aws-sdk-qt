/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describetopicsdetectionjobrequest.h"
#include "describetopicsdetectionjobrequest_p.h"
#include "describetopicsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeTopicsDetectionJobRequest
 * \brief The DescribeTopicsDetectionJobRequest class provides an interface for Comprehend DescribeTopicsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeTopicsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTopicsDetectionJobRequest::DescribeTopicsDetectionJobRequest(const DescribeTopicsDetectionJobRequest &other)
    : ComprehendRequest(new DescribeTopicsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTopicsDetectionJobRequest object.
 */
DescribeTopicsDetectionJobRequest::DescribeTopicsDetectionJobRequest()
    : ComprehendRequest(new DescribeTopicsDetectionJobRequestPrivate(ComprehendRequest::DescribeTopicsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTopicsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTopicsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTopicsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTopicsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeTopicsDetectionJobRequestPrivate
 * \brief The DescribeTopicsDetectionJobRequestPrivate class provides private implementation for DescribeTopicsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeTopicsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeTopicsDetectionJobRequestPrivate::DescribeTopicsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTopicsDetectionJobRequest
 * class' copy constructor.
 */
DescribeTopicsDetectionJobRequestPrivate::DescribeTopicsDetectionJobRequestPrivate(
    const DescribeTopicsDetectionJobRequestPrivate &other, DescribeTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
