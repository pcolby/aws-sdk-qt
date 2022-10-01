// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
