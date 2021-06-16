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

#include "describeledgerrequest.h"
#include "describeledgerrequest_p.h"
#include "describeledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::DescribeLedgerRequest
 * \brief The DescribeLedgerRequest class provides an interface for QLDB DescribeLedger requests.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::describeLedger
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLedgerRequest::DescribeLedgerRequest(const DescribeLedgerRequest &other)
    : QldbRequest(new DescribeLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLedgerRequest object.
 */
DescribeLedgerRequest::DescribeLedgerRequest()
    : QldbRequest(new DescribeLedgerRequestPrivate(QldbRequest::DescribeLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLedgerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::QLDB::DescribeLedgerRequestPrivate
 * \brief The DescribeLedgerRequestPrivate class provides private implementation for DescribeLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a DescribeLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
DescribeLedgerRequestPrivate::DescribeLedgerRequestPrivate(
    const QldbRequest::Action action, DescribeLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLedgerRequest
 * class' copy constructor.
 */
DescribeLedgerRequestPrivate::DescribeLedgerRequestPrivate(
    const DescribeLedgerRequestPrivate &other, DescribeLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace QLDB
} // namespace QtAws
