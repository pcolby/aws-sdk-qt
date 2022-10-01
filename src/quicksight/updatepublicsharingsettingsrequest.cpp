// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepublicsharingsettingsrequest.h"
#include "updatepublicsharingsettingsrequest_p.h"
#include "updatepublicsharingsettingsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdatePublicSharingSettingsRequest
 * \brief The UpdatePublicSharingSettingsRequest class provides an interface for QuickSight UpdatePublicSharingSettings requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updatePublicSharingSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePublicSharingSettingsRequest::UpdatePublicSharingSettingsRequest(const UpdatePublicSharingSettingsRequest &other)
    : QuickSightRequest(new UpdatePublicSharingSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePublicSharingSettingsRequest object.
 */
UpdatePublicSharingSettingsRequest::UpdatePublicSharingSettingsRequest()
    : QuickSightRequest(new UpdatePublicSharingSettingsRequestPrivate(QuickSightRequest::UpdatePublicSharingSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePublicSharingSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePublicSharingSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePublicSharingSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePublicSharingSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdatePublicSharingSettingsRequestPrivate
 * \brief The UpdatePublicSharingSettingsRequestPrivate class provides private implementation for UpdatePublicSharingSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdatePublicSharingSettingsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdatePublicSharingSettingsRequestPrivate::UpdatePublicSharingSettingsRequestPrivate(
    const QuickSightRequest::Action action, UpdatePublicSharingSettingsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePublicSharingSettingsRequest
 * class' copy constructor.
 */
UpdatePublicSharingSettingsRequestPrivate::UpdatePublicSharingSettingsRequestPrivate(
    const UpdatePublicSharingSettingsRequestPrivate &other, UpdatePublicSharingSettingsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
