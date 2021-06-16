/*
    Copyright 2013-2021 Paul Colby

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

#include "updateflowrequest.h"
#include "updateflowrequest_p.h"
#include "updateflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowRequest
 * \brief The UpdateFlowRequest class provides an interface for MediaConnect UpdateFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlow
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowRequest::UpdateFlowRequest(const UpdateFlowRequest &other)
    : MediaConnectRequest(new UpdateFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowRequest object.
 */
UpdateFlowRequest::UpdateFlowRequest()
    : MediaConnectRequest(new UpdateFlowRequestPrivate(MediaConnectRequest::UpdateFlowAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowRequestPrivate
 * \brief The UpdateFlowRequestPrivate class provides private implementation for UpdateFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowRequestPrivate::UpdateFlowRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowRequest
 * class' copy constructor.
 */
UpdateFlowRequestPrivate::UpdateFlowRequestPrivate(
    const UpdateFlowRequestPrivate &other, UpdateFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
