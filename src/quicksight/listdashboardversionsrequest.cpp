// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
