// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobsrequest.h"
#include "describejobsrequest_p.h"
#include "describejobsresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeJobsRequest
 * \brief The DescribeJobsRequest class provides an interface for Drs DescribeJobs requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeJobs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobsRequest::DescribeJobsRequest(const DescribeJobsRequest &other)
    : DrsRequest(new DescribeJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobsRequest object.
 */
DescribeJobsRequest::DescribeJobsRequest()
    : DrsRequest(new DescribeJobsRequestPrivate(DrsRequest::DescribeJobsAction, this))
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
 * \class QtAws::Drs::DescribeJobsRequestPrivate
 * \brief The DescribeJobsRequestPrivate class provides private implementation for DescribeJobsRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeJobsRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const DrsRequest::Action action, DescribeJobsRequest * const q)
    : DrsRequestPrivate(action, q)
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
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
