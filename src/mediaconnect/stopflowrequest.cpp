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

#include "stopflowrequest.h"
#include "stopflowrequest_p.h"
#include "stopflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::StopFlowRequest
 * \brief The StopFlowRequest class provides an interface for MediaConnect StopFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::stopFlow
 */

/*!
 * Constructs a copy of \a other.
 */
StopFlowRequest::StopFlowRequest(const StopFlowRequest &other)
    : MediaConnectRequest(new StopFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopFlowRequest object.
 */
StopFlowRequest::StopFlowRequest()
    : MediaConnectRequest(new StopFlowRequestPrivate(MediaConnectRequest::StopFlowAction, this))
{

}

/*!
 * \reimp
 */
bool StopFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopFlowRequest::response(QNetworkReply * const reply) const
{
    return new StopFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::StopFlowRequestPrivate
 * \brief The StopFlowRequestPrivate class provides private implementation for StopFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a StopFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
StopFlowRequestPrivate::StopFlowRequestPrivate(
    const MediaConnectRequest::Action action, StopFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopFlowRequest
 * class' copy constructor.
 */
StopFlowRequestPrivate::StopFlowRequestPrivate(
    const StopFlowRequestPrivate &other, StopFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
