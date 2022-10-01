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
