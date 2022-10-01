// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetransactionrequest.h"
#include "describetransactionrequest_p.h"
#include "describetransactionresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DescribeTransactionRequest
 * \brief The DescribeTransactionRequest class provides an interface for LakeFormation DescribeTransaction requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::describeTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTransactionRequest::DescribeTransactionRequest(const DescribeTransactionRequest &other)
    : LakeFormationRequest(new DescribeTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTransactionRequest object.
 */
DescribeTransactionRequest::DescribeTransactionRequest()
    : LakeFormationRequest(new DescribeTransactionRequestPrivate(LakeFormationRequest::DescribeTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTransactionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DescribeTransactionRequestPrivate
 * \brief The DescribeTransactionRequestPrivate class provides private implementation for DescribeTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DescribeTransactionRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DescribeTransactionRequestPrivate::DescribeTransactionRequestPrivate(
    const LakeFormationRequest::Action action, DescribeTransactionRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTransactionRequest
 * class' copy constructor.
 */
DescribeTransactionRequestPrivate::DescribeTransactionRequestPrivate(
    const DescribeTransactionRequestPrivate &other, DescribeTransactionRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
