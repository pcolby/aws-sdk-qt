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

#include "describeuserstackassociationsrequest.h"
#include "describeuserstackassociationsrequest_p.h"
#include "describeuserstackassociationsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeUserStackAssociationsRequest
 * \brief The DescribeUserStackAssociationsRequest class provides an interface for AppStream DescribeUserStackAssociations requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeUserStackAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserStackAssociationsRequest::DescribeUserStackAssociationsRequest(const DescribeUserStackAssociationsRequest &other)
    : AppStreamRequest(new DescribeUserStackAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserStackAssociationsRequest object.
 */
DescribeUserStackAssociationsRequest::DescribeUserStackAssociationsRequest()
    : AppStreamRequest(new DescribeUserStackAssociationsRequestPrivate(AppStreamRequest::DescribeUserStackAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserStackAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserStackAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserStackAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserStackAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DescribeUserStackAssociationsRequestPrivate
 * \brief The DescribeUserStackAssociationsRequestPrivate class provides private implementation for DescribeUserStackAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeUserStackAssociationsRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DescribeUserStackAssociationsRequestPrivate::DescribeUserStackAssociationsRequestPrivate(
    const AppStreamRequest::Action action, DescribeUserStackAssociationsRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserStackAssociationsRequest
 * class' copy constructor.
 */
DescribeUserStackAssociationsRequestPrivate::DescribeUserStackAssociationsRequestPrivate(
    const DescribeUserStackAssociationsRequestPrivate &other, DescribeUserStackAssociationsRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
