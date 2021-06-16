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

#include "describejobsrequest.h"
#include "describejobsrequest_p.h"
#include "describejobsresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DescribeJobsRequest
 * \brief The DescribeJobsRequest class provides an interface for mgn DescribeJobs requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::describeJobs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobsRequest::DescribeJobsRequest(const DescribeJobsRequest &other)
    : mgnRequest(new DescribeJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobsRequest object.
 */
DescribeJobsRequest::DescribeJobsRequest()
    : mgnRequest(new DescribeJobsRequestPrivate(mgnRequest::DescribeJobsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobsResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::DescribeJobsRequestPrivate
 * \brief The DescribeJobsRequestPrivate class provides private implementation for DescribeJobsRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DescribeJobsRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const mgnRequest::Action action, DescribeJobsRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobsRequest
 * class' copy constructor.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const DescribeJobsRequestPrivate &other, DescribeJobsRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
