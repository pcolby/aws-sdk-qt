// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmanageddataidentifiersrequest.h"
#include "listmanageddataidentifiersrequest_p.h"
#include "listmanageddataidentifiersresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListManagedDataIdentifiersRequest
 * \brief The ListManagedDataIdentifiersRequest class provides an interface for Macie2 ListManagedDataIdentifiers requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listManagedDataIdentifiers
 */

/*!
 * Constructs a copy of \a other.
 */
ListManagedDataIdentifiersRequest::ListManagedDataIdentifiersRequest(const ListManagedDataIdentifiersRequest &other)
    : Macie2Request(new ListManagedDataIdentifiersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListManagedDataIdentifiersRequest object.
 */
ListManagedDataIdentifiersRequest::ListManagedDataIdentifiersRequest()
    : Macie2Request(new ListManagedDataIdentifiersRequestPrivate(Macie2Request::ListManagedDataIdentifiersAction, this))
{

}

/*!
 * \reimp
 */
bool ListManagedDataIdentifiersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListManagedDataIdentifiersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListManagedDataIdentifiersRequest::response(QNetworkReply * const reply) const
{
    return new ListManagedDataIdentifiersResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::ListManagedDataIdentifiersRequestPrivate
 * \brief The ListManagedDataIdentifiersRequestPrivate class provides private implementation for ListManagedDataIdentifiersRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListManagedDataIdentifiersRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
ListManagedDataIdentifiersRequestPrivate::ListManagedDataIdentifiersRequestPrivate(
    const Macie2Request::Action action, ListManagedDataIdentifiersRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListManagedDataIdentifiersRequest
 * class' copy constructor.
 */
ListManagedDataIdentifiersRequestPrivate::ListManagedDataIdentifiersRequestPrivate(
    const ListManagedDataIdentifiersRequestPrivate &other, ListManagedDataIdentifiersRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
