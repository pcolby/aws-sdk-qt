// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
