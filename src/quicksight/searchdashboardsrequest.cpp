// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
