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

#include "listinstancesrequest.h"
#include "listinstancesrequest_p.h"
#include "listinstancesresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListInstancesRequest
 * \brief The ListInstancesRequest class provides an interface for SSOAdmin ListInstances requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstancesRequest::ListInstancesRequest(const ListInstancesRequest &other)
    : SSOAdminRequest(new ListInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstancesRequest object.
 */
ListInstancesRequest::ListInstancesRequest()
    : SSOAdminRequest(new ListInstancesRequestPrivate(SSOAdminRequest::ListInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListInstancesRequestPrivate
 * \brief The ListInstancesRequestPrivate class provides private implementation for ListInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListInstancesRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const SSOAdminRequest::Action action, ListInstancesRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstancesRequest
 * class' copy constructor.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const ListInstancesRequestPrivate &other, ListInstancesRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
