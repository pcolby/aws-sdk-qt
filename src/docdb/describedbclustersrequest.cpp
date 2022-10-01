// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbclustersrequest.h"
#include "describedbclustersrequest_p.h"
#include "describedbclustersresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClustersRequest
 * \brief The DescribeDBClustersRequest class provides an interface for DocDb DescribeDBClusters requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest(const DescribeDBClustersRequest &other)
    : DocDbRequest(new DescribeDBClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClustersRequest object.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest()
    : DocDbRequest(new DescribeDBClustersRequestPrivate(DocDbRequest::DescribeDBClustersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClustersResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeDBClustersRequestPrivate
 * \brief The DescribeDBClustersRequestPrivate class provides private implementation for DescribeDBClustersRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClustersRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const DocDbRequest::Action action, DescribeDBClustersRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClustersRequest
 * class' copy constructor.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const DescribeDBClustersRequestPrivate &other, DescribeDBClustersRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
