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
