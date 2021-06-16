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

#include "describemultiplexprogramrequest.h"
#include "describemultiplexprogramrequest_p.h"
#include "describemultiplexprogramresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeMultiplexProgramRequest
 * \brief The DescribeMultiplexProgramRequest class provides an interface for MediaLive DescribeMultiplexProgram requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeMultiplexProgram
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMultiplexProgramRequest::DescribeMultiplexProgramRequest(const DescribeMultiplexProgramRequest &other)
    : MediaLiveRequest(new DescribeMultiplexProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMultiplexProgramRequest object.
 */
DescribeMultiplexProgramRequest::DescribeMultiplexProgramRequest()
    : MediaLiveRequest(new DescribeMultiplexProgramRequestPrivate(MediaLiveRequest::DescribeMultiplexProgramAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMultiplexProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMultiplexProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMultiplexProgramRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMultiplexProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeMultiplexProgramRequestPrivate
 * \brief The DescribeMultiplexProgramRequestPrivate class provides private implementation for DescribeMultiplexProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeMultiplexProgramRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeMultiplexProgramRequestPrivate::DescribeMultiplexProgramRequestPrivate(
    const MediaLiveRequest::Action action, DescribeMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMultiplexProgramRequest
 * class' copy constructor.
 */
DescribeMultiplexProgramRequestPrivate::DescribeMultiplexProgramRequestPrivate(
    const DescribeMultiplexProgramRequestPrivate &other, DescribeMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
