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

#include "updateledgerrequest.h"
#include "updateledgerrequest_p.h"
#include "updateledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::UpdateLedgerRequest
 * \brief The UpdateLedgerRequest class provides an interface for Qldb UpdateLedger requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::updateLedger
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLedgerRequest::UpdateLedgerRequest(const UpdateLedgerRequest &other)
    : QldbRequest(new UpdateLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLedgerRequest object.
 */
UpdateLedgerRequest::UpdateLedgerRequest()
    : QldbRequest(new UpdateLedgerRequestPrivate(QldbRequest::UpdateLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLedgerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::UpdateLedgerRequestPrivate
 * \brief The UpdateLedgerRequestPrivate class provides private implementation for UpdateLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a UpdateLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
UpdateLedgerRequestPrivate::UpdateLedgerRequestPrivate(
    const QldbRequest::Action action, UpdateLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLedgerRequest
 * class' copy constructor.
 */
UpdateLedgerRequestPrivate::UpdateLedgerRequestPrivate(
    const UpdateLedgerRequestPrivate &other, UpdateLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
