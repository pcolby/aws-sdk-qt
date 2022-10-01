// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "claimdevicerequest.h"
#include "claimdevicerequest_p.h"
#include "claimdeviceresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ClaimDeviceRequest
 * \brief The ClaimDeviceRequest class provides an interface for MediaLive ClaimDevice requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::claimDevice
 */

/*!
 * Constructs a copy of \a other.
 */
ClaimDeviceRequest::ClaimDeviceRequest(const ClaimDeviceRequest &other)
    : MediaLiveRequest(new ClaimDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ClaimDeviceRequest object.
 */
ClaimDeviceRequest::ClaimDeviceRequest()
    : MediaLiveRequest(new ClaimDeviceRequestPrivate(MediaLiveRequest::ClaimDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool ClaimDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ClaimDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ClaimDeviceRequest::response(QNetworkReply * const reply) const
{
    return new ClaimDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ClaimDeviceRequestPrivate
 * \brief The ClaimDeviceRequestPrivate class provides private implementation for ClaimDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ClaimDeviceRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ClaimDeviceRequestPrivate::ClaimDeviceRequestPrivate(
    const MediaLiveRequest::Action action, ClaimDeviceRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ClaimDeviceRequest
 * class' copy constructor.
 */
ClaimDeviceRequestPrivate::ClaimDeviceRequestPrivate(
    const ClaimDeviceRequestPrivate &other, ClaimDeviceRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
