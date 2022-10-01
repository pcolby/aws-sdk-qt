// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobsrequest.h"
#include "describejobsrequest_p.h"
#include "describejobsresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeJobsRequest
 * \brief The DescribeJobsRequest class provides an interface for Mgn DescribeJobs requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeJobs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobsRequest::DescribeJobsRequest(const DescribeJobsRequest &other)
    : MgnRequest(new DescribeJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobsRequest object.
 */
DescribeJobsRequest::DescribeJobsRequest()
    : MgnRequest(new DescribeJobsRequestPrivate(MgnRequest::DescribeJobsAction, this))
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
 * \class QtAws::Mgn::DescribeJobsRequestPrivate
 * \brief The DescribeJobsRequestPrivate class provides private implementation for DescribeJobsRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeJobsRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const MgnRequest::Action action, DescribeJobsRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
