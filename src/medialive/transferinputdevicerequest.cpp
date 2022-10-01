// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "transferinputdevicerequest.h"
#include "transferinputdevicerequest_p.h"
#include "transferinputdeviceresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::TransferInputDeviceRequest
 * \brief The TransferInputDeviceRequest class provides an interface for MediaLive TransferInputDevice requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::transferInputDevice
 */

/*!
 * Constructs a copy of \a other.
 */
TransferInputDeviceRequest::TransferInputDeviceRequest(const TransferInputDeviceRequest &other)
    : MediaLiveRequest(new TransferInputDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TransferInputDeviceRequest object.
 */
TransferInputDeviceRequest::TransferInputDeviceRequest()
    : MediaLiveRequest(new TransferInputDeviceRequestPrivate(MediaLiveRequest::TransferInputDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool TransferInputDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TransferInputDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TransferInputDeviceRequest::response(QNetworkReply * const reply) const
{
    return new TransferInputDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::TransferInputDeviceRequestPrivate
 * \brief The TransferInputDeviceRequestPrivate class provides private implementation for TransferInputDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a TransferInputDeviceRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
TransferInputDeviceRequestPrivate::TransferInputDeviceRequestPrivate(
    const MediaLiveRequest::Action action, TransferInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TransferInputDeviceRequest
 * class' copy constructor.
 */
TransferInputDeviceRequestPrivate::TransferInputDeviceRequestPrivate(
    const TransferInputDeviceRequestPrivate &other, TransferInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
