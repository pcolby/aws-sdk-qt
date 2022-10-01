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

#include "starttransactionrequest.h"
#include "starttransactionrequest_p.h"
#include "starttransactionresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::StartTransactionRequest
 * \brief The StartTransactionRequest class provides an interface for LakeFormation StartTransaction requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::startTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
StartTransactionRequest::StartTransactionRequest(const StartTransactionRequest &other)
    : LakeFormationRequest(new StartTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTransactionRequest object.
 */
StartTransactionRequest::StartTransactionRequest()
    : LakeFormationRequest(new StartTransactionRequestPrivate(LakeFormationRequest::StartTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool StartTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTransactionRequest::response(QNetworkReply * const reply) const
{
    return new StartTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::StartTransactionRequestPrivate
 * \brief The StartTransactionRequestPrivate class provides private implementation for StartTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a StartTransactionRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
StartTransactionRequestPrivate::StartTransactionRequestPrivate(
    const LakeFormationRequest::Action action, StartTransactionRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTransactionRequest
 * class' copy constructor.
 */
StartTransactionRequestPrivate::StartTransactionRequestPrivate(
    const StartTransactionRequestPrivate &other, StartTransactionRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
