// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinputdevicethumbnailrequest.h"
#include "describeinputdevicethumbnailrequest_p.h"
#include "describeinputdevicethumbnailresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceThumbnailRequest
 * \brief The DescribeInputDeviceThumbnailRequest class provides an interface for MediaLive DescribeInputDeviceThumbnail requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInputDeviceThumbnail
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInputDeviceThumbnailRequest::DescribeInputDeviceThumbnailRequest(const DescribeInputDeviceThumbnailRequest &other)
    : MediaLiveRequest(new DescribeInputDeviceThumbnailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInputDeviceThumbnailRequest object.
 */
DescribeInputDeviceThumbnailRequest::DescribeInputDeviceThumbnailRequest()
    : MediaLiveRequest(new DescribeInputDeviceThumbnailRequestPrivate(MediaLiveRequest::DescribeInputDeviceThumbnailAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInputDeviceThumbnailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInputDeviceThumbnailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInputDeviceThumbnailRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputDeviceThumbnailResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceThumbnailRequestPrivate
 * \brief The DescribeInputDeviceThumbnailRequestPrivate class provides private implementation for DescribeInputDeviceThumbnailRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputDeviceThumbnailRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeInputDeviceThumbnailRequestPrivate::DescribeInputDeviceThumbnailRequestPrivate(
    const MediaLiveRequest::Action action, DescribeInputDeviceThumbnailRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputDeviceThumbnailRequest
 * class' copy constructor.
 */
DescribeInputDeviceThumbnailRequestPrivate::DescribeInputDeviceThumbnailRequestPrivate(
    const DescribeInputDeviceThumbnailRequestPrivate &other, DescribeInputDeviceThumbnailRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
