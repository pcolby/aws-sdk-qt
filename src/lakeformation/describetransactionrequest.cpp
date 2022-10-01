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
