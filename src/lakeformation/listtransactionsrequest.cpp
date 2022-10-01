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

#include "listtransactionsrequest.h"
#include "listtransactionsrequest_p.h"
#include "listtransactionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListTransactionsRequest
 * \brief The ListTransactionsRequest class provides an interface for LakeFormation ListTransactions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listTransactions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTransactionsRequest::ListTransactionsRequest(const ListTransactionsRequest &other)
    : LakeFormationRequest(new ListTransactionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTransactionsRequest object.
 */
ListTransactionsRequest::ListTransactionsRequest()
    : LakeFormationRequest(new ListTransactionsRequestPrivate(LakeFormationRequest::ListTransactionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTransactionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTransactionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTransactionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTransactionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ListTransactionsRequestPrivate
 * \brief The ListTransactionsRequestPrivate class provides private implementation for ListTransactionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListTransactionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ListTransactionsRequestPrivate::ListTransactionsRequestPrivate(
    const LakeFormationRequest::Action action, ListTransactionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTransactionsRequest
 * class' copy constructor.
 */
ListTransactionsRequestPrivate::ListTransactionsRequestPrivate(
    const ListTransactionsRequestPrivate &other, ListTransactionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
