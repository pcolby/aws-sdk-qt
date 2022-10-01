// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesubnetgroupsrequest.h"
#include "describesubnetgroupsrequest_p.h"
#include "describesubnetgroupsresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeSubnetGroupsRequest
 * \brief The DescribeSubnetGroupsRequest class provides an interface for Dax DescribeSubnetGroups requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest(const DescribeSubnetGroupsRequest &other)
    : DaxRequest(new DescribeSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSubnetGroupsRequest object.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest()
    : DaxRequest(new DescribeSubnetGroupsRequestPrivate(DaxRequest::DescribeSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DescribeSubnetGroupsRequestPrivate
 * \brief The DescribeSubnetGroupsRequestPrivate class provides private implementation for DescribeSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeSubnetGroupsRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const DaxRequest::Action action, DescribeSubnetGroupsRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const DescribeSubnetGroupsRequestPrivate &other, DescribeSubnetGroupsRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
