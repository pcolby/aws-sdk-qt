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

#include "startfleetrequest.h"
#include "startfleetrequest_p.h"
#include "startfleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StartFleetRequest
 * \brief The StartFleetRequest class provides an interface for AppStream StartFleet requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::startFleet
 */

/*!
 * Constructs a copy of \a other.
 */
StartFleetRequest::StartFleetRequest(const StartFleetRequest &other)
    : AppStreamRequest(new StartFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFleetRequest object.
 */
StartFleetRequest::StartFleetRequest()
    : AppStreamRequest(new StartFleetRequestPrivate(AppStreamRequest::StartFleetAction, this))
{

}

/*!
 * \reimp
 */
bool StartFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFleetRequest::response(QNetworkReply * const reply) const
{
    return new StartFleetResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::StartFleetRequestPrivate
 * \brief The StartFleetRequestPrivate class provides private implementation for StartFleetRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 *
 * Constructs a StartFleetRequestPrivate object for AppStream \a action with,
 * public implementation \a q.
 */
StartFleetRequestPrivate::StartFleetRequestPrivate(
    const AppStreamRequest::Action action, StartFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFleetRequest
 * class' copy constructor.
 */
StartFleetRequestPrivate::StartFleetRequestPrivate(
    const StartFleetRequestPrivate &other, StartFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
