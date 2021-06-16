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

#include "deletecustomdataidentifierrequest.h"
#include "deletecustomdataidentifierrequest_p.h"
#include "deletecustomdataidentifierresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteCustomDataIdentifierRequest
 * \brief The DeleteCustomDataIdentifierRequest class provides an interface for Macie2 DeleteCustomDataIdentifier requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteCustomDataIdentifier
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCustomDataIdentifierRequest::DeleteCustomDataIdentifierRequest(const DeleteCustomDataIdentifierRequest &other)
    : Macie2Request(new DeleteCustomDataIdentifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCustomDataIdentifierRequest object.
 */
DeleteCustomDataIdentifierRequest::DeleteCustomDataIdentifierRequest()
    : Macie2Request(new DeleteCustomDataIdentifierRequestPrivate(Macie2Request::DeleteCustomDataIdentifierAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCustomDataIdentifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCustomDataIdentifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomDataIdentifierRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomDataIdentifierResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DeleteCustomDataIdentifierRequestPrivate
 * \brief The DeleteCustomDataIdentifierRequestPrivate class provides private implementation for DeleteCustomDataIdentifierRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteCustomDataIdentifierRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DeleteCustomDataIdentifierRequestPrivate::DeleteCustomDataIdentifierRequestPrivate(
    const Macie2Request::Action action, DeleteCustomDataIdentifierRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomDataIdentifierRequest
 * class' copy constructor.
 */
DeleteCustomDataIdentifierRequestPrivate::DeleteCustomDataIdentifierRequestPrivate(
    const DeleteCustomDataIdentifierRequestPrivate &other, DeleteCustomDataIdentifierRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
