/*
    Copyright 2013-2020 Paul Colby

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

#include "revokeflowentitlementrequest.h"
#include "revokeflowentitlementrequest_p.h"
#include "revokeflowentitlementresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RevokeFlowEntitlementRequest
 * \brief The RevokeFlowEntitlementRequest class provides an interface for MediaConnect RevokeFlowEntitlement requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::revokeFlowEntitlement
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeFlowEntitlementRequest::RevokeFlowEntitlementRequest(const RevokeFlowEntitlementRequest &other)
    : MediaConnectRequest(new RevokeFlowEntitlementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeFlowEntitlementRequest object.
 */
RevokeFlowEntitlementRequest::RevokeFlowEntitlementRequest()
    : MediaConnectRequest(new RevokeFlowEntitlementRequestPrivate(MediaConnectRequest::RevokeFlowEntitlementAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeFlowEntitlementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeFlowEntitlementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeFlowEntitlementRequest::response(QNetworkReply * const reply) const
{
    return new RevokeFlowEntitlementResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::RevokeFlowEntitlementRequestPrivate
 * \brief The RevokeFlowEntitlementRequestPrivate class provides private implementation for RevokeFlowEntitlementRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RevokeFlowEntitlementRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
RevokeFlowEntitlementRequestPrivate::RevokeFlowEntitlementRequestPrivate(
    const MediaConnectRequest::Action action, RevokeFlowEntitlementRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeFlowEntitlementRequest
 * class' copy constructor.
 */
RevokeFlowEntitlementRequestPrivate::RevokeFlowEntitlementRequestPrivate(
    const RevokeFlowEntitlementRequestPrivate &other, RevokeFlowEntitlementRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
