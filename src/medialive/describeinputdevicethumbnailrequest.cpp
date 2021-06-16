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
