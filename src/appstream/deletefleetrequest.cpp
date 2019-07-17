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

#include "deletefleetrequest.h"
#include "deletefleetrequest_p.h"
#include "deletefleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteFleetRequest
 * \brief The DeleteFleetRequest class provides an interface for AppStream DeleteFleet requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFleetRequest::DeleteFleetRequest(const DeleteFleetRequest &other)
    : AppStreamRequest(new DeleteFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFleetRequest object.
 */
DeleteFleetRequest::DeleteFleetRequest()
    : AppStreamRequest(new DeleteFleetRequestPrivate(AppStreamRequest::DeleteFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFleetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFleetResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DeleteFleetRequestPrivate
 * \brief The DeleteFleetRequestPrivate class provides private implementation for DeleteFleetRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteFleetRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const AppStreamRequest::Action action, DeleteFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFleetRequest
 * class' copy constructor.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const DeleteFleetRequestPrivate &other, DeleteFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
