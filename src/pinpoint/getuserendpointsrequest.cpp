// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserendpointsrequest.h"
#include "getuserendpointsrequest_p.h"
#include "getuserendpointsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsRequest
 * \brief The GetUserEndpointsRequest class provides an interface for Pinpoint GetUserEndpoints requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getUserEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserEndpointsRequest::GetUserEndpointsRequest(const GetUserEndpointsRequest &other)
    : PinpointRequest(new GetUserEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserEndpointsRequest object.
 */
GetUserEndpointsRequest::GetUserEndpointsRequest()
    : PinpointRequest(new GetUserEndpointsRequestPrivate(PinpointRequest::GetUserEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new GetUserEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsRequestPrivate
 * \brief The GetUserEndpointsRequestPrivate class provides private implementation for GetUserEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetUserEndpointsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetUserEndpointsRequestPrivate::GetUserEndpointsRequestPrivate(
    const PinpointRequest::Action action, GetUserEndpointsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserEndpointsRequest
 * class' copy constructor.
 */
GetUserEndpointsRequestPrivate::GetUserEndpointsRequestPrivate(
    const GetUserEndpointsRequestPrivate &other, GetUserEndpointsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
