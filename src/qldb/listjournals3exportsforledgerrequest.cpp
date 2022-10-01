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

#include "listjournals3exportsforledgerrequest.h"
#include "listjournals3exportsforledgerrequest_p.h"
#include "listjournals3exportsforledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsForLedgerRequest
 * \brief The ListJournalS3ExportsForLedgerRequest class provides an interface for Qldb ListJournalS3ExportsForLedger requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listJournalS3ExportsForLedger
 */

/*!
 * Constructs a copy of \a other.
 */
ListJournalS3ExportsForLedgerRequest::ListJournalS3ExportsForLedgerRequest(const ListJournalS3ExportsForLedgerRequest &other)
    : QldbRequest(new ListJournalS3ExportsForLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJournalS3ExportsForLedgerRequest object.
 */
ListJournalS3ExportsForLedgerRequest::ListJournalS3ExportsForLedgerRequest()
    : QldbRequest(new ListJournalS3ExportsForLedgerRequestPrivate(QldbRequest::ListJournalS3ExportsForLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool ListJournalS3ExportsForLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJournalS3ExportsForLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJournalS3ExportsForLedgerRequest::response(QNetworkReply * const reply) const
{
    return new ListJournalS3ExportsForLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsForLedgerRequestPrivate
 * \brief The ListJournalS3ExportsForLedgerRequestPrivate class provides private implementation for ListJournalS3ExportsForLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListJournalS3ExportsForLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
ListJournalS3ExportsForLedgerRequestPrivate::ListJournalS3ExportsForLedgerRequestPrivate(
    const QldbRequest::Action action, ListJournalS3ExportsForLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJournalS3ExportsForLedgerRequest
 * class' copy constructor.
 */
ListJournalS3ExportsForLedgerRequestPrivate::ListJournalS3ExportsForLedgerRequestPrivate(
    const ListJournalS3ExportsForLedgerRequestPrivate &other, ListJournalS3ExportsForLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
