// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
