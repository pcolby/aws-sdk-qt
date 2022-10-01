// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
