// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
