// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
