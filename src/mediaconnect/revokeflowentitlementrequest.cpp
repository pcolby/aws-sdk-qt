// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
