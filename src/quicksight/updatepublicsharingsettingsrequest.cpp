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
