// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejoblogitemsrequest.h"
#include "describejoblogitemsrequest_p.h"
#include "describejoblogitemsresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeJobLogItemsRequest
 * \brief The DescribeJobLogItemsRequest class provides an interface for Drs DescribeJobLogItems requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeJobLogItems
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobLogItemsRequest::DescribeJobLogItemsRequest(const DescribeJobLogItemsRequest &other)
    : DrsRequest(new DescribeJobLogItemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobLogItemsRequest object.
 */
DescribeJobLogItemsRequest::DescribeJobLogItemsRequest()
    : DrsRequest(new DescribeJobLogItemsRequestPrivate(DrsRequest::DescribeJobLogItemsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobLogItemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobLogItemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobLogItemsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobLogItemsResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DescribeJobLogItemsRequestPrivate
 * \brief The DescribeJobLogItemsRequestPrivate class provides private implementation for DescribeJobLogItemsRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeJobLogItemsRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DescribeJobLogItemsRequestPrivate::DescribeJobLogItemsRequestPrivate(
    const DrsRequest::Action action, DescribeJobLogItemsRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobLogItemsRequest
 * class' copy constructor.
 */
DescribeJobLogItemsRequestPrivate::DescribeJobLogItemsRequestPrivate(
    const DescribeJobLogItemsRequestPrivate &other, DescribeJobLogItemsRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
