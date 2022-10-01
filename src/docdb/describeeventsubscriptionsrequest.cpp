// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsrequest_p.h"
#include "describeeventsubscriptionsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeEventSubscriptionsRequest
 * \brief The DescribeEventSubscriptionsRequest class provides an interface for DocDb DescribeEventSubscriptions requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeEventSubscriptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest(const DescribeEventSubscriptionsRequest &other)
    : DocDbRequest(new DescribeEventSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventSubscriptionsRequest object.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest()
    : DocDbRequest(new DescribeEventSubscriptionsRequestPrivate(DocDbRequest::DescribeEventSubscriptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventSubscriptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventSubscriptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventSubscriptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventSubscriptionsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeEventSubscriptionsRequestPrivate
 * \brief The DescribeEventSubscriptionsRequestPrivate class provides private implementation for DescribeEventSubscriptionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeEventSubscriptionsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeEventSubscriptionsRequestPrivate::DescribeEventSubscriptionsRequestPrivate(
    const DocDbRequest::Action action, DescribeEventSubscriptionsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventSubscriptionsRequest
 * class' copy constructor.
 */
DescribeEventSubscriptionsRequestPrivate::DescribeEventSubscriptionsRequestPrivate(
    const DescribeEventSubscriptionsRequestPrivate &other, DescribeEventSubscriptionsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
