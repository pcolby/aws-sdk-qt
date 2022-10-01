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

#include "updatedashboardrequest.h"
#include "updatedashboardrequest_p.h"
#include "updatedashboardresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDashboardRequest
 * \brief The UpdateDashboardRequest class provides an interface for QuickSight UpdateDashboard requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDashboardRequest::UpdateDashboardRequest(const UpdateDashboardRequest &other)
    : QuickSightRequest(new UpdateDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDashboardRequest object.
 */
UpdateDashboardRequest::UpdateDashboardRequest()
    : QuickSightRequest(new UpdateDashboardRequestPrivate(QuickSightRequest::UpdateDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDashboardRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateDashboardRequestPrivate
 * \brief The UpdateDashboardRequestPrivate class provides private implementation for UpdateDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDashboardRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateDashboardRequestPrivate::UpdateDashboardRequestPrivate(
    const QuickSightRequest::Action action, UpdateDashboardRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDashboardRequest
 * class' copy constructor.
 */
UpdateDashboardRequestPrivate::UpdateDashboardRequestPrivate(
    const UpdateDashboardRequestPrivate &other, UpdateDashboardRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
