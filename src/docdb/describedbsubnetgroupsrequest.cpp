// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbsubnetgroupsrequest.h"
#include "describedbsubnetgroupsrequest_p.h"
#include "describedbsubnetgroupsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBSubnetGroupsRequest
 * \brief The DescribeDBSubnetGroupsRequest class provides an interface for DocDb DescribeDBSubnetGroups requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest(const DescribeDBSubnetGroupsRequest &other)
    : DocDbRequest(new DescribeDBSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBSubnetGroupsRequest object.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest()
    : DocDbRequest(new DescribeDBSubnetGroupsRequestPrivate(DocDbRequest::DescribeDBSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeDBSubnetGroupsRequestPrivate
 * \brief The DescribeDBSubnetGroupsRequestPrivate class provides private implementation for DescribeDBSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBSubnetGroupsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const DocDbRequest::Action action, DescribeDBSubnetGroupsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const DescribeDBSubnetGroupsRequestPrivate &other, DescribeDBSubnetGroupsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
