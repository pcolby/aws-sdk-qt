// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccountsettingsrequest.h"
#include "updateaccountsettingsrequest_p.h"
#include "updateaccountsettingsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAccountSettingsRequest
 * \brief The UpdateAccountSettingsRequest class provides an interface for QuickSight UpdateAccountSettings requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAccountSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccountSettingsRequest::UpdateAccountSettingsRequest(const UpdateAccountSettingsRequest &other)
    : QuickSightRequest(new UpdateAccountSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccountSettingsRequest object.
 */
UpdateAccountSettingsRequest::UpdateAccountSettingsRequest()
    : QuickSightRequest(new UpdateAccountSettingsRequestPrivate(QuickSightRequest::UpdateAccountSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccountSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccountSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccountSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateAccountSettingsRequestPrivate
 * \brief The UpdateAccountSettingsRequestPrivate class provides private implementation for UpdateAccountSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAccountSettingsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateAccountSettingsRequestPrivate::UpdateAccountSettingsRequestPrivate(
    const QuickSightRequest::Action action, UpdateAccountSettingsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountSettingsRequest
 * class' copy constructor.
 */
UpdateAccountSettingsRequestPrivate::UpdateAccountSettingsRequestPrivate(
    const UpdateAccountSettingsRequestPrivate &other, UpdateAccountSettingsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
