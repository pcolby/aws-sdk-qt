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

#include "describemultiplexrequest.h"
#include "describemultiplexrequest_p.h"
#include "describemultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeMultiplexRequest
 * \brief The DescribeMultiplexRequest class provides an interface for MediaLive DescribeMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMultiplexRequest::DescribeMultiplexRequest(const DescribeMultiplexRequest &other)
    : MediaLiveRequest(new DescribeMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMultiplexRequest object.
 */
DescribeMultiplexRequest::DescribeMultiplexRequest()
    : MediaLiveRequest(new DescribeMultiplexRequestPrivate(MediaLiveRequest::DescribeMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeMultiplexRequestPrivate
 * \brief The DescribeMultiplexRequestPrivate class provides private implementation for DescribeMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeMultiplexRequestPrivate::DescribeMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, DescribeMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMultiplexRequest
 * class' copy constructor.
 */
DescribeMultiplexRequestPrivate::DescribeMultiplexRequestPrivate(
    const DescribeMultiplexRequestPrivate &other, DescribeMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
