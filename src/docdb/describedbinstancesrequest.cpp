// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbinstancesrequest.h"
#include "describedbinstancesrequest_p.h"
#include "describedbinstancesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBInstancesRequest
 * \brief The DescribeDBInstancesRequest class provides an interface for DocDb DescribeDBInstances requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest(const DescribeDBInstancesRequest &other)
    : DocDbRequest(new DescribeDBInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBInstancesRequest object.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : DocDbRequest(new DescribeDBInstancesRequestPrivate(DocDbRequest::DescribeDBInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeDBInstancesRequestPrivate
 * \brief The DescribeDBInstancesRequestPrivate class provides private implementation for DescribeDBInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBInstancesRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const DocDbRequest::Action action, DescribeDBInstancesRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBInstancesRequest
 * class' copy constructor.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const DescribeDBInstancesRequestPrivate &other, DescribeDBInstancesRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
