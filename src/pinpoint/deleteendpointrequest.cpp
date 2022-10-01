// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointrequest.h"
#include "deleteendpointrequest_p.h"
#include "deleteendpointresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEndpointRequest
 * \brief The DeleteEndpointRequest class provides an interface for Pinpoint DeleteEndpoint requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEndpointRequest::DeleteEndpointRequest(const DeleteEndpointRequest &other)
    : PinpointRequest(new DeleteEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEndpointRequest object.
 */
DeleteEndpointRequest::DeleteEndpointRequest()
    : PinpointRequest(new DeleteEndpointRequestPrivate(PinpointRequest::DeleteEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteEndpointRequestPrivate
 * \brief The DeleteEndpointRequestPrivate class provides private implementation for DeleteEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEndpointRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const PinpointRequest::Action action, DeleteEndpointRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointRequest
 * class' copy constructor.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const DeleteEndpointRequestPrivate &other, DeleteEndpointRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
