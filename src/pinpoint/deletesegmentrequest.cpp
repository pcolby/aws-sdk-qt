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

#include "deletesegmentrequest.h"
#include "deletesegmentrequest_p.h"
#include "deletesegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSegmentRequest
 * \brief The DeleteSegmentRequest class provides an interface for Pinpoint DeleteSegment requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteSegment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSegmentRequest::DeleteSegmentRequest(const DeleteSegmentRequest &other)
    : PinpointRequest(new DeleteSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSegmentRequest object.
 */
DeleteSegmentRequest::DeleteSegmentRequest()
    : PinpointRequest(new DeleteSegmentRequestPrivate(PinpointRequest::DeleteSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSegmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteSegmentRequestPrivate
 * \brief The DeleteSegmentRequestPrivate class provides private implementation for DeleteSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSegmentRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const PinpointRequest::Action action, DeleteSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSegmentRequest
 * class' copy constructor.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const DeleteSegmentRequestPrivate &other, DeleteSegmentRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
