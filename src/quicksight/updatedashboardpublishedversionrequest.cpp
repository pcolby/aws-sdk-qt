// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
