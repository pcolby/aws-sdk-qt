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

#include "updateflowentitlementrequest.h"
#include "updateflowentitlementrequest_p.h"
#include "updateflowentitlementresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowEntitlementRequest
 * \brief The UpdateFlowEntitlementRequest class provides an interface for MediaConnect UpdateFlowEntitlement requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowEntitlement
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowEntitlementRequest::UpdateFlowEntitlementRequest(const UpdateFlowEntitlementRequest &other)
    : MediaConnectRequest(new UpdateFlowEntitlementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowEntitlementRequest object.
 */
UpdateFlowEntitlementRequest::UpdateFlowEntitlementRequest()
    : MediaConnectRequest(new UpdateFlowEntitlementRequestPrivate(MediaConnectRequest::UpdateFlowEntitlementAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowEntitlementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowEntitlementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowEntitlementRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowEntitlementResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowEntitlementRequestPrivate
 * \brief The UpdateFlowEntitlementRequestPrivate class provides private implementation for UpdateFlowEntitlementRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowEntitlementRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowEntitlementRequestPrivate::UpdateFlowEntitlementRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowEntitlementRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowEntitlementRequest
 * class' copy constructor.
 */
UpdateFlowEntitlementRequestPrivate::UpdateFlowEntitlementRequestPrivate(
    const UpdateFlowEntitlementRequestPrivate &other, UpdateFlowEntitlementRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
