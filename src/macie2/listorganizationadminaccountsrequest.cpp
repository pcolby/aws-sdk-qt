// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listorganizationadminaccountsrequest.h"
#include "listorganizationadminaccountsrequest_p.h"
#include "listorganizationadminaccountsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListOrganizationAdminAccountsRequest
 * \brief The ListOrganizationAdminAccountsRequest class provides an interface for Macie2 ListOrganizationAdminAccounts requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listOrganizationAdminAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListOrganizationAdminAccountsRequest::ListOrganizationAdminAccountsRequest(const ListOrganizationAdminAccountsRequest &other)
    : Macie2Request(new ListOrganizationAdminAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOrganizationAdminAccountsRequest object.
 */
ListOrganizationAdminAccountsRequest::ListOrganizationAdminAccountsRequest()
    : Macie2Request(new ListOrganizationAdminAccountsRequestPrivate(Macie2Request::ListOrganizationAdminAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOrganizationAdminAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOrganizationAdminAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOrganizationAdminAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListOrganizationAdminAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::ListOrganizationAdminAccountsRequestPrivate
 * \brief The ListOrganizationAdminAccountsRequestPrivate class provides private implementation for ListOrganizationAdminAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListOrganizationAdminAccountsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
ListOrganizationAdminAccountsRequestPrivate::ListOrganizationAdminAccountsRequestPrivate(
    const Macie2Request::Action action, ListOrganizationAdminAccountsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOrganizationAdminAccountsRequest
 * class' copy constructor.
 */
ListOrganizationAdminAccountsRequestPrivate::ListOrganizationAdminAccountsRequestPrivate(
    const ListOrganizationAdminAccountsRequestPrivate &other, ListOrganizationAdminAccountsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
