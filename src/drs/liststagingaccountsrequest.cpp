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

#include "liststagingaccountsrequest.h"
#include "liststagingaccountsrequest_p.h"
#include "liststagingaccountsresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::ListStagingAccountsRequest
 * \brief The ListStagingAccountsRequest class provides an interface for Drs ListStagingAccounts requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::listStagingAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListStagingAccountsRequest::ListStagingAccountsRequest(const ListStagingAccountsRequest &other)
    : DrsRequest(new ListStagingAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStagingAccountsRequest object.
 */
ListStagingAccountsRequest::ListStagingAccountsRequest()
    : DrsRequest(new ListStagingAccountsRequestPrivate(DrsRequest::ListStagingAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStagingAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStagingAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStagingAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListStagingAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::ListStagingAccountsRequestPrivate
 * \brief The ListStagingAccountsRequestPrivate class provides private implementation for ListStagingAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a ListStagingAccountsRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
ListStagingAccountsRequestPrivate::ListStagingAccountsRequestPrivate(
    const DrsRequest::Action action, ListStagingAccountsRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStagingAccountsRequest
 * class' copy constructor.
 */
ListStagingAccountsRequestPrivate::ListStagingAccountsRequestPrivate(
    const ListStagingAccountsRequestPrivate &other, ListStagingAccountsRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
