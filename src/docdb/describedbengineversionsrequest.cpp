// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbengineversionsrequest.h"
#include "describedbengineversionsrequest_p.h"
#include "describedbengineversionsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBEngineVersionsRequest
 * \brief The DescribeDBEngineVersionsRequest class provides an interface for DocDb DescribeDBEngineVersions requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBEngineVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest(const DescribeDBEngineVersionsRequest &other)
    : DocDbRequest(new DescribeDBEngineVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBEngineVersionsRequest object.
 */
DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest()
    : DocDbRequest(new DescribeDBEngineVersionsRequestPrivate(DocDbRequest::DescribeDBEngineVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBEngineVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBEngineVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBEngineVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBEngineVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeDBEngineVersionsRequestPrivate
 * \brief The DescribeDBEngineVersionsRequestPrivate class provides private implementation for DescribeDBEngineVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBEngineVersionsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBEngineVersionsRequestPrivate::DescribeDBEngineVersionsRequestPrivate(
    const DocDbRequest::Action action, DescribeDBEngineVersionsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBEngineVersionsRequest
 * class' copy constructor.
 */
DescribeDBEngineVersionsRequestPrivate::DescribeDBEngineVersionsRequestPrivate(
    const DescribeDBEngineVersionsRequestPrivate &other, DescribeDBEngineVersionsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
