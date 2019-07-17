/*
    Copyright 2013-2019 Paul Colby

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

#include "describeinputrequest.h"
#include "describeinputrequest_p.h"
#include "describeinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputRequest
 * \brief The DescribeInputRequest class provides an interface for MediaLive DescribeInput requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInput
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInputRequest::DescribeInputRequest(const DescribeInputRequest &other)
    : MediaLiveRequest(new DescribeInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInputRequest object.
 */
DescribeInputRequest::DescribeInputRequest()
    : MediaLiveRequest(new DescribeInputRequestPrivate(MediaLiveRequest::DescribeInputAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInputRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeInputRequestPrivate
 * \brief The DescribeInputRequestPrivate class provides private implementation for DescribeInputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const MediaLiveRequest::Action action, DescribeInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputRequest
 * class' copy constructor.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const DescribeInputRequestPrivate &other, DescribeInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
