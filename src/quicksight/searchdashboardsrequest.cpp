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

#include "searchdashboardsrequest.h"
#include "searchdashboardsrequest_p.h"
#include "searchdashboardsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchDashboardsRequest
 * \brief The SearchDashboardsRequest class provides an interface for QuickSight SearchDashboards requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchDashboards
 */

/*!
 * Constructs a copy of \a other.
 */
SearchDashboardsRequest::SearchDashboardsRequest(const SearchDashboardsRequest &other)
    : QuickSightRequest(new SearchDashboardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchDashboardsRequest object.
 */
SearchDashboardsRequest::SearchDashboardsRequest()
    : QuickSightRequest(new SearchDashboardsRequestPrivate(QuickSightRequest::SearchDashboardsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchDashboardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchDashboardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new SearchDashboardsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::SearchDashboardsRequestPrivate
 * \brief The SearchDashboardsRequestPrivate class provides private implementation for SearchDashboardsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchDashboardsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
SearchDashboardsRequestPrivate::SearchDashboardsRequestPrivate(
    const QuickSightRequest::Action action, SearchDashboardsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchDashboardsRequest
 * class' copy constructor.
 */
SearchDashboardsRequestPrivate::SearchDashboardsRequestPrivate(
    const SearchDashboardsRequestPrivate &other, SearchDashboardsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
