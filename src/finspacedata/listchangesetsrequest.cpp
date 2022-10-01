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

#include "listchangesetsrequest.h"
#include "listchangesetsrequest_p.h"
#include "listchangesetsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListChangesetsRequest
 * \brief The ListChangesetsRequest class provides an interface for FinspaceData ListChangesets requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listChangesets
 */

/*!
 * Constructs a copy of \a other.
 */
ListChangesetsRequest::ListChangesetsRequest(const ListChangesetsRequest &other)
    : FinspaceDataRequest(new ListChangesetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChangesetsRequest object.
 */
ListChangesetsRequest::ListChangesetsRequest()
    : FinspaceDataRequest(new ListChangesetsRequestPrivate(FinspaceDataRequest::ListChangesetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChangesetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChangesetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChangesetsRequest::response(QNetworkReply * const reply) const
{
    return new ListChangesetsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListChangesetsRequestPrivate
 * \brief The ListChangesetsRequestPrivate class provides private implementation for ListChangesetsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListChangesetsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListChangesetsRequestPrivate::ListChangesetsRequestPrivate(
    const FinspaceDataRequest::Action action, ListChangesetsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChangesetsRequest
 * class' copy constructor.
 */
ListChangesetsRequestPrivate::ListChangesetsRequestPrivate(
    const ListChangesetsRequestPrivate &other, ListChangesetsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
