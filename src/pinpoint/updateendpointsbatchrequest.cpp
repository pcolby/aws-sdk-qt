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

#include "updateendpointsbatchrequest.h"
#include "updateendpointsbatchrequest_p.h"
#include "updateendpointsbatchresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEndpointsBatchRequest
 * \brief The UpdateEndpointsBatchRequest class provides an interface for Pinpoint UpdateEndpointsBatch requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateEndpointsBatch
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointsBatchRequest::UpdateEndpointsBatchRequest(const UpdateEndpointsBatchRequest &other)
    : PinpointRequest(new UpdateEndpointsBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointsBatchRequest object.
 */
UpdateEndpointsBatchRequest::UpdateEndpointsBatchRequest()
    : PinpointRequest(new UpdateEndpointsBatchRequestPrivate(PinpointRequest::UpdateEndpointsBatchAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointsBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointsBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointsBatchRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointsBatchResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEndpointsBatchRequestPrivate
 * \brief The UpdateEndpointsBatchRequestPrivate class provides private implementation for UpdateEndpointsBatchRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEndpointsBatchRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEndpointsBatchRequestPrivate::UpdateEndpointsBatchRequestPrivate(
    const PinpointRequest::Action action, UpdateEndpointsBatchRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointsBatchRequest
 * class' copy constructor.
 */
UpdateEndpointsBatchRequestPrivate::UpdateEndpointsBatchRequestPrivate(
    const UpdateEndpointsBatchRequestPrivate &other, UpdateEndpointsBatchRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
