// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
