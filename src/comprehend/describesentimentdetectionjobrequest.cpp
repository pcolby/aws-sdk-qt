/*
    Copyright 2013-2018 Paul Colby

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

#include "describesentimentdetectionjobrequest.h"
#include "describesentimentdetectionjobrequest_p.h"
#include "describesentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobRequest
 * \brief The DescribeSentimentDetectionJobRequest class provides an interface for Comprehend DescribeSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSentimentDetectionJobRequest::DescribeSentimentDetectionJobRequest(const DescribeSentimentDetectionJobRequest &other)
    : ComprehendRequest(new DescribeSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSentimentDetectionJobRequest object.
 */
DescribeSentimentDetectionJobRequest::DescribeSentimentDetectionJobRequest()
    : ComprehendRequest(new DescribeSentimentDetectionJobRequestPrivate(ComprehendRequest::DescribeSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobRequestPrivate
 * \brief The DescribeSentimentDetectionJobRequestPrivate class provides private implementation for DescribeSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeSentimentDetectionJobRequestPrivate::DescribeSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSentimentDetectionJobRequest
 * class' copy constructor.
 */
DescribeSentimentDetectionJobRequestPrivate::DescribeSentimentDetectionJobRequestPrivate(
    const DescribeSentimentDetectionJobRequestPrivate &other, DescribeSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
