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

#include "createsegmentrequest.h"
#include "createsegmentrequest_p.h"
#include "createsegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSegmentRequest
 * \brief The CreateSegmentRequest class provides an interface for Pinpoint CreateSegment requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::createSegment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSegmentRequest::CreateSegmentRequest(const CreateSegmentRequest &other)
    : PinpointRequest(new CreateSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSegmentRequest object.
 */
CreateSegmentRequest::CreateSegmentRequest()
    : PinpointRequest(new CreateSegmentRequestPrivate(PinpointRequest::CreateSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSegmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateSegmentRequestPrivate
 * \brief The CreateSegmentRequestPrivate class provides private implementation for CreateSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateSegmentRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const PinpointRequest::Action action, CreateSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSegmentRequest
 * class' copy constructor.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const CreateSegmentRequestPrivate &other, CreateSegmentRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
