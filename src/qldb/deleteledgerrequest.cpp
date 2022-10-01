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

#include "deleteledgerrequest.h"
#include "deleteledgerrequest_p.h"
#include "deleteledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DeleteLedgerRequest
 * \brief The DeleteLedgerRequest class provides an interface for Qldb DeleteLedger requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::deleteLedger
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLedgerRequest::DeleteLedgerRequest(const DeleteLedgerRequest &other)
    : QldbRequest(new DeleteLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLedgerRequest object.
 */
DeleteLedgerRequest::DeleteLedgerRequest()
    : QldbRequest(new DeleteLedgerRequestPrivate(QldbRequest::DeleteLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLedgerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::DeleteLedgerRequestPrivate
 * \brief The DeleteLedgerRequestPrivate class provides private implementation for DeleteLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DeleteLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
DeleteLedgerRequestPrivate::DeleteLedgerRequestPrivate(
    const QldbRequest::Action action, DeleteLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLedgerRequest
 * class' copy constructor.
 */
DeleteLedgerRequestPrivate::DeleteLedgerRequestPrivate(
    const DeleteLedgerRequestPrivate &other, DeleteLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
