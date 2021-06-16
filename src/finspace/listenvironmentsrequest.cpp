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

#include "listenvironmentsrequest.h"
#include "listenvironmentsrequest_p.h"
#include "listenvironmentsresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::ListEnvironmentsRequest
 * \brief The ListEnvironmentsRequest class provides an interface for finspace ListEnvironments requests.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::listEnvironments
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest(const ListEnvironmentsRequest &other)
    : finspaceRequest(new ListEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnvironmentsRequest object.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest()
    : finspaceRequest(new ListEnvironmentsRequestPrivate(finspaceRequest::ListEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnvironmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentsResponse(*this, reply);
}

/*!
 * \class QtAws::finspace::ListEnvironmentsRequestPrivate
 * \brief The ListEnvironmentsRequestPrivate class provides private implementation for ListEnvironmentsRequest.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a ListEnvironmentsRequestPrivate object for finspace \a action,
 * with public implementation \a q.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const finspaceRequest::Action action, ListEnvironmentsRequest * const q)
    : finspaceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentsRequest
 * class' copy constructor.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const ListEnvironmentsRequestPrivate &other, ListEnvironmentsRequest * const q)
    : finspaceRequestPrivate(other, q)
{

}

} // namespace finspace
} // namespace QtAws
