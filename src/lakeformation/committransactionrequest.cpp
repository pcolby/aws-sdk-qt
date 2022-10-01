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

#include "committransactionrequest.h"
#include "committransactionrequest_p.h"
#include "committransactionresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CommitTransactionRequest
 * \brief The CommitTransactionRequest class provides an interface for LakeFormation CommitTransaction requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::commitTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
CommitTransactionRequest::CommitTransactionRequest(const CommitTransactionRequest &other)
    : LakeFormationRequest(new CommitTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CommitTransactionRequest object.
 */
CommitTransactionRequest::CommitTransactionRequest()
    : LakeFormationRequest(new CommitTransactionRequestPrivate(LakeFormationRequest::CommitTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool CommitTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CommitTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CommitTransactionRequest::response(QNetworkReply * const reply) const
{
    return new CommitTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::CommitTransactionRequestPrivate
 * \brief The CommitTransactionRequestPrivate class provides private implementation for CommitTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CommitTransactionRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
CommitTransactionRequestPrivate::CommitTransactionRequestPrivate(
    const LakeFormationRequest::Action action, CommitTransactionRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CommitTransactionRequest
 * class' copy constructor.
 */
CommitTransactionRequestPrivate::CommitTransactionRequestPrivate(
    const CommitTransactionRequestPrivate &other, CommitTransactionRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
