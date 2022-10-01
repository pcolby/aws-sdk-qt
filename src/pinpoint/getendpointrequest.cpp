// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getendpointrequest.h"
#include "getendpointrequest_p.h"
#include "getendpointresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEndpointRequest
 * \brief The GetEndpointRequest class provides an interface for Pinpoint GetEndpoint requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetEndpointRequest::GetEndpointRequest(const GetEndpointRequest &other)
    : PinpointRequest(new GetEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEndpointRequest object.
 */
GetEndpointRequest::GetEndpointRequest()
    : PinpointRequest(new GetEndpointRequestPrivate(PinpointRequest::GetEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetEndpointRequestPrivate
 * \brief The GetEndpointRequestPrivate class provides private implementation for GetEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEndpointRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetEndpointRequestPrivate::GetEndpointRequestPrivate(
    const PinpointRequest::Action action, GetEndpointRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEndpointRequest
 * class' copy constructor.
 */
GetEndpointRequestPrivate::GetEndpointRequestPrivate(
    const GetEndpointRequestPrivate &other, GetEndpointRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
