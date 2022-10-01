// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeglobalclustersrequest.h"
#include "describeglobalclustersrequest_p.h"
#include "describeglobalclustersresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeGlobalClustersRequest
 * \brief The DescribeGlobalClustersRequest class provides an interface for DocDb DescribeGlobalClusters requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeGlobalClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGlobalClustersRequest::DescribeGlobalClustersRequest(const DescribeGlobalClustersRequest &other)
    : DocDbRequest(new DescribeGlobalClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGlobalClustersRequest object.
 */
DescribeGlobalClustersRequest::DescribeGlobalClustersRequest()
    : DocDbRequest(new DescribeGlobalClustersRequestPrivate(DocDbRequest::DescribeGlobalClustersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGlobalClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGlobalClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGlobalClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGlobalClustersResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeGlobalClustersRequestPrivate
 * \brief The DescribeGlobalClustersRequestPrivate class provides private implementation for DescribeGlobalClustersRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeGlobalClustersRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeGlobalClustersRequestPrivate::DescribeGlobalClustersRequestPrivate(
    const DocDbRequest::Action action, DescribeGlobalClustersRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGlobalClustersRequest
 * class' copy constructor.
 */
DescribeGlobalClustersRequestPrivate::DescribeGlobalClustersRequestPrivate(
    const DescribeGlobalClustersRequestPrivate &other, DescribeGlobalClustersRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
