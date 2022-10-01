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
