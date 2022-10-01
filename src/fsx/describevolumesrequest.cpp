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

#include "describevolumesrequest.h"
#include "describevolumesrequest_p.h"
#include "describevolumesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeVolumesRequest
 * \brief The DescribeVolumesRequest class provides an interface for FSx DescribeVolumes requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeVolumes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVolumesRequest::DescribeVolumesRequest(const DescribeVolumesRequest &other)
    : FSxRequest(new DescribeVolumesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVolumesRequest object.
 */
DescribeVolumesRequest::DescribeVolumesRequest()
    : FSxRequest(new DescribeVolumesRequestPrivate(FSxRequest::DescribeVolumesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVolumesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVolumesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVolumesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVolumesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeVolumesRequestPrivate
 * \brief The DescribeVolumesRequestPrivate class provides private implementation for DescribeVolumesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeVolumesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeVolumesRequestPrivate::DescribeVolumesRequestPrivate(
    const FSxRequest::Action action, DescribeVolumesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVolumesRequest
 * class' copy constructor.
 */
DescribeVolumesRequestPrivate::DescribeVolumesRequestPrivate(
    const DescribeVolumesRequestPrivate &other, DescribeVolumesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
