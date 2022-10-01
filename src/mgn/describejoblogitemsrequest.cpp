// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejoblogitemsrequest.h"
#include "describejoblogitemsrequest_p.h"
#include "describejoblogitemsresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeJobLogItemsRequest
 * \brief The DescribeJobLogItemsRequest class provides an interface for Mgn DescribeJobLogItems requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeJobLogItems
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobLogItemsRequest::DescribeJobLogItemsRequest(const DescribeJobLogItemsRequest &other)
    : MgnRequest(new DescribeJobLogItemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobLogItemsRequest object.
 */
DescribeJobLogItemsRequest::DescribeJobLogItemsRequest()
    : MgnRequest(new DescribeJobLogItemsRequestPrivate(MgnRequest::DescribeJobLogItemsAction, this))
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
 * \class QtAws::Mgn::DescribeJobLogItemsRequestPrivate
 * \brief The DescribeJobLogItemsRequestPrivate class provides private implementation for DescribeJobLogItemsRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeJobLogItemsRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DescribeJobLogItemsRequestPrivate::DescribeJobLogItemsRequestPrivate(
    const MgnRequest::Action action, DescribeJobLogItemsRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
