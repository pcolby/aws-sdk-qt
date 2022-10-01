// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljournalkinesisstreamrequest.h"
#include "canceljournalkinesisstreamrequest_p.h"
#include "canceljournalkinesisstreamresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::CancelJournalKinesisStreamRequest
 * \brief The CancelJournalKinesisStreamRequest class provides an interface for Qldb CancelJournalKinesisStream requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::cancelJournalKinesisStream
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJournalKinesisStreamRequest::CancelJournalKinesisStreamRequest(const CancelJournalKinesisStreamRequest &other)
    : QldbRequest(new CancelJournalKinesisStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJournalKinesisStreamRequest object.
 */
CancelJournalKinesisStreamRequest::CancelJournalKinesisStreamRequest()
    : QldbRequest(new CancelJournalKinesisStreamRequestPrivate(QldbRequest::CancelJournalKinesisStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJournalKinesisStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJournalKinesisStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJournalKinesisStreamRequest::response(QNetworkReply * const reply) const
{
    return new CancelJournalKinesisStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::CancelJournalKinesisStreamRequestPrivate
 * \brief The CancelJournalKinesisStreamRequestPrivate class provides private implementation for CancelJournalKinesisStreamRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a CancelJournalKinesisStreamRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
CancelJournalKinesisStreamRequestPrivate::CancelJournalKinesisStreamRequestPrivate(
    const QldbRequest::Action action, CancelJournalKinesisStreamRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJournalKinesisStreamRequest
 * class' copy constructor.
 */
CancelJournalKinesisStreamRequestPrivate::CancelJournalKinesisStreamRequestPrivate(
    const CancelJournalKinesisStreamRequestPrivate &other, CancelJournalKinesisStreamRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
