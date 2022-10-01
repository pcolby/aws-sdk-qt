// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedashboardrequest.h"
#include "deletedashboardrequest_p.h"
#include "deletedashboardresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteDashboardRequest
 * \brief The DeleteDashboardRequest class provides an interface for QuickSight DeleteDashboard requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDashboardRequest::DeleteDashboardRequest(const DeleteDashboardRequest &other)
    : QuickSightRequest(new DeleteDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDashboardRequest object.
 */
DeleteDashboardRequest::DeleteDashboardRequest()
    : QuickSightRequest(new DeleteDashboardRequestPrivate(QuickSightRequest::DeleteDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDashboardRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteDashboardRequestPrivate
 * \brief The DeleteDashboardRequestPrivate class provides private implementation for DeleteDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteDashboardRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteDashboardRequestPrivate::DeleteDashboardRequestPrivate(
    const QuickSightRequest::Action action, DeleteDashboardRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDashboardRequest
 * class' copy constructor.
 */
DeleteDashboardRequestPrivate::DeleteDashboardRequestPrivate(
    const DeleteDashboardRequestPrivate &other, DeleteDashboardRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
