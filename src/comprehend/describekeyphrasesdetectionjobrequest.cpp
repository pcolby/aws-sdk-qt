/*
    Copyright 2013-2020 Paul Colby

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

#include "describekeyphrasesdetectionjobrequest.h"
#include "describekeyphrasesdetectionjobrequest_p.h"
#include "describekeyphrasesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobRequest
 * \brief The DescribeKeyPhrasesDetectionJobRequest class provides an interface for Comprehend DescribeKeyPhrasesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeKeyPhrasesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeKeyPhrasesDetectionJobRequest::DescribeKeyPhrasesDetectionJobRequest(const DescribeKeyPhrasesDetectionJobRequest &other)
    : ComprehendRequest(new DescribeKeyPhrasesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobRequest object.
 */
DescribeKeyPhrasesDetectionJobRequest::DescribeKeyPhrasesDetectionJobRequest()
    : ComprehendRequest(new DescribeKeyPhrasesDetectionJobRequestPrivate(ComprehendRequest::DescribeKeyPhrasesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeKeyPhrasesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeKeyPhrasesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeKeyPhrasesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeKeyPhrasesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobRequestPrivate
 * \brief The DescribeKeyPhrasesDetectionJobRequestPrivate class provides private implementation for DescribeKeyPhrasesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeKeyPhrasesDetectionJobRequestPrivate::DescribeKeyPhrasesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeKeyPhrasesDetectionJobRequest
 * class' copy constructor.
 */
DescribeKeyPhrasesDetectionJobRequestPrivate::DescribeKeyPhrasesDetectionJobRequestPrivate(
    const DescribeKeyPhrasesDetectionJobRequestPrivate &other, DescribeKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
