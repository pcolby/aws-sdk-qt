// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventcategoriesrequest.h"
#include "describeeventcategoriesrequest_p.h"
#include "describeeventcategoriesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeEventCategoriesRequest
 * \brief The DescribeEventCategoriesRequest class provides an interface for DocDb DescribeEventCategories requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeEventCategories
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventCategoriesRequest::DescribeEventCategoriesRequest(const DescribeEventCategoriesRequest &other)
    : DocDbRequest(new DescribeEventCategoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventCategoriesRequest object.
 */
DescribeEventCategoriesRequest::DescribeEventCategoriesRequest()
    : DocDbRequest(new DescribeEventCategoriesRequestPrivate(DocDbRequest::DescribeEventCategoriesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventCategoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventCategoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventCategoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventCategoriesResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeEventCategoriesRequestPrivate
 * \brief The DescribeEventCategoriesRequestPrivate class provides private implementation for DescribeEventCategoriesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeEventCategoriesRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeEventCategoriesRequestPrivate::DescribeEventCategoriesRequestPrivate(
    const DocDbRequest::Action action, DescribeEventCategoriesRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventCategoriesRequest
 * class' copy constructor.
 */
DescribeEventCategoriesRequestPrivate::DescribeEventCategoriesRequestPrivate(
    const DescribeEventCategoriesRequestPrivate &other, DescribeEventCategoriesRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
