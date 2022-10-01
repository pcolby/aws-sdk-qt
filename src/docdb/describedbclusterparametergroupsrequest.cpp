// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbclusterparametergroupsrequest.h"
#include "describedbclusterparametergroupsrequest_p.h"
#include "describedbclusterparametergroupsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsRequest
 * \brief The DescribeDBClusterParameterGroupsRequest class provides an interface for DocDb DescribeDBClusterParameterGroups requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterParameterGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterParameterGroupsRequest::DescribeDBClusterParameterGroupsRequest(const DescribeDBClusterParameterGroupsRequest &other)
    : DocDbRequest(new DescribeDBClusterParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterParameterGroupsRequest object.
 */
DescribeDBClusterParameterGroupsRequest::DescribeDBClusterParameterGroupsRequest()
    : DocDbRequest(new DescribeDBClusterParameterGroupsRequestPrivate(DocDbRequest::DescribeDBClusterParameterGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClusterParameterGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClusterParameterGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterParameterGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsRequestPrivate
 * \brief The DescribeDBClusterParameterGroupsRequestPrivate class provides private implementation for DescribeDBClusterParameterGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterParameterGroupsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBClusterParameterGroupsRequestPrivate::DescribeDBClusterParameterGroupsRequestPrivate(
    const DocDbRequest::Action action, DescribeDBClusterParameterGroupsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterParameterGroupsRequest
 * class' copy constructor.
 */
DescribeDBClusterParameterGroupsRequestPrivate::DescribeDBClusterParameterGroupsRequestPrivate(
    const DescribeDBClusterParameterGroupsRequestPrivate &other, DescribeDBClusterParameterGroupsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
