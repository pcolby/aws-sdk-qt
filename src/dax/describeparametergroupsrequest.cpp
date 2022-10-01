// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeparametergroupsrequest.h"
#include "describeparametergroupsrequest_p.h"
#include "describeparametergroupsresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeParameterGroupsRequest
 * \brief The DescribeParameterGroupsRequest class provides an interface for Dax DescribeParameterGroups requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeParameterGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeParameterGroupsRequest::DescribeParameterGroupsRequest(const DescribeParameterGroupsRequest &other)
    : DaxRequest(new DescribeParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeParameterGroupsRequest object.
 */
DescribeParameterGroupsRequest::DescribeParameterGroupsRequest()
    : DaxRequest(new DescribeParameterGroupsRequestPrivate(DaxRequest::DescribeParameterGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeParameterGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeParameterGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeParameterGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DescribeParameterGroupsRequestPrivate
 * \brief The DescribeParameterGroupsRequestPrivate class provides private implementation for DescribeParameterGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeParameterGroupsRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DescribeParameterGroupsRequestPrivate::DescribeParameterGroupsRequestPrivate(
    const DaxRequest::Action action, DescribeParameterGroupsRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeParameterGroupsRequest
 * class' copy constructor.
 */
DescribeParameterGroupsRequestPrivate::DescribeParameterGroupsRequestPrivate(
    const DescribeParameterGroupsRequestPrivate &other, DescribeParameterGroupsRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
