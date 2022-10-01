// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinputdevicerequest.h"
#include "updateinputdevicerequest_p.h"
#include "updateinputdeviceresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputDeviceRequest
 * \brief The UpdateInputDeviceRequest class provides an interface for MediaLive UpdateInputDevice requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInputDevice
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInputDeviceRequest::UpdateInputDeviceRequest(const UpdateInputDeviceRequest &other)
    : MediaLiveRequest(new UpdateInputDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInputDeviceRequest object.
 */
UpdateInputDeviceRequest::UpdateInputDeviceRequest()
    : MediaLiveRequest(new UpdateInputDeviceRequestPrivate(MediaLiveRequest::UpdateInputDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInputDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInputDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInputDeviceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInputDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateInputDeviceRequestPrivate
 * \brief The UpdateInputDeviceRequestPrivate class provides private implementation for UpdateInputDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputDeviceRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateInputDeviceRequestPrivate::UpdateInputDeviceRequestPrivate(
    const MediaLiveRequest::Action action, UpdateInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInputDeviceRequest
 * class' copy constructor.
 */
UpdateInputDeviceRequestPrivate::UpdateInputDeviceRequestPrivate(
    const UpdateInputDeviceRequestPrivate &other, UpdateInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
