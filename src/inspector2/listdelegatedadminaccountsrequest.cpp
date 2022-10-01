// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdelegatedadminaccountsrequest.h"
#include "listdelegatedadminaccountsrequest_p.h"
#include "listdelegatedadminaccountsresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListDelegatedAdminAccountsRequest
 * \brief The ListDelegatedAdminAccountsRequest class provides an interface for Inspector2 ListDelegatedAdminAccounts requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listDelegatedAdminAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListDelegatedAdminAccountsRequest::ListDelegatedAdminAccountsRequest(const ListDelegatedAdminAccountsRequest &other)
    : Inspector2Request(new ListDelegatedAdminAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDelegatedAdminAccountsRequest object.
 */
ListDelegatedAdminAccountsRequest::ListDelegatedAdminAccountsRequest()
    : Inspector2Request(new ListDelegatedAdminAccountsRequestPrivate(Inspector2Request::ListDelegatedAdminAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDelegatedAdminAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDelegatedAdminAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDelegatedAdminAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListDelegatedAdminAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListDelegatedAdminAccountsRequestPrivate
 * \brief The ListDelegatedAdminAccountsRequestPrivate class provides private implementation for ListDelegatedAdminAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListDelegatedAdminAccountsRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListDelegatedAdminAccountsRequestPrivate::ListDelegatedAdminAccountsRequestPrivate(
    const Inspector2Request::Action action, ListDelegatedAdminAccountsRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDelegatedAdminAccountsRequest
 * class' copy constructor.
 */
ListDelegatedAdminAccountsRequestPrivate::ListDelegatedAdminAccountsRequestPrivate(
    const ListDelegatedAdminAccountsRequestPrivate &other, ListDelegatedAdminAccountsRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
