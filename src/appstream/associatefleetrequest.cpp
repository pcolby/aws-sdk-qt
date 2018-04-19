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

#include "associatefleetrequest.h"
#include "associatefleetrequest_p.h"
#include "associatefleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AssociateFleetRequest
 * \brief The AssociateFleetRequest class provides an interface for AppStream AssociateFleet requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::associateFleet
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateFleetRequest::AssociateFleetRequest(const AssociateFleetRequest &other)
    : AppStreamRequest(new AssociateFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateFleetRequest object.
 */
AssociateFleetRequest::AssociateFleetRequest()
    : AppStreamRequest(new AssociateFleetRequestPrivate(AppStreamRequest::AssociateFleetAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateFleetRequest::response(QNetworkReply * const reply) const
{
    return new AssociateFleetResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::AssociateFleetRequestPrivate
 * \brief The AssociateFleetRequestPrivate class provides private implementation for AssociateFleetRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 *
 * Constructs a AssociateFleetRequestPrivate object for AppStream \a action with,
 * public implementation \a q.
 */
AssociateFleetRequestPrivate::AssociateFleetRequestPrivate(
    const AppStreamRequest::Action action, AssociateFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateFleetRequest
 * class' copy constructor.
 */
AssociateFleetRequestPrivate::AssociateFleetRequestPrivate(
    const AssociateFleetRequestPrivate &other, AssociateFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
