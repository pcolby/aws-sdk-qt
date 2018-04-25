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

#include "updatefleetrequest.h"
#include "updatefleetrequest_p.h"
#include "updatefleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::UpdateFleetRequest
 * \brief The UpdateFleetRequest class provides an interface for AppStream UpdateFleet requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::updateFleet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFleetRequest::UpdateFleetRequest(const UpdateFleetRequest &other)
    : AppStreamRequest(new UpdateFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFleetRequest object.
 */
UpdateFleetRequest::UpdateFleetRequest()
    : AppStreamRequest(new UpdateFleetRequestPrivate(AppStreamRequest::UpdateFleetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFleetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFleetResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::UpdateFleetRequestPrivate
 * \brief The UpdateFleetRequestPrivate class provides private implementation for UpdateFleetRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a UpdateFleetRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
UpdateFleetRequestPrivate::UpdateFleetRequestPrivate(
    const AppStreamRequest::Action action, UpdateFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFleetRequest
 * class' copy constructor.
 */
UpdateFleetRequestPrivate::UpdateFleetRequestPrivate(
    const UpdateFleetRequestPrivate &other, UpdateFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
