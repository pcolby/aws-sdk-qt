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

#include "createledgerrequest.h"
#include "createledgerrequest_p.h"
#include "createledgerresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::CreateLedgerRequest
 * \brief The CreateLedgerRequest class provides an interface for QLDB CreateLedger requests.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::createLedger
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLedgerRequest::CreateLedgerRequest(const CreateLedgerRequest &other)
    : QldbRequest(new CreateLedgerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLedgerRequest object.
 */
CreateLedgerRequest::CreateLedgerRequest()
    : QldbRequest(new CreateLedgerRequestPrivate(QldbRequest::CreateLedgerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLedgerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLedgerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLedgerRequest::response(QNetworkReply * const reply) const
{
    return new CreateLedgerResponse(*this, reply);
}

/*!
 * \class QtAws::QLDB::CreateLedgerRequestPrivate
 * \brief The CreateLedgerRequestPrivate class provides private implementation for CreateLedgerRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a CreateLedgerRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
CreateLedgerRequestPrivate::CreateLedgerRequestPrivate(
    const QldbRequest::Action action, CreateLedgerRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLedgerRequest
 * class' copy constructor.
 */
CreateLedgerRequestPrivate::CreateLedgerRequestPrivate(
    const CreateLedgerRequestPrivate &other, CreateLedgerRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace QLDB
} // namespace QtAws
