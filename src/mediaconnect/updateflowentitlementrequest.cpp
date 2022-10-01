// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
