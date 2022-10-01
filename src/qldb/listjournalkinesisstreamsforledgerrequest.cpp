// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjournalkinesisstreamsforledgerrequest.h"
#include "listjournalkinesisstreamsforledgerrequest_p.h"
#include "listjournalkinesisstreamsforledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListJournalKinesisStreamsForLedgerRequest
 * \brief The ListJournalKinesisStreamsForLedgerRequest class provides an interface for Qldb ListJournalKinesisStreamsForLedger requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listJournalKinesisStreamsForLedger
 */

/*!
 * Constructs a copy of \a other.
 */
ListJournalKinesisStreamsForLedgerRequest::ListJournalKinesisStreamsForLedgerRequest(const ListJournalKinesisStreamsForLedgerRequest &other)
    : QldbRequest(new ListJournalKinesisStreamsForLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJournalKinesisStreamsForLedgerRequest object.
 */
ListJournalKinesisStreamsForLedgerRequest::ListJournalKinesisStreamsForLedgerRequest()
    : QldbRequest(new ListJournalKinesisStreamsForLedgerRequestPrivate(QldbRequest::ListJournalKinesisStreamsForLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool ListJournalKinesisStreamsForLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJournalKinesisStreamsForLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJournalKinesisStreamsForLedgerRequest::response(QNetworkReply * const reply) const
{
    return new ListJournalKinesisStreamsForLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::ListJournalKinesisStreamsForLedgerRequestPrivate
 * \brief The ListJournalKinesisStreamsForLedgerRequestPrivate class provides private implementation for ListJournalKinesisStreamsForLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListJournalKinesisStreamsForLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
ListJournalKinesisStreamsForLedgerRequestPrivate::ListJournalKinesisStreamsForLedgerRequestPrivate(
    const QldbRequest::Action action, ListJournalKinesisStreamsForLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJournalKinesisStreamsForLedgerRequest
 * class' copy constructor.
 */
ListJournalKinesisStreamsForLedgerRequestPrivate::ListJournalKinesisStreamsForLedgerRequestPrivate(
    const ListJournalKinesisStreamsForLedgerRequestPrivate &other, ListJournalKinesisStreamsForLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
