// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbclustersnapshotattributesrequest.h"
#include "describedbclustersnapshotattributesrequest_p.h"
#include "describedbclustersnapshotattributesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotAttributesRequest
 * \brief The DescribeDBClusterSnapshotAttributesRequest class provides an interface for DocDb DescribeDBClusterSnapshotAttributes requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterSnapshotAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest(const DescribeDBClusterSnapshotAttributesRequest &other)
    : DocDbRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesRequest object.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest()
    : DocDbRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(DocDbRequest::DescribeDBClusterSnapshotAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClusterSnapshotAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClusterSnapshotAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterSnapshotAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterSnapshotAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotAttributesRequestPrivate
 * \brief The DescribeDBClusterSnapshotAttributesRequestPrivate class provides private implementation for DescribeDBClusterSnapshotAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBClusterSnapshotAttributesRequestPrivate::DescribeDBClusterSnapshotAttributesRequestPrivate(
    const DocDbRequest::Action action, DescribeDBClusterSnapshotAttributesRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterSnapshotAttributesRequest
 * class' copy constructor.
 */
DescribeDBClusterSnapshotAttributesRequestPrivate::DescribeDBClusterSnapshotAttributesRequestPrivate(
    const DescribeDBClusterSnapshotAttributesRequestPrivate &other, DescribeDBClusterSnapshotAttributesRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
