// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
