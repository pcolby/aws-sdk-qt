// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinputdevicerequest.h"
#include "describeinputdevicerequest_p.h"
#include "describeinputdeviceresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceRequest
 * \brief The DescribeInputDeviceRequest class provides an interface for MediaLive DescribeInputDevice requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInputDevice
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInputDeviceRequest::DescribeInputDeviceRequest(const DescribeInputDeviceRequest &other)
    : MediaLiveRequest(new DescribeInputDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInputDeviceRequest object.
 */
DescribeInputDeviceRequest::DescribeInputDeviceRequest()
    : MediaLiveRequest(new DescribeInputDeviceRequestPrivate(MediaLiveRequest::DescribeInputDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInputDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInputDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInputDeviceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceRequestPrivate
 * \brief The DescribeInputDeviceRequestPrivate class provides private implementation for DescribeInputDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputDeviceRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeInputDeviceRequestPrivate::DescribeInputDeviceRequestPrivate(
    const MediaLiveRequest::Action action, DescribeInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputDeviceRequest
 * class' copy constructor.
 */
DescribeInputDeviceRequestPrivate::DescribeInputDeviceRequestPrivate(
    const DescribeInputDeviceRequestPrivate &other, DescribeInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
