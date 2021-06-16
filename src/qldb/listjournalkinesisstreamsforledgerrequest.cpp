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

#include "listjournalkinesisstreamsforledgerrequest.h"
#include "listjournalkinesisstreamsforledgerrequest_p.h"
#include "listjournalkinesisstreamsforledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ListJournalKinesisStreamsForLedgerRequest
 * \brief The ListJournalKinesisStreamsForLedgerRequest class provides an interface for QLDB ListJournalKinesisStreamsForLedger requests.
 *
 * \inmodule QtAwsQLDB
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
 * \class QtAws::QLDB::ListJournalKinesisStreamsForLedgerRequestPrivate
 * \brief The ListJournalKinesisStreamsForLedgerRequestPrivate class provides private implementation for ListJournalKinesisStreamsForLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
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

} // namespace QLDB
} // namespace QtAws
