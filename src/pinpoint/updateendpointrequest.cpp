// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateendpointrequest.h"
#include "updateendpointrequest_p.h"
#include "updateendpointresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEndpointRequest
 * \brief The UpdateEndpointRequest class provides an interface for Pinpoint UpdateEndpoint requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointRequest::UpdateEndpointRequest(const UpdateEndpointRequest &other)
    : PinpointRequest(new UpdateEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointRequest object.
 */
UpdateEndpointRequest::UpdateEndpointRequest()
    : PinpointRequest(new UpdateEndpointRequestPrivate(PinpointRequest::UpdateEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEndpointRequestPrivate
 * \brief The UpdateEndpointRequestPrivate class provides private implementation for UpdateEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEndpointRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const PinpointRequest::Action action, UpdateEndpointRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointRequest
 * class' copy constructor.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const UpdateEndpointRequestPrivate &other, UpdateEndpointRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
