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

#include "listdataviewsrequest.h"
#include "listdataviewsrequest_p.h"
#include "listdataviewsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListDataViewsRequest
 * \brief The ListDataViewsRequest class provides an interface for FinspaceData ListDataViews requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listDataViews
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataViewsRequest::ListDataViewsRequest(const ListDataViewsRequest &other)
    : FinspaceDataRequest(new ListDataViewsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataViewsRequest object.
 */
ListDataViewsRequest::ListDataViewsRequest()
    : FinspaceDataRequest(new ListDataViewsRequestPrivate(FinspaceDataRequest::ListDataViewsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataViewsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataViewsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataViewsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataViewsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListDataViewsRequestPrivate
 * \brief The ListDataViewsRequestPrivate class provides private implementation for ListDataViewsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListDataViewsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListDataViewsRequestPrivate::ListDataViewsRequestPrivate(
    const FinspaceDataRequest::Action action, ListDataViewsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataViewsRequest
 * class' copy constructor.
 */
ListDataViewsRequestPrivate::ListDataViewsRequestPrivate(
    const ListDataViewsRequestPrivate &other, ListDataViewsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
