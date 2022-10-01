// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
