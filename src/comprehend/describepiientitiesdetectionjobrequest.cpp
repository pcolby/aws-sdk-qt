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
