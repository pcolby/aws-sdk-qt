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

#include "canceltransactionrequest.h"
#include "canceltransactionrequest_p.h"
#include "canceltransactionresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CancelTransactionRequest
 * \brief The CancelTransactionRequest class provides an interface for LakeFormation CancelTransaction requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::cancelTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
CancelTransactionRequest::CancelTransactionRequest(const CancelTransactionRequest &other)
    : LakeFormationRequest(new CancelTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelTransactionRequest object.
 */
CancelTransactionRequest::CancelTransactionRequest()
    : LakeFormationRequest(new CancelTransactionRequestPrivate(LakeFormationRequest::CancelTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool CancelTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelTransactionRequest::response(QNetworkReply * const reply) const
{
    return new CancelTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::CancelTransactionRequestPrivate
 * \brief The CancelTransactionRequestPrivate class provides private implementation for CancelTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CancelTransactionRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
CancelTransactionRequestPrivate::CancelTransactionRequestPrivate(
    const LakeFormationRequest::Action action, CancelTransactionRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelTransactionRequest
 * class' copy constructor.
 */
CancelTransactionRequestPrivate::CancelTransactionRequestPrivate(
    const CancelTransactionRequestPrivate &other, CancelTransactionRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
