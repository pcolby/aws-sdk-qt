// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserendpointsrequest.h"
#include "deleteuserendpointsrequest_p.h"
#include "deleteuserendpointsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsRequest
 * \brief The DeleteUserEndpointsRequest class provides an interface for Pinpoint DeleteUserEndpoints requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteUserEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserEndpointsRequest::DeleteUserEndpointsRequest(const DeleteUserEndpointsRequest &other)
    : PinpointRequest(new DeleteUserEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserEndpointsRequest object.
 */
DeleteUserEndpointsRequest::DeleteUserEndpointsRequest()
    : PinpointRequest(new DeleteUserEndpointsRequestPrivate(PinpointRequest::DeleteUserEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsRequestPrivate
 * \brief The DeleteUserEndpointsRequestPrivate class provides private implementation for DeleteUserEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteUserEndpointsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteUserEndpointsRequestPrivate::DeleteUserEndpointsRequestPrivate(
    const PinpointRequest::Action action, DeleteUserEndpointsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserEndpointsRequest
 * class' copy constructor.
 */
DeleteUserEndpointsRequestPrivate::DeleteUserEndpointsRequestPrivate(
    const DeleteUserEndpointsRequestPrivate &other, DeleteUserEndpointsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
