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

#include "listdashboardversionsrequest.h"
#include "listdashboardversionsrequest_p.h"
#include "listdashboardversionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDashboardVersionsRequest
 * \brief The ListDashboardVersionsRequest class provides an interface for QuickSight ListDashboardVersions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDashboardVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDashboardVersionsRequest::ListDashboardVersionsRequest(const ListDashboardVersionsRequest &other)
    : QuickSightRequest(new ListDashboardVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDashboardVersionsRequest object.
 */
ListDashboardVersionsRequest::ListDashboardVersionsRequest()
    : QuickSightRequest(new ListDashboardVersionsRequestPrivate(QuickSightRequest::ListDashboardVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDashboardVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDashboardVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDashboardVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDashboardVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListDashboardVersionsRequestPrivate
 * \brief The ListDashboardVersionsRequestPrivate class provides private implementation for ListDashboardVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDashboardVersionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListDashboardVersionsRequestPrivate::ListDashboardVersionsRequestPrivate(
    const QuickSightRequest::Action action, ListDashboardVersionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDashboardVersionsRequest
 * class' copy constructor.
 */
ListDashboardVersionsRequestPrivate::ListDashboardVersionsRequestPrivate(
    const ListDashboardVersionsRequestPrivate &other, ListDashboardVersionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
