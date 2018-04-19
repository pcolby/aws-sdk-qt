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

#include "stopfleetrequest.h"
#include "stopfleetrequest_p.h"
#include "stopfleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StopFleetRequest
 * \brief The StopFleetRequest class provides an interface for AppStream StopFleet requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::stopFleet
 */

/*!
 * Constructs a copy of \a other.
 */
StopFleetRequest::StopFleetRequest(const StopFleetRequest &other)
    : AppStreamRequest(new StopFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopFleetRequest object.
 */
StopFleetRequest::StopFleetRequest()
    : AppStreamRequest(new StopFleetRequestPrivate(AppStreamRequest::StopFleetAction, this))
{

}

/*!
 * \reimp
 */
bool StopFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopFleetRequest::response(QNetworkReply * const reply) const
{
    return new StopFleetResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::StopFleetRequestPrivate
 * \brief The StopFleetRequestPrivate class provides private implementation for StopFleetRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 *
 * Constructs a StopFleetRequestPrivate object for AppStream \a action with,
 * public implementation \a q.
 */
StopFleetRequestPrivate::StopFleetRequestPrivate(
    const AppStreamRequest::Action action, StopFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopFleetRequest
 * class' copy constructor.
 */
StopFleetRequestPrivate::StopFleetRequestPrivate(
    const StopFleetRequestPrivate &other, StopFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
