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

#include "listdashboardsrequest.h"
#include "listdashboardsrequest_p.h"
#include "listdashboardsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDashboardsRequest
 * \brief The ListDashboardsRequest class provides an interface for QuickSight ListDashboards requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDashboards
 */

/*!
 * Constructs a copy of \a other.
 */
ListDashboardsRequest::ListDashboardsRequest(const ListDashboardsRequest &other)
    : QuickSightRequest(new ListDashboardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDashboardsRequest object.
 */
ListDashboardsRequest::ListDashboardsRequest()
    : QuickSightRequest(new ListDashboardsRequestPrivate(QuickSightRequest::ListDashboardsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDashboardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDashboardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new ListDashboardsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListDashboardsRequestPrivate
 * \brief The ListDashboardsRequestPrivate class provides private implementation for ListDashboardsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDashboardsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const QuickSightRequest::Action action, ListDashboardsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDashboardsRequest
 * class' copy constructor.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const ListDashboardsRequestPrivate &other, ListDashboardsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
