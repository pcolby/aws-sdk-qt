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

#include "updatedashboardpublishedversionrequest.h"
#include "updatedashboardpublishedversionrequest_p.h"
#include "updatedashboardpublishedversionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDashboardPublishedVersionRequest
 * \brief The UpdateDashboardPublishedVersionRequest class provides an interface for QuickSight UpdateDashboardPublishedVersion requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDashboardPublishedVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDashboardPublishedVersionRequest::UpdateDashboardPublishedVersionRequest(const UpdateDashboardPublishedVersionRequest &other)
    : QuickSightRequest(new UpdateDashboardPublishedVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDashboardPublishedVersionRequest object.
 */
UpdateDashboardPublishedVersionRequest::UpdateDashboardPublishedVersionRequest()
    : QuickSightRequest(new UpdateDashboardPublishedVersionRequestPrivate(QuickSightRequest::UpdateDashboardPublishedVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDashboardPublishedVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDashboardPublishedVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDashboardPublishedVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDashboardPublishedVersionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateDashboardPublishedVersionRequestPrivate
 * \brief The UpdateDashboardPublishedVersionRequestPrivate class provides private implementation for UpdateDashboardPublishedVersionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDashboardPublishedVersionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateDashboardPublishedVersionRequestPrivate::UpdateDashboardPublishedVersionRequestPrivate(
    const QuickSightRequest::Action action, UpdateDashboardPublishedVersionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDashboardPublishedVersionRequest
 * class' copy constructor.
 */
UpdateDashboardPublishedVersionRequestPrivate::UpdateDashboardPublishedVersionRequestPrivate(
    const UpdateDashboardPublishedVersionRequestPrivate &other, UpdateDashboardPublishedVersionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
