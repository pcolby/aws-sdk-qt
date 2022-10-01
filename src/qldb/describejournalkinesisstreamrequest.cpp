/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describejournalkinesisstreamrequest.h"
#include "describejournalkinesisstreamrequest_p.h"
#include "describejournalkinesisstreamresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DescribeJournalKinesisStreamRequest
 * \brief The DescribeJournalKinesisStreamRequest class provides an interface for Qldb DescribeJournalKinesisStream requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::describeJournalKinesisStream
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJournalKinesisStreamRequest::DescribeJournalKinesisStreamRequest(const DescribeJournalKinesisStreamRequest &other)
    : QldbRequest(new DescribeJournalKinesisStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJournalKinesisStreamRequest object.
 */
DescribeJournalKinesisStreamRequest::DescribeJournalKinesisStreamRequest()
    : QldbRequest(new DescribeJournalKinesisStreamRequestPrivate(QldbRequest::DescribeJournalKinesisStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJournalKinesisStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJournalKinesisStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJournalKinesisStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJournalKinesisStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::DescribeJournalKinesisStreamRequestPrivate
 * \brief The DescribeJournalKinesisStreamRequestPrivate class provides private implementation for DescribeJournalKinesisStreamRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DescribeJournalKinesisStreamRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
DescribeJournalKinesisStreamRequestPrivate::DescribeJournalKinesisStreamRequestPrivate(
    const QldbRequest::Action action, DescribeJournalKinesisStreamRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJournalKinesisStreamRequest
 * class' copy constructor.
 */
DescribeJournalKinesisStreamRequestPrivate::DescribeJournalKinesisStreamRequestPrivate(
    const DescribeJournalKinesisStreamRequestPrivate &other, DescribeJournalKinesisStreamRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
