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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
