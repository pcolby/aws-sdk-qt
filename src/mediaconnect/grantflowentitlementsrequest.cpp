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

#include "grantflowentitlementsrequest.h"
#include "grantflowentitlementsrequest_p.h"
#include "grantflowentitlementsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::GrantFlowEntitlementsRequest
 * \brief The GrantFlowEntitlementsRequest class provides an interface for MediaConnect GrantFlowEntitlements requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::grantFlowEntitlements
 */

/*!
 * Constructs a copy of \a other.
 */
GrantFlowEntitlementsRequest::GrantFlowEntitlementsRequest(const GrantFlowEntitlementsRequest &other)
    : MediaConnectRequest(new GrantFlowEntitlementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GrantFlowEntitlementsRequest object.
 */
GrantFlowEntitlementsRequest::GrantFlowEntitlementsRequest()
    : MediaConnectRequest(new GrantFlowEntitlementsRequestPrivate(MediaConnectRequest::GrantFlowEntitlementsAction, this))
{

}

/*!
 * \reimp
 */
bool GrantFlowEntitlementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GrantFlowEntitlementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GrantFlowEntitlementsRequest::response(QNetworkReply * const reply) const
{
    return new GrantFlowEntitlementsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::GrantFlowEntitlementsRequestPrivate
 * \brief The GrantFlowEntitlementsRequestPrivate class provides private implementation for GrantFlowEntitlementsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a GrantFlowEntitlementsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
GrantFlowEntitlementsRequestPrivate::GrantFlowEntitlementsRequestPrivate(
    const MediaConnectRequest::Action action, GrantFlowEntitlementsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GrantFlowEntitlementsRequest
 * class' copy constructor.
 */
GrantFlowEntitlementsRequestPrivate::GrantFlowEntitlementsRequestPrivate(
    const GrantFlowEntitlementsRequestPrivate &other, GrantFlowEntitlementsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
