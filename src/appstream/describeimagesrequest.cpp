/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeimagesrequest.h"
#include "describeimagesrequest_p.h"
#include "describeimagesresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeImagesRequest
 * \brief The DescribeImagesRequest class provides an interface for AppStream DescribeImages requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeImages
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImagesRequest::DescribeImagesRequest(const DescribeImagesRequest &other)
    : AppStreamRequest(new DescribeImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImagesRequest object.
 */
DescribeImagesRequest::DescribeImagesRequest()
    : AppStreamRequest(new DescribeImagesRequestPrivate(AppStreamRequest::DescribeImagesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImagesResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DescribeImagesRequestPrivate
 * \brief The DescribeImagesRequestPrivate class provides private implementation for DescribeImagesRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 *
 * Constructs a DescribeImagesRequestPrivate object for AppStream \a action with,
 * public implementation \a q.
 */
DescribeImagesRequestPrivate::DescribeImagesRequestPrivate(
    const AppStreamRequest::Action action, DescribeImagesRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImagesRequest
 * class' copy constructor.
 */
DescribeImagesRequestPrivate::DescribeImagesRequestPrivate(
    const DescribeImagesRequestPrivate &other, DescribeImagesRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
