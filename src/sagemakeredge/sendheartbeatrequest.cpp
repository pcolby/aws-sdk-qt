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

#include "sendheartbeatrequest.h"
#include "sendheartbeatrequest_p.h"
#include "sendheartbeatresponse.h"
#include "sagemakeredgerequest_p.h"

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::SendHeartbeatRequest
 * \brief The SendHeartbeatRequest class provides an interface for SagemakerEdge SendHeartbeat requests.
 *
 * \inmodule QtAwsSagemakerEdge
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeClient::sendHeartbeat
 */

/*!
 * Constructs a copy of \a other.
 */
SendHeartbeatRequest::SendHeartbeatRequest(const SendHeartbeatRequest &other)
    : SagemakerEdgeRequest(new SendHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendHeartbeatRequest object.
 */
SendHeartbeatRequest::SendHeartbeatRequest()
    : SagemakerEdgeRequest(new SendHeartbeatRequestPrivate(SagemakerEdgeRequest::SendHeartbeatAction, this))
{

}

/*!
 * \reimp
 */
bool SendHeartbeatRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendHeartbeatResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new SendHeartbeatResponse(*this, reply);
}

/*!
 * \class QtAws::SagemakerEdge::SendHeartbeatRequestPrivate
 * \brief The SendHeartbeatRequestPrivate class provides private implementation for SendHeartbeatRequest.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a SendHeartbeatRequestPrivate object for SagemakerEdge \a action,
 * with public implementation \a q.
 */
SendHeartbeatRequestPrivate::SendHeartbeatRequestPrivate(
    const SagemakerEdgeRequest::Action action, SendHeartbeatRequest * const q)
    : SagemakerEdgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendHeartbeatRequest
 * class' copy constructor.
 */
SendHeartbeatRequestPrivate::SendHeartbeatRequestPrivate(
    const SendHeartbeatRequestPrivate &other, SendHeartbeatRequest * const q)
    : SagemakerEdgeRequestPrivate(other, q)
{

}

} // namespace SagemakerEdge
} // namespace QtAws
