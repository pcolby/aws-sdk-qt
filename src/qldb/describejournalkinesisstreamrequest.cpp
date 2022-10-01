// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
