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

#include "deleteimagerequest.h"
#include "deleteimagerequest_p.h"
#include "deleteimageresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteImageRequest
 * \brief The DeleteImageRequest class provides an interface for AppStream DeleteImage requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageRequest::DeleteImageRequest(const DeleteImageRequest &other)
    : AppStreamRequest(new DeleteImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageRequest object.
 */
DeleteImageRequest::DeleteImageRequest()
    : AppStreamRequest(new DeleteImageRequestPrivate(AppStreamRequest::DeleteImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DeleteImageRequestPrivate
 * \brief The DeleteImageRequestPrivate class provides private implementation for DeleteImageRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteImageRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const AppStreamRequest::Action action, DeleteImageRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageRequest
 * class' copy constructor.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const DeleteImageRequestPrivate &other, DeleteImageRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
