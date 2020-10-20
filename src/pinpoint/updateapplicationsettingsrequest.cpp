/*
    Copyright 2013-2020 Paul Colby

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

#include "updateapplicationsettingsrequest.h"
#include "updateapplicationsettingsrequest_p.h"
#include "updateapplicationsettingsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApplicationSettingsRequest
 * \brief The UpdateApplicationSettingsRequest class provides an interface for Pinpoint UpdateApplicationSettings requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApplicationSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationSettingsRequest::UpdateApplicationSettingsRequest(const UpdateApplicationSettingsRequest &other)
    : PinpointRequest(new UpdateApplicationSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationSettingsRequest object.
 */
UpdateApplicationSettingsRequest::UpdateApplicationSettingsRequest()
    : PinpointRequest(new UpdateApplicationSettingsRequestPrivate(PinpointRequest::UpdateApplicationSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApplicationSettingsRequestPrivate
 * \brief The UpdateApplicationSettingsRequestPrivate class provides private implementation for UpdateApplicationSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApplicationSettingsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApplicationSettingsRequestPrivate::UpdateApplicationSettingsRequestPrivate(
    const PinpointRequest::Action action, UpdateApplicationSettingsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationSettingsRequest
 * class' copy constructor.
 */
UpdateApplicationSettingsRequestPrivate::UpdateApplicationSettingsRequestPrivate(
    const UpdateApplicationSettingsRequestPrivate &other, UpdateApplicationSettingsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
