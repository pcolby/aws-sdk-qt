// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjournals3exportsrequest.h"
#include "listjournals3exportsrequest_p.h"
#include "listjournals3exportsresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsRequest
 * \brief The ListJournalS3ExportsRequest class provides an interface for Qldb ListJournalS3Exports requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listJournalS3Exports
 */

/*!
 * Constructs a copy of \a other.
 */
ListJournalS3ExportsRequest::ListJournalS3ExportsRequest(const ListJournalS3ExportsRequest &other)
    : QldbRequest(new ListJournalS3ExportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJournalS3ExportsRequest object.
 */
ListJournalS3ExportsRequest::ListJournalS3ExportsRequest()
    : QldbRequest(new ListJournalS3ExportsRequestPrivate(QldbRequest::ListJournalS3ExportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJournalS3ExportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJournalS3ExportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJournalS3ExportsRequest::response(QNetworkReply * const reply) const
{
    return new ListJournalS3ExportsResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsRequestPrivate
 * \brief The ListJournalS3ExportsRequestPrivate class provides private implementation for ListJournalS3ExportsRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListJournalS3ExportsRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
ListJournalS3ExportsRequestPrivate::ListJournalS3ExportsRequestPrivate(
    const QldbRequest::Action action, ListJournalS3ExportsRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJournalS3ExportsRequest
 * class' copy constructor.
 */
ListJournalS3ExportsRequestPrivate::ListJournalS3ExportsRequestPrivate(
    const ListJournalS3ExportsRequestPrivate &other, ListJournalS3ExportsRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
