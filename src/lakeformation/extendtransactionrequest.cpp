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

#include "extendtransactionrequest.h"
#include "extendtransactionrequest_p.h"
#include "extendtransactionresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ExtendTransactionRequest
 * \brief The ExtendTransactionRequest class provides an interface for LakeFormation ExtendTransaction requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::extendTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
ExtendTransactionRequest::ExtendTransactionRequest(const ExtendTransactionRequest &other)
    : LakeFormationRequest(new ExtendTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExtendTransactionRequest object.
 */
ExtendTransactionRequest::ExtendTransactionRequest()
    : LakeFormationRequest(new ExtendTransactionRequestPrivate(LakeFormationRequest::ExtendTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool ExtendTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExtendTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExtendTransactionRequest::response(QNetworkReply * const reply) const
{
    return new ExtendTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ExtendTransactionRequestPrivate
 * \brief The ExtendTransactionRequestPrivate class provides private implementation for ExtendTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ExtendTransactionRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ExtendTransactionRequestPrivate::ExtendTransactionRequestPrivate(
    const LakeFormationRequest::Action action, ExtendTransactionRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExtendTransactionRequest
 * class' copy constructor.
 */
ExtendTransactionRequestPrivate::ExtendTransactionRequestPrivate(
    const ExtendTransactionRequestPrivate &other, ExtendTransactionRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
