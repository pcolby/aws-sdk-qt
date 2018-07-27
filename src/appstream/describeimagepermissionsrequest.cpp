/*
    Copyright 2013-2018 Paul Colby

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

#include "describeimagepermissionsrequest.h"
#include "describeimagepermissionsrequest_p.h"
#include "describeimagepermissionsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeImagePermissionsRequest
 * \brief The DescribeImagePermissionsRequest class provides an interface for AppStream DescribeImagePermissions requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeImagePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImagePermissionsRequest::DescribeImagePermissionsRequest(const DescribeImagePermissionsRequest &other)
    : AppStreamRequest(new DescribeImagePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImagePermissionsRequest object.
 */
DescribeImagePermissionsRequest::DescribeImagePermissionsRequest()
    : AppStreamRequest(new DescribeImagePermissionsRequestPrivate(AppStreamRequest::DescribeImagePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImagePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImagePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImagePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImagePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DescribeImagePermissionsRequestPrivate
 * \brief The DescribeImagePermissionsRequestPrivate class provides private implementation for DescribeImagePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeImagePermissionsRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DescribeImagePermissionsRequestPrivate::DescribeImagePermissionsRequestPrivate(
    const AppStreamRequest::Action action, DescribeImagePermissionsRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImagePermissionsRequest
 * class' copy constructor.
 */
DescribeImagePermissionsRequestPrivate::DescribeImagePermissionsRequestPrivate(
    const DescribeImagePermissionsRequestPrivate &other, DescribeImagePermissionsRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
