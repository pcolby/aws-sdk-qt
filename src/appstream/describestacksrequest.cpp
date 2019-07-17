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

#include "describestacksrequest.h"
#include "describestacksrequest_p.h"
#include "describestacksresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeStacksRequest
 * \brief The DescribeStacksRequest class provides an interface for AppStream DescribeStacks requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeStacks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStacksRequest::DescribeStacksRequest(const DescribeStacksRequest &other)
    : AppStreamRequest(new DescribeStacksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStacksRequest object.
 */
DescribeStacksRequest::DescribeStacksRequest()
    : AppStreamRequest(new DescribeStacksRequestPrivate(AppStreamRequest::DescribeStacksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStacksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStacksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStacksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStacksResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DescribeStacksRequestPrivate
 * \brief The DescribeStacksRequestPrivate class provides private implementation for DescribeStacksRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeStacksRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DescribeStacksRequestPrivate::DescribeStacksRequestPrivate(
    const AppStreamRequest::Action action, DescribeStacksRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStacksRequest
 * class' copy constructor.
 */
DescribeStacksRequestPrivate::DescribeStacksRequestPrivate(
    const DescribeStacksRequestPrivate &other, DescribeStacksRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
