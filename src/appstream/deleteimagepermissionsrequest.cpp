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

#include "deleteimagepermissionsrequest.h"
#include "deleteimagepermissionsrequest_p.h"
#include "deleteimagepermissionsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteImagePermissionsRequest
 * \brief The DeleteImagePermissionsRequest class provides an interface for AppStream DeleteImagePermissions requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteImagePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImagePermissionsRequest::DeleteImagePermissionsRequest(const DeleteImagePermissionsRequest &other)
    : AppStreamRequest(new DeleteImagePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImagePermissionsRequest object.
 */
DeleteImagePermissionsRequest::DeleteImagePermissionsRequest()
    : AppStreamRequest(new DeleteImagePermissionsRequestPrivate(AppStreamRequest::DeleteImagePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImagePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImagePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImagePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImagePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DeleteImagePermissionsRequestPrivate
 * \brief The DeleteImagePermissionsRequestPrivate class provides private implementation for DeleteImagePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteImagePermissionsRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DeleteImagePermissionsRequestPrivate::DeleteImagePermissionsRequestPrivate(
    const AppStreamRequest::Action action, DeleteImagePermissionsRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImagePermissionsRequest
 * class' copy constructor.
 */
DeleteImagePermissionsRequestPrivate::DeleteImagePermissionsRequestPrivate(
    const DeleteImagePermissionsRequestPrivate &other, DeleteImagePermissionsRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
