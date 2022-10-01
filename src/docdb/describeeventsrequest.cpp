// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsrequest.h"
#include "describeeventsrequest_p.h"
#include "describeeventsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeEventsRequest
 * \brief The DescribeEventsRequest class provides an interface for DocDb DescribeEvents requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeEvents
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventsRequest::DescribeEventsRequest(const DescribeEventsRequest &other)
    : DocDbRequest(new DescribeEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventsRequest object.
 */
DescribeEventsRequest::DescribeEventsRequest()
    : DocDbRequest(new DescribeEventsRequestPrivate(DocDbRequest::DescribeEventsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeEventsRequestPrivate
 * \brief The DescribeEventsRequestPrivate class provides private implementation for DescribeEventsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeEventsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DocDbRequest::Action action, DescribeEventsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventsRequest
 * class' copy constructor.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DescribeEventsRequestPrivate &other, DescribeEventsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
