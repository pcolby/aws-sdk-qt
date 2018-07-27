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

#include "updateimagepermissionsrequest.h"
#include "updateimagepermissionsrequest_p.h"
#include "updateimagepermissionsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::UpdateImagePermissionsRequest
 * \brief The UpdateImagePermissionsRequest class provides an interface for AppStream UpdateImagePermissions requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::updateImagePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateImagePermissionsRequest::UpdateImagePermissionsRequest(const UpdateImagePermissionsRequest &other)
    : AppStreamRequest(new UpdateImagePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateImagePermissionsRequest object.
 */
UpdateImagePermissionsRequest::UpdateImagePermissionsRequest()
    : AppStreamRequest(new UpdateImagePermissionsRequestPrivate(AppStreamRequest::UpdateImagePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateImagePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateImagePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateImagePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateImagePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::UpdateImagePermissionsRequestPrivate
 * \brief The UpdateImagePermissionsRequestPrivate class provides private implementation for UpdateImagePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a UpdateImagePermissionsRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
UpdateImagePermissionsRequestPrivate::UpdateImagePermissionsRequestPrivate(
    const AppStreamRequest::Action action, UpdateImagePermissionsRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateImagePermissionsRequest
 * class' copy constructor.
 */
UpdateImagePermissionsRequestPrivate::UpdateImagePermissionsRequestPrivate(
    const UpdateImagePermissionsRequestPrivate &other, UpdateImagePermissionsRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
